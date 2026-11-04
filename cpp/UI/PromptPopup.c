// Type: UI.PromptPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/PromptPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/PromptPopup.cs
// --------------------------------

// UI.PromptPopup$$get_TopBarHeight
// il2cpp: float UI_PromptPopup__get_TopBarHeight (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x1821c6600

float
UI_PromptPopup__get_TopBarHeight(UI_PromptPopup_o* __this, MethodInfo* method)

{
  return 55.0;
}


// UI.PromptPopup$$get_BottomBarHeight
// il2cpp: float UI_PromptPopup__get_BottomBarHeight (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x1821c6600

float
UI_PromptPopup__get_BottomBarHeight(UI_PromptPopup_o* __this, MethodInfo* method)

{
  return 55.0;
}


// UI.PromptPopup$$get_TitleFontSize
// il2cpp: int32_t UI_PromptPopup__get_TitleFontSize (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x1821c6620

int32_t
UI_PromptPopup__get_TitleFontSize(UI_PromptPopup_o* __this, MethodInfo* method)

{
  return 0x1a;
}


// UI.PromptPopup$$get_ButtonFontSize
// il2cpp: int32_t UI_PromptPopup__get_ButtonFontSize (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x1821c6610

int32_t
UI_PromptPopup__get_ButtonFontSize(UI_PromptPopup_o* __this, MethodInfo* method)

{
  return 0x16;
}


// UI.PromptPopup$$Setup
// il2cpp: void UI_PromptPopup__Setup (UI_PromptPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821c63c0

void UI_PromptPopup__Setup(UI_PromptPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184346f35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_IgnoreScaler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Transform_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/BackgroundDim");
    Il2CppMethodInitialized_184346f35 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__InstantiateAndBind(pUVar1,"Prefabs/Panels/BackgroundDim",(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this_01,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
      local_18.r = 0.0;
      local_18.g = 0.0;
      local_18.b = 0.0;
      local_18.a = 0.3;
      (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                (pUVar2,(UnityEngine_Color_o *)&local_18,(pUVar2->klass->vtable)._23_set_color.method);
      UnityEngine_GameObject__AddComponent_object_
                (__this_01,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_IgnoreScaler);
      pUVar1 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetSiblingIndex(pUVar1,0,(MethodInfo *)0x0);
        __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._staticTransforms;
        pUVar1 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
        if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet_object___Add
                    (__this_00,(Il2CppObject *)pUVar1,
                     (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Transform_Add);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.PromptPopup$$Update
// il2cpp: void UI_PromptPopup__Update (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x1821c64f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c65f4: mov rdi, qword ptr [rsp + 0x30]

void UI_PromptPopup__Update(UI_PromptPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346f36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184346f36 = '\x01';
  }
  bVar2 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
  if ((bVar2) && ((__this->fields).IsActive != false)) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)
         ) {
        if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
        }
        bVar2 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_BlocksUiInput((MethodInfo *)0x0);
        if (bVar2) {
          return;
        }
        UI_InGameMenu__TryDismissGameplayMenu(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  }
  return;
}


// UI.PromptPopup$$.ctor
// il2cpp: void UI_PromptPopup___ctor (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_PromptPopup___ctor(UI_PromptPopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


