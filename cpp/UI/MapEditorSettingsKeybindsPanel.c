// Type: UI.MapEditorSettingsKeybindsPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorSettingsKeybindsPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsKeybindsPanel.cs
// --------------------------------

// UI.MapEditorSettingsKeybindsPanel$$get_DoublePanel
// il2cpp: bool UI_MapEditorSettingsKeybindsPanel__get_DoublePanel (UI_MapEditorSettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MapEditorSettingsKeybindsPanel__get_DoublePanel(UI_MapEditorSettingsKeybindsPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MapEditorSettingsKeybindsPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorSettingsKeybindsPanel__get_ScrollBar (UI_MapEditorSettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MapEditorSettingsKeybindsPanel__get_ScrollBar(UI_MapEditorSettingsKeybindsPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MapEditorSettingsKeybindsPanel$$Setup
// il2cpp: void UI_MapEditorSettingsKeybindsPanel__Setup (UI_MapEditorSettingsKeybindsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822d2890

void UI_MapEditorSettingsKeybindsPanel__Setup
               (UI_MapEditorSettingsKeybindsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UI_BasePanel_o *pUVar2;
  System_String_o *cat;
  Settings_InputSettings_o *pSVar3;
  Settings_MapEditorInputSettings_o *container;
  UI_BaseMenu_o *pUVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  
  if (Il2CppMethodInitialized_1843475c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorSettingsPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    Il2CppMethodInitialized_1843475c6 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).Parent;
  if (pUVar2 != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_MapEditorSettingsPopup->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorSettingsPopup)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
    cat = (System_String_o *)(*(uint64_t *)((char *)pUVar2 + 0xa8));
    pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x18,140.0,20.0,pSVar5,(MethodInfo *)0x0);
    pSVar5 = "Keybinds";
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (pSVar3 != (Settings_InputSettings_o *)0x0) {
      container = (pSVar3->fields).MapEditor;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar4 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar4 != (UI_BaseMenu_o *)0x0) {
        UI_MapEditorSettingsKeybindsPanel__CreateKeybindSettings
                  (__this,(Settings_BaseSettingsContainer_o *)container,(pUVar4->fields).KeybindPopup,cat,
                   pSVar5,__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorSettingsKeybindsPanel$$CreateKeybindSettings
// il2cpp: void UI_MapEditorSettingsKeybindsPanel__CreateKeybindSettings (UI_MapEditorSettingsKeybindsPanel_o* __this, Settings_BaseSettingsContainer_o* container, UI_KeybindPopup_o* popup, System_String_o* cat, System_String_o* sub, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x1822d2490
// eh: try 0x1822d257c..0x1822d287f -> pad 0x183332720 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822d258c: nop dword ptr [rax]
// asm:   0x1822d2653: mov rdi, r14
// asm:   0x1822d2656: jmp 0x1822d26a9
// asm:   0x1822d2818: lea rcx, [rsp + 0x68]
// asm:   0x1822d281d: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1822d2822: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x1822d2827: test rcx, rcx
// asm:   0x1822d282a: jne 0x1822d287f
// asm:   0x1822d287f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183332720: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183332725: push rbp
// asm:   0x183332726: sub rsp, 0x50
// asm:   0x18333272a: mov rbp, rdx
// asm:   0x18333272d: mov rax, qword ptr [rbp + 0x58]
// asm:   0x183332731: mov rcx, qword ptr [rax]
// asm:   0x183332734: mov qword ptr [rbp + 0x60], rcx
// asm:   0x183332738: movabs rax, 0
// asm:   0x183332742: add rsp, 0x50
// asm:   0x183332746: pop rbp
// asm:   0x183332747: ret 

void UI_MapEditorSettingsKeybindsPanel__CreateKeybindSettings
               (UI_MapEditorSettingsKeybindsPanel_o *__this,Settings_BaseSettingsContainer_o *container,
               UI_KeybindPopup_o *popup,System_String_o *cat,System_String_o *sub,UI_ElementStyle_o *style,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  UnityEngine_Transform_o *parent;
  Il2CppType *handle;
  bool bVar6;
  int32_t iVar7;
  void *pvVar8;
  VirtualInvokeData *pVVar9;
  Il2CppObject *pIVar10;
  ulonglong *puVar11;
  System_Type_o *left;
  System_Type_o *right;
  System_String_o *pSVar12;
  ushort uVar13;
  longlong lVar15;
  System_String_o *setting;
  int iVar16;
  Il2CppObject *local_res10;
  UI_KeybindPopup_o *local_res18;
  Il2CppObject *local_88 [2];
  undefined8 local_78;
  Il2CppObject **local_70;
  Il2CppObject **local_68;
  System_String_o *pSVar14;
  
  local_res18 = popup;
  if (Il2CppMethodInitialized_1843475c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_DictionaryEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843475c7 = '\x01';
  }
  iVar16 = 0;
  local_res10 = (Il2CppObject *)0x0;
  local_88[0] = (Il2CppObject *)0x0;
  if ((container == (Settings_BaseSettingsContainer_o *)0x0) ||
     (pSVar3 = (container->fields).Settings,
     pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_res10 = (Il2CppObject *)
                (*(pSVar3->klass->vtable)._22_GetEnumerator.methodPtr)
                          (pSVar3,(pSVar3->klass->vtable)._22_GetEnumerator.method);
  local_78 = 0;
  local_70 = &local_res10;
  local_68 = local_88;
  do {
    pSVar12 = (System_String_o *)0x0;
    if (local_res10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res10);
    pIVar10 = local_res10;
    if ((char)pvVar8 == '\0') {
      local_88[0] = il2cpp_vm_Object_IsInst(local_res10,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (local_88[0] != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_88[0]);
      }
      return;
    }
    if (local_res10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = local_res10->klass;
    uVar2 = (pIVar4->_2).interface_offsets_count;
    if (uVar2 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      pSVar14 = pSVar12;
      do {
        if (pIVar5[(longlong)pSVar14].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator)
        {
          pVVar9 = pIVar4->vtable + (pIVar5[(longlong)pSVar14].offset + 1);
          goto label_1822d2615;
        }
        uVar13 = (short)pSVar14 + 1;
        pSVar14 = (System_String_o *)(ulonglong)uVar13;
      } while (uVar13 < uVar2);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_res10,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_1822d2615:
    pIVar10 = (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
    if (pIVar10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar10->klass->_1).element_class != (TypeInfo_System_Collections_DictionaryEntry->_1).element_class)
    {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar10,TypeInfo_System_Collections_DictionaryEntry);
    }
    puVar11 = il2cpp_object_unbox(pIVar10);
    pSVar14 = (System_String_o *)puVar11[1];
    setting = pSVar12;
    if (pSVar14 != (System_String_o *)0x0) {
      bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
      if (((pSVar14->klass->_2).typeHierarchyDepth < bVar1) ||
         (setting = pSVar14,
         (pSVar14->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
         (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar14);
      }
    }
    pSVar14 = (System_String_o *)*puVar11;
    if (pSVar14 != (System_String_o *)0x0) {
      if (pSVar14->klass == g_data_184354e50) {
        pSVar12 = pSVar14;
      }
      if (pSVar12 == (System_String_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
    }
    if (setting == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    left = System_Object__GetType((Il2CppObject *)setting,(MethodInfo *)0x0);
    handle = TypeRef_Settings_KeybindSetting;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    right = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    bVar6 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                      ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)left,
                       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)right,
                       (MethodInfo_841F20 *)0x0);
    if (bVar6) {
      pSVar3 = (container->fields).Settings;
      if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar7 = System_Collections_Specialized_OrderedDictionary__get_Count(pSVar3,(MethodInfo *)0x0);
      lVar15 = 0x28;
      if (iVar7 / 2 <= iVar16) {
        lVar15 = 0x30;
      }
      parent = *(UnityEngine_Transform_o **)((longlong)&__this->klass + lVar15);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar12 = UI_UIManager__GetLocale
                          (cat,sub,pSVar12,"","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateKeybindSetting
                (parent,style,(Settings_BaseSetting_o *)setting,pSVar12,local_res18,"",
                 120.0,35.0,2,(MethodInfo *)0x0);
      iVar16 = iVar16 + 1;
    }
  } while( true );
}


// UI.MapEditorSettingsKeybindsPanel$$.ctor
// il2cpp: void UI_MapEditorSettingsKeybindsPanel___ctor (UI_MapEditorSettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void
UI_MapEditorSettingsKeybindsPanel___ctor(UI_MapEditorSettingsKeybindsPanel_o* __this, MethodInfo* method)

{
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


