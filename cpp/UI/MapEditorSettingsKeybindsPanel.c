// Type: UI.MapEditorSettingsKeybindsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/MapEditorSettingsKeybindsPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsKeybindsPanel.cs
// --------------------------------

// UI.MapEditorSettingsKeybindsPanel$$get_DoublePanel
// il2cpp: bool UI_MapEditorSettingsKeybindsPanel__get_DoublePanel (UI_MapEditorSettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x5d9adf0

bool UI_MapEditorSettingsKeybindsPanel__get_DoublePanel
               (UI_MapEditorSettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MapEditorSettingsKeybindsPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorSettingsKeybindsPanel__get_ScrollBar (UI_MapEditorSettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x5d9ae00

bool UI_MapEditorSettingsKeybindsPanel__get_ScrollBar
               (UI_MapEditorSettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MapEditorSettingsKeybindsPanel$$Setup
// il2cpp: void UI_MapEditorSettingsKeybindsPanel__Setup (UI_MapEditorSettingsKeybindsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d9ae10

void UI_MapEditorSettingsKeybindsPanel__Setup
               (UI_MapEditorSettingsKeybindsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UI_BasePanel_o *pUVar2;
  System_String_o *cat;
  Settings_InputSettings_o *pSVar3;
  Settings_MapEditorInputSettings_o *container;
  UI_BaseMenu_o *pUVar4;
  MethodInfo *in_RAX;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  
  if (Il2CppMethodInitialized_07548081 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorSettingsPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    Il2CppMethodInitialized_07548081 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).Parent;
  if (pUVar2 != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_MapEditorSettingsPopup->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorSettingsPopup)) {
      il2cpp_codegen_raise_invalid_cast_exception();
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
                   pSVar5,__this_00,in_RAX);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorSettingsKeybindsPanel$$CreateKeybindSettings
// il2cpp: void UI_MapEditorSettingsKeybindsPanel__CreateKeybindSettings (UI_MapEditorSettingsKeybindsPanel_o* __this, Settings_BaseSettingsContainer_o* container, UI_KeybindPopup_o* popup, System_String_o* cat, System_String_o* sub, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x5d9afa0
// eh: try 0x5d9b0ef..0x5d9b40d -> pad 0x5d9b429 (+16 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5d9b445..0x5d9b44a -> pad 0x5d9b44f cleanup
// eh: try 0x5d9b452..0x5d9b45c -> pad 0x5d9b464 catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d9b0dd: nop dword ptr [rax]
// asm:   0x5d9b400: mov rdi, r14
// asm:   0x5d9b403: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d9b40d: jmp 0x5d9b42d
// asm:   0x5d9b40f: jmp 0x5d9b42d
// asm:   0x5d9b411: jmp 0x5d9b42d
// asm:   0x5d9b413: jmp 0x5d9b42d
// asm:   0x5d9b415: jmp 0x5d9b42d
// asm:   0x5d9b417: jmp 0x5d9b42d
// asm:   0x5d9b419: jmp 0x5d9b42d
// asm:   0x5d9b41b: jmp 0x5d9b42d
// asm:   0x5d9b41d: jmp 0x5d9b42d
// asm:   0x5d9b41f: jmp 0x5d9b42d
// asm:   0x5d9b421: jmp 0x5d9b42d
// asm:   0x5d9b423: jmp 0x5d9b42d
// asm:   0x5d9b425: jmp 0x5d9b42d
// asm:   0x5d9b427: jmp 0x5d9b42d
// asm:   0x5d9b429: jmp 0x5d9b42d
// asm:   0x5d9b42b: jmp 0x5d9b42d
// asm:   0x5d9b42d: mov rbx, rax
// asm:   0x5d9b430: cmp edx, 1
// asm:   0x5d9b433: jne 0x5d9b452
// asm:   0x5d9b435: mov rdi, rbx
// asm:   0x5d9b438: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d9b43d: mov r14, qword ptr [rax]
// asm:   0x5d9b440: mov qword ptr [rsp + 0x50], r14
// asm:   0x5d9b445: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d9b44a: jmp 0x5d9b32f
// asm:   0x5d9b44f: mov rbx, rax
// asm:   0x5d9b452: lea rdi, [rsp + 0x50]
// asm:   0x5d9b457: call 0x2fdd9e0  ; il2cpp_runtime_helper_02fdd9e0()
// asm:   0x5d9b45c: mov rdi, rbx
// asm:   0x5d9b45f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d9b464: mov rdi, rax
// asm:   0x5d9b467: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorSettingsKeybindsPanel__CreateKeybindSettings
               (UI_MapEditorSettingsKeybindsPanel_o *__this,Settings_BaseSettingsContainer_o *container,
               UI_KeybindPopup_o *popup,System_String_o *cat,System_String_o *sub,UI_ElementStyle_o *style,
               MethodInfo *method)

{
  byte bVar1;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Settings_BaseSetting_o *setting;
  UnityEngine_Transform_o *parent;
  Il2CppType *handle;
  bool bVar5;
  int32_t iVar6;
  VirtualInvokeData *pVVar7;
  Il2CppObject *pIVar8;
  undefined8 *puVar9;
  System_Type_o *left;
  System_Type_o *right;
  System_String_o *pSVar10;
  ulong uVar11;
  long lVar12;
  Il2CppObject *local_90;
  int local_84;
  Il2CppObject *local_80;
  UI_KeybindPopup_o *local_78;
  UI_ElementStyle_o *local_70;
  System_String_o *local_68;
  System_String_o *local_60;
  UI_MapEditorSettingsKeybindsPanel_o *local_58;
  Settings_BaseSettingsContainer_o *local_50;
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  local_78 = popup;
  local_70 = style;
  local_68 = cat;
  local_60 = sub;
  local_58 = __this;
  if (Il2CppMethodInitialized_07548082 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_DictionaryEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548082 = '\x01';
  }
  local_90 = (Il2CppObject *)0x0;
  local_80 = (Il2CppObject *)0x0;
  if (container == (Settings_BaseSettingsContainer_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (container->fields).Settings;
  local_50 = container;
  if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_90 = (Il2CppObject *)
             (*(pSVar2->klass->vtable)._22_GetEnumerator.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._22_GetEnumerator.method);
  local_48 = 0;
  local_40 = &local_90;
  local_38 = &local_80;
  local_84 = 0;
  do {
    pIVar8 = local_90;
    if (local_90 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_90->klass;
    uVar11 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar12) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar7 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
          goto label_05d9b113;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_90,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05d9b113:
    bVar5 = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
    pIVar8 = local_90;
    if (!bVar5) {
      pIVar8 = il2cpp_vm_Object_IsInst(local_90,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar8 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar3 = pIVar8->klass;
      uVar11 = (ulong)(pIVar3->_2).interface_offsets_count;
      local_80 = pIVar8;
      if (uVar11 == 0) goto label_05d9b38f;
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar12 = 0;
      break;
    }
    if (local_90 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_90->klass;
    uVar11 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar12) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar7 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar12) + 1);
          goto label_05d9b1a7;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_90,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05d9b1a7:
    pIVar8 = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
    if (pIVar8 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar8->klass->_1).element_class != (TypeInfo_System_Collections_DictionaryEntry->_1).element_class)
    {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar8);
    }
    puVar9 = il2cpp_vm_Object_Unbox(pIVar8);
    pSVar10 = (System_String_o *)*puVar9;
    setting = (Settings_BaseSetting_o *)puVar9[1];
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting
         )) {
        il2cpp_codegen_raise_invalid_cast_exception(setting);
      }
    }
    if ((pSVar10 != (System_String_o *)0x0) && (pSVar10->klass != g_data_07556758)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar10);
    }
    if (setting == (Settings_BaseSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    left = System_Object__GetType((Il2CppObject *)setting,(MethodInfo *)0x0);
    handle = TypeRef_Settings_KeybindSetting;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    right = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    bVar5 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
    if (bVar5) {
      pSVar2 = (local_50->fields).Settings;
      if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar6 = System_Collections_Specialized_OrderedDictionary__get_Count(pSVar2,(MethodInfo *)0x0);
      parent = (&(local_58->fields).DoublePanelLeft)[iVar6 / 2 <= local_84];
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar10 = UI_UIManager__GetLocale
                          (local_68,local_60,pSVar10,"","",
                           (MethodInfo *)style);
      style = (UI_ElementStyle_o *)"";
      UI_ElementFactory__CreateKeybindSetting
                (parent,local_70,setting,pSVar10,local_78,"",120.0,35.0,2,(MethodInfo *)0x0
                );
      local_84 = local_84 + 1;
    }
  } while( true );
  while (lVar12 = lVar12 + 0x10, uVar11 * 0x10 != lVar12) {
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_System_IDisposable) {
      pVVar7 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
      goto label_05d9b3ad;
    }
  }
label_05d9b38f:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar8,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05d9b3ad:
  (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
  return;
}


// UI.MapEditorSettingsKeybindsPanel$$.ctor
// il2cpp: void UI_MapEditorSettingsKeybindsPanel___ctor (UI_MapEditorSettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x5d9b470

void UI_MapEditorSettingsKeybindsPanel___ctor(UI_MapEditorSettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


