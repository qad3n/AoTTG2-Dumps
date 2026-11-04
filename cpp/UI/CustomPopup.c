// Type: UI.CustomPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CustomPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CustomPopup.cs
// --------------------------------

// UI.CustomPopup.<>c__DisplayClass11_0$$.ctor
// il2cpp: void UI_CustomPopup___c__DisplayClass11_0___ctor (UI_CustomPopup___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CustomPopup___c__DisplayClass11_0___ctor(UI_CustomPopup___c__DisplayClass11_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup.<>c__DisplayClass11_0$$<AddBottomButton>b__0
// il2cpp: void UI_CustomPopup___c__DisplayClass11_0___AddBottomButton_b__0 (UI_CustomPopup___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x182254670

void
UI_CustomPopup___c__DisplayClass11_0___AddBottomButton_b__0(UI_CustomPopup___c__DisplayClass11_0_o* __this, MethodInfo* method)

{
  UI_CustomPopup_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CustomPopup_o *)0x0) {
    UI_CustomPopup__OnButtonClick(__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CustomPopup.<>c__DisplayClass16_0$$.ctor
// il2cpp: void UI_CustomPopup___c__DisplayClass16_0___ctor (UI_CustomPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CustomPopup___c__DisplayClass16_0___ctor(UI_CustomPopup___c__DisplayClass16_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup.<>c__DisplayClass16_0$$<AddButton>b__0
// il2cpp: void UI_CustomPopup___c__DisplayClass16_0___AddButton_b__0 (UI_CustomPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x182254670

void UI_CustomPopup___c__DisplayClass16_0___AddButton_b__0
               (UI_CustomPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  UI_CustomPopup_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CustomPopup_o *)0x0) {
    UI_CustomPopup__OnButtonClick(__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CustomPopup$$get_Title
// il2cpp: System_String_o* UI_CustomPopup__get_Title (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_CustomPopup__get_Title(UI_CustomPopup_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.CustomPopup$$get_VerticalSpacing
// il2cpp: float UI_CustomPopup__get_VerticalSpacing (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_CustomPopup__get_VerticalSpacing(UI_CustomPopup_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.CustomPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CustomPopup__get_VerticalPadding (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_CustomPopup__get_VerticalPadding(UI_CustomPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.CustomPopup$$Setup
// il2cpp: void UI_CustomPopup__Setup (UI_CustomPopup_o* __this, UI_BasePanel_o* parent, System_String_o* title, float width, float height, const MethodInfo* method);
// 0x182240f50

void UI_CustomPopup__Setup
               (UI_CustomPopup_o *__this,UI_BasePanel_o *parent,System_String_o *title,float width,
               float height,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *pUVar2;
  UnityEngine_Events_UnityAction_o *__this_00;
  
  if (Il2CppMethodInitialized_184347238 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CustomPopup_Setup_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184347238 = '\x01';
  }
  (__this->fields)._height = height;
  (__this->fields)._width = width;
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar2,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  (__this->fields)._style = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._style,pUVar2);
  parent_00 = (__this->fields).BottomBar;
  pUVar2 = (__this->fields)._style;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CustomPopup_Setup_b__10_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(parent_00,pUVar2,pSVar1,0.0,__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup$$AddBottomButton
// il2cpp: void UI_CustomPopup__AddBottomButton (UI_CustomPopup_o* __this, System_String_o* name, System_String_o* title, const MethodInfo* method);
// 0x1822406f0

void UI_CustomPopup__AddBottomButton
               (UI_CustomPopup_o *__this,System_String_o *name,System_String_o *title,MethodInfo *method)

{
  UI_ElementStyle_o *style;
  UI_CustomPopup___c__DisplayClass11_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_184347239 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CustomPopup_c__DisplayClass11_0_AddBottomButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CustomPopup_c__DisplayClass11_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_184347239 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CustomPopup_c__DisplayClass11_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_CustomPopup___c__DisplayClass11_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(object->fields).name,name);
    pUVar1 = (__this->fields).BottomBar;
    style = (__this->fields)._style;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_CustomPopup_c__DisplayClass11_0_AddBottomButton_b__0,(MethodInfo *)0x0)
    ;
    __this_01 = UI_ElementFactory__CreateTextButton(pUVar1,style,title,0.0,__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar1 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
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
// 0x181d981f0

float
UI_CustomPopup__GetHeight(UI_CustomPopup_o* __this, MethodInfo* method)

{
  return (__this->fields)._height;
}


// UI.CustomPopup$$GetWidth
// il2cpp: float UI_CustomPopup__GetWidth (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x181d98200

float
UI_CustomPopup__GetWidth(UI_CustomPopup_o* __this, MethodInfo* method)

{
  return (__this->fields)._width;
}


// UI.CustomPopup$$Clear
// il2cpp: void UI_CustomPopup__Clear (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x182240d10
// eh: try 0x182240de0..0x182240e1b -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182240e2c: mov rdx, qword ptr [rip + 0x1e3f6b5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x182240e33: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182240e38: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182240e3d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182240e42: test rcx, rcx
// asm:   0x182240e45: jne 0x182240e92
// asm:   0x182240e47: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x182240e92: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_CustomPopup__Clear(UI_CustomPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  UnityEngine_Object_o *obj;
  bool bVar3;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  UnityEngine_Object_o *local_18;
  
  if (Il2CppMethodInitialized_18434723a == '\0') {
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
    Il2CppMethodInitialized_18434723a = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._items;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)pSVar2,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      obj = local_18;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
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
// 0x182240c30

void UI_CustomPopup__AddLabel(UI_CustomPopup_o *__this,System_String_o *label,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  UnityEngine_GameObject_o *item;
  
  if (Il2CppMethodInitialized_18434723b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    Il2CppMethodInitialized_18434723b = '\x01';
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
      if ((uint)pUVar3->max_length <= uVar2) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        return;
      }
      (__this_00->fields)._size = uVar2 + 1;
      if (uVar2 < (uint)pUVar3->max_length) {
        pUVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
        return;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// UI.CustomPopup$$AddButton
// il2cpp: void UI_CustomPopup__AddButton (UI_CustomPopup_o* __this, System_String_o* name, System_String_o* title, const MethodInfo* method);
// 0x182240800

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
  UI_CustomPopup___c__DisplayClass16_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_GameObject_o *item;
  
  if (Il2CppMethodInitialized_18434723c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CustomPopup_c__DisplayClass16_0_AddButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CustomPopup_c__DisplayClass16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_18434723c = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CustomPopup_c__DisplayClass16_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_CustomPopup___c__DisplayClass16_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(object->fields).name,name);
    parent = (__this->fields).SinglePanel;
    style = (__this->fields)._style;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_CustomPopup_c__DisplayClass16_0_AddButton_b__0,(MethodInfo *)0x0);
    item = UI_ElementFactory__CreateDefaultButton(parent,style,title,0.0,0.0,__this_01,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
    __this_00 = (__this->fields)._items;
    if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_00->fields)._items;
      if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if ((uint)pUVar3->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
          return;
        }
        (__this_00->fields)._size = uVar2 + 1;
        if (uVar2 < (uint)pUVar3->max_length) {
          pUVar3->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
          return;
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CustomPopup$$AddButtons
// il2cpp: void UI_CustomPopup__AddButtons (UI_CustomPopup_o* __this, System_Collections_Generic_List_object__o* names, System_Collections_Generic_List_object__o* titles, const MethodInfo* method);
// 0x182240990
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182240a01: xorps xmm6, xmm6

void UI_CustomPopup__AddButtons
               (UI_CustomPopup_o *__this,System_Collections_Generic_List_object__o *names,
               System_Collections_Generic_List_object__o *titles,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Transform_o *parent;
  UI_ElementStyle_o *style;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  UI_CustomPopup___c__DisplayClass16_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_GameObject_o *item;
  System_String_o *title;
  int index;
  
  if (Il2CppMethodInitialized_18434723d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    Il2CppMethodInitialized_18434723d = '\x01';
  }
  index = 0;
  if (names != (System_Collections_Generic_List_object__o *)0x0) {
    while( true ) {
      if ((names->fields)._size <= index) {
        return;
      }
      pSVar5 = (System_String_o *)
               System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         (names,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
      if (titles == (System_Collections_Generic_List_object__o *)0x0) break;
      pSVar6 = (System_String_o *)
               System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         (titles,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
      title = (System_String_o *)0x0;
      if (pSVar6 != (System_String_o *)0x0) {
        if ((Il2CppClass *)pSVar6->klass == g_data_184354e50) {
          title = pSVar6;
        }
        if (title == (System_String_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
        }
      }
      pSVar6 = (System_String_o *)0x0;
      if (pSVar5 != (System_String_o *)0x0) {
        if ((Il2CppClass *)pSVar5->klass == g_data_184354e50) {
          pSVar6 = pSVar5;
        }
        if (pSVar6 == (System_String_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar5);
        }
      }
      if (Il2CppMethodInitialized_18434723c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add)
        ;
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UI_CustomPopup_c__DisplayClass16_0_AddButton_b__0);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CustomPopup_c__DisplayClass16_0);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
        Il2CppMethodInitialized_18434723c = '\x01';
      }
      object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CustomPopup_c__DisplayClass16_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object == (UI_CustomPopup___c__DisplayClass16_0_o *)0x0) break;
      (object->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
      (object->fields).name = pSVar6;
      Il2CppCodeGenWriteBarrier(&(object->fields).name,pSVar6);
      parent = (__this->fields).SinglePanel;
      style = (__this->fields)._style;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_CustomPopup_c__DisplayClass16_0_AddButton_b__0,(MethodInfo *)0x0);
      item = UI_ElementFactory__CreateDefaultButton(parent,style,title,0.0,0.0,__this_01,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
      __this_00 = (__this->fields)._items;
      if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_00->fields)._items;
      if (pUVar3 == (UnityEngine_GameObject_array *)0x0) break;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pUVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pUVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
        index = index + 1;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        index = index + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CustomPopup$$OnButtonClick
// il2cpp: void UI_CustomPopup__OnButtonClick (UI_CustomPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182240ea0

void UI_CustomPopup__OnButtonClick(UI_CustomPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434723e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_18434723e = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (bVar1) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__OnButtonClick(__this_00,name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CustomPopup$$.ctor
// il2cpp: void UI_CustomPopup___ctor (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x182241140

void UI_CustomPopup___ctor(UI_CustomPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_18434723f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_18434723f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._items = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items,__this_00);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomPopup$$<Setup>b__10_0
// il2cpp: void UI_CustomPopup___Setup_b__10_0 (UI_CustomPopup_o* __this, const MethodInfo* method);
// 0x182241100

void UI_CustomPopup___Setup_b__10_0(UI_CustomPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347240 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184347240 = '\x01';
  }
  UI_CustomPopup__OnButtonClick(__this,"Back",(MethodInfo *)0x0);
  return;
}


