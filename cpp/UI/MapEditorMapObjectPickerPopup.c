// Type: UI.MapEditorMapObjectPickerPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorMapObjectPickerPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.MapEditorMapObjectPickerPopup.<>c$$.cctor
// il2cpp: void UI_MapEditorMapObjectPickerPopup___c___cctor (const MethodInfo* method);
// 0x5d956d0

void UI_MapEditorMapObjectPickerPopup___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07548059 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMapObjectPickerPopup_c);
    Il2CppMethodInitialized_07548059 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorMapObjectPickerPopup_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_MapEditorMapObjectPickerPopup_c->static_fields->__9 =
       (UI_MapEditorMapObjectPickerPopup___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorMapObjectPickerPopup_c->static_fields->__9);
  return;
}


// UI.MapEditorMapObjectPickerPopup.<>c$$.ctor
// il2cpp: void UI_MapEditorMapObjectPickerPopup___c___ctor (UI_MapEditorMapObjectPickerPopup___c_o* __this, const MethodInfo* method);
// 0x5d95740

void UI_MapEditorMapObjectPickerPopup___c___ctor
               (UI_MapEditorMapObjectPickerPopup___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorMapObjectPickerPopup.<>c$$<RebuildResults>b__21_0
// il2cpp: int32_t UI_MapEditorMapObjectPickerPopup___c___RebuildResults_b__21_0 (UI_MapEditorMapObjectPickerPopup___c_o* __this, System_Collections_Generic_KeyValuePair_int__MapObject__o entry, const MethodInfo* method);
// 0x5d95750

int32_t UI_MapEditorMapObjectPickerPopup___c___RebuildResults_b__21_0
                  (UI_MapEditorMapObjectPickerPopup___c_o *__this,
                  System_Collections_Generic_KeyValuePair_int__MapObject__o entry,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754805a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_MapObject_get_Key);
    Il2CppMethodInitialized_0754805a = '\x01';
  }
  return entry.fields.key;
}


// UI.MapEditorMapObjectPickerPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0___ctor (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x5d95450

void UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0___ctor
               (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorMapObjectPickerPopup.<>c__DisplayClass21_0$$<RebuildResults>b__1
// il2cpp: bool UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0___RebuildResults_b__1 (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0_o* __this, System_Collections_Generic_KeyValuePair_int__MapObject__o entry, const MethodInfo* method);
// 0x5d95780

bool UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0___RebuildResults_b__1
               (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0_o *__this,
               System_Collections_Generic_KeyValuePair_int__MapObject__o entry,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  System_String_o *__this_00;
  bool bVar2;
  int32_t iVar3;
  undefined8 in_RAX;
  System_String_o *__this_01;
  System_String_o *__this_02;
  bool bVar4;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_0754805b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_MapObject_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_MapObject_get_Value);
    Il2CppMethodInitialized_0754805b = '\x01';
  }
  if ((entry.fields.value != (Map_MapObject_o *)0x0) &&
     (pMVar1 = ((entry.fields.value)->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    __this_00 = (pMVar1->fields).Name;
    if (__this_00 == (System_String_o *)0x0) {
      __this_00 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      __this_02 = (pMVar1->fields).Asset;
    }
    else {
      __this_02 = (pMVar1->fields).Asset;
    }
    if (__this_02 == (System_String_o *)0x0) {
      __this_02 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    uStack_28 = CONCAT44(entry.fields.key,(undefined4)uStack_28);
    __this_01 = System_Int32__ToString((int32_t *)((long)&uStack_28 + 4),(MethodInfo *)0x0);
    if (__this_01 != (System_String_o *)0x0) {
      bVar2 = System_String__Contains(__this_01,(__this->fields).search,(MethodInfo *)0x0);
      bVar4 = true;
      if (!bVar2) {
        if (__this_00 == (System_String_o *)0x0) goto label_05d958a2;
        iVar3 = System_String__IndexOf_53072b0(__this_00,(__this->fields).search,5,(MethodInfo *)0x0);
        if (iVar3 < 0) {
          if (__this_02 == (System_String_o *)0x0) goto label_05d958a2;
          iVar3 = System_String__IndexOf_53072b0(__this_02,(__this->fields).search,5,(MethodInfo *)0x0);
          bVar4 = -1 < iVar3;
        }
      }
      return bVar4;
    }
  }
label_05d958a2:
  ThrowNullReferenceException();
}


// UI.MapEditorMapObjectPickerPopup.<>c__DisplayClass21_1$$.ctor
// il2cpp: void UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1___ctor (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x5d95460

void UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1___ctor
               (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorMapObjectPickerPopup.<>c__DisplayClass21_1$$<RebuildResults>b__2
// il2cpp: void UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1___RebuildResults_b__2 (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x5d958b0

void UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1___RebuildResults_b__2
               (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1_o *__this,MethodInfo *method)

{
  UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0_o *pUVar1;
  UI_MapEditorMapObjectPickerPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 == (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0_o *)0x0) ||
     (__this_00 = (pUVar1->fields).__4__this, __this_00 == (UI_MapEditorMapObjectPickerPopup_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_MapEditorMapObjectPickerPopup__Select(__this_00,(__this->fields).id,in_RDX);
  return;
}


// UI.MapEditorMapObjectPickerPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorMapObjectPickerPopup__get_Title (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x5d940f0

System_String_o *
UI_MapEditorMapObjectPickerPopup__get_Title(UI_MapEditorMapObjectPickerPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07548051 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"ObjectPicker");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548051 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MapEditor","ObjectPicker","Title","",
                      "",in_R9);
  return pSVar1;
}


// UI.MapEditorMapObjectPickerPopup$$get_Width
// il2cpp: float UI_MapEditorMapObjectPickerPopup__get_Width (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x5d94560

float UI_MapEditorMapObjectPickerPopup__get_Width
                (UI_MapEditorMapObjectPickerPopup_o *__this,MethodInfo *method)

{
  return 650.0;
}


// UI.MapEditorMapObjectPickerPopup$$get_Height
// il2cpp: float UI_MapEditorMapObjectPickerPopup__get_Height (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x5d94570

float UI_MapEditorMapObjectPickerPopup__get_Height
                (UI_MapEditorMapObjectPickerPopup_o *__this,MethodInfo *method)

{
  return 700.0;
}


// UI.MapEditorMapObjectPickerPopup$$get_ScrollBar
// il2cpp: bool UI_MapEditorMapObjectPickerPopup__get_ScrollBar (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x5d94580

bool UI_MapEditorMapObjectPickerPopup__get_ScrollBar
               (UI_MapEditorMapObjectPickerPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MapEditorMapObjectPickerPopup$$get_VerticalSpacing
// il2cpp: float UI_MapEditorMapObjectPickerPopup__get_VerticalSpacing (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x5d94590

float UI_MapEditorMapObjectPickerPopup__get_VerticalSpacing
                (UI_MapEditorMapObjectPickerPopup_o *__this,MethodInfo *method)

{
  return 8.0;
}


// UI.MapEditorMapObjectPickerPopup$$Setup
// il2cpp: void UI_MapEditorMapObjectPickerPopup__Setup (UI_MapEditorMapObjectPickerPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d945a0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d946c0: lea rax, [rip + 0x1553479]  ; "Search"
// asm:   0x5d946c7: mov r13, qword ptr [rax]
// asm:   0x5d946ca: cmp byte ptr [rip + 0x17b3a30], 0
// asm:   0x5d946d1: je 0x5d94992

void UI_MapEditorMapObjectPickerPopup__Setup
               (UI_MapEditorMapObjectPickerPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Transform_o *pUVar2;
  Settings_StringSetting_o *setting;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_GameObject_o *pUVar5;
  UI_InputSettingElement_o *pUVar6;
  MethodInfo *in_R9;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548052 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorMapObjectPickerPopup_ApplySelection);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorMapObjectPickerPopup_RebuildResults);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Close");
    il2cpp_codegen_initialize_runtime_metadata(&"Apply");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Search");
    Il2CppMethodInitialized_07548052 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x14,70.0,20.0,pSVar3,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  setting = (__this->fields)._search;
  pSVar3 = "Search";
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pSVar3 = "Search";
  }
  "Search" = pSVar3;
  if (Il2CppMethodInitialized_07548101 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548101 = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("Common",pSVar3,"","",
                      "",in_R9);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar4,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorMapObjectPickerPopup_RebuildResults,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorMapObjectPickerPopup_RebuildResults,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  pUVar5 = UI_ElementFactory__CreateInputSetting
                     (pUVar2,__this_00,(Settings_BaseSetting_o *)setting,pSVar3,"",260.0,
                      40.0,false,pUVar4,__this_01,(System_Func_string__bool__o *)0x0,
                      (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar6 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar5,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
  (__this->fields)._searchInput = pUVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._searchInput);
  pSVar3 = "Apply";
  pUVar2 = (__this->fields).BottomBar;
  if (Il2CppMethodInitialized_07548101 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548101 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("Common",pSVar3,"","",
                      "",method_00);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar4,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorMapObjectPickerPopup_ApplySelection,(MethodInfo *)0x0);
  pUVar5 = UI_ElementFactory__CreateTextButton(pUVar2,__this_00,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  (__this->fields)._applyButton = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._applyButton);
  pSVar3 = "Close";
  pUVar2 = (__this->fields).BottomBar;
  if (Il2CppMethodInitialized_07548101 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548101 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("Common",pSVar3,"","",
                      "",method_00);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar4,(Il2CppObject *)__this,(intptr_t)(__this->klass->vtable)._22_Hide.method,(MethodInfo *)0x0
            );
  UI_ElementFactory__CreateTextButton(pUVar2,__this_00,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorMapObjectPickerPopup$$Show
// il2cpp: void UI_MapEditorMapObjectPickerPopup__Show (UI_MapEditorMapObjectPickerPopup_o* __this, System_Action_int__o* onSelect, const MethodInfo* method);
// 0x5d93760

void UI_MapEditorMapObjectPickerPopup__Show
               (UI_MapEditorMapObjectPickerPopup_o *__this,System_Action_int__o *onSelect,MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields)._multiple = false;
  (__this->fields)._onSelect = onSelect;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelect);
  (__this->fields)._onSelectMultiple = (System_Action_HashSet_int___o *)0x0;
  method_00 = (MethodInfo *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelectMultiple);
  UI_MapEditorMapObjectPickerPopup__PrepareAndShow(__this,method_00);
  return;
}


// UI.MapEditorMapObjectPickerPopup$$Show
// il2cpp: void UI_MapEditorMapObjectPickerPopup__Show (UI_MapEditorMapObjectPickerPopup_o* __this, System_Collections_Generic_HashSet_int__o* selectedIds, System_Action_HashSet_int___o* onSelect, const MethodInfo* method);
// 0x5d93a10

void UI_MapEditorMapObjectPickerPopup__Show_5c93a10
               (UI_MapEditorMapObjectPickerPopup_o *__this,
               System_Collections_Generic_HashSet_int__o *selectedIds,System_Action_HashSet_int___o *onSelect,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *__this_00;
  
  if (Il2CppMethodInitialized_07548053 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    Il2CppMethodInitialized_07548053 = '\x01';
  }
  (__this->fields)._multiple = true;
  if (selectedIds == (System_Collections_Generic_HashSet_int__o *)0x0) {
    selectedIds = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor
              (selectedIds,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor_4fa7660
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)selectedIds,
             (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
  (__this->fields)._selectedIds = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedIds);
  (__this->fields)._onSelect = (System_Action_int__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelect);
  (__this->fields)._onSelectMultiple = onSelect;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelectMultiple);
  UI_MapEditorMapObjectPickerPopup__PrepareAndShow(__this,(MethodInfo *)onSelect);
  return;
}


// UI.MapEditorMapObjectPickerPopup$$PrepareAndShow
// il2cpp: void UI_MapEditorMapObjectPickerPopup__PrepareAndShow (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x5d949f0

void UI_MapEditorMapObjectPickerPopup__PrepareAndShow
               (UI_MapEditorMapObjectPickerPopup_o *__this,MethodInfo *method)

{
  bool value;
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548054 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07548054 = '\x01';
  }
  __this_00 = (__this->fields)._search;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pUVar1 = (__this->fields)._searchInput;
    if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
      __this_01 = (__this->fields)._applyButton;
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        value = (__this->fields)._multiple;
        method_00 = (MethodInfo *)(ulong)value;
        UnityEngine_GameObject__SetActive(__this_01,value,(MethodInfo *)0x0);
        UI_MapEditorMapObjectPickerPopup__RebuildResults(__this,method_00);
        UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorMapObjectPickerPopup$$RebuildResults
// il2cpp: void UI_MapEditorMapObjectPickerPopup__RebuildResults (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x5d94aa0
// eh: try 0x5d94fba..0x5d953b6 -> pad 0x5d953e8 (+29 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d95408..0x5d9540d -> pad 0x5d95432 cleanup
// eh: try 0x5d95435..0x5d9543f -> pad 0x5d95447 catch (...) [compiler noexcept guard]
// asm: 57 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d94cdd: lea r14, [rip + 0x14e670c]  ; TypeInfo_UnityEngine_Object
// asm:   0x5d94ce4: jmp 0x5d94cfe
// asm:   0x5d94dd1: jmp 0x5d94dec
// asm:   0x5d94ed3: mov r13, qword ptr [rsp + 0x10]
// asm:   0x5d950e5: jmp 0x5d95196
// asm:   0x5d953b6: jmp 0x5d953f0
// asm:   0x5d953b8: jmp 0x5d953f0
// asm:   0x5d953ba: jmp 0x5d953f0
// asm:   0x5d953bc: jmp 0x5d953f0
// asm:   0x5d953be: jmp 0x5d953f0
// asm:   0x5d953c0: jmp 0x5d953f0
// asm:   0x5d953c2: jmp 0x5d953f0
// asm:   0x5d953c4: jmp 0x5d953f0
// asm:   0x5d953c6: jmp 0x5d953f0
// asm:   0x5d953c8: jmp 0x5d953f0
// asm:   0x5d953ca: jmp 0x5d953f0
// asm:   0x5d953cc: jmp 0x5d953f0
// asm:   0x5d953ce: jmp 0x5d953f0
// asm:   0x5d953d0: jmp 0x5d953f0
// asm:   0x5d953d2: jmp 0x5d953f0
// asm:   0x5d953d4: jmp 0x5d953f0
// asm:   0x5d953d6: jmp 0x5d953f0
// asm:   0x5d953d8: jmp 0x5d953f0
// asm:   0x5d953da: jmp 0x5d953f0
// asm:   0x5d953dc: jmp 0x5d953f0
// asm:   0x5d953de: jmp 0x5d953f0
// asm:   0x5d953e0: jmp 0x5d953f0
// asm:   0x5d953e2: jmp 0x5d953f0
// asm:   0x5d953e4: jmp 0x5d953f0
// asm:   0x5d953e6: jmp 0x5d953f0
// asm:   0x5d953e8: jmp 0x5d953f0
// asm:   0x5d953ea: jmp 0x5d953f0
// asm:   0x5d953ec: jmp 0x5d953f0
// asm:   0x5d953ee: jmp 0x5d953f0
// asm:   0x5d953f0: mov rbx, rax
// asm:   0x5d953f3: cmp edx, 1
// asm:   0x5d953f6: jne 0x5d95435
// asm:   0x5d953f8: mov rdi, rbx
// asm:   0x5d953fb: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d95400: mov rbx, qword ptr [rax]
// asm:   0x5d95403: mov qword ptr [rsp + 0x48], rbx
// asm:   0x5d95408: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d9540d: lea rax, [rip + 0x14f7f2c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_MapObject_Dispose
// asm:   0x5d95414: mov rsi, qword ptr [rax]
// asm:   0x5d95417: lea rdi, [rsp + 0x20]
// asm:   0x5d9541c: call 0x4d1b920  ; System_Collections_Generic_List_Enumerator_KeyValuePair_int__object____Dispose()
// asm:   0x5d95421: test rbx, rbx
// asm:   0x5d95424: je 0x5d952ec
// asm:   0x5d9542a: mov rdi, rbx
// asm:   0x5d9542d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d95432: mov rbx, rax
// asm:   0x5d95435: lea rdi, [rsp + 0x48]
// asm:   0x5d9543a: call 0x2fdd8e0  ; il2cpp_runtime_helper_02fdd8e0()
// asm:   0x5d9543f: mov rdi, rbx
// asm:   0x5d95442: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d95447: mov rdi, rax
// asm:   0x5d9544a: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorMapObjectPickerPopup__RebuildResults
               (UI_MapEditorMapObjectPickerPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_Collections_Generic_Dictionary_int__MapObject__o *source;
  Il2CppObject *object;
  long lVar2;
  System_Collections_Generic_HashSet_int__o *__this_00;
  int32_t iVar3;
  bool bVar4;
  int index;
  UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0_o *__this_01;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Object_o *obj;
  System_String_o *pSVar6;
  UI_MapEditorMapObjectPickerPopup___c_StaticFields *pUVar7;
  System_Func_T__TResult__o *pSVar8;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar9;
  System_Collections_Generic_List_KeyValuePair_int__object___o *__this_02;
  UI_ElementStyle_o *__this_03;
  UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1_o *__this_04;
  System_String_o *pSVar10;
  System_String_array *values;
  System_String_o *pSVar11;
  UnityEngine_Events_UnityAction_o *__this_05;
  System_String_o **ppSVar12;
  MethodInfo *in_R9;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  long lStack_60;
  UnityEngine_Transform_o *local_58;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  long lStack_38;
  
  if (Il2CppMethodInitialized_07548055 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_KeyValuePair_int_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Take_KeyValuePair_int_MapObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_int_MapObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Where_KeyValuePair_int_MapObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_KeyValuePair_int_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_KeyValuePair_int_MapObject_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_MapObject_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_MapObject_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_int_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_int_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorMapObjectPickerPopup_c_RebuildResults_b__21_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorMapObjectPickerPopup_c__DisplayClass21_0_RebuildResults_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMapObjectPickerPopup_c__DisplayClass21_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorMapObjectPickerPopup_c__DisplayClass21_1_RebuildResults_b__2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMapObjectPickerPopup_c__DisplayClass21_1)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMapObjectPickerPopup_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"ObjectPicker");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&"[x] ");
    il2cpp_codegen_initialize_runtime_metadata(&"Unnamed");
    il2cpp_codegen_initialize_runtime_metadata(&" (");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"NoMatches");
    Il2CppMethodInitialized_07548055 = '\x01';
  }
  local_78.fields._current = (Il2CppObject *)0x0;
  lStack_60 = 0;
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MapEditorMapObjectPickerPopup_c__DisplayClass21_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    pUVar5 = (__this->fields).SinglePanel;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      index = UnityEngine_Transform__get_childCount(pUVar5,(MethodInfo *)0x0);
      while (index = index + -1, -1 < index) {
        pUVar5 = (__this->fields).SinglePanel;
        if ((pUVar5 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar5 = UnityEngine_Transform__GetChild(pUVar5,index,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05d95375;
        obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
      }
      pSVar1 = (__this->fields)._search;
      if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
         (pSVar6 = (pSVar1->fields)._value, pSVar6 != (System_String_o *)0x0)) {
        pSVar6 = System_String__Trim(pSVar6,(MethodInfo *)0x0);
        (__this_01->fields).search = pSVar6;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).search);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        source = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if ((TypeInfo_UI_MapEditorMapObjectPickerPopup_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorMapObjectPickerPopup_c);
          pUVar7 = TypeInfo_UI_MapEditorMapObjectPickerPopup_c->static_fields;
          pSVar8 = (System_Func_T__TResult__o *)pUVar7->__9__21_0;
        }
        else {
          pUVar7 = TypeInfo_UI_MapEditorMapObjectPickerPopup_c->static_fields;
          pSVar8 = (System_Func_T__TResult__o *)pUVar7->__9__21_0;
        }
        if (pSVar8 == (System_Func_T__TResult__o *)0x0) {
          if ((((Il2CppClass *)TypeInfo_UI_MapEditorMapObjectPickerPopup_c)->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorMapObjectPickerPopup_c);
            pUVar7 = TypeInfo_UI_MapEditorMapObjectPickerPopup_c->static_fields;
          }
          object = (Il2CppObject *)pUVar7->__9;
          pSVar8 = (System_Func_T__TResult__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_int_MapObject_int);
          System_Func_KeyValuePair_int__object___int____ctor
                    (pSVar8,object,
                     (intptr_t)MethodInfo_UI_MapEditorMapObjectPickerPopup_c_RebuildResults_b__21_0,
                     (MethodInfo_4F0F4E0 *)0x0);
          pUVar7 = TypeInfo_UI_MapEditorMapObjectPickerPopup_c->static_fields;
          pUVar7->__9__21_0 = (System_Func_KeyValuePair_int__MapObject___int__o *)pSVar8;
          Il2CppCodeGenWriteBarrier(&pUVar7->__9__21_0);
        }
        pSVar9 = (System_Collections_Generic_IEnumerable_TSource__o *)
                 System_Linq_Enumerable__OrderBy_KeyValuePair_int__object___int_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            (System_Func_TSource__TKey__o *)pSVar8,
                            (MethodInfo_34F1950 *)
                            MethodInfo_System_Linq_Enumerable_OrderBy_KeyValuePair_int_MapObject_int);
        bVar4 = System_String__op_Inequality
                          ((__this_01->fields).search,
                           (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
        if (bVar4) {
          pSVar8 = (System_Func_T__TResult__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_int_MapObject_bool);
          System_Func_KeyValuePair_int__object___bool____ctor
                    (pSVar8,(Il2CppObject *)__this_01,
                     (intptr_t)
                     MethodInfo_UI_MapEditorMapObjectPickerPopup_c__DisplayClass21_0_RebuildResults_b__1,
                     (MethodInfo_4F0F420 *)0x0);
          pSVar9 = System_Linq_Enumerable__Where_KeyValuePair_int__object__
                             (pSVar9,(System_Func_TSource__bool__o *)pSVar8,
                              (MethodInfo_35016E0 *)
                              MethodInfo_System_Linq_Enumerable_Where_KeyValuePair_int_MapObject);
        }
        pSVar9 = System_Linq_Enumerable__Take_KeyValuePair_int__object__
                           (pSVar9,0xfa,
                            (MethodInfo_34FDAD0 *)
                            MethodInfo_System_Linq_Enumerable_Take_KeyValuePair_int_MapObject);
        __this_02 = (System_Collections_Generic_List_KeyValuePair_int__object___o *)
                    System_Linq_Enumerable__ToList_KeyValuePair_int__object__
                              (pSVar9,(MethodInfo_3500C30 *)
                                      MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_int_MapObject);
        pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
        UI_ElementStyle___ctor(__this_03,0x12,120.0,20.0,pSVar6,(MethodInfo *)0x0);
        if (__this_02 != (System_Collections_Generic_List_KeyValuePair_int__object___o *)0x0) {
          if ((__this_02->fields)._size == 0) {
            pUVar5 = (__this->fields).SinglePanel;
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pSVar6 = UI_UIManager__GetLocale
                               ("MapEditor","ObjectPicker","NoMatches",
                                "","",in_R9);
            UI_ElementFactory__CreateDefaultLabel(pUVar5,__this_03,pSVar6,0,3,(MethodInfo *)0x0);
            return;
          }
          System_Collections_Generic_List_KeyValuePair_int__object____GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_50,__this_02,
                     (MethodInfo_51600E0 *)
                     MethodInfo_System_Collections_Generic_List_KeyValuePair_int_MapObject_GetEnumerator);
          local_78.fields._current = local_40;
          lStack_60 = lStack_38;
          local_78.fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
          local_78.fields._index = local_50._8_4_;
          local_78.fields._version = local_50._12_4_;
          local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_50._8_8_ = &local_78;
          do {
            bVar4 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__object____MoveNext
                              (&local_78,
                               (MethodInfo_4C1B930 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_MapObject_MoveNext
                              );
            lVar2 = lStack_60;
            if (!bVar4) {
              System_Collections_Generic_List_Enumerator_KeyValuePair_int__object____Dispose
                        (&local_78,
                         (MethodInfo_4C1B920 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_MapObject_Dispose
                        );
              return;
            }
            iVar3 = (int32_t)local_78.fields._current;
            __this_04 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_UI_MapEditorMapObjectPickerPopup_c__DisplayClass21_1);
            System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
            if (__this_04 == (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1_o *)0x0) {
              ThrowNullReferenceException();
            }
            (__this_04->fields).CS___8__locals1 = __this_01;
            Il2CppCodeGenWriteBarrier(&(__this_04->fields).CS___8__locals1);
            (__this_04->fields).id = iVar3;
            if (lVar2 == 0) {
              ThrowNullReferenceException();
            }
            if (*(long *)(lVar2 + 0x20) == 0) {
              ThrowNullReferenceException();
            }
            bVar4 = System_String__IsNullOrEmpty
                              (*(System_String_o **)(*(long *)(lVar2 + 0x20) + 0x30),(MethodInfo *)0x0);
            if (bVar4) {
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar6 = UI_UIManager__GetLocale
                                 ("MapEditor","ObjectPicker","Unnamed",
                                  "","",in_R9);
              if (*(long *)(lVar2 + 0x20) == 0) {
                ThrowNullReferenceException();
              }
              pSVar10 = *(System_String_o **)(*(long *)(lVar2 + 0x20) + 0x18);
            }
            else {
              lVar2 = *(long *)(lVar2 + 0x20);
              if (lVar2 == 0) {
                ThrowNullReferenceException();
              }
              pSVar6 = *(System_String_o **)(lVar2 + 0x30);
              pSVar10 = *(System_String_o **)(lVar2 + 0x18);
            }
            if (pSVar10 == (System_String_o *)0x0) {
              pSVar10 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
            }
            bVar4 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
            if ((bVar4) || (bVar4 = System_String__op_Equality(pSVar10,pSVar6,(MethodInfo *)0x0), bVar4)) {
              pSVar10 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
              if ((__this->fields)._multiple != false) goto label_05d95163;
label_05d95196:
              ppSVar12 = *(System_String_o ***)(g_data_07556758 + 0xb8);
            }
            else {
              pSVar10 = System_String__Concat_5301f10
                                  (" (",pSVar10,")",(MethodInfo *)0x0);
              if ((__this->fields)._multiple == false) goto label_05d95196;
label_05d95163:
              __this_00 = (__this->fields)._selectedIds;
              if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar4 = System_Collections_Generic_HashSet_int___Contains
                                (__this_00,(__this_04->fields).id,
                                 (MethodInfo_4FA7E00 *)
                                 MethodInfo_System_Collections_Generic_HashSet_int_Contains);
              ppSVar12 = &"[x] ";
              if (!bVar4) goto label_05d95196;
            }
            pSVar11 = *ppSVar12;
            local_58 = (__this->fields).SinglePanel;
            values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
            if (values == (System_String_array *)0x0) {
              ThrowNullReferenceException();
            }
            if ((int)values->max_length == 0) {
              ThrowIndexOutOfRangeException();
            }
            values->m_Items[0] = pSVar11;
            Il2CppCodeGenWriteBarrier(values->m_Items);
            pSVar11 = System_Int32__ToString(&(__this_04->fields).id,(MethodInfo *)0x0);
            if ((values->max_length & 0xfffffffe) == 0) {
              ThrowIndexOutOfRangeException();
            }
            values->m_Items[1] = pSVar11;
            Il2CppCodeGenWriteBarrier(values->m_Items + 1);
            if ((uint)values->max_length < 3) {
              ThrowIndexOutOfRangeException();
            }
            values->m_Items[2] = ": ";
            Il2CppCodeGenWriteBarrier(values->m_Items + 2);
            if ((values->max_length & 0xfffffffc) == 0) {
              ThrowIndexOutOfRangeException();
            }
            values->m_Items[3] = pSVar6;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3);
            if ((uint)values->max_length < 5) {
              ThrowIndexOutOfRangeException();
            }
            values->m_Items[4] = pSVar10;
            Il2CppCodeGenWriteBarrier(values->m_Items + 4);
            pSVar6 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
            __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      (__this_05,(Il2CppObject *)__this_04,
                       (intptr_t)
                       MethodInfo_UI_MapEditorMapObjectPickerPopup_c__DisplayClass21_1_RebuildResults_b__2,
                       (MethodInfo *)0x0);
            UI_ElementFactory__CreateTextButton(local_58,__this_03,pSVar6,0.0,__this_05,(MethodInfo *)0x0);
          } while( true );
        }
      }
    }
  }
