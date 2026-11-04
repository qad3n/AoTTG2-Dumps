// Type: UI.RoleSpritePickPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/RoleSpritePickPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.RoleSpritePickPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_RoleSpritePickPopup___c__DisplayClass21_0___ctor (UI_RoleSpritePickPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_RoleSpritePickPopup___c__DisplayClass21_0___ctor(UI_RoleSpritePickPopup___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.RoleSpritePickPopup.<>c__DisplayClass21_0$$<CreateItem>b__0
// il2cpp: bool UI_RoleSpritePickPopup___c__DisplayClass21_0___CreateItem_b__0 (UI_RoleSpritePickPopup___c__DisplayClass21_0_o* __this, PatreonEffects_RoleSpriteDefinition_o definition, const MethodInfo* method);
// 0x1821d09c0

bool UI_RoleSpritePickPopup___c__DisplayClass21_0___CreateItem_b__0
               (UI_RoleSpritePickPopup___c__DisplayClass21_0_o *__this,
               PatreonEffects_RoleSpriteDefinition_o *definition,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__op_Equality((definition->fields).RoleName,(__this->fields).value,(MethodInfo *)0x0);
  return bVar1;
}


// UI.RoleSpritePickPopup.<>c__DisplayClass21_0$$<CreateItem>b__1
// il2cpp: void UI_RoleSpritePickPopup___c__DisplayClass21_0___CreateItem_b__1 (UI_RoleSpritePickPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821d09e0

void UI_RoleSpritePickPopup___c__DisplayClass21_0___CreateItem_b__1
               (UI_RoleSpritePickPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UI_RoleSpritePickPopup_o *pUVar2;
  System_String_o *value;
  UnityEngine_Events_UnityAction_o *pUVar3;
  bool bVar4;
  System_String_o *pSVar5;
  
  pTVar1 = (__this->fields).tmp;
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    pUVar2 = (__this->fields).__4__this;
    value = (__this->fields).value;
    pSVar5 = (*(pTVar1->klass->vtable)._65_get_text.methodPtr)
                       (pTVar1,(pTVar1->klass->vtable)._65_get_text.method);
    if (pUVar2 != (UI_RoleSpritePickPopup_o *)0x0) {
      if (Il2CppMethodInitialized_184346f3b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
        il2cpp_codegen_initialize_runtime_metadata(&"None");
        Il2CppMethodInitialized_184346f3b = '\x01';
      }
      if ((pUVar2->fields)._setting != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)(pUVar2->fields)._setting,(Il2CppObject *)value,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      }
      pTVar1 = (pUVar2->fields)._label;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pTVar1 = (pUVar2->fields)._label;
        bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (bVar4) {
          pSVar5 = "None";
        }
        if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1821d0b07;
        (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
                  (pTVar1,pSVar5,(pTVar1->klass->vtable)._66_set_text.method);
      }
      pUVar3 = (pUVar2->fields)._onSelect;
      if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar3->fields).invoke_impl)((pUVar3->fields).method_code,(pUVar3->fields).method);
      }
      (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
      return;
    }
  }
label_1821d0b07:
  ThrowNullReferenceException();
}


// UI.RoleSpritePickPopup$$get_Title
// il2cpp: System_String_o* UI_RoleSpritePickPopup__get_Title (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_RoleSpritePickPopup__get_Title(UI_RoleSpritePickPopup_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.RoleSpritePickPopup$$get_Width
// il2cpp: float UI_RoleSpritePickPopup__get_Width (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x1821c7920

float UI_RoleSpritePickPopup__get_Width(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 760.0;
}


// UI.RoleSpritePickPopup$$get_Height
// il2cpp: float UI_RoleSpritePickPopup__get_Height (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x1821c7910

float UI_RoleSpritePickPopup__get_Height(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 620.0;
}


