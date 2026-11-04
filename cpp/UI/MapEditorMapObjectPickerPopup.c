// Type: UI.MapEditorMapObjectPickerPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MapEditorMapObjectPickerPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.MapEditorMapObjectPickerPopup.<>c$$.cctor
// il2cpp: void UI_MapEditorMapObjectPickerPopup___c___cctor (const MethodInfo* method);
// 0x1822d1220

void UI_MapEditorMapObjectPickerPopup___c___cctor(MethodInfo *method)

{
  UI_MapEditorMapObjectPickerPopup___c_o *__this;
  
  if (Il2CppMethodInitialized_18434759e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMapObjectPickerPopup_c);
    Il2CppMethodInitialized_18434759e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorMapObjectPickerPopup_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_MapEditorMapObjectPickerPopup_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorMapObjectPickerPopup_c->static_fields->__9,__this);
  return;
}


// UI.MapEditorMapObjectPickerPopup.<>c$$.ctor
// il2cpp: void UI_MapEditorMapObjectPickerPopup___c___ctor (UI_MapEditorMapObjectPickerPopup___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorMapObjectPickerPopup___c___ctor(UI_MapEditorMapObjectPickerPopup___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorMapObjectPickerPopup.<>c$$<RebuildResults>b__21_0
// il2cpp: int32_t UI_MapEditorMapObjectPickerPopup___c___RebuildResults_b__21_0 (UI_MapEditorMapObjectPickerPopup___c_o* __this, System_Collections_Generic_KeyValuePair_int__MapObject__o entry, const MethodInfo* method);
// 0x1822cf980

int32_t UI_MapEditorMapObjectPickerPopup___c___RebuildResults_b__21_0
                  (UI_MapEditorMapObjectPickerPopup___c_o *__this,
                  System_Collections_Generic_KeyValuePair_int__MapObject__o *entry,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434759f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_MapObject_get_Key);
    Il2CppMethodInitialized_18434759f = 1;
    return (entry->fields).key;
  }
  return (entry->fields).key;
}


// UI.MapEditorMapObjectPickerPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0___ctor (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0___ctor(UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorMapObjectPickerPopup.<>c__DisplayClass21_0$$<RebuildResults>b__1
// il2cpp: bool UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0___RebuildResults_b__1 (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0_o* __this, System_Collections_Generic_KeyValuePair_int__MapObject__o entry, const MethodInfo* method);
// 0x1822d0260

