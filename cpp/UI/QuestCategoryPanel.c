// Type: UI.QuestCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/QuestCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestCategoryPanel.cs
// --------------------------------

// UI.QuestCategoryPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_QuestCategoryPanel__get_ThemePanel (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x5d5a070

System_String_o * UI_QuestCategoryPanel__get_ThemePanel(UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547f46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"QuestPopup");
    Il2CppMethodInitialized_07547f46 = '\x01';
  }
  return "QuestPopup";
}


// UI.QuestCategoryPanel$$get_VerticalSpacing
// il2cpp: float UI_QuestCategoryPanel__get_VerticalSpacing (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x5d5a0a0

float UI_QuestCategoryPanel__get_VerticalSpacing(UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.QuestCategoryPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_QuestCategoryPanel__get_HorizontalPadding (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x5d5a0b0

int32_t UI_QuestCategoryPanel__get_HorizontalPadding(UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.QuestCategoryPanel$$get_VerticalPadding
// il2cpp: int32_t UI_QuestCategoryPanel__get_VerticalPadding (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x5d5a0c0

int32_t UI_QuestCategoryPanel__get_VerticalPadding(UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.QuestCategoryPanel$$get_PanelAlignment
// il2cpp: int32_t UI_QuestCategoryPanel__get_PanelAlignment (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x5d5a0d0

int32_t UI_QuestCategoryPanel__get_PanelAlignment(UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.QuestCategoryPanel$$Setup
// il2cpp: void UI_QuestCategoryPanel__Setup (UI_QuestCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d59100

void UI_QuestCategoryPanel__Setup(UI_QuestCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  return;
}


// UI.QuestCategoryPanel$$CreateQuestItems
// il2cpp: void UI_QuestCategoryPanel__CreateQuestItems (UI_QuestCategoryPanel_o* __this, System_Collections_Generic_List_QuestItem__o* items, const MethodInfo* method);
// 0x5d59420
// eh: try 0x5d5965a..0x5d59eae -> pad 0x5d59fc7 (+97 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d59feb..0x5d59ff0 -> pad 0x5d5a013 cleanup
// eh: try 0x5d5a016..0x5d5a020 -> pad 0x5d5a028 catch (...) [compiler noexcept guard]
// asm: 120 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d59649: nop dword ptr [rax]
// asm:   0x5d59eb3: jmp 0x5d59fd3
// asm:   0x5d59eb8: jmp 0x5d59fd3
// asm:   0x5d59ebd: jmp 0x5d59fd3
// asm:   0x5d59ec2: jmp 0x5d59fd3
// asm:   0x5d59ec7: jmp 0x5d59fd3
// asm:   0x5d59ecc: jmp 0x5d59fd3
// asm:   0x5d59ed1: jmp 0x5d59fd3
// asm:   0x5d59ed6: jmp 0x5d59fd3
// asm:   0x5d59edb: jmp 0x5d59fd3
// asm:   0x5d59ee0: jmp 0x5d59fd3
// asm:   0x5d59ee5: jmp 0x5d59fd3
// asm:   0x5d59eea: jmp 0x5d59fd3
// asm:   0x5d59eef: jmp 0x5d59fd3
// asm:   0x5d59ef4: jmp 0x5d59fd3
// asm:   0x5d59ef9: jmp 0x5d59fd3
// asm:   0x5d59efe: jmp 0x5d59fd3
// asm:   0x5d59f03: jmp 0x5d59fd3
// asm:   0x5d59f08: jmp 0x5d59fd3
// asm:   0x5d59f0d: jmp 0x5d59fd3
// asm:   0x5d59f12: jmp 0x5d59fd3
// asm:   0x5d59f17: jmp 0x5d59fd3
// asm:   0x5d59f1c: jmp 0x5d59fd3
// asm:   0x5d59f21: jmp 0x5d59fd3
// asm:   0x5d59f26: jmp 0x5d59fd3
// asm:   0x5d59f2b: jmp 0x5d59fd3
// asm:   0x5d59f30: jmp 0x5d59fd3
// asm:   0x5d59f35: jmp 0x5d59fd3
// asm:   0x5d59f3a: jmp 0x5d59fd3
// asm:   0x5d59f3f: jmp 0x5d59fd3
// asm:   0x5d59f44: jmp 0x5d59fd3
// asm:   0x5d59f49: jmp 0x5d59fd3
// asm:   0x5d59f4e: jmp 0x5d59fd3
// asm:   0x5d59f53: jmp 0x5d59fd3
// asm:   0x5d59f55: jmp 0x5d59fd3
// asm:   0x5d59f57: jmp 0x5d59fd3
// asm:   0x5d59f59: jmp 0x5d59fd3
// asm:   0x5d59f5b: jmp 0x5d59fd3
// asm:   0x5d59f5d: jmp 0x5d59fd3
// asm:   0x5d59f5f: jmp 0x5d59fd3
// asm:   0x5d59f61: jmp 0x5d59fd3
// asm:   0x5d59f63: jmp 0x5d59fd3
// asm:   0x5d59f65: jmp 0x5d59fd3
// asm:   0x5d59f67: jmp 0x5d59fd3
// asm:   0x5d59f69: jmp 0x5d59fd3
// asm:   0x5d59f6b: jmp 0x5d59fd3
// asm:   0x5d59f6d: jmp 0x5d59fd3
// asm:   0x5d59f6f: jmp 0x5d59fd3
// asm:   0x5d59f71: jmp 0x5d59fd3
// asm:   0x5d59f73: jmp 0x5d59fd3
// asm:   0x5d59f75: jmp 0x5d59fd3
// asm:   0x5d59f77: jmp 0x5d59fd3
// asm:   0x5d59f79: jmp 0x5d59fd3
// asm:   0x5d59f7b: jmp 0x5d59fd3
// asm:   0x5d59f7d: jmp 0x5d59fd3
// asm:   0x5d59f7f: jmp 0x5d59fd3
// asm:   0x5d59f81: jmp 0x5d59fd3
// asm:   0x5d59f83: jmp 0x5d59fd3
// asm:   0x5d59f85: jmp 0x5d59fd3
// asm:   0x5d59f87: jmp 0x5d59fd3
// asm:   0x5d59f89: jmp 0x5d59fd3
// asm:   0x5d59f8b: jmp 0x5d59fd3
// asm:   0x5d59f8d: jmp 0x5d59fd3
// asm:   0x5d59f8f: jmp 0x5d59fd3
// asm:   0x5d59f91: jmp 0x5d59fd3
// asm:   0x5d59f93: jmp 0x5d59fd3
// asm:   0x5d59f95: jmp 0x5d59fd3
// asm:   0x5d59f97: jmp 0x5d59fd3
// asm:   0x5d59f99: jmp 0x5d59fd3
// asm:   0x5d59f9b: jmp 0x5d59fd3
// asm:   0x5d59f9d: jmp 0x5d59fd3
// asm:   0x5d59f9f: jmp 0x5d59fd3
// asm:   0x5d59fa1: jmp 0x5d59fd3
// asm:   0x5d59fa3: jmp 0x5d59fd3
// asm:   0x5d59fa5: jmp 0x5d59fd3
// asm:   0x5d59fa7: jmp 0x5d59fd3
// asm:   0x5d59fa9: jmp 0x5d59fd3
// asm:   0x5d59fab: jmp 0x5d59fd3
// asm:   0x5d59fad: jmp 0x5d59fd3
// asm:   0x5d59faf: jmp 0x5d59fd3
// asm:   0x5d59fb1: jmp 0x5d59fd3
// asm:   0x5d59fb3: jmp 0x5d59fd3
// asm:   0x5d59fb5: jmp 0x5d59fd3
// asm:   0x5d59fb7: jmp 0x5d59fd3
// asm:   0x5d59fb9: jmp 0x5d59fd3
// asm:   0x5d59fbb: jmp 0x5d59fd3
// asm:   0x5d59fbd: jmp 0x5d59fd3
// asm:   0x5d59fbf: jmp 0x5d59fd3
// asm:   0x5d59fc1: jmp 0x5d59fd3
// asm:   0x5d59fc3: jmp 0x5d59fd3
// asm:   0x5d59fc5: jmp 0x5d59fd3
// asm:   0x5d59fc7: jmp 0x5d59fd3
// asm:   0x5d59fc9: jmp 0x5d59fd3
// asm:   0x5d59fcb: jmp 0x5d59fd3
// asm:   0x5d59fcd: jmp 0x5d59fd3
// asm:   0x5d59fcf: jmp 0x5d59fd3
// asm:   0x5d59fd1: jmp 0x5d59fd3
// asm:   0x5d59fd3: mov rbx, rax
// asm:   0x5d59fd6: cmp edx, 1
// asm:   0x5d59fd9: jne 0x5d5a016
// asm:   0x5d59fdb: mov rdi, rbx
// asm:   0x5d59fde: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d59fe3: mov rbx, qword ptr [rax]
// asm:   0x5d59fe6: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d59feb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d59ff0: lea rax, [rip + 0x15347b9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x5d59ff7: mov rsi, qword ptr [rax]
// asm:   0x5d59ffa: mov rdi, rsp
// asm:   0x5d59ffd: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d5a002: test rbx, rbx
// asm:   0x5d5a005: je 0x5d59e01
// asm:   0x5d5a00b: mov rdi, rbx
// asm:   0x5d5a00e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d5a013: mov rbx, rax
// asm:   0x5d5a016: lea rdi, [rsp + 0x20]
// asm:   0x5d5a01b: call 0x2fdcb40  ; il2cpp_runtime_helper_02fdcb40()
// asm:   0x5d5a020: mov rdi, rbx
// asm:   0x5d5a023: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d5a028: mov rdi, rax
// asm:   0x5d5a02b: call 0x2ab61e0  ; __clang_call_terminate()

void UI_QuestCategoryPanel__CreateQuestItems
               (UI_QuestCategoryPanel_o *__this,System_Collections_Generic_List_QuestItem__o *items,
               MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Il2CppObject *item;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_RawImage_o *pUVar7;
  System_String_o *name;
  UnityEngine_Texture_o *value;
  UnityEngine_UI_Image_o *pUVar8;
  System_String_o *pSVar9;
  UnityEngine_UI_Text_o *pUVar10;
  UnityEngine_Texture2D_c **method_00;
  UI_QuestCategoryPanel_o *__this_00;
  UnityEngine_Color_o UVar11;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_48 [16];
  GameProgress_QuestItem_o *local_38;
  
  if (Il2CppMethodInitialized_07547f47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"ProgressBarFillColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/ProgressLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/ProgressBar/Background");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Quests/");
    il2cpp_codegen_initialize_runtime_metadata(&"QuestItem");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/ProgressBar/Fill Area/Fill");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/CheckIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/RewardLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"CheckColor");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"IconColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Border");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/Title");
    il2cpp_codegen_initialize_runtime_metadata(&"ProgressBarBackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/MainMenu/QuestItemPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundColor");
    Il2CppMethodInitialized_07547f47 = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  if (items == (System_Collections_Generic_List_QuestItem__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)items,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
  local_68.fields._current = (Il2CppObject *)local_38;
  local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
  local_68.fields._index = local_48._8_4_;
  local_68.fields._version = local_48._12_4_;
  local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_48._8_8_ = &local_68;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_68,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
    item = local_68.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&local_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
                );
      return;
    }
    pUVar3 = UI_ElementFactory__InstantiateAndBind
                       ((__this->fields).SinglePanel,"Prefabs/MainMenu/QuestItemPanel",(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar5 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar4,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar5->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar5,(__this->fields).QuestItemWidth,(pUVar5->klass->vtable)._36_set_preferredWidth.method);
    pUVar5 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar4,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar5,(__this->fields).QuestItemHeight,(pUVar5->klass->vtable)._38_set_preferredHeight.method)
    ;
    pUVar6 = UnityEngine_Transform__Find(pUVar4,"Panel/Icon",(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar6,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    if ((GameProgress_QuestItem_o *)item == (GameProgress_QuestItem_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar1 = ((GameProgress_QuestItem_Fields *)((long)item + 0x10))->Icon;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar9 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    name = System_String__Concat_5301f10
                     ("Icons/Quests/",(pSVar1->fields)._value,"Icon",(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    method_00 = (UnityEngine_Texture2D_c **)0x0;
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar9,name,true,false,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_UI_RawImage_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (value != (UnityEngine_Texture_o *)0x0) {
      method_00 = &TypeInfo_UnityEngine_Texture2D;
      if (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
        il2cpp_codegen_raise_invalid_cast_exception(value);
      }
    }
    UnityEngine_UI_RawImage__set_texture(pUVar7,value,(MethodInfo *)0x0);
    UI_QuestCategoryPanel__SetTitle(__this,(GameProgress_QuestItem_o *)item,pUVar4,(MethodInfo *)method_00);
    __this_00 = __this;
    UI_QuestCategoryPanel__SetRewardLabel
              (__this,(GameProgress_QuestItem_o *)item,pUVar4,(MethodInfo *)method_00);
    UI_QuestCategoryPanel__SetProgress
              (__this_00,(GameProgress_QuestItem_o *)item,pUVar4,(MethodInfo *)method_00);
    pUVar6 = UnityEngine_Transform__Find(pUVar4,"Background",(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar6,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    pSVar9 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    UVar11 = UI_UIManager__GetThemeColor
                       (pSVar9,"QuestItem","BackgroundColor","DefaultPanel",
                        (MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
              (pUVar8,UVar11,(pUVar8->klass->vtable)._23_set_color.method);
    pUVar6 = UnityEngine_Transform__Find(pUVar4,"Panel/CheckIcon",(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
    bVar2 = GameProgress_QuestItem__Finished((GameProgress_QuestItem_o *)item,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(pUVar3,bVar2,(MethodInfo *)0x0);
    pUVar6 = UnityEngine_Transform__Find(pUVar4,"Border",(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar6,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    pSVar9 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar11 = UI_UIManager__GetThemeColor
                       (pSVar9,"QuestItem","BorderColor","DefaultPanel",
                        (MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
              (pUVar8,UVar11,(pUVar8->klass->vtable)._23_set_color.method);
    pUVar6 = UnityEngine_Transform__Find(pUVar4,"Panel/Icon",(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar6,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    pSVar9 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar11 = UI_UIManager__GetThemeColor
                       (pSVar9,"QuestItem","IconColor","DefaultPanel",
                        (MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_UI_RawImage_o *)0x0) break;
    (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
              (pUVar7,UVar11,(pUVar7->klass->vtable)._23_set_color.method);
    pUVar6 = UnityEngine_Transform__Find(pUVar4,"Panel/CheckIcon",(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar6,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    pSVar9 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar11 = UI_UIManager__GetThemeColor
                       (pSVar9,"QuestItem","CheckColor","DefaultPanel",
                        (MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
              (pUVar8,UVar11,(pUVar8->klass->vtable)._23_set_color.method);
    pUVar6 = UnityEngine_Transform__Find(pUVar4,"Panel/Title",(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar10 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar6,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    pSVar9 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar11 = UI_UIManager__GetThemeColor
                       (pSVar9,"QuestItem","TextColor","DefaultPanel",
                        (MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_UI_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
              (pUVar10,UVar11,(pUVar10->klass->vtable)._23_set_color.method);
    pUVar6 = UnityEngine_Transform__Find(pUVar4,"Panel/ProgressLabel",(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar10 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar6,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    pSVar9 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar11 = UI_UIManager__GetThemeColor
                       (pSVar9,"QuestItem","TextColor","DefaultPanel",
                        (MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_UI_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
              (pUVar10,UVar11,(pUVar10->klass->vtable)._23_set_color.method);
    pUVar6 = UnityEngine_Transform__Find(pUVar4,"Panel/RewardLabel",(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar10 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar6,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    pSVar9 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar11 = UI_UIManager__GetThemeColor
                       (pSVar9,"QuestItem","TextColor","DefaultPanel",
                        (MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_UI_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
              (pUVar10,UVar11,(pUVar10->klass->vtable)._23_set_color.method);
    pUVar6 = UnityEngine_Transform__Find(pUVar4,"Panel/CheckIcon",(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar6,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    pSVar9 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar11 = UI_UIManager__GetThemeColor
                       (pSVar9,"QuestItem","IconColor","DefaultPanel",
                        (MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
              (pUVar8,UVar11,(pUVar8->klass->vtable)._23_set_color.method);
    pUVar6 = UnityEngine_Transform__Find(pUVar4,"Panel/ProgressBar/Background",(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar6,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    pSVar9 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar11 = UI_UIManager__GetThemeColor
                       (pSVar9,"QuestItem","ProgressBarBackgroundColor","DefaultPanel",
                        (MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
              (pUVar8,UVar11,(pUVar8->klass->vtable)._23_set_color.method);
    pUVar4 = UnityEngine_Transform__Find(pUVar4,"Panel/ProgressBar/Fill Area/Fill",(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar4,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    pSVar9 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar11 = UI_UIManager__GetThemeColor
                       (pSVar9,"QuestItem","ProgressBarFillColor","DefaultPanel",
                        (MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
              (pUVar8,UVar11,(pUVar8->klass->vtable)._23_set_color.method);
  }
  ThrowNullReferenceException();
}


// UI.QuestCategoryPanel$$SetRewardLabel
// il2cpp: void UI_QuestCategoryPanel__SetRewardLabel (UI_QuestCategoryPanel_o* __this, GameProgress_QuestItem_o* item, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x5d5a710

void UI_QuestCategoryPanel__SetRewardLabel
               (UI_QuestCategoryPanel_o *__this,GameProgress_QuestItem_o *item,UnityEngine_Transform_o *panel,
               MethodInfo *method)

{
  byte bVar1;
  Settings_StringSetting_o *pSVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  System_String_o *pSVar7;
  UnityEngine_UI_Image_o *pUVar8;
  System_String_o *item_00;
  UnityEngine_Color_o UVar9;
  
  if (Il2CppMethodInitialized_07547f48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_AchievementItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"Trophy");
    il2cpp_codegen_initialize_runtime_metadata(&"+");
    il2cpp_codegen_initialize_runtime_metadata(&"Exp");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/AchievementIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/RewardLabel");
    il2cpp_codegen_initialize_runtime_metadata(&" exp");
    Il2CppMethodInitialized_07547f48 = '\x01';
  }
  if (item != (GameProgress_QuestItem_o *)0x0) {
    bVar1 = (TypeInfo_GameProgress_AchievementItem->_2).typeHierarchyDepth;
    if ((bVar1 <= (item->klass->_2).typeHierarchyDepth) &&
       ((item->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_GameProgress_AchievementItem)) {
      if (panel != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__Find(panel,"Panel/RewardLabel",(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
            pUVar4 = UnityEngine_Transform__Find(panel,"Panel/AchievementIcon",(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
                pUVar4 = UnityEngine_Transform__Find(panel,"Panel/AchievementIcon",(MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  pUVar8 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar4,
                                      (MethodInfo_34B0830 *)
                                      MethodInfo_UnityEngine_Component_GetComponent_Image);
                  pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                  bVar1 = (TypeInfo_GameProgress_AchievementItem->_2).typeHierarchyDepth;
                  if (((item->klass->_2).typeHierarchyDepth < bVar1) ||
                     ((item->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                      (Il2CppClass *)TypeInfo_GameProgress_AchievementItem)) {
                    il2cpp_codegen_raise_invalid_cast_exception(item);
                  }
                  if ((*(uint64_t *)((char *)item + 0x80)) != (GameProgress_QuestItem_c *)0x0) {
                    item_00 = System_String__Concat_52f0320
                                        ((((*(Il2CppClass **)((char *)item + 0x80)))->_1).byval_arg.data,"Color",
                                         (MethodInfo *)0x0);
                    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                    }
                    UVar9 = UI_UIManager__GetThemeColor
                                      (pSVar7,"Trophy",item_00,"DefaultPanel",
                                       (MethodInfo *)0x0);
                    if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
                      (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                (pUVar8,UVar9,(pUVar8->klass->vtable)._23_set_color.method);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_05d5aac0;
    }
  }
  if (panel != (UnityEngine_Transform_o *)0x0) {
    pUVar4 = UnityEngine_Transform__Find(panel,"Panel/RewardLabel",(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_Transform__Find(panel,"Panel/AchievementIcon",(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
            if ((item != (GameProgress_QuestItem_o *)0x0) &&
               (pSVar2 = (item->fields).RewardType, pSVar2 != (Settings_StringSetting_o *)0x0)) {
              bVar3 = System_String__op_Equality
                                ((pSVar2->fields)._value,"Exp",(MethodInfo *)0x0);
              if (!bVar3) {
                return;
              }
              pUVar4 = UnityEngine_Transform__Find(panel,"Panel/RewardLabel",(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                pUVar6 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar4,
                                    (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
                pSVar2 = (item->fields).RewardValue;
                if (pSVar2 != (Settings_StringSetting_o *)0x0) {
                  pSVar7 = System_String__Concat_5301f10
                                     ("+",(pSVar2->fields)._value," exp",
                                      (MethodInfo *)0x0);
                  if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                    (*(pUVar6->klass->vtable)._75_set_text.methodPtr)
                              (pUVar6,pSVar7,(pUVar6->klass->vtable)._75_set_text.method);
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
label_05d5aac0:
  ThrowNullReferenceException();
}


// UI.QuestCategoryPanel$$SetTitle
// il2cpp: void UI_QuestCategoryPanel__SetTitle (UI_QuestCategoryPanel_o* __this, GameProgress_QuestItem_o* item, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x5d5a0e0
// eh: try 0x5d5a2c3..0x5d5a341 -> pad 0x5d5a5ce (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d5a3a8..0x5d5a549 -> pad 0x5d5a622 (+16 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5d5a553..0x5d5a599 -> pad 0x5d5a5cc (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d5a5e6..0x5d5a5eb -> pad 0x5d5a610 cleanup
// eh: try 0x5d5a613..0x5d5a61d -> pad 0x5d5a6fd catch (...) [compiler noexcept guard]
// eh: try 0x5d5a64a..0x5d5a6ed -> pad 0x5d5a6ed (+1 call sites) cleanup
// eh: try 0x5d5a6f0..0x5d5a6f5 -> pad 0x5d5a6fd catch (...) [compiler noexcept guard]
// asm: 85 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d5a51f: lea rdi, [rsp + 6]
// asm:   0x5d5a524: xor esi, esi
// asm:   0x5d5a526: call 0x550c720  ; System_Char__ToString()
// asm:   0x5d5a52b: mov rdi, qword ptr [rsp + 0x10]
// asm:   0x5d5a530: mov rsi, rax
// asm:   0x5d5a533: xor edx, edx
// asm:   0x5d5a535: call 0x53f0320  ; System_String__Concat()
// asm:   0x5d5a53a: mov qword ptr [rsp + 0x10], rax
// asm:   0x5d5a53f: jmp 0x5d5a390
// asm:   0x5d5a599: jmp 0x5d5a5ce
// asm:   0x5d5a59b: jmp 0x5d5a5ce
// asm:   0x5d5a59d: jmp 0x5d5a622
// asm:   0x5d5a5a2: jmp 0x5d5a622
// asm:   0x5d5a5a4: jmp 0x5d5a622
// asm:   0x5d5a5a6: jmp 0x5d5a622
// asm:   0x5d5a5a8: jmp 0x5d5a622
// asm:   0x5d5a5aa: jmp 0x5d5a622
// asm:   0x5d5a5ac: jmp 0x5d5a622
// asm:   0x5d5a5ae: jmp 0x5d5a622
// asm:   0x5d5a5b0: jmp 0x5d5a622
// asm:   0x5d5a5b2: jmp 0x5d5a622
// asm:   0x5d5a5b4: jmp 0x5d5a622
// asm:   0x5d5a5b6: jmp 0x5d5a622
// asm:   0x5d5a5b8: jmp 0x5d5a622
// asm:   0x5d5a5ba: jmp 0x5d5a622
// asm:   0x5d5a5bc: jmp 0x5d5a622
// asm:   0x5d5a5be: jmp 0x5d5a622
// asm:   0x5d5a5c0: jmp 0x5d5a5ce
// asm:   0x5d5a5c2: jmp 0x5d5a5ce
// asm:   0x5d5a5c4: jmp 0x5d5a5ce
// asm:   0x5d5a5c6: jmp 0x5d5a5ce
// asm:   0x5d5a5c8: jmp 0x5d5a5ce
// asm:   0x5d5a5ca: jmp 0x5d5a5ce
// asm:   0x5d5a5cc: jmp 0x5d5a5ce
// asm:   0x5d5a5ce: mov rbx, rax
// asm:   0x5d5a5d1: cmp edx, 1
// asm:   0x5d5a5d4: jne 0x5d5a613
// asm:   0x5d5a5d6: mov rdi, rbx
// asm:   0x5d5a5d9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d5a5de: mov rbx, qword ptr [rax]
// asm:   0x5d5a5e1: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5d5a5e6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d5a5eb: lea rax, [rip + 0x1534536]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
// asm:   0x5d5a5f2: mov rsi, qword ptr [rax]
// asm:   0x5d5a5f5: lea rdi, [rsp + 0x20]
// asm:   0x5d5a5fa: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d5a5ff: test rbx, rbx
// asm:   0x5d5a602: je 0x5d5a35d
// asm:   0x5d5a608: mov rdi, rbx
// asm:   0x5d5a60b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d5a610: mov rbx, rax
// asm:   0x5d5a613: lea rdi, [rsp + 0x38]
// asm:   0x5d5a618: call 0x2fdcb70  ; il2cpp_runtime_helper_02fdcb70()
// asm:   0x5d5a61d: jmp 0x5d5a6f5
// asm:   0x5d5a622: mov rbx, rax
// asm:   0x5d5a625: cmp edx, 1
// asm:   0x5d5a628: jne 0x5d5a6f5
// asm:   0x5d5a62e: mov rdi, rbx
// asm:   0x5d5a631: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d5a636: mov rbx, rax
// asm:   0x5d5a639: lea rax, [rip + 0x17fc088]
// asm:   0x5d5a640: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5d5a644: mov rax, qword ptr [rbx]
// asm:   0x5d5a647: mov rsi, qword ptr [rax]
// asm:   0x5d5a64a: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5d5a64f: test al, al
// asm:   0x5d5a651: je 0x5d5a6cc
// asm:   0x5d5a653: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d5a658: lea rdi, [rip + 0x1586cb9]  ; "Locale error."
// asm:   0x5d5a65f: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5d5a664: mov qword ptr [rsp + 0x10], rax
// asm:   0x5d5a6cc: mov edi, 8
// asm:   0x5d5a6d1: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5d5a6d6: mov rcx, qword ptr [rbx]
// asm:   0x5d5a6d9: mov qword ptr [rax], rcx
// asm:   0x5d5a6dc: lea rsi, [rip + 0x10d2e1d]
// asm:   0x5d5a6e3: mov rdi, rax
// asm:   0x5d5a6e6: xor edx, edx
// asm:   0x5d5a6e8: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5d5a6ed: mov rbx, rax
// asm:   0x5d5a6f0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d5a6f5: mov rdi, rbx
// asm:   0x5d5a6f8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d5a6fd: mov rdi, rax
// asm:   0x5d5a700: call 0x2ab61e0  ; __clang_call_terminate()

void UI_QuestCategoryPanel__SetTitle
               (UI_QuestCategoryPanel_o *__this,GameProgress_QuestItem_o *item,UnityEngine_Transform_o *panel,
               MethodInfo *method)

{
  int iVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ListSetting_StringSetting__o *pSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  bool bVar4;
  uint16_t uVar5;
  uint uVar6;
  int32_t index;
  uint uVar7;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  System_String_o *str1;
  System_String_o *str3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_Text_o *pUVar10;
  UI_QuestCategoryPanel_o *pUVar11;
  UI_QuestCategoryPanel_o *__this_02;
  MethodInfo *method_00;
  uint index_00;
  uint16_t local_82;
  UI_QuestCategoryPanel_o *local_80;
  System_String_o *local_78;
  System_Collections_Generic_Dictionary_string__string__o *local_70;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Il2CppObject *local_58;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  UnityEngine_Transform_o *local_38;
  
  local_38 = panel;
  if (Il2CppMethodInitialized_07547f49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"QuestItems");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/Title");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547f49 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Il2CppObject *)0x0;
  local_82 = 0;
  if ((item != (GameProgress_QuestItem_o *)0x0) &&
     (pSVar2 = (item->fields).Category, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    pSVar9 = (pSVar2->fields)._value;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    method_00 = (MethodInfo *)"";
    local_80 = (UI_QuestCategoryPanel_o *)
               UI_UIManager__GetLocale
                         ("QuestItems",pSVar9,"","",
                          "",(MethodInfo *)0x0);
    local_70 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)local_70,
               (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    pSVar3 = (item->fields).Conditions;
    if ((pSVar3 != (Settings_ListSetting_StringSetting__o *)0x0) &&
       (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar3->fields)._value,
       __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_50,__this_00,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator)
      ;
      local_58 = local_40;
      local_68 = (undefined1  [8])local_50._0_8_;
      puStack_60 = (undefined1 *)local_50._8_8_;
      local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_50._8_8_ = local_68;
      if (local_70 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
        if (bVar4) {
          if (local_58 != (Il2CppObject *)0x0) {
            if (local_58[2].klass != (Il2CppClass *)0x0) {
              pSVar8 = System_String__Split((System_String_o *)local_58[2].klass,0x3a,0,(MethodInfo *)0x0);
              if (pSVar8 != (System_String_array *)0x0) {
                iVar1 = (int)pSVar8->max_length;
                if (iVar1 == 0) {
label_05d5a58f:
                  ThrowIndexOutOfRangeException();
                }
                if (iVar1 != 1) {
                  ThrowNullReferenceException();
                }
label_05d5a58a:
                ThrowIndexOutOfRangeException();
              }
label_05d5a579:
              ThrowNullReferenceException();
            }
label_05d5a561:
            ThrowNullReferenceException();
          }
label_05d5a553:
          ThrowNullReferenceException();
        }
      }
      else {
        while( true ) {
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
          if (!bVar4) break;
          if (local_58 == (Il2CppObject *)0x0) goto label_05d5a553;
          if (local_58[2].klass == (Il2CppClass *)0x0) goto label_05d5a561;
          pSVar8 = System_String__Split((System_String_o *)local_58[2].klass,0x3a,0,(MethodInfo *)0x0);
          if (pSVar8 == (System_String_array *)0x0) goto label_05d5a579;
          iVar1 = (int)pSVar8->max_length;
          if (iVar1 == 1) goto label_05d5a58a;
          if (iVar1 == 0) goto label_05d5a58f;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)local_70,
                     (Il2CppObject *)pSVar8->m_Items[0],(Il2CppObject *)pSVar8->m_Items[1],
                     (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add)
          ;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
      if (local_80 == (UI_QuestCategoryPanel_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_78 = "";
      if (0 < (int)(local_80->fields).m_CachedPtr) {
        index_00 = 0;
        do {
          pUVar11 = local_80;
          uVar5 = System_String__get_Chars((System_String_o *)local_80,index_00,(MethodInfo *)0x0);
          if (uVar5 == 0x7b) {
            pSVar9 = UI_QuestCategoryPanel__HandleConditionVariable
                               (pUVar11,(System_String_o *)local_80,index_00,local_70,method_00);
            local_78 = System_String__Concat_52f0320(local_78,pSVar9,(MethodInfo *)0x0);
            uVar6 = System_String__IndexOf_53072f0
                              ((System_String_o *)local_80,0x7d,index_00,(MethodInfo *)0x0);
          }
          else {
            uVar5 = System_String__get_Chars((System_String_o *)local_80,index_00,(MethodInfo *)0x0);
            pUVar11 = local_80;
            if (uVar5 == 0x5b) {
              uVar6 = System_String__IndexOf_53072f0
                                ((System_String_o *)local_80,0x5d,index_00,(MethodInfo *)0x0);
              index = System_String__IndexOf_53072f0
                                ((System_String_o *)pUVar11,0x7b,index_00,(MethodInfo *)0x0);
              __this_02 = pUVar11;
              uVar7 = System_String__IndexOf_53072f0
                                ((System_String_o *)pUVar11,0x7d,index_00,(MethodInfo *)0x0);
              pSVar9 = UI_QuestCategoryPanel__HandleConditionVariable
                                 (__this_02,(System_String_o *)pUVar11,index,local_70,method_00);
              bVar4 = System_String__op_Inequality
                                (pSVar9,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                                 (MethodInfo *)0x0);
              pUVar11 = local_80;
              if (bVar4) {
                str1 = System_String__Substring_53042f0
                                 ((System_String_o *)local_80,index_00 + 1,index + ~index_00,(MethodInfo *)0x0
                                 );
                str3 = System_String__Substring_53042f0
                                 ((System_String_o *)pUVar11,uVar7 + 1,uVar6 + ~uVar7,(MethodInfo *)0x0);
                method_00 = (MethodInfo *)0x0;
                local_78 = System_String__Concat_5302810(local_78,str1,pSVar9,str3,(MethodInfo *)0x0);
              }
            }
            else {
              local_82 = System_String__get_Chars((System_String_o *)local_80,index_00,(MethodInfo *)0x0);
              if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_07556750);
              }
              pSVar9 = System_Char__ToString(&local_82,(MethodInfo *)0x0);
              local_78 = System_String__Concat_52f0320(local_78,pSVar9,(MethodInfo *)0x0);
              uVar6 = index_00;
            }
          }
          index_00 = uVar6 + 1;
        } while ((int)index_00 < (int)(local_80->fields).m_CachedPtr);
      }
      if (local_38 != (UnityEngine_Transform_o *)0x0) {
        __this_01 = UnityEngine_Transform__Find(local_38,"Panel/Title",(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          pUVar10 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_01,
                               (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
          if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar10->klass->vtable)._75_set_text.methodPtr)
                      (pUVar10,local_78,(pUVar10->klass->vtable)._75_set_text.method);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.QuestCategoryPanel$$HandleConditionVariable
// il2cpp: System_String_o* UI_QuestCategoryPanel__HandleConditionVariable (UI_QuestCategoryPanel_o* __this, System_String_o* locale, int32_t index, System_Collections_Generic_Dictionary_string__string__o* conditionToValue, const MethodInfo* method);
// 0x5d5ac70

System_String_o *
UI_QuestCategoryPanel__HandleConditionVariable
          (UI_QuestCategoryPanel_o *__this,System_String_o *locale,int32_t index,
          System_Collections_Generic_Dictionary_string__string__o *conditionToValue,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07547f4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"QuestItems");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_07547f4a = '\x01';
  }
  if (locale != (System_String_o *)0x0) {
    iVar2 = System_String__IndexOf_53072f0(locale,0x7d,index,(MethodInfo *)0x0);
    pSVar3 = System_String__Substring_53042f0(locale,index + 1,~index + iVar2,(MethodInfo *)0x0);
    if (conditionToValue != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)conditionToValue,
                         (Il2CppObject *)pSVar3,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
      if (bVar1) {
        pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)conditionToValue,
                            (Il2CppObject *)pSVar3,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
        pSVar4 = System_String__Concat_5301f10(pSVar3,".",pSVar4,(MethodInfo *)0x0);
        pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)conditionToValue,
                            (Il2CppObject *)pSVar3,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar3 = UI_UIManager__GetLocale
                           ("QuestItems",pSVar4,"","",pSVar3,
                            (MethodInfo *)0x0);
        return pSVar3;
      }
      return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
  }
  ThrowNullReferenceException();
}


// UI.QuestCategoryPanel$$SetProgress
// il2cpp: void UI_QuestCategoryPanel__SetProgress (UI_QuestCategoryPanel_o* __this, GameProgress_QuestItem_o* item, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x5d5aad0

void UI_QuestCategoryPanel__SetProgress
               (UI_QuestCategoryPanel_o *__this,GameProgress_QuestItem_o *item,UnityEngine_Transform_o *panel,
               MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Slider_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_07547f4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Slider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/ProgressLabel");
    il2cpp_codegen_initialize_runtime_metadata(&" / ");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/ProgressBar");
    Il2CppMethodInitialized_07547f4b = '\x01';
  }
  if (panel != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(panel,"Panel/ProgressBar",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar3,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Slider);
      if ((((item != (GameProgress_QuestItem_o *)0x0) &&
           (pSVar1 = (item->fields).Progress, pSVar1 != (Settings_IntSetting_o *)0x0)) &&
          (pSVar2 = (item->fields).Amount, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
         (pUVar4 != (UnityEngine_UI_Slider_o *)0x0)) {
        (*(pUVar4->klass->vtable)._47_set_value.methodPtr)
                  (pUVar4,(float)(pSVar1->fields)._value / (float)(pSVar2->fields)._value,
                   (pUVar4->klass->vtable)._47_set_value.method);
        pUVar3 = UnityEngine_Transform__Find(panel,"Panel/ProgressLabel",(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar3,
                              (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
          pSVar1 = (item->fields).Progress;
          if (pSVar1 != (Settings_IntSetting_o *)0x0) {
            local_1c = (pSVar1->fields)._value;
            pSVar6 = System_Int32__ToString(&local_1c,(MethodInfo *)0x0);
            pSVar1 = (item->fields).Amount;
            if (pSVar1 != (Settings_IntSetting_o *)0x0) {
              local_1c = (pSVar1->fields)._value;
              str2 = System_Int32__ToString(&local_1c,(MethodInfo *)0x0);
              pSVar6 = System_String__Concat_5301f10(pSVar6," / ",str2,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                          (pUVar5,pSVar6,(pUVar5->klass->vtable)._75_set_text.method);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.QuestCategoryPanel$$.ctor
// il2cpp: void UI_QuestCategoryPanel___ctor (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x5d5a050

void UI_QuestCategoryPanel___ctor(UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  (__this->fields).QuestItemWidth = 940.0;
  (__this->fields).QuestItemHeight = 100.0;
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