// UI.RoleSpritePickPopup$$get_ScrollBar
// il2cpp: bool UI_RoleSpritePickPopup__get_ScrollBar (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_RoleSpritePickPopup__get_ScrollBar(UI_RoleSpritePickPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.RoleSpritePickPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_RoleSpritePickPopup__get_HorizontalPadding (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_RoleSpritePickPopup__get_HorizontalPadding(UI_RoleSpritePickPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.RoleSpritePickPopup$$get_VerticalPadding
// il2cpp: int32_t UI_RoleSpritePickPopup__get_VerticalPadding (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_RoleSpritePickPopup__get_VerticalPadding(UI_RoleSpritePickPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.RoleSpritePickPopup$$get_VerticalSpacing
// il2cpp: float UI_RoleSpritePickPopup__get_VerticalSpacing (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x1820b9980

float
UI_RoleSpritePickPopup__get_VerticalSpacing(UI_RoleSpritePickPopup_o* __this, MethodInfo* method)

{
  return 10.0;
}


// UI.RoleSpritePickPopup$$Setup
// il2cpp: void UI_RoleSpritePickPopup__Setup (UI_RoleSpritePickPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821c7580

void UI_RoleSpritePickPopup__Setup(UI_RoleSpritePickPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_184346f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184346f37 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)(__this->klass->vtable)._22_Hide.method,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,__this_01,(MethodInfo *)0x0);
  return;
}


// UI.RoleSpritePickPopup$$Show
// il2cpp: void UI_RoleSpritePickPopup__Show (UI_RoleSpritePickPopup_o* __this, Settings_StringSetting_o* setting, TMPro_TextMeshProUGUI_o* label, UnityEngine_Events_UnityAction_o* onSelect, const MethodInfo* method);
// 0x1821c76b0
// eh: try 0x1821c77c0..0x1821c77fb -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c77bd: nop dword ptr [rax]
// asm:   0x1821c780c: mov rdx, qword ptr [rip + 0x1eb8cd5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x1821c7813: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821c7818: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821c781d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821c7822: test rcx, rcx
// asm:   0x1821c7825: jne 0x1821c7880
// asm:   0x1821c7827: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x1821c7880: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_RoleSpritePickPopup__Show
               (UI_RoleSpritePickPopup_o *__this,Settings_StringSetting_o *setting,
               TMPro_TextMeshProUGUI_o *label,UnityEngine_Events_UnityAction_o *onSelect,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  UnityEngine_Object_o *obj;
  bool bVar3;
  undefined1 local_60 [16];
  UnityEngine_Object_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  UnityEngine_Object_o *local_38;
  
  if (Il2CppMethodInitialized_184346f38 == '\0') {
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
    Il2CppMethodInitialized_184346f38 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (UnityEngine_Object_o *)0x0;
  (__this->fields)._setting = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting,setting);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,label);
  (__this->fields)._onSelect = onSelect;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelect,onSelect);
  pSVar2 = (__this->fields)._items;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)pSVar2,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      obj = local_38;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
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
      UI_RoleSpritePickPopup__BuildItems(__this,(MethodInfo *)0x0);
      UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.RoleSpritePickPopup$$BuildItems