bool UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0___RebuildResults_b__1
               (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0_o *__this,
               System_Collections_Generic_KeyValuePair_int__MapObject__o *entry,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *__this_00;
  System_String_o *__this_01;
  bool bVar3;
  int32_t iVar4;
  System_String_o **ppSVar5;
  System_String_o *__this_02;
  int32_t local_res10 [2];
  
  if (Il2CppMethodInitialized_1843475a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_MapObject_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_MapObject_get_Value);
    Il2CppMethodInitialized_1843475a0 = '\x01';
  }
  pMVar1 = (entry->fields).value;
  local_res10[0] = 0;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    ppSVar5 = &(pMVar2->fields).Name;
    if (*ppSVar5 == (System_String_o *)0x0) {
      ppSVar5 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    __this_00 = *ppSVar5;
    ppSVar5 = &(((((entry->fields).value)->fields).ScriptObject)->fields).Asset;
    if (*ppSVar5 == (System_String_o *)0x0) {
      ppSVar5 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    __this_01 = *ppSVar5;
    local_res10[0] = (entry->fields).key;
    __this_02 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    if (__this_02 != (System_String_o *)0x0) {
      bVar3 = System_String__Contains(__this_02,(__this->fields).search,(MethodInfo *)0x0);
      if (bVar3) {
        return true;
      }
      if (__this_00 != (System_String_o *)0x0) {
        iVar4 = System_String__IndexOf_196de90(__this_00,(__this->fields).search,5,(MethodInfo *)0x0);
        if (-1 < iVar4) {
          return true;
        }
        if (__this_01 != (System_String_o *)0x0) {
          iVar4 = System_String__IndexOf_196de90(__this_01,(__this->fields).search,5,(MethodInfo *)0x0);
          return (bool)((byte)((uint)iVar4 >> 0x1f) ^ 1);
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorMapObjectPickerPopup.<>c__DisplayClass21_1$$.ctor
// il2cpp: void UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1___ctor (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1___ctor(UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorMapObjectPickerPopup.<>c__DisplayClass21_1$$<RebuildResults>b__2
// il2cpp: void UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1___RebuildResults_b__2 (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x1822d0390

void UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1___RebuildResults_b__2
               (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1_o *__this,MethodInfo *method)

{
  int32_t item;
  UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0_o *pUVar1;
  UI_MapEditorMapObjectPickerPopup_o *__this_00;
  System_Collections_Generic_HashSet_int__o *pSVar2;
  System_Action_int__o *pSVar3;
  bool bVar4;
  
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 != (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0_o *)0x0) &&
     (__this_00 = (pUVar1->fields).__4__this, __this_00 != (UI_MapEditorMapObjectPickerPopup_o *)0x0)) {
    item = (__this->fields).id;
    if (Il2CppMethodInitialized_18434759b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
      Il2CppMethodInitialized_18434759b = '\x01';
    }
    if ((__this_00->fields)._multiple == false) {
      pSVar3 = (__this_00->fields)._onSelect;
      if (pSVar3 != (System_Action_int__o *)0x0) {
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,item,(pSVar3->fields).method);
      }
      (*(__this_00->klass->vtable)._22_Hide.methodPtr)(__this_00,(__this_00->klass->vtable)._22_Hide.method);
      return;
    }
    pSVar2 = (__this_00->fields)._selectedIds;
    if (pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar4 = System_Collections_Generic_HashSet_int___Add
                        (pSVar2,item,
                         (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      if (!bVar4) {
        pSVar2 = (__this_00->fields)._selectedIds;
        if (pSVar2 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1822d046b;
        System_Collections_Generic_HashSet_Int32Enum___Remove
                  ((System_Collections_Generic_HashSet_T__o *)pSVar2,item,
                   (MethodInfo_17666A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
      }
      UI_MapEditorMapObjectPickerPopup__RebuildResults(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
label_1822d046b:
  ThrowNullReferenceException();
}


// UI.MapEditorMapObjectPickerPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorMapObjectPickerPopup__get_Title (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x1822cb800

System_String_o *
UI_MapEditorMapObjectPickerPopup__get_Title(UI_MapEditorMapObjectPickerPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347596 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Find map object");
    Il2CppMethodInitialized_184347596 = '\x01';
  }
  return "Find map object";
}


// UI.MapEditorMapObjectPickerPopup$$get_Width
// il2cpp: float UI_MapEditorMapObjectPickerPopup__get_Width (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x18229ac50

float UI_MapEditorMapObjectPickerPopup__get_Width
                (UI_MapEditorMapObjectPickerPopup_o *__this,MethodInfo *method)

{
  return 650.0;
}


// UI.MapEditorMapObjectPickerPopup$$get_Height
// il2cpp: float UI_MapEditorMapObjectPickerPopup__get_Height (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x1821e4680

float UI_MapEditorMapObjectPickerPopup__get_Height
                (UI_MapEditorMapObjectPickerPopup_o *__this,MethodInfo *method)

{
  return 700.0;
}


// UI.MapEditorMapObjectPickerPopup$$get_ScrollBar
// il2cpp: bool UI_MapEditorMapObjectPickerPopup__get_ScrollBar (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MapEditorMapObjectPickerPopup__get_ScrollBar(UI_MapEditorMapObjectPickerPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MapEditorMapObjectPickerPopup$$get_VerticalSpacing
// il2cpp: float UI_MapEditorMapObjectPickerPopup__get_VerticalSpacing (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x182182a90

float
UI_MapEditorMapObjectPickerPopup__get_VerticalSpacing(UI_MapEditorMapObjectPickerPopup_o* __this, MethodInfo* method)

{
  return 8.0;
}


// UI.MapEditorMapObjectPickerPopup$$Setup
// il2cpp: void UI_MapEditorMapObjectPickerPopup__Setup (UI_MapEditorMapObjectPickerPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822cb350

void UI_MapEditorMapObjectPickerPopup__Setup
               (UI_MapEditorMapObjectPickerPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Settings_StringSetting_o *setting;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  UI_InputSettingElement_o *value;
  
  if (Il2CppMethodInitialized_184347597 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorMapObjectPickerPopup_ApplySelection);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorMapObjectPickerPopup_RebuildResults);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Close");
    il2cpp_codegen_initialize_runtime_metadata(&"Apply");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Search");
    Il2CppMethodInitialized_184347597 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x14,70.0,20.0,themePanel,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  setting = (__this->fields)._search;
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar2,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorMapObjectPickerPopup_RebuildResults,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorMapObjectPickerPopup_RebuildResults,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateInputSetting
                     (pUVar1,__this_00,(Settings_BaseSetting_o *)setting,"Search",
                      "",260.0,40.0,false,pUVar2,__this_01,
                      (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                      (MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    value = UnityEngine_GameObject__GetComponent_object_
                      (pUVar3,(MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    (__this->fields)._searchInput = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._searchInput,value);
    pUVar1 = (__this->fields).BottomBar;
    pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar2,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorMapObjectPickerPopup_ApplySelection,(MethodInfo *)0x0);
    pUVar3 = UI_ElementFactory__CreateTextButton
                       (pUVar1,__this_00,"Apply",0.0,pUVar2,(MethodInfo *)0x0);
    (__this->fields)._applyButton = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._applyButton,pUVar3);
    pUVar1 = (__this->fields).BottomBar;
    pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar2,(Il2CppObject *)__this,
               (intptr_t)(__this->klass->vtable)._22_Hide.method,(MethodInfo *)0x0);
    UI_ElementFactory__CreateTextButton(pUVar1,__this_00,"Close",0.0,pUVar2,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorMapObjectPickerPopup$$Show
// il2cpp: void UI_MapEditorMapObjectPickerPopup__Show (UI_MapEditorMapObjectPickerPopup_o* __this, System_Action_int__o* onSelect, const MethodInfo* method);
// 0x1822cb5e0

void UI_MapEditorMapObjectPickerPopup__Show
               (UI_MapEditorMapObjectPickerPopup_o *__this,System_Action_int__o *onSelect,MethodInfo *method)

{
  (__this->fields)._multiple = false;
  (__this->fields)._onSelect = onSelect;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelect,onSelect);
  (__this->fields)._onSelectMultiple = (System_Action_HashSet_int___o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelectMultiple,(void *)0x0);
  UI_MapEditorMapObjectPickerPopup__PrepareAndShow(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorMapObjectPickerPopup$$Show
// il2cpp: void UI_MapEditorMapObjectPickerPopup__Show (UI_MapEditorMapObjectPickerPopup_o* __this, System_Collections_Generic_HashSet_int__o* selectedIds, System_Action_HashSet_int___o* onSelect, const MethodInfo* method);
// 0x1822cb630

void UI_MapEditorMapObjectPickerPopup__Show_22cb630
               (UI_MapEditorMapObjectPickerPopup_o *__this,
               System_Collections_Generic_HashSet_int__o *selectedIds,System_Action_HashSet_int___o *onSelect,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *__this_00;
  
  if (Il2CppMethodInitialized_184347598 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    Il2CppMethodInitialized_184347598 = '\x01';
  }
  (__this->fields)._multiple = true;
  if (selectedIds == (System_Collections_Generic_HashSet_int__o *)0x0) {
    selectedIds = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor
              (selectedIds,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor_176c3b0
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)selectedIds,
             (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
  (__this->fields)._selectedIds = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedIds,__this_00);
  (__this->fields)._onSelect = (System_Action_int__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelect,(void *)0x0);
  (__this->fields)._onSelectMultiple = onSelect;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelectMultiple,onSelect);
  UI_MapEditorMapObjectPickerPopup__PrepareAndShow(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorMapObjectPickerPopup$$PrepareAndShow
// il2cpp: void UI_MapEditorMapObjectPickerPopup__PrepareAndShow (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x1822caa00

void UI_MapEditorMapObjectPickerPopup__PrepareAndShow
               (UI_MapEditorMapObjectPickerPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  UnityEngine_GameObject_o *__this_01;
  
  if (Il2CppMethodInitialized_184347599 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_184347599 = '\x01';
  }
  __this_00 = (__this->fields)._search;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8)
               ,(MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pUVar1 = (__this->fields)._searchInput;
    if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
      __this_01 = (__this->fields)._applyButton;
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,(__this->fields)._multiple,(MethodInfo *)0x0);
        UI_MapEditorMapObjectPickerPopup__RebuildResults(__this,(MethodInfo *)0x0);
        UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorMapObjectPickerPopup$$RebuildResults
// il2cpp: void UI_MapEditorMapObjectPickerPopup__RebuildResults (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x1822caab0
// eh: try 0x1822caf40..0x1822cb1b9 -> pad 0x183315b20 catch Il2CppExceptionWrapper
// eh: try 0x1822cb1e9..0x1822cb209 -> pad 0x180358bf0 cleanup
// eh: try 0x1822cb231..0x1822cb26f -> pad 0x183315b20 catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822caf3f: nop 
// asm:   0x1822cafcb: mov r12, qword ptr [rip + 0x1dd7e7e]  ; "Unnamed"
// asm:   0x1822cafd2: jmp 0x1822cafea
// asm:   0x1822cb081: mov r14, qword ptr [rip + 0x1e08078]  ; "[x] "
// asm:   0x1822cb088: jmp 0x1822cb09b
// asm:   0x1822cb1ca: mov rdx, qword ptr [rip + 0x1da37a7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_MapObject_Dispose
// asm:   0x1822cb1d1: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1822cb1d6: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822cb1db: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822cb1e0: test rcx, rcx
// asm:   0x1822cb1e3: jne 0x1822cb26f
// asm:   0x1822cb1e9: jmp 0x1822cb20e
// asm:   0x1822cb26f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315b20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315b25: push rbp
// asm:   0x183315b26: sub rsp, 0x30
// asm:   0x183315b2a: mov rbp, rdx
// asm:   0x183315b2d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183315b31: mov rcx, qword ptr [rax]
// asm:   0x183315b34: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183315b38: movabs rax, 0
// asm:   0x183315b42: add rsp, 0x30
// asm:   0x183315b46: pop rbp
// asm:   0x183315b47: ret 

void UI_MapEditorMapObjectPickerPopup__RebuildResults
               (UI_MapEditorMapObjectPickerPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_Collections_Generic_Dictionary_int__MapObject__o *source;
  Il2CppObject *object;
  System_Collections_Generic_HashSet_int__o *__this_00;
  int32_t iVar2;
  longlong lVar3;
  bool bVar4;
  int index;
  UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0_o *object_00;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Object_o *obj;
  System_String_o *pSVar6;
  System_Func_KeyValuePair_int__MapObject___int__o *__this_01;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Predicate_T__o *__this_02;
  System_Collections_Generic_IEnumerable_TSource__o *source_01;
  System_Collections_Generic_List_TSource__o *__this_03;
  UI_ElementStyle_o *__this_04;
  UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1_o *object_01;
  longlong *plVar7;
  System_String_o *pSVar9;
  System_String_array *values;
  System_String_o *pSVar10;
  UnityEngine_Events_UnityAction_o *__this_05;
  undefined1 local_68 [16];
  Il2CppObject *local_58;
  longlong lStack_50;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  longlong lStack_30;
  longlong lVar8;
  
  if (Il2CppMethodInitialized_18434759a == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&"[x] ");
    il2cpp_codegen_initialize_runtime_metadata(&"Unnamed");
    il2cpp_codegen_initialize_runtime_metadata(&" (");
    il2cpp_codegen_initialize_runtime_metadata(&"No matching objects");
    Il2CppMethodInitialized_18434759a = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  lStack_30 = 0;
  object_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MapEditorMapObjectPickerPopup_c__DisplayClass21_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
  if (object_00 != (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_0_o *)0x0) {
    (object_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).__4__this,__this);
    pUVar5 = (__this->fields).SinglePanel;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      index = UnityEngine_Transform__get_childCount(pUVar5,(MethodInfo *)0x0);
      while (index = index + -1, -1 < index) {
        pUVar5 = (__this->fields).SinglePanel;
        if ((pUVar5 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar5 = UnityEngine_Transform__GetChild(pUVar5,index,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_1822cb22b;
        obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
      }
      pSVar1 = (__this->fields)._search;
      if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
         (pSVar6 = (pSVar1->fields)._value, pSVar6 != (System_String_o *)0x0)) {
        pSVar6 = System_String__Trim(pSVar6,(MethodInfo *)0x0);
        (object_00->fields).search = pSVar6;
        Il2CppCodeGenWriteBarrier(&(object_00->fields).search,pSVar6);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        source = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if ((TypeInfo_UI_MapEditorMapObjectPickerPopup_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorMapObjectPickerPopup_c);
        }
        __this_01 = TypeInfo_UI_MapEditorMapObjectPickerPopup_c->static_fields->__9__21_0;
        if (__this_01 == (System_Func_KeyValuePair_int__MapObject___int__o *)0x0) {
          if ((TypeInfo_UI_MapEditorMapObjectPickerPopup_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorMapObjectPickerPopup_c);
          }
          object = (Il2CppObject *)TypeInfo_UI_MapEditorMapObjectPickerPopup_c->static_fields->__9;
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_int_MapObject_int);
          System_Func_KeyValuePair_int__object___int____ctor
                    ((System_Converter_AccelStructAdapter_InstanceIDs__int__o *)__this_01,object,
                     (intptr_t)MethodInfo_UI_MapEditorMapObjectPickerPopup_c_RebuildResults_b__21_0,
                     (MethodInfo_13859D0 *)0x0);
          TypeInfo_UI_MapEditorMapObjectPickerPopup_c->static_fields->__9__21_0 = __this_01;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_UI_MapEditorMapObjectPickerPopup_c->static_fields->__9__21_0,__this_01);
        }
        source_00 = System_Linq_Enumerable__OrderBy_object__int_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                               (System_Func_TSource__TKey__o *)__this_01,
                               (MethodInfo_6C12E0 *)
                               MethodInfo_System_Linq_Enumerable_OrderBy_KeyValuePair_int_MapObject_int);
        bVar4 = System_String__op_Inequality
                          ((object_00->fields).search,
                           (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
        if (bVar4) {
          __this_02 = (System_Predicate_T__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_int_MapObject_bool);
          System_Func_KeyValuePair_int__object___bool____ctor
                    (__this_02,(Il2CppObject *)object_00,
                     (intptr_t)
                     MethodInfo_UI_MapEditorMapObjectPickerPopup_c__DisplayClass21_0_RebuildResults_b__1,
                     (MethodInfo_B61280 *)0x0);
          source_00 = (System_Linq_IOrderedEnumerable_TSource__o *)
                      System_Linq_Enumerable__Where_RoleSpriteDefinition_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                                 (System_Func_TSource__bool__o *)__this_02,
                                 (MethodInfo_6CA8B0 *)
                                 MethodInfo_System_Linq_Enumerable_Where_KeyValuePair_int_MapObject);
        }
        source_01 = System_Linq_Enumerable__Take_KeyValuePair_object__object__
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,0xfa,
                               (MethodInfo_6C7880 *)
                               MethodInfo_System_Linq_Enumerable_Take_KeyValuePair_int_MapObject);
        __this_03 = System_Linq_Enumerable__ToList_KeyValuePair_int__object__
                              (source_01,
                               (MethodInfo_6C97B0 *)
                               MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_int_MapObject);
        pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
        UI_ElementStyle___ctor(__this_04,0x12,120.0,20.0,pSVar6,(MethodInfo *)0x0);
        if (__this_03 != (System_Collections_Generic_List_TSource__o *)0x0) {
          if ((__this_03->fields)._size == 0) {
            UI_ElementFactory__CreateDefaultLabel
                      ((__this->fields).SinglePanel,__this_04,"No matching objects",0,3,(MethodInfo *)0x0);
          }
          else {
            System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_68,
                       (System_Collections_Generic_List_T__o *)__this_03,
                       (MethodInfo_91F200 *)
                       MethodInfo_System_Collections_Generic_List_KeyValuePair_int_MapObject_GetEnumerator);
            local_48.fields._list = (System_Collections_Generic_List_T__o *)local_68._0_8_;
            local_48.fields._index = local_68._8_4_;
            local_48.fields._version = local_68._12_4_;
            local_48.fields._current = local_58;
            lStack_30 = lStack_50;
            local_68._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
            local_68._8_8_ = &local_48;
            while (bVar4 = System_Collections_Generic_List_Enumerator_StyleSelectorHelper_SelectorWorkItem___MoveNext
                                     (&local_48,
                                      (MethodInfo_1529A80 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_MapObject_MoveNext
                                     ), lVar3 = lStack_30, bVar4) {
              iVar2 = (int32_t)local_48.fields._current;
              object_01 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_UI_MapEditorMapObjectPickerPopup_c__DisplayClass21_1);
              System_Object___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_01,
                         (MethodInfo *)0x0);
              if (object_01 == (UI_MapEditorMapObjectPickerPopup___c__DisplayClass21_1_o *)0x0) {
                ThrowNullReferenceException();
              }
              (object_01->fields).CS___8__locals1 = object_00;
              Il2CppCodeGenWriteBarrier(&(object_01->fields).CS___8__locals1,object_00);
              (object_01->fields).id = iVar2;
              if (lVar3 == 0) {
                ThrowNullReferenceException();
              }
              if (*(longlong *)(lVar3 + 0x20) == 0) {
                ThrowNullReferenceException();
              }
              bVar4 = System_String__IsNullOrEmpty
                                (*(System_String_o **)(*(longlong *)(lVar3 + 0x20) + 0x30),(MethodInfo *)0x0);
              if (bVar4) {
                lVar8 = *(longlong *)(lVar3 + 0x20);
                pSVar6 = "Unnamed";
                if (lVar8 == 0) {
                  ThrowNullReferenceException();
                }
              }
              else {
                if (*(longlong *)(lVar3 + 0x20) == 0) {
                  ThrowNullReferenceException();
                }
                lVar8 = *(longlong *)(lVar3 + 0x20);
                pSVar6 = *(System_String_o **)(*(longlong *)(lVar3 + 0x20) + 0x30);
              }
              plVar7 = (longlong *)(lVar8 + 0x18);
              if (*plVar7 == 0) {
                plVar7 = *(longlong **)(g_data_184354e50 + 0xb8);
              }
              pSVar9 = (System_String_o *)*plVar7;
              bVar4 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
              if ((bVar4) || (bVar4 = System_String__op_Equality(pSVar9,pSVar6,(MethodInfo *)0x0), bVar4)) {
                pSVar9 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
              }
              else {
                pSVar9 = System_String__Concat_1969b70
                                   (" (",pSVar9,")",(MethodInfo *)0x0);
              }
              if ((__this->fields)._multiple == false) {
label_1822cb08a:
                pSVar10 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
              }
              else {
                __this_00 = (__this->fields)._selectedIds;
                if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar4 = System_Collections_Generic_HashSet_Int32Enum___Contains
                                  ((System_Collections_Generic_HashSet_T__o *)__this_00,(object_01->fields).id
                                   ,(MethodInfo_1759C90 *)
                                    MethodInfo_System_Collections_Generic_HashSet_int_Contains);
                pSVar10 = "[x] ";
                if (!bVar4) goto label_1822cb08a;
              }
              pUVar5 = (__this->fields).SinglePanel;
              values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
              if (values == (System_String_array *)0x0) {
                ThrowNullReferenceException();
              }
              if ((int)values->max_length == 0) {
                ThrowIndexOutOfRangeException();
              }
              values->m_Items[0] = pSVar10;
              Il2CppCodeGenWriteBarrier(values->m_Items,pSVar10);
              pSVar10 = System_Int32__ToString(&(object_01->fields).id,(MethodInfo *)0x0);
              if ((uint)values->max_length < 2) {
                ThrowIndexOutOfRangeException();
              }
              values->m_Items[1] = pSVar10;
              Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar10);
              pSVar10 = ": ";
              if ((uint)values->max_length < 3) {
                ThrowIndexOutOfRangeException();
              }
              values->m_Items[2] = ": ";
              Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar10);
              if ((uint)values->max_length < 4) {
                ThrowIndexOutOfRangeException();
              }
              values->m_Items[3] = pSVar6;
              Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar6);
              if ((uint)values->max_length < 5) {
                ThrowIndexOutOfRangeException();
              }
              values->m_Items[4] = pSVar9;
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar9);
              pSVar6 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
              __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_05,(Il2CppObject *)object_01,
                         (intptr_t)
                         MethodInfo_UI_MapEditorMapObjectPickerPopup_c__DisplayClass21_1_RebuildResults_b__2,
                         (MethodInfo *)0x0);
              UI_ElementFactory__CreateTextButton(pUVar5,__this_04,pSVar6,0.0,__this_05,(MethodInfo *)0x0);
            }
            System_Collections_Generic_List_Enumerator_KeyValuePair_int__object____Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                       MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_MapObject_Dispose
                      );
          }
          return;
        }
      }
    }
  }
label_1822cb22b:
  ThrowNullReferenceException();
}


// UI.MapEditorMapObjectPickerPopup$$Select
// il2cpp: void UI_MapEditorMapObjectPickerPopup__Select (UI_MapEditorMapObjectPickerPopup_o* __this, int32_t id, const MethodInfo* method);
// 0x1822cb280

void UI_MapEditorMapObjectPickerPopup__Select
               (UI_MapEditorMapObjectPickerPopup_o *__this,int32_t id,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  System_Action_int__o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_18434759b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    Il2CppMethodInitialized_18434759b = '\x01';
  }
  if ((__this->fields)._multiple == false) {
    pSVar2 = (__this->fields)._onSelect;
    if (pSVar2 != (System_Action_int__o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,id,(pSVar2->fields).method);
    }
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  pSVar1 = (__this->fields)._selectedIds;
  if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    bVar3 = System_Collections_Generic_HashSet_int___Add
                      (pSVar1,id,(MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
    if (!bVar3) {
      pSVar1 = (__this->fields)._selectedIds;
      if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1822cb343;
      System_Collections_Generic_HashSet_Int32Enum___Remove
                ((System_Collections_Generic_HashSet_T__o *)pSVar1,id,
                 (MethodInfo_17666A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    }
    UI_MapEditorMapObjectPickerPopup__RebuildResults(__this,(MethodInfo *)0x0);
    return;
  }
label_1822cb343:
  ThrowNullReferenceException();
}


// UI.MapEditorMapObjectPickerPopup$$ApplySelection
// il2cpp: void UI_MapEditorMapObjectPickerPopup__ApplySelection (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x1822ca940

void UI_MapEditorMapObjectPickerPopup__ApplySelection
               (UI_MapEditorMapObjectPickerPopup_o *__this,MethodInfo *method)

{
  System_Action_HashSet_int___o *pSVar1;
  System_Collections_Generic_HashSet_int__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_00;
  
  if (Il2CppMethodInitialized_18434759c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    Il2CppMethodInitialized_18434759c = '\x01';
  }
  if ((__this->fields)._multiple != false) {
    pSVar1 = (__this->fields)._onSelectMultiple;
    if (pSVar1 != (System_Action_HashSet_int___o *)0x0) {
      collection = (__this->fields)._selectedIds;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor_176c3b0
                (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
                 (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,__this_00,(pSVar1->fields).method);
    }
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  }
  return;
}


// UI.MapEditorMapObjectPickerPopup$$.ctor
// il2cpp: void UI_MapEditorMapObjectPickerPopup___ctor (UI_MapEditorMapObjectPickerPopup_o* __this, const MethodInfo* method);
// 0x1822cb720

void UI_MapEditorMapObjectPickerPopup___ctor(UI_MapEditorMapObjectPickerPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  
  if (Il2CppMethodInitialized_18434759d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_18434759d = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._search = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._search,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_01,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  (__this->fields)._selectedIds = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedIds,__this_01);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