label_05d95375:
  ThrowNullReferenceException();
}


// UI.MapEditorMapObjectPickerPopup$$Select
// il2cpp: void UI_MapEditorMapObjectPickerPopup__Select (UI_MapEditorMapObjectPickerPopup_o* __this, int32_t id, const MethodInfo* method);
// 0x5d95470

void UI_MapEditorMapObjectPickerPopup__Select
               (UI_MapEditorMapObjectPickerPopup_o *__this,int32_t id,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  System_Action_int__o *pSVar2;
  bool bVar3;
  MethodInfo *method_00;
  MethodInfo *pMVar4;
  
  pMVar4 = (MethodInfo *)(ulong)(uint)id;
  if (Il2CppMethodInitialized_07548056 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    Il2CppMethodInitialized_07548056 = '\x01';
  }
  if ((__this->fields)._multiple == false) {
    pSVar2 = (__this->fields)._onSelect;
    if (pSVar2 != (System_Action_int__o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pMVar4,(pSVar2->fields).method);
    }
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  pSVar1 = (__this->fields)._selectedIds;
  if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) {
label_05d9552a:
    ThrowNullReferenceException();
  }
  method_00 = pMVar4;
  bVar3 = System_Collections_Generic_HashSet_int___Add
                    (pSVar1,id,(MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
  if (!bVar3) {
    pSVar1 = (__this->fields)._selectedIds;
    if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05d9552a;
    System_Collections_Generic_HashSet_int___Remove
              (pSVar1,id,(MethodInfo_4FA80C0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    method_00 = pMVar4;
  }
  UI_MapEditorMapObjectPickerPopup__RebuildResults(__this,method_00);
  return;
}


// UI.MapEditorMapObjectPickerPopup$$ApplySelection
// il2cpp: void UI_MapEditorMapObjectPickerPopup__ApplySelection (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x5d95530

void UI_MapEditorMapObjectPickerPopup__ApplySelection
               (UI_MapEditorMapObjectPickerPopup_o *__this,MethodInfo *method)

{
  System_Action_HashSet_int___o *pSVar1;
  System_Collections_Generic_HashSet_int__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_00;
  
  if (Il2CppMethodInitialized_07548057 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    Il2CppMethodInitialized_07548057 = '\x01';
  }
  if ((__this->fields)._multiple == false) {
    return;
  }
  pSVar1 = (__this->fields)._onSelectMultiple;
  if (pSVar1 != (System_Action_HashSet_int___o *)0x0) {
    collection = (__this->fields)._selectedIds;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor_4fa7660
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,__this_00,(pSVar1->fields).method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.MapEditorMapObjectPickerPopup$$.ctor
// il2cpp: void UI_MapEditorMapObjectPickerPopup___ctor (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x5d955f0

void UI_MapEditorMapObjectPickerPopup___ctor(UI_MapEditorMapObjectPickerPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  
  if (Il2CppMethodInitialized_07548058 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_07548058 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._search = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._search);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_01,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  (__this->fields)._selectedIds = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedIds);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