// il2cpp: void UI_RoleSpritePickPopup__BuildItems (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x1821c6630
// eh: try 0x1821c67c0..0x1821c6945 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c676c: nop dword ptr [rax]
// asm:   0x1821c67b9: nop dword ptr [rax]
// asm:   0x1821c691b: lea rcx, [rsp + 0x40]
// asm:   0x1821c6920: call 0x180611640  ; il2cpp_runtime_helper_180611640()
// asm:   0x1821c6925: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821c692a: test rcx, rcx
// asm:   0x1821c692d: jne 0x1821c6945
// asm:   0x1821c6945: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void UI_RoleSpritePickPopup__BuildItems(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  undefined8 *puVar7;
  ushort uVar8;
  ulonglong uVar10;
  Il2CppObject *local_res8 [4];
  Il2CppObject **local_48;
  undefined1 local_40 [32];
  ulonglong uVar9;
  
  if (Il2CppMethodInitialized_184346f39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_RoleSpriteDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_RoleSpriteDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184346f39 = '\x01';
  }
  uVar10 = 0;
  local_res8[0] = (Il2CppObject *)0x0;
  themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x1a,120.0,20.0,themePanel,(MethodInfo *)0x0);
  UI_RoleSpritePickPopup__CreateItem
            (__this,__this_00,"None",(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8)
             ,(MethodInfo *)0x0);
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  pIVar5 = (Il2CppObject *)
           PatreonEffects_RoleSpriteHelpers__GetEligibleRoleSprites
                     ((Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
  if (pIVar5 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = pIVar5->klass;
  uVar1 = (pIVar2->_2).interface_offsets_count;
  if (uVar1 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    uVar9 = uVar10;
    do {
      if (pIVar3[uVar9].interfaceType ==
          (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_RoleSpriteDefinition) {
        pVVar6 = pIVar2->vtable + pIVar3[uVar9].offset;
        goto label_1821c6796;
      }
      uVar8 = (short)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < uVar1);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar5,(Il2CppClass *)
                             TypeInfo_System_Collections_Generic_IEnumerable_RoleSpriteDefinition,0);
label_1821c6796:
  local_res8[0] = (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
  local_48 = local_res8;
  do {
    pIVar5 = local_res8[0];
    if (local_res8[0] == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_res8[0]->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      uVar9 = uVar10;
      do {
        if (pIVar3[uVar9].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar6 = pIVar2->vtable + pIVar3[uVar9].offset;
          goto label_1821c6826;
        }
        uVar8 = (short)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < uVar1);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_res8[0],(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_1821c6826:
    bVar4 = (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
    pIVar5 = local_res8[0];
    if (!bVar4) {
      il2cpp_runtime_helper_180611640(&local_48);
      return;
    }
    if (local_res8[0] == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_res8[0]->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      uVar9 = uVar10;
      do {
        if (pIVar3[uVar9].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_RoleSpriteDefinition) {
          pVVar6 = pIVar2->vtable + pIVar3[uVar9].offset;
          goto label_1821c6892;
        }
        uVar8 = (short)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < uVar1);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_res8[0],
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_RoleSpriteDefinition,0)
    ;
label_1821c6892:
    puVar7 = (undefined8 *)(*pVVar6->methodPtr)(local_40,pIVar5,pVVar6->method);
    UI_RoleSpritePickPopup__CreateItem
              (__this,__this_00,(System_String_o *)*puVar7,(System_String_o *)*puVar7,(MethodInfo *)0x0);
  } while( true );
}


// UI.RoleSpritePickPopup$$CreateItem
// il2cpp: void UI_RoleSpritePickPopup__CreateItem (UI_RoleSpritePickPopup_o* __this, UI_ElementStyle_o* style, System_String_o* displayName, System_String_o* value, const MethodInfo* method);
// 0x1821c6960
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c72b0: mov rax, qword ptr [rip + 0x1ed6711]  ; "None"
// asm:   0x1821c72b7: jmp 0x1821c7355

void UI_RoleSpritePickPopup__CreateItem
               (UI_RoleSpritePickPopup_o *__this,UI_ElementStyle_o *style,System_String_o *displayName,
               System_String_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  PatreonEffects_RoleSpriteDefinition_array *source;
  UnityEngine_Events_UnityEvent_o *__this_01;
  MethodInfo *pMVar4;
  Il2CppType *handle;
  bool bVar5;
  UI_RoleSpritePickPopup___c__DisplayClass21_0_o *object;
  System_Type_array *pSVar6;
  System_Type_o *pSVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_UI_LayoutElement_o *pUVar11;
  UnityEngine_UI_Image_o *pUVar12;
  UnityEngine_UI_Button_o *__this_03;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_RectTransform_o *__this_05;
  TMPro_TextMeshProUGUI_o *pTVar13;
  TMPro_TMP_FontAsset_o *value_00;
  TMPro_TMP_SpriteAsset_o *value_01;
  System_Predicate_T__o *__this_06;
  System_String_o *pSVar14;
  UnityEngine_Events_UnityAction_o *__this_07;
  float local_res20 [2];
  System_String_o *local_a8;
  undefined8 uStack_a0;
  UnityEngine_UI_ColorBlock_o local_98;
  
  if (Il2CppMethodInitialized_184346f3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_First_RoleSpriteDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_RoleSpriteDefinition_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_SpriteAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_RoleSpritePickPopup_c__DisplayClass21_0_CreateItem_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_RoleSpritePickPopup_c__DisplayClass21_0_CreateItem_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_RoleSpritePickPopup_c__DisplayClass21_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"<sprite={0}> {1}");
    il2cpp_codegen_initialize_runtime_metadata(&"RoleSpriteButton");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/Vegur-Regular-SDF");
    Il2CppMethodInitialized_184346f3a = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_RoleSpritePickPopup_c__DisplayClass21_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_RoleSpritePickPopup___c__DisplayClass21_0_o *)0x0) {
    (object->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(object->fields).value,value);
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    pSVar6 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,5);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar7 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (pSVar6 != (System_Type_array *)0x0) {
      if ((pSVar7 != (System_Type_o *)0x0) &&
         (pIVar8 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar7,(((pSVar6->obj).klass)->_1).element_class),
         pIVar8 == (Il2CppObject *)0x0)) {
        pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
      }
      if ((int)pSVar6->max_length != 0) {
        pSVar6->m_Items[0] = pSVar7;
        Il2CppCodeGenWriteBarrier(pSVar6->m_Items,pSVar7);
        pSVar7 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
        if ((pSVar7 != (System_Type_o *)0x0) &&
           (pIVar8 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar7,(((pSVar6->obj).klass)->_1).element_class)
           , pIVar8 == (Il2CppObject *)0x0)) {
          pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
        }
        if (1 < (uint)pSVar6->max_length) {
          pSVar6->m_Items[1] = pSVar7;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1,pSVar7);
          pSVar7 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
          if ((pSVar7 != (System_Type_o *)0x0) &&
             (pIVar8 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar7,(((pSVar6->obj).klass)->_1).element_class),
             pIVar8 == (Il2CppObject *)0x0)) {
            pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
          }
          if (2 < (uint)pSVar6->max_length) {
            pSVar6->m_Items[2] = pSVar7;
            Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 2,pSVar7);
            pSVar7 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
            if ((pSVar7 != (System_Type_o *)0x0) &&
               (pIVar8 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar7,(((pSVar6->obj).klass)->_1).element_class),
               pIVar8 == (Il2CppObject *)0x0)) {
              pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
            }
            if (3 < (uint)pSVar6->max_length) {
              pSVar6->m_Items[3] = pSVar7;
              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 3,pSVar7);
              pSVar7 = System_Type__GetTypeFromHandle
                                 ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,
                                  (MethodInfo *)0x0);
              if ((pSVar7 != (System_Type_o *)0x0) &&
                 (pIVar8 = il2cpp_vm_Object_IsInst
                                     ((Il2CppObject *)pSVar7,(((pSVar6->obj).klass)->_1).element_class),
                 pIVar8 == (Il2CppObject *)0x0)) {
                pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
              }
              if (4 < (uint)pSVar6->max_length) {
                pSVar6->m_Items[4] = pSVar7;
                Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 4,pSVar7);
                __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                UnityEngine_GameObject___ctor_2f1abe0
                          (__this_02,"RoleSpriteButton",pSVar6,(MethodInfo *)0x0);
                if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar9 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                  pUVar10 = (__this->fields).SinglePanel;
                  if ((pUVar10 != (UnityEngine_Transform_o *)0x0) &&
                     (pUVar10 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0),
                     pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__SetParent_2f5a7e0(pUVar9,pUVar10,false,(MethodInfo *)0x0);
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
                          if ((uint)pUVar3->max_length <= uVar2) goto label_1821c745c;
                          pUVar3->m_Items[(int)uVar2] = __this_02;
                          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,__this_02);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this_00,
                                     (Il2CppObject *)__this_02,
                                     (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
                        }
                        pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                            (__this_02,
                                             (MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                        if (pUVar11 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                          (*(pUVar11->klass->vtable)._36_set_preferredWidth.methodPtr)
                                    (pUVar11,680.0,(pUVar11->klass->vtable)._36_set_preferredWidth.method);
                          (*(pUVar11->klass->vtable)._38_set_preferredHeight.methodPtr)
                                    (pUVar11,42.0,(pUVar11->klass->vtable)._38_set_preferredHeight.method);
                          pUVar12 = UnityEngine_GameObject__GetComponent_object_
                                              (__this_02,
                                               (MethodInfo_6F5650 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                          if (pUVar12 != (UnityEngine_UI_Image_o *)0x0) {
                            local_a8 = (System_String_o *)0x3f8000003f800000;
                            uStack_a0._0_4_ = 1.0;
                            uStack_a0._4_4_ = 0.03;
                            (*(pUVar12->klass->vtable)._23_set_color.methodPtr)
                                      (pUVar12,(UnityEngine_Color_o *)&local_a8,
                                       (pUVar12->klass->vtable)._23_set_color.method);
                            __this_03 = UnityEngine_GameObject__GetComponent_object_
                                                  (__this_02,
                                                   (MethodInfo_6F5650 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                            if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
                            }
                            if (__this_03 != (UnityEngine_UI_Button_o *)0x0) {
                              local_98.fields.m_ColorMultiplier = 1.0;
                              local_98.fields.m_FadeDuration = 0.1;
                              local_98.fields.m_NormalColor.fields.r = 1.0;
                              local_98.fields.m_NormalColor.fields.g = 1.0;
                              local_98.fields.m_NormalColor.fields.b = 1.0;
                              local_98.fields.m_NormalColor.fields.a = 0.08;
                              local_98.fields.m_HighlightedColor.fields.r = 1.0;
                              local_98.fields.m_HighlightedColor.fields.g = 1.0;
                              local_98.fields.m_HighlightedColor.fields.b = 1.0;
                              local_98.fields.m_HighlightedColor.fields.a = 0.16;
                              local_98.fields.m_PressedColor.fields.r = 1.0;
                              local_98.fields.m_PressedColor.fields.g = 1.0;
                              local_98.fields.m_PressedColor.fields.b = 1.0;
                              local_98.fields.m_PressedColor.fields.a = 0.24;
                              local_98.fields.m_SelectedColor.fields.r = 1.0;
                              local_98.fields.m_SelectedColor.fields.g = 1.0;
                              local_98.fields.m_SelectedColor.fields.b = 1.0;
                              local_98.fields.m_SelectedColor.fields.a = 0.16;
                              local_98.fields.m_DisabledColor.fields.r = 1.0;
                              local_98.fields.m_DisabledColor.fields.g = 1.0;
                              local_98.fields.m_DisabledColor.fields.b = 1.0;
                              local_98.fields.m_DisabledColor.fields.a = 0.05;
                              UnityEngine_UI_Selectable__set_colors
                                        ((UnityEngine_UI_Selectable_o *)__this_03,&local_98,(MethodInfo *)0x0)
                              ;
                              pSVar6 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
                              pSVar7 = System_Type__GetTypeFromHandle
                                                 ((System_RuntimeTypeHandle_o)
                                                  TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
                              if (pSVar6 != (System_Type_array *)0x0) {
                                if ((pSVar7 != (System_Type_o *)0x0) &&
                                   (pIVar8 = il2cpp_vm_Object_IsInst
                                                       ((Il2CppObject *)pSVar7,
                                                        (((pSVar6->obj).klass)->_1).element_class),
                                   pIVar8 == (Il2CppObject *)0x0)) {
                                  pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                                  il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
                                }
                                if ((int)pSVar6->max_length != 0) {
                                  pSVar6->m_Items[0] = pSVar7;
                                  Il2CppCodeGenWriteBarrier(pSVar6->m_Items,pSVar7);
                                  pSVar7 = System_Type__GetTypeFromHandle
                                                     ((System_RuntimeTypeHandle_o)
                                                      TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
                                  if ((pSVar7 != (System_Type_o *)0x0) &&
                                     (pIVar8 = il2cpp_vm_Object_IsInst
                                                         ((Il2CppObject *)pSVar7,
                                                          (((pSVar6->obj).klass)->_1).element_class),
                                     pIVar8 == (Il2CppObject *)0x0)) {
                                    pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                                    il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
                                  }
                                  if (1 < (uint)pSVar6->max_length) {
                                    pSVar6->m_Items[1] = pSVar7;
                                    Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1,pSVar7);
                                    pSVar7 = System_Type__GetTypeFromHandle
                                                       ((System_RuntimeTypeHandle_o)
                                                        TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
                                    if ((pSVar7 != (System_Type_o *)0x0) &&
                                       (pIVar8 = il2cpp_vm_Object_IsInst
                                                           ((Il2CppObject *)pSVar7,
                                                            (((pSVar6->obj).klass)->_1).element_class),
                                       pIVar8 == (Il2CppObject *)0x0)) {
                                      pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                                      il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
                                    }
                                    if (2 < (uint)pSVar6->max_length) {
                                      pSVar6->m_Items[2] = pSVar7;
                                      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 2,pSVar7);
                                      __this_04 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                                      UnityEngine_GameObject___ctor_2f1abe0
                                                (__this_04,"Text",pSVar6,(MethodInfo *)0x0);
                                      if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
                                        pUVar10 = UnityEngine_GameObject__get_transform
                                                            (__this_04,(MethodInfo *)0x0);
                                        pUVar9 = UnityEngine_GameObject__get_transform
                                                           (__this_02,(MethodInfo *)0x0);
                                        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                          UnityEngine_Transform__SetParent_2f5a7e0
                                                    (pUVar10,pUVar9,false,(MethodInfo *)0x0);
                                          __this_05 = UnityEngine_GameObject__GetComponent_object_
                                                                (__this_04,
                                                                 (MethodInfo_6F5650 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                            il2cpp_codegen_initialize_runtime_metadata
                                                      (&TypeInfo_UnityEngine_Vector2);
                                            Il2CppMethodInitialized_18433e3c9 = '\x01';
                                          }
                                          if (__this_05 != (UnityEngine_RectTransform_o *)0x0) {
                                            UnityEngine_RectTransform__set_anchorMin
                                                      (__this_05,
                                                       (UnityEngine_Vector2_o)
                                                       (TypeInfo_UnityEngine_Vector2->static_fields->
                                                       zeroVector).fields,(MethodInfo *)0x0);
                                            if (Il2CppMethodInitialized_184341f36 == '\0') {
                                              il2cpp_codegen_initialize_runtime_metadata
                                                        (&TypeInfo_UnityEngine_Vector2);
                                              Il2CppMethodInitialized_184341f36 = '\x01';
                                            }
                                            UnityEngine_RectTransform__set_anchorMax
                                                      (__this_05,
                                                       (UnityEngine_Vector2_o)
                                                       (TypeInfo_UnityEngine_Vector2->static_fields->oneVector
                                                       ).fields,(MethodInfo *)0x0);
                                            UnityEngine_RectTransform__set_offsetMin
                                                      (__this_05,(UnityEngine_Vector2_o)0x41600000,
                                                       (MethodInfo *)0x0);
                                            UnityEngine_RectTransform__set_offsetMax
                                                      (__this_05,(UnityEngine_Vector2_o)0xc1600000,
                                                       (MethodInfo *)0x0);
                                            pTVar13 = UnityEngine_GameObject__GetComponent_object_
                                                                (__this_04,
                                                                 (MethodInfo_6F5650 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI
                                                       );
                                            (object->fields).tmp = pTVar13;
                                            Il2CppCodeGenWriteBarrier(&(object->fields).tmp,pTVar13);
                                            pTVar13 = (object->fields).tmp;
                                            if (((pTVar13 != (TMPro_TextMeshProUGUI_o *)0x0) &&
                                                (TMPro_TMP_Text__set_richText
                                                           ((TMPro_TMP_Text_o *)pTVar13,true,(MethodInfo *)0x0
                                                           ), style != (UI_ElementStyle_o *)0x0)) &&
                                               (pTVar13 = (object->fields).tmp,
                                               pTVar13 != (TMPro_TextMeshProUGUI_o *)0x0)) {
                                              TMPro_TMP_Text__set_fontSize
                                                        ((TMPro_TMP_Text_o *)pTVar13,
                                                         (float)(style->fields).FontSize,(MethodInfo *)0x0);
                                              pTVar13 = (object->fields).tmp;
                                              if (pTVar13 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                TMPro_TMP_Text__set_fontStyle
                                                          ((TMPro_TMP_Text_o *)pTVar13,1,(MethodInfo *)0x0);
                                                pTVar13 = (object->fields).tmp;
                                                if (pTVar13 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                  TMPro_TMP_Text__set_alignment
                                                            ((TMPro_TMP_Text_o *)pTVar13,0x1001,
                                                             (MethodInfo *)0x0);
                                                  pTVar13 = (object->fields).tmp;
                                                  if (pTVar13 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                    local_a8 = (System_String_o *)0x3f8000003f800000;
                                                    uStack_a0._0_4_ = 1.0;
                                                    uStack_a0._4_4_ = 1.0;
                                                    (*(pTVar13->klass->vtable)._23_set_color.methodPtr)
                                                              (pTVar13,(UnityEngine_Color_o *)&local_a8,
                                                               (pTVar13->klass->vtable)._23_set_color.method);
                                                    value_00 = UnityEngine_Resources__Load_object_
                                                                         ("UI/Fonts/Vegur-Regular-SDF",
                                                                          (MethodInfo_7965D0 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
                                                    if ((TypeInfo_UnityEngine_Object->_2).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      il2cpp_codegen_runtime_class_init
                                                                ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                                    }
                                                    bVar5 = UnityEngine_Object__op_Inequality
                                                                      ((UnityEngine_Object_o *)value_00,
                                                                       (UnityEngine_Object_o *)0x0,
                                                                       (MethodInfo *)0x0);
                                                    if (bVar5) {
                                                      pTVar13 = (object->fields).tmp;
                                                      if (pTVar13 == (TMPro_TextMeshProUGUI_o *)0x0)
                                                      goto label_1821c73d6;
                                                      TMPro_TMP_Text__set_font
                                                                ((TMPro_TMP_Text_o *)pTVar13,value_00,
                                                                 (MethodInfo *)0x0);
                                                    }
                                                    value_01 = UnityEngine_Resources__Load_object_
                                                                         ("UI/Icons/Profile/ProfileIconsAtlas_256",
                                                                          (MethodInfo_7965D0 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_Resources_Load_TMP_SpriteAsset);
                                                    if ((TypeInfo_UnityEngine_Object->_2).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      il2cpp_codegen_runtime_class_init
                                                                ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                                    }
                                                    bVar5 = UnityEngine_Object__op_Inequality
                                                                      ((UnityEngine_Object_o *)value_01,
                                                                       (UnityEngine_Object_o *)0x0,
                                                                       (MethodInfo *)0x0);
                                                    if (bVar5) {
                                                      pTVar13 = (object->fields).tmp;
                                                      if (pTVar13 == (TMPro_TextMeshProUGUI_o *)0x0)
                                                      goto label_1821c73d6;
                                                      TMPro_TMP_Text__set_spriteAsset
                                                                ((TMPro_TMP_Text_o *)pTVar13,value_01,
                                                                 (MethodInfo *)0x0);
                                                    }
                                                    pTVar13 = (object->fields).tmp;
                                                    bVar5 = System_String__IsNullOrEmpty
                                                                      ((object->fields).value,
                                                                       (MethodInfo *)0x0);
                                                    pSVar14 = "None";
                                                    if (!bVar5) {
                                                      if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        il2cpp_codegen_runtime_class_init
                                                                  ((Il2CppClass *)
                                                                   TypeInfo_PatreonEffects_RoleSpriteHelpers);
                                                      }
                                                      source = TypeInfo_PatreonEffects_RoleSpriteHelpers->
                                                               static_fields->Definitions;
                                                      __this_06 = (System_Predicate_T__o *)
                                                                  il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                                                                                                          
                                                       TypeInfo_System_Func_RoleSpriteDefinition_bool);
                                                      System_Func_RoleSpriteDefinition__bool____ctor
                                                                (__this_06,(Il2CppObject *)object,
                                                                 (intptr_t)
                                                                                                                                  
                                                       MethodInfo_UI_RoleSpritePickPopup_c__DisplayClass21_0_CreateItem_b__0
                                                       ,(MethodInfo_B61280 *)0x0);
                                                      System_Linq_Enumerable__First_RoleSpriteDefinition_
                                                                ((PatreonEffects_RoleSpriteDefinition_o *)
                                                                 &local_a8,
                                                                 (
                                                       System_Collections_Generic_IEnumerable_TSource__o *)
                                                       source,(System_Func_TSource__bool__o *)__this_06,
                                                       (MethodInfo_6BE2D0 *)
                                                       MethodInfo_System_Linq_Enumerable_First_RoleSpriteDefinition
                                                       );
                                                      local_res20[0] = (float)uStack_a0;
                                                      pIVar8 = il2cpp_value_box(g_data_184354e08,local_res20);
                                                      pSVar14 = System_String__Format_196d440
                                                                          ("<sprite={0}> {1}",pIVar8,
                                                                           (Il2CppObject *)displayName,
                                                                           (MethodInfo *)0x0);
                                                    }
                                                    if (pTVar13 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                      (*(pTVar13->klass->vtable)._66_set_text.methodPtr)
                                                                (pTVar13,pSVar14,
                                                                 (pTVar13->klass->vtable)._66_set_text.method)
                                                      ;
                                                      __this_01 = (UnityEngine_Events_UnityEvent_o *)
                                                                  (__this_03->fields).m_OnClick;
                                                      __this_07 = il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                                                                                                          
                                                       TypeInfo_UnityEngine_Events_UnityAction);
                                                      UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                                ((
                                                       UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                       __this_07,(Il2CppObject *)object,
                                                       (intptr_t)
                                                       MethodInfo_UI_RoleSpritePickPopup_c__DisplayClass21_0_CreateItem_b__1
                                                       ,(MethodInfo *)0x0);
                                                      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0)
                                                      {
                                                        UnityEngine_Events_UnityEvent__AddListener
                                                                  (__this_01,__this_07,(MethodInfo *)0x0);
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
                                      goto label_1821c73d6;
                                    }
                                  }
                                }
                                goto label_1821c745c;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto label_1821c73d6;
              }
            }
          }
        }
      }
label_1821c745c:
      ThrowIndexOutOfRangeException();
    }
  }
label_1821c73d6:
  ThrowNullReferenceException();
}


// UI.RoleSpritePickPopup$$OnSelect
// il2cpp: void UI_RoleSpritePickPopup__OnSelect (UI_RoleSpritePickPopup_o* __this, System_String_o* value, System_String_o* displayText, const MethodInfo* method);
// 0x1821c7470

void UI_RoleSpritePickPopup__OnSelect
               (UI_RoleSpritePickPopup_o *__this,System_String_o *value,System_String_o *displayText,
               MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346f3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184346f3b = '\x01';
  }
  if ((__this->fields)._setting != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)(__this->fields)._setting,(Il2CppObject *)value,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pTVar1 = (__this->fields)._label;
    bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar3) {
      displayText = "None";
    }
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
      ThrowNullReferenceException();
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
// 0x1821c7890

void UI_RoleSpritePickPopup___ctor(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_184346f3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_184346f3c = '\x01';
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


