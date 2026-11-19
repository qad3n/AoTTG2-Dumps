// Type: UI.MapEditorWeatherPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MapEditorWeatherPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorWeatherPopup.cs
// --------------------------------

// UI.MapEditorWeatherPopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_MapEditorWeatherPopup___c__DisplayClass15_0___ctor (UI_MapEditorWeatherPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x5da8560

void UI_MapEditorWeatherPopup___c__DisplayClass15_0___ctor
               (UI_MapEditorWeatherPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorWeatherPopup.<>c__DisplayClass15_0$$<Setup>b__1
// il2cpp: void UI_MapEditorWeatherPopup___c__DisplayClass15_0___Setup_b__1 (UI_MapEditorWeatherPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x5daa910

void UI_MapEditorWeatherPopup___c__DisplayClass15_0___Setup_b__1
               (UI_MapEditorWeatherPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  UI_MapEditorWeatherPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MapEditorWeatherPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorWeatherPopup__OnWeatherButtonClick(__this_00,(__this->fields).button,in_RDX);
  return;
}


// UI.MapEditorWeatherPopup.<>c__DisplayClass16_0$$.ctor
// il2cpp: void UI_MapEditorWeatherPopup___c__DisplayClass16_0___ctor (UI_MapEditorWeatherPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5da9d70

void UI_MapEditorWeatherPopup___c__DisplayClass16_0___ctor
               (UI_MapEditorWeatherPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorWeatherPopup.<>c__DisplayClass16_0$$<Show>b__0
// il2cpp: void UI_MapEditorWeatherPopup___c__DisplayClass16_0___Show_b__0 (UI_MapEditorWeatherPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5daa930

void UI_MapEditorWeatherPopup___c__DisplayClass16_0___Show_b__0
               (UI_MapEditorWeatherPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  UI_MapEditorWeatherPopup_o *__this_00;
  System_String_o *name;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075480dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Schedule");
    Il2CppMethodInitialized_075480dc = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  name = System_String__Concat_52f0320((__this->fields).button,"Schedule",(MethodInfo *)0x0);
  if (__this_00 == (UI_MapEditorWeatherPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorWeatherPopup__OnWeatherButtonClick(__this_00,name,method_00);
  return;
}


// UI.MapEditorWeatherPopup.<>c__DisplayClass19_0$$.ctor
// il2cpp: void UI_MapEditorWeatherPopup___c__DisplayClass19_0___ctor (UI_MapEditorWeatherPopup___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x5daa3a0

void UI_MapEditorWeatherPopup___c__DisplayClass19_0___ctor
               (UI_MapEditorWeatherPopup___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorWeatherPopup.<>c__DisplayClass19_0$$<OnWeatherButtonClick>b__0
// il2cpp: void UI_MapEditorWeatherPopup___c__DisplayClass19_0___OnWeatherButtonClick_b__0 (UI_MapEditorWeatherPopup___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x5daa980

void UI_MapEditorWeatherPopup___c__DisplayClass19_0___OnWeatherButtonClick_b__0
               (UI_MapEditorWeatherPopup___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  UI_MapEditorWeatherPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MapEditorWeatherPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorWeatherPopup__OnWeatherSetOperationFinish(__this_00,(__this->fields).name,in_RDX);
  return;
}


// UI.MapEditorWeatherPopup.<>c__DisplayClass19_0$$<OnWeatherButtonClick>b__1
// il2cpp: void UI_MapEditorWeatherPopup___c__DisplayClass19_0___OnWeatherButtonClick_b__1 (UI_MapEditorWeatherPopup___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x5daa9a0

void UI_MapEditorWeatherPopup___c__DisplayClass19_0___OnWeatherButtonClick_b__1
               (UI_MapEditorWeatherPopup___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  UI_MapEditorWeatherPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MapEditorWeatherPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorWeatherPopup__OnWeatherSetOperationFinish(__this_00,(__this->fields).name,in_RDX);
  return;
}


// UI.MapEditorWeatherPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorWeatherPopup__get_Title (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x5da7d80

System_String_o * UI_MapEditorWeatherPopup__get_Title(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075480d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480d3 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MapEditor","Top","Weather","",
                      "",in_R9);
  return pSVar1;
}


// UI.MapEditorWeatherPopup$$get_Width
// il2cpp: float UI_MapEditorWeatherPopup__get_Width (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x5da7e20

float UI_MapEditorWeatherPopup__get_Width(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  return 1010.0;
}


// UI.MapEditorWeatherPopup$$get_Height
// il2cpp: float UI_MapEditorWeatherPopup__get_Height (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x5da7e30

float UI_MapEditorWeatherPopup__get_Height(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  return 630.0;
}


// UI.MapEditorWeatherPopup$$get_DoublePanel
// il2cpp: bool UI_MapEditorWeatherPopup__get_DoublePanel (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x5da7e40

bool UI_MapEditorWeatherPopup__get_DoublePanel(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MapEditorWeatherPopup$$get_DoublePanelDivider
// il2cpp: bool UI_MapEditorWeatherPopup__get_DoublePanelDivider (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x5da7e50

bool UI_MapEditorWeatherPopup__get_DoublePanelDivider(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MapEditorWeatherPopup$$get_ScrollBar
// il2cpp: bool UI_MapEditorWeatherPopup__get_ScrollBar (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x5da7e60

bool UI_MapEditorWeatherPopup__get_ScrollBar(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MapEditorWeatherPopup$$Setup
// il2cpp: void UI_MapEditorWeatherPopup__Setup (UI_MapEditorWeatherPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5da7e70
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5da82fd: cmp byte ptr [rip + 0x179fdfd], 0
// asm:   0x5da8304: jne 0x5da81f0
// asm:   0x5da830a: jmp 0x5da8332
// asm:   0x5da8377: lea rax, [rip + 0x153f41a]  ; "Save"
// asm:   0x5da837e: mov rbp, qword ptr [rax]
// asm:   0x5da8381: cmp byte ptr [rip + 0x179fd79], 0
// asm:   0x5da8388: je 0x5da8431

void UI_MapEditorWeatherPopup__Setup
               (UI_MapEditorWeatherPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_BoolSetting_o *setting;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  System_String_o *title;
  UnityEngine_GameObject_o *pUVar3;
  UI_ToggleSettingElement_o *pUVar4;
  Il2CppObject *pIVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  UI_MapEditorWeatherPopup___c__DisplayClass15_0_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  MethodInfo *in_R9;
  MethodInfo *method_00;
  ulong uVar9;
  
  if (Il2CppMethodInitialized_075480d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ToggleSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorWeatherPopup_Setup_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorWeatherPopup_c__DisplayClass15_0_Setup_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorWeatherPopup_c__DisplayClass15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"MapHasWeatherTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"MapHasWeather");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    Il2CppMethodInitialized_075480d4 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,180.0,20.0,pSVar2,(MethodInfo *)0x0);
  pSVar2 = "MapHasWeather";
  pUVar8 = (__this->fields).DoublePanelLeft;
  setting = (__this->fields)._hasWeather;
  if (Il2CppMethodInitialized_075480d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480d6 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  title = UI_UIManager__GetLocale
                    ("MapEditor","Weather",pSVar2,"",
                     "",in_R9);
  pSVar2 = "MapHasWeatherTooltip";
  if (Il2CppMethodInitialized_075480d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480d6 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("MapEditor","Weather",pSVar2,"",
                      "",in_R9);
  method_00 = (MethodInfo *)0x0;
  pUVar3 = UI_ElementFactory__CreateToggleSetting
                     (pUVar8,__this_00,(Settings_BaseSetting_o *)setting,title,pSVar2,30.0,30.0,
                      (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar3,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_ToggleSettingElement);
    (__this->fields)._hasWeatherElement = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._hasWeatherElement);
    UI_BasePanel__CreateHorizontalDivider
              ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelLeft,1.0,(MethodInfo *)0x0);
    UI_ElementFactory__CreateHorizontalGroup((__this->fields).DoublePanelLeft,10.0,0,(MethodInfo *)0x0);
    pUVar3 = UI_ElementFactory__CreateHorizontalGroup
                       ((__this->fields).DoublePanelLeft,10.0,0,(MethodInfo *)0x0);
    pIVar5 = SZArrayNew(TypeInfo_string_array,2);
    if (pIVar5 != (Il2CppObject *)0x0) {
      if (*(int *)&pIVar5[1].monitor != 0) {
        pIVar5[2].klass = (Il2CppClass *)"Import";
        Il2CppCodeGenWriteBarrier(&pIVar5[2].klass);
        if (((ulong)pIVar5[1].monitor & 0xfffffffe) != 0) {
          pIVar5[2].monitor = "Export";
          Il2CppCodeGenWriteBarrier(&pIVar5[2].monitor);
          if (0 < *(int *)&pIVar5[1].monitor) {
            if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
              pUVar7 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_UI_MapEditorWeatherPopup_c__DisplayClass15_0);
              System_Object___ctor((Il2CppObject *)pUVar7,(MethodInfo *)0x0);
              if (pUVar7 != (UI_MapEditorWeatherPopup___c__DisplayClass15_0_o *)0x0) {
                (pUVar7->fields).__4__this = __this;
                Il2CppCodeGenWriteBarrier(&(pUVar7->fields).__4__this);
                if (*(int *)&pIVar5[1].monitor == 0) goto label_05da84af;
                (pUVar7->fields).button = (System_String_o *)pIVar5[2].klass;
                Il2CppCodeGenWriteBarrier(&(pUVar7->fields).button);
              }
              goto label_05da84c7;
            }
            uVar9 = 0;
            do {
              pUVar7 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_UI_MapEditorWeatherPopup_c__DisplayClass15_0);
              System_Object___ctor((Il2CppObject *)pUVar7,(MethodInfo *)0x0);
              if (pUVar7 == (UI_MapEditorWeatherPopup___c__DisplayClass15_0_o *)0x0) goto label_05da84c7;
              (pUVar7->fields).__4__this = __this;
              Il2CppCodeGenWriteBarrier(&(pUVar7->fields).__4__this);
              if (*(uint *)&pIVar5[1].monitor <= uVar9) goto label_05da84af;
              (pUVar7->fields).button = (System_String_o *)(&pIVar5[2].klass)[uVar9];
              Il2CppCodeGenWriteBarrier(&(pUVar7->fields).button);
              pUVar8 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
              pSVar2 = (pUVar7->fields).button;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              if (Il2CppMethodInitialized_07548101 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
                il2cpp_codegen_initialize_runtime_metadata(&"Common");
                il2cpp_codegen_initialize_runtime_metadata(&"");
                Il2CppMethodInitialized_07548101 = '\x01';
              }
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar2 = UI_UIManager__GetLocale
                                 ("Common",pSVar2,"","",
                                  "",method_00);
              pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        (pUVar6,(Il2CppObject *)pUVar7,
                         (intptr_t)MethodInfo_UI_MapEditorWeatherPopup_c__DisplayClass15_0_Setup_b__1,
                         (MethodInfo *)0x0);
              UI_ElementFactory__CreateDefaultButton(pUVar8,__this_00,pSVar2,0.0,0.0,pUVar6,(MethodInfo *)0x0)
              ;
              uVar9 = uVar9 + 1;
            } while ((long)uVar9 < (long)*(int *)&pIVar5[1].monitor);
          }
          pUVar8 = (__this->fields).BottomBar;
          pSVar2 = "Save";
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            pSVar2 = "Save";
          }
          "Save" = pSVar2;
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
          pSVar2 = UI_UIManager__GetLocale
                             ("Common",pSVar2,"","",
                              "",method_00);
          pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (pUVar6,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorWeatherPopup_Setup_b__15_0
                     ,(MethodInfo *)0x0);
          UI_ElementFactory__CreateTextButton(pUVar8,__this_00,pSVar2,0.0,pUVar6,(MethodInfo *)0x0);
          return;
        }
      }
label_05da84af:
      ThrowIndexOutOfRangeException();
    }
  }
label_05da84c7:
  ThrowNullReferenceException();
}


// UI.MapEditorWeatherPopup$$Show
// il2cpp: void UI_MapEditorWeatherPopup__Show (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x5da8570
// eh: try 0x5da8810..0x5da883f -> pad 0x5da9c4f (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5da9c67..0x5da9c6c -> pad 0x5da9c96 cleanup
// eh: try 0x5da9c99..0x5da9ca3 -> pad 0x5da9cab catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5da8e10: cmp byte ptr [rip + 0x179f2ea], 0
// asm:   0x5da8e17: jne 0x5da8d00
// asm:   0x5da8e1d: jmp 0x5da8e42
// asm:   0x5da9c4d: jmp 0x5da9c4f
// asm:   0x5da9c4f: mov rbx, rax
// asm:   0x5da9c52: cmp edx, 1
// asm:   0x5da9c55: jne 0x5da9c99
// asm:   0x5da9c57: mov rdi, rbx
// asm:   0x5da9c5a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5da9c5f: mov rbx, qword ptr [rax]
// asm:   0x5da9c62: mov qword ptr [rsp + 0x70], rbx
// asm:   0x5da9c67: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5da9c6c: lea rax, [rip + 0x14e4105]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5da9c73: mov rsi, qword ptr [rax]
// asm:   0x5da9c76: lea rdi, [rsp + 0x50]
// asm:   0x5da9c7b: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5da9c80: test rbx, rbx
// asm:   0x5da9c83: mov r12, qword ptr [rsp + 0x48]
// asm:   0x5da9c88: je 0x5da8855
// asm:   0x5da9c8e: mov rdi, rbx
// asm:   0x5da9c91: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5da9c96: mov rbx, rax
// asm:   0x5da9c99: lea rdi, [rsp + 0x70]
// asm:   0x5da9c9e: call 0x2fdddb0  ; il2cpp_runtime_helper_02fdddb0()
// asm:   0x5da9ca3: mov rdi, rbx
// asm:   0x5da9ca6: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5da9cab: mov rdi, rax
// asm:   0x5da9cae: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorWeatherPopup__Show(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int length;
  uint uVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  GameManagers_BaseGameManager_o *pGVar5;
  UI_BaseMenu_o *pUVar6;
  void *pvVar7;
  Settings_BoolSetting_o *__this_00;
  UI_ColorPickPopup_o *colorPickPopup;
  UI_ToggleSettingElement_o *pUVar8;
  long lVar9;
  Settings_BaseSetting_o *pSVar10;
  UnityEngine_GameObject_array *pUVar11;
  UI_Vector3Popup_o *vector3Popup;
  UnityEngine_Object_o *obj;
  bool bVar12;
  System_String_o *pSVar13;
  MethodInfo *pMVar14;
  System_String_o *title;
  MethodInfo *pMVar15;
  UnityEngine_GameObject_o *pUVar16;
  Il2CppObject *pIVar17;
  UnityEngine_Events_UnityAction_o *__this_01;
  UI_MapEditorWeatherPopup___c__DisplayClass16_0_o *pUVar18;
  UnityEngine_Transform_o *pUVar19;
  System_String_array *options;
  MethodInfo *pMVar20;
  UI_DropdownSettingElement_o *__this_02;
  MethodInfo *in_R9;
  ulong uVar21;
  undefined1 auStack_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  UnityEngine_Object_o *pUStack_58;
  undefined1 auStack_48 [16];
  UnityEngine_Object_o *pUStack_38;
  
  if (Il2CppMethodInitialized_075480d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorWeatherPopup_c__DisplayClass16_0_Show_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorWeatherPopup_c__DisplayClass16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumToStringArray_WeatherSkybox);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"UseScheduleTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Flashlight");
    il2cpp_codegen_initialize_runtime_metadata(&"FogDensity");
    il2cpp_codegen_initialize_runtime_metadata(&"Rain");
    il2cpp_codegen_initialize_runtime_metadata(&"Daylight");
    il2cpp_codegen_initialize_runtime_metadata(&"DaylightIntensity");
    il2cpp_codegen_initialize_runtime_metadata(&"WindForce");
    il2cpp_codegen_initialize_runtime_metadata(&"Wind");
    il2cpp_codegen_initialize_runtime_metadata(&"WindDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"AmbientLight");
    il2cpp_codegen_initialize_runtime_metadata(&"UseSchedule");
    il2cpp_codegen_initialize_runtime_metadata(&"Snow");
    il2cpp_codegen_initialize_runtime_metadata(&"SkyboxColor");
    il2cpp_codegen_initialize_runtime_metadata(&"FogColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DaylightDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"Skybox");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"RainForce");
    il2cpp_codegen_initialize_runtime_metadata(&"ScheduleLoop");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    il2cpp_codegen_initialize_runtime_metadata(&"SnowForce");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunder");
    Il2CppMethodInitialized_075480d5 = '\x01';
  }
  auStack_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pUStack_58 = (UnityEngine_Object_o *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._elements;
  if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
               (System_Collections_Generic_List_object__o *)pSVar4,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    pUStack_58 = pUStack_38;
    auStack_68 = (undefined1  [8])auStack_48._0_8_;
    pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_48._8_8_;
    auStack_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    auStack_48._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_68;
    while (bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
          obj = pUStack_58, bVar12) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose)
    ;
    pSVar4 = (__this->fields)._elements;
    if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
      }
      pGVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (pGVar5 != (GameManagers_BaseGameManager_o *)0x0) {
        bVar2 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
        if (((pGVar5->klass->_2).typeHierarchyDepth < bVar2) ||
           ((pGVar5->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception(pGVar5);
        }
      }
      pSVar13 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      pMVar14 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor((UI_ElementStyle_o *)pMVar14,0x18,180.0,20.0,pSVar13,(MethodInfo *)0x0);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if ((((pUVar6 != (UI_BaseMenu_o *)0x0) && (pGVar5 != (GameManagers_BaseGameManager_o *)0x0)) &&
          ((*(uint64_t *)((char *)pGVar5 + 0x28)) != (GameManagers_BaseGameManager_c *)0x0)) &&
         ((pvVar7 = (((*(Il2CppClass **)((char *)pGVar5 + 0x28)))->_1).byval_arg.data, pvVar7 != (void *)0x0 &&
          (__this_00 = (__this->fields)._hasWeather, __this_00 != (Settings_BoolSetting_o *)0x0)))) {
        colorPickPopup = (pUVar6->fields).ColorPickPopup;
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this_00,*(bool *)((long)pvVar7 + 0x20),
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        pUVar8 = (__this->fields)._hasWeatherElement;
        if (pUVar8 != (UI_ToggleSettingElement_o *)0x0) {
          pMVar20 = (pUVar8->klass->vtable)._6_SyncElement.method;
          (*(pUVar8->klass->vtable)._6_SyncElement.methodPtr)(pUVar8,pMVar20);
          if (((*(uint64_t *)((char *)pGVar5 + 0x28)) != (GameManagers_BaseGameManager_c *)0x0) &&
             (lVar9 = *(long *)&(((*(Il2CppClass **)((char *)pGVar5 + 0x28)))->_1).this_arg.bits, lVar9 != 0)) {
            pUVar19 = (__this->fields).DoublePanelLeft;
            pSVar4 = (__this->fields)._elements;
            pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0xd0);
            title = UI_MapEditorWeatherPopup__WeatherLocale("UseSchedule",pMVar20);
            pSVar13 = "UseScheduleTooltip";
            if (Il2CppMethodInitialized_075480d6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
              il2cpp_codegen_initialize_runtime_metadata(&"Weather");
              il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
              il2cpp_codegen_initialize_runtime_metadata(&"");
              Il2CppMethodInitialized_075480d6 = '\x01';
            }
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pSVar13 = UI_UIManager__GetLocale
                                ("MapEditor","Weather",pSVar13,"",
                                 "",in_R9);
            pMVar15 = (MethodInfo *)
                      UI_ElementFactory__CreateToggleSetting
                                (pUVar19,(UI_ElementStyle_o *)pMVar14,pSVar10,title,pSVar13,30.0,30.0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
            pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
            if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
              piVar1 = &(pSVar4->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar11 = (pSVar4->fields)._items;
              if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                uVar3 = (pSVar4->fields)._size;
                if (uVar3 < (uint)pUVar11->max_length) {
                  (pSVar4->fields)._size = uVar3 + 1;
                  pUVar11->m_Items[(int)uVar3] = (UnityEngine_GameObject_o *)pMVar15;
                  Il2CppCodeGenWriteBarrier(pUVar11->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pMVar15,
                             (MethodInfo_395D230 *)pMVar20->klass->rgctx_data[0xe].method);
                }
                pUVar19 = (__this->fields).DoublePanelLeft;
                pSVar4 = (__this->fields)._elements;
                pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0xd8);
                pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale("ScheduleLoop",pMVar15);
                pMVar20 = (MethodInfo *)0x0;
                pUVar16 = UI_ElementFactory__CreateToggleSetting
                                    (pUVar19,(UI_ElementStyle_o *)pMVar14,pSVar10,pSVar13,
                                     "",30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                                     (MethodInfo *)0x0);
                pMVar15 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
                if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                  piVar1 = &(pSVar4->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar11 = (pSVar4->fields)._items;
                  if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                    uVar3 = (pSVar4->fields)._size;
                    if (uVar3 < (uint)pUVar11->max_length) {
                      (pSVar4->fields)._size = uVar3 + 1;
                      pUVar11->m_Items[(int)uVar3] = pUVar16;
                      Il2CppCodeGenWriteBarrier(pUVar11->m_Items + (int)uVar3);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar16,
                                 (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
                    }
                    pUVar16 = UI_ElementFactory__CreateHorizontalGroup
                                        ((__this->fields).DoublePanelLeft,10.0,0,(MethodInfo *)0x0);
                    pMVar15 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
                    pSVar4 = (__this->fields)._elements;
                    if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                      piVar1 = &(pSVar4->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pUVar11 = (pSVar4->fields)._items;
                      if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                        uVar3 = (pSVar4->fields)._size;
                        if (uVar3 < (uint)pUVar11->max_length) {
                          (pSVar4->fields)._size = uVar3 + 1;
                          pUVar11->m_Items[(int)uVar3] = pUVar16;
                          Il2CppCodeGenWriteBarrier(pUVar11->m_Items + (int)uVar3);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)pSVar4,
                                     (Il2CppObject *)pUVar16,
                                     (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
                        }
                        pIVar17 = SZArrayNew(TypeInfo_string_array,2);
                        if (pIVar17 != (Il2CppObject *)0x0) {
                          if (*(int *)&pIVar17[1].monitor != 0) {
                            pIVar17[2].klass = (Il2CppClass *)"Import";
                            Il2CppCodeGenWriteBarrier(&pIVar17[2].klass);
                            pMVar15 = (MethodInfo *)"Export";
                            if (((ulong)pIVar17[1].monitor & 0xfffffffe) != 0) {
                              pIVar17[2].monitor = "Export";
                              Il2CppCodeGenWriteBarrier(&pIVar17[2].monitor);
                              if (0 < *(int *)&pIVar17[1].monitor) {
                                if (pUVar16 == (UnityEngine_GameObject_o *)0x0) {
                                  pUVar18 = il2cpp_codegen_object_new
                                                      ((Il2CppClass *)
                                                       TypeInfo_UI_MapEditorWeatherPopup_c__DisplayClass16_0);
                                  System_Object___ctor((Il2CppObject *)pUVar18,(MethodInfo *)0x0);
                                  if (pUVar18 == (UI_MapEditorWeatherPopup___c__DisplayClass16_0_o *)0x0)
                                  goto label_05da9c13;
                                  (pUVar18->fields).__4__this = __this;
                                  Il2CppCodeGenWriteBarrier(&(pUVar18->fields).__4__this);
                                  if (*(int *)&pIVar17[1].monitor != 0) {
                                    (pUVar18->fields).button = (System_String_o *)pIVar17[2].klass;
                                    Il2CppCodeGenWriteBarrier(&(pUVar18->fields).button);
                                    ThrowNullReferenceException();
                                  }
                                  goto label_05da9c30;
                                }
                                uVar21 = 0;
                                do {
                                  pUVar18 = il2cpp_codegen_object_new
                                                      ((Il2CppClass *)
                                                       TypeInfo_UI_MapEditorWeatherPopup_c__DisplayClass16_0);
                                  System_Object___ctor((Il2CppObject *)pUVar18,(MethodInfo *)0x0);
                                  if (pUVar18 == (UI_MapEditorWeatherPopup___c__DisplayClass16_0_o *)0x0)
                                  goto label_05da9c13;
                                  (pUVar18->fields).__4__this = __this;
                                  Il2CppCodeGenWriteBarrier(&(pUVar18->fields).__4__this);
                                  if (*(uint *)&pIVar17[1].monitor <= uVar21) goto label_05da9c30;
                                  (pUVar18->fields).button = (System_String_o *)(&pIVar17[2].klass)[uVar21];
                                  Il2CppCodeGenWriteBarrier(&(pUVar18->fields).button);
                                  pUVar19 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
                                  pSVar13 = (pUVar18->fields).button;
                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                                  }
                                  if (Il2CppMethodInitialized_07548101 == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
                                    il2cpp_codegen_initialize_runtime_metadata(&"Common");
                                    il2cpp_codegen_initialize_runtime_metadata(&"");
                                    Il2CppMethodInitialized_07548101 = '\x01';
                                  }
                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                                  }
                                  pSVar13 = UI_UIManager__GetLocale
                                                      ("Common",pSVar13,"",
                                                       "","",pMVar20);
                                  __this_01 = il2cpp_codegen_object_new
                                                        ((Il2CppClass *)
                                                         TypeInfo_UnityEngine_Events_UnityAction);
                                  UnityEngine_Events_UnityAction___ctor
                                            (__this_01,(Il2CppObject *)pUVar18,
                                             (intptr_t)
                                             MethodInfo_UI_MapEditorWeatherPopup_c__DisplayClass16_0_Show_b__0
                                             ,(MethodInfo *)0x0);
                                  pMVar15 = pMVar14;
                                  UI_ElementFactory__CreateDefaultButton
                                            (pUVar19,(UI_ElementStyle_o *)pMVar14,pSVar13,0.0,0.0,__this_01,
                                             (MethodInfo *)0x0);
                                  uVar21 = uVar21 + 1;
                                } while ((long)uVar21 < (long)*(int *)&pIVar17[1].monitor);
                              }
                              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                              }
                              pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                              if (pUVar6 != (UI_BaseMenu_o *)0x0) {
                                vector3Popup = (pUVar6->fields).Vector3Popup;
                                pUVar19 = (__this->fields).DoublePanelRight;
                                pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0x48);
                                pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                    ("Skybox",pMVar15);
                                if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                                }
                                options = Utility_Util__EnumToStringArray_Int32Enum_
                                                    ((MethodInfo_377C8A0 *)
                                                     MethodInfo_Utility_Util_EnumToStringArray_WeatherSkybox);
                                pMVar20 = (MethodInfo *)
                                          UI_ElementFactory__CreateDropdownSetting
                                                    (pUVar19,(UI_ElementStyle_o *)pMVar14,pSVar10,pSVar13,
                                                     options,"",140.0,40.0,300.0,
                                                     (System_Nullable_float__o)0x0,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (System_Int32_array *)0x0,
                                                     (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                if ((pMVar20 != (MethodInfo *)0x0) &&
                                   (__this_02 = UnityEngine_GameObject__GetComponent_object_
                                                          ((UnityEngine_GameObject_o *)pMVar20,
                                                           (MethodInfo_353B730 *)
                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSettingElement
                                                       ), __this_02 != (UI_DropdownSettingElement_o *)0x0)) {
                                  UI_DropdownSettingElement__FixScale(__this_02,(MethodInfo *)0x0);
                                  pMVar15 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
                                  pSVar4 = (__this->fields)._elements;
                                  if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                                    piVar1 = &(pSVar4->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pUVar11 = (pSVar4->fields)._items;
                                    if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                      uVar3 = (pSVar4->fields)._size;
                                      if (uVar3 < (uint)pUVar11->max_length) {
                                        (pSVar4->fields)._size = uVar3 + 1;
                                        pUVar11->m_Items[(int)uVar3] = (UnityEngine_GameObject_o *)pMVar20;
                                        Il2CppCodeGenWriteBarrier(pUVar11->m_Items + (int)uVar3);
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)pSVar4,
                                                   (Il2CppObject *)pMVar20,
                                                   (MethodInfo_395D230 *)
                                                   pMVar15->klass->rgctx_data[0xe].method);
                                      }
                                      pUVar19 = (__this->fields).DoublePanelRight;
                                      pSVar4 = (__this->fields)._elements;
                                      pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0x50);
                                      pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                          ("SkyboxColor",pMVar20);
                                      pMVar15 = (MethodInfo *)
                                                UI_ElementFactory__CreateColorSetting
                                                          (pUVar19,(UI_ElementStyle_o *)pMVar14,pSVar10,
                                                           pSVar13,colorPickPopup,"",90.0,
                                                           30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                                                           (MethodInfo *)0x0);
                                      pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
                                      if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                                        piVar1 = &(pSVar4->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pUVar11 = (pSVar4->fields)._items;
                                        if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                          uVar3 = (pSVar4->fields)._size;
                                          if (uVar3 < (uint)pUVar11->max_length) {
                                            (pSVar4->fields)._size = uVar3 + 1;
                                            pUVar11->m_Items[(int)uVar3] = (UnityEngine_GameObject_o *)pMVar15
                                            ;
                                            Il2CppCodeGenWriteBarrier(pUVar11->m_Items + (int)uVar3);
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)pSVar4,
                                                       (Il2CppObject *)pMVar15,
                                                       (MethodInfo_395D230 *)
                                                       pMVar20->klass->rgctx_data[0xe].method);
                                          }
                                          pUVar19 = (__this->fields).DoublePanelRight;
                                          pSVar4 = (__this->fields)._elements;
                                          pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0x58);
                                          pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                              ("Daylight",pMVar15);
                                          pMVar15 = (MethodInfo *)
                                                    UI_ElementFactory__CreateColorSetting
                                                              (pUVar19,(UI_ElementStyle_o *)pMVar14,pSVar10,
                                                               pSVar13,colorPickPopup,"",
                                                               90.0,30.0,
                                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                                               (MethodInfo *)0x0);
                                          pMVar20 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
                                          if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0)
                                          {
                                            piVar1 = &(pSVar4->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pUVar11 = (pSVar4->fields)._items;
                                            if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                              uVar3 = (pSVar4->fields)._size;
                                              if (uVar3 < (uint)pUVar11->max_length) {
                                                (pSVar4->fields)._size = uVar3 + 1;
                                                pUVar11->m_Items[(int)uVar3] =
                                                     (UnityEngine_GameObject_o *)pMVar15;
                                                Il2CppCodeGenWriteBarrier(pUVar11->m_Items + (int)uVar3);
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          ((System_Collections_Generic_List_object__o *)pSVar4
                                                           ,(Il2CppObject *)pMVar15,
                                                           (MethodInfo_395D230 *)
                                                           pMVar20->klass->rgctx_data[0xe].method);
                                              }
                                              pUVar19 = (__this->fields).DoublePanelRight;
                                              pSVar4 = (__this->fields)._elements;
                                              pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0x60);
                                              pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                                  ("DaylightIntensity",pMVar15);
                                              pMVar15 = (MethodInfo *)
                                                        UI_ElementFactory__CreateSliderSetting
                                                                  (pUVar19,(UI_ElementStyle_o *)pMVar14,
                                                                   pSVar10,pSVar13,"",150.0
                                                                   ,16.0,2,0.0,
                                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                                   (MethodInfo *)0x0);
                                              pMVar20 = 
                                              MethodInfo_System_Collections_Generic_List_GameObject_Add;
                                              if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)
                                                            0x0) {
                                                piVar1 = &(pSVar4->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pUVar11 = (pSVar4->fields)._items;
                                                if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                                  uVar3 = (pSVar4->fields)._size;
                                                  if (uVar3 < (uint)pUVar11->max_length) {
                                                    (pSVar4->fields)._size = uVar3 + 1;
                                                    pUVar11->m_Items[(int)uVar3] =
                                                         (UnityEngine_GameObject_o *)pMVar15;
                                                    Il2CppCodeGenWriteBarrier(pUVar11->m_Items + (int)uVar3);
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              ((System_Collections_Generic_List_object__o *)
                                                               pSVar4,(Il2CppObject *)pMVar15,
                                                               (MethodInfo_395D230 *)
                                                               pMVar20->klass->rgctx_data[0xe].method);
                                                  }
                                                  pUVar19 = (__this->fields).DoublePanelRight;
                                                  pSVar4 = (__this->fields)._elements;
                                                  pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0x68);
                                                  pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                                      ("DaylightDirection",pMVar15);
                                                  pMVar15 = (MethodInfo *)
                                                            UI_ElementFactory__CreateVector3Setting
                                                                      (pUVar19,(UI_ElementStyle_o *)pMVar14,
                                                                       pSVar10,pSVar13,vector3Popup,
                                                                       "",90.0,30.0,
                                                                       (UnityEngine_Events_UnityAction_o *)0x0
                                                                       ,(MethodInfo *)0x0);
                                                  pMVar20 = 
                                                  MethodInfo_System_Collections_Generic_List_GameObject_Add;
                                                  if (pSVar4 != (System_Collections_Generic_List_GameObject__o
                                                                 *)0x0) {
                                                    piVar1 = &(pSVar4->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar11 = (pSVar4->fields)._items;
                                                    if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                                      uVar3 = (pSVar4->fields)._size;
                                                      if (uVar3 < (uint)pUVar11->max_length) {
                                                        (pSVar4->fields)._size = uVar3 + 1;
                                                        pUVar11->m_Items[(int)uVar3] =
                                                             (UnityEngine_GameObject_o *)pMVar15;
                                                        Il2CppCodeGenWriteBarrier
                                                                  (pUVar11->m_Items + (int)uVar3);
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  ((System_Collections_Generic_List_object__o
                                                                    *)pSVar4,(Il2CppObject *)pMVar15,
                                                                   (MethodInfo_395D230 *)
                                                                   pMVar20->klass->rgctx_data[0xe].method);
                                                      }
                                                      pUVar19 = (__this->fields).DoublePanelRight;
                                                      pSVar4 = (__this->fields)._elements;
                                                      pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0x70);
                                                      pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                                          ("AmbientLight",pMVar15);
                                                      pMVar15 = (MethodInfo *)
                                                                UI_ElementFactory__CreateColorSetting
                                                                          (pUVar19,(UI_ElementStyle_o *)
                                                                                   pMVar14,pSVar10,pSVar13,
                                                                           colorPickPopup,
                                                                           "",90.0,30.0,
                                                                           (UnityEngine_Events_UnityAction_o *
                                                                           )0x0,(MethodInfo *)0x0);
                                                      pMVar20 = 
                                                      MethodInfo_System_Collections_Generic_List_GameObject_Add
                                                      ;
                                                      if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                        piVar1 = &(pSVar4->fields)._version;
                                                        *piVar1 = *piVar1 + 1;
                                                        pUVar11 = (pSVar4->fields)._items;
                                                        if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                                          uVar3 = (pSVar4->fields)._size;
                                                          if (uVar3 < (uint)pUVar11->max_length) {
                                                            (pSVar4->fields)._size = uVar3 + 1;
                                                            pUVar11->m_Items[(int)uVar3] =
                                                                 (UnityEngine_GameObject_o *)pMVar15;
                                                            Il2CppCodeGenWriteBarrier
                                                                      (pUVar11->m_Items + (int)uVar3);
                                                          }
                                                          else {
                                                                                                                        
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pMVar15,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar20->klass->rgctx_data[0xe].method);
                                                       }
                                                       pUVar19 = (__this->fields).DoublePanelRight;
                                                       pSVar4 = (__this->fields)._elements;
                                                       pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0x78);
                                                       pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                                           ("Flashlight",pMVar15);
                                                       pMVar15 = (MethodInfo *)
                                                                 UI_ElementFactory__CreateColorSetting
                                                                           (pUVar19,(UI_ElementStyle_o *)
                                                                                    pMVar14,pSVar10,pSVar13,
                                                                            colorPickPopup,
                                                                            "",90.0,30.0,
                                                                            (UnityEngine_Events_UnityAction_o
                                                                             *)0x0,(MethodInfo *)0x0);
                                                       pMVar20 = 
                                                       MethodInfo_System_Collections_Generic_List_GameObject_Add
                                                       ;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar11 = (pSVar4->fields)._items;
                                                         if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar3 = (pSVar4->fields)._size;
                                                           if (uVar3 < (uint)pUVar11->max_length) {
                                                             (pSVar4->fields)._size = uVar3 + 1;
                                                             pUVar11->m_Items[(int)uVar3] =
                                                                  (UnityEngine_GameObject_o *)pMVar15;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar11->m_Items + (int)uVar3);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pMVar15,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar20->klass->rgctx_data[0xe].method);
                                                       }
                                                       pUVar19 = (__this->fields).DoublePanelRight;
                                                       pSVar4 = (__this->fields)._elements;
                                                       pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0x88);
                                                       pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                                           ("FogColor",pMVar15);
                                                       pMVar15 = (MethodInfo *)
                                                                 UI_ElementFactory__CreateColorSetting
                                                                           (pUVar19,(UI_ElementStyle_o *)
                                                                                    pMVar14,pSVar10,pSVar13,
                                                                            colorPickPopup,
                                                                            "",90.0,30.0,
                                                                            (UnityEngine_Events_UnityAction_o
                                                                             *)0x0,(MethodInfo *)0x0);
                                                       pMVar20 = 
                                                       MethodInfo_System_Collections_Generic_List_GameObject_Add
                                                       ;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar11 = (pSVar4->fields)._items;
                                                         if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar3 = (pSVar4->fields)._size;
                                                           if (uVar3 < (uint)pUVar11->max_length) {
                                                             (pSVar4->fields)._size = uVar3 + 1;
                                                             pUVar11->m_Items[(int)uVar3] =
                                                                  (UnityEngine_GameObject_o *)pMVar15;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar11->m_Items + (int)uVar3);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pMVar15,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar20->klass->rgctx_data[0xe].method);
                                                       }
                                                       pUVar19 = (__this->fields).DoublePanelRight;
                                                       pSVar4 = (__this->fields)._elements;
                                                       pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0x80);
                                                       pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                                           ("FogDensity",pMVar15);
                                                       pMVar15 = (MethodInfo *)
                                                                 UI_ElementFactory__CreateSliderInputSetting
                                                                           (pUVar19,(UI_ElementStyle_o *)
                                                                                    pMVar14,pSVar10,pSVar13,
                                                                            "",130.0,16.0,
                                                                            70.0,40.0,3,(MethodInfo *)0x0);
                                                       pMVar20 = 
                                                       MethodInfo_System_Collections_Generic_List_GameObject_Add
                                                       ;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar11 = (pSVar4->fields)._items;
                                                         if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar3 = (pSVar4->fields)._size;
                                                           if (uVar3 < (uint)pUVar11->max_length) {
                                                             (pSVar4->fields)._size = uVar3 + 1;
                                                             pUVar11->m_Items[(int)uVar3] =
                                                                  (UnityEngine_GameObject_o *)pMVar15;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar11->m_Items + (int)uVar3);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pMVar15,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar20->klass->rgctx_data[0xe].method);
                                                       }
                                                       pUVar19 = (__this->fields).DoublePanelRight;
                                                       pSVar4 = (__this->fields)._elements;
                                                       pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0x90);
                                                       pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                                           ("Rain",pMVar15);
                                                       pMVar15 = (MethodInfo *)
                                                                 UI_ElementFactory__CreateSliderSetting
                                                                           (pUVar19,(UI_ElementStyle_o *)
                                                                                    pMVar14,pSVar10,pSVar13,
                                                                            "",150.0,16.0,2
                                                                            ,0.0,(
                                                       UnityEngine_Events_UnityAction_o *)0x0,
                                                       (MethodInfo *)0x0);
                                                       pMVar20 = 
                                                       MethodInfo_System_Collections_Generic_List_GameObject_Add
                                                       ;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar11 = (pSVar4->fields)._items;
                                                         if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar3 = (pSVar4->fields)._size;
                                                           if (uVar3 < (uint)pUVar11->max_length) {
                                                             (pSVar4->fields)._size = uVar3 + 1;
                                                             pUVar11->m_Items[(int)uVar3] =
                                                                  (UnityEngine_GameObject_o *)pMVar15;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar11->m_Items + (int)uVar3);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pMVar15,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar20->klass->rgctx_data[0xe].method);
                                                       }
                                                       pUVar19 = (__this->fields).DoublePanelRight;
                                                       pSVar4 = (__this->fields)._elements;
                                                       pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0x98);
                                                       pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                                           ("Thunder",pMVar15);
                                                       pMVar15 = (MethodInfo *)
                                                                 UI_ElementFactory__CreateSliderSetting
                                                                           (pUVar19,(UI_ElementStyle_o *)
                                                                                    pMVar14,pSVar10,pSVar13,
                                                                            "",150.0,16.0,2
                                                                            ,0.0,(
                                                       UnityEngine_Events_UnityAction_o *)0x0,
                                                       (MethodInfo *)0x0);
                                                       pMVar20 = 
                                                       MethodInfo_System_Collections_Generic_List_GameObject_Add
                                                       ;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar11 = (pSVar4->fields)._items;
                                                         if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar3 = (pSVar4->fields)._size;
                                                           if (uVar3 < (uint)pUVar11->max_length) {
                                                             (pSVar4->fields)._size = uVar3 + 1;
                                                             pUVar11->m_Items[(int)uVar3] =
                                                                  (UnityEngine_GameObject_o *)pMVar15;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar11->m_Items + (int)uVar3);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pMVar15,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar20->klass->rgctx_data[0xe].method);
                                                       }
                                                       pUVar19 = (__this->fields).DoublePanelRight;
                                                       pSVar4 = (__this->fields)._elements;
                                                       pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0xa0);
                                                       pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                                           ("Snow",pMVar15);
                                                       pMVar15 = (MethodInfo *)
                                                                 UI_ElementFactory__CreateSliderSetting
                                                                           (pUVar19,(UI_ElementStyle_o *)
                                                                                    pMVar14,pSVar10,pSVar13,
                                                                            "",150.0,16.0,2
                                                                            ,0.0,(
                                                       UnityEngine_Events_UnityAction_o *)0x0,
                                                       (MethodInfo *)0x0);
                                                       pMVar20 = 
                                                       MethodInfo_System_Collections_Generic_List_GameObject_Add
                                                       ;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar11 = (pSVar4->fields)._items;
                                                         if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar3 = (pSVar4->fields)._size;
                                                           if (uVar3 < (uint)pUVar11->max_length) {
                                                             (pSVar4->fields)._size = uVar3 + 1;
                                                             pUVar11->m_Items[(int)uVar3] =
                                                                  (UnityEngine_GameObject_o *)pMVar15;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar11->m_Items + (int)uVar3);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pMVar15,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar20->klass->rgctx_data[0xe].method);
                                                       }
                                                       pUVar19 = (__this->fields).DoublePanelRight;
                                                       pSVar4 = (__this->fields)._elements;
                                                       pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0xa8);
                                                       pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                                           ("Wind",pMVar15);
                                                       pMVar15 = (MethodInfo *)
                                                                 UI_ElementFactory__CreateSliderSetting
                                                                           (pUVar19,(UI_ElementStyle_o *)
                                                                                    pMVar14,pSVar10,pSVar13,
                                                                            "",150.0,16.0,2
                                                                            ,0.0,(
                                                       UnityEngine_Events_UnityAction_o *)0x0,
                                                       (MethodInfo *)0x0);
                                                       pMVar20 = 
                                                       MethodInfo_System_Collections_Generic_List_GameObject_Add
                                                       ;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar11 = (pSVar4->fields)._items;
                                                         if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar3 = (pSVar4->fields)._size;
                                                           if (uVar3 < (uint)pUVar11->max_length) {
                                                             (pSVar4->fields)._size = uVar3 + 1;
                                                             pUVar11->m_Items[(int)uVar3] =
                                                                  (UnityEngine_GameObject_o *)pMVar15;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar11->m_Items + (int)uVar3);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pMVar15,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar20->klass->rgctx_data[0xe].method);
                                                       }
                                                       pUVar19 = (__this->fields).DoublePanelRight;
                                                       pSVar4 = (__this->fields)._elements;
                                                       pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0xb0);
                                                       pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                                           ("WindDirection",pMVar15);
                                                       pMVar15 = (MethodInfo *)
                                                                 UI_ElementFactory__CreateVector3Setting
                                                                           (pUVar19,(UI_ElementStyle_o *)
                                                                                    pMVar14,pSVar10,pSVar13,
                                                                            vector3Popup,""
                                                                            ,90.0,30.0,
                                                                            (UnityEngine_Events_UnityAction_o
                                                                             *)0x0,(MethodInfo *)0x0);
                                                       pMVar20 = 
                                                       MethodInfo_System_Collections_Generic_List_GameObject_Add
                                                       ;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar11 = (pSVar4->fields)._items;
                                                         if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar3 = (pSVar4->fields)._size;
                                                           if (uVar3 < (uint)pUVar11->max_length) {
                                                             (pSVar4->fields)._size = uVar3 + 1;
                                                             pUVar11->m_Items[(int)uVar3] =
                                                                  (UnityEngine_GameObject_o *)pMVar15;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar11->m_Items + (int)uVar3);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pMVar15,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar20->klass->rgctx_data[0xe].method);
                                                       }
                                                       pUVar19 = (__this->fields).DoublePanelRight;
                                                       pSVar4 = (__this->fields)._elements;
                                                       pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0xb8);
                                                       pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                                           ("RainForce",pMVar15);
                                                       pMVar15 = (MethodInfo *)
                                                                 UI_ElementFactory__CreateInputSetting
                                                                           (pUVar19,(UI_ElementStyle_o *)
                                                                                    pMVar14,pSVar10,pSVar13,
                                                                            "",140.0,40.0,
                                                                            false,(
                                                       UnityEngine_Events_UnityAction_o *)0x0,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Func_string__bool__o *)0x0,
                                                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0)
                                                       ;
                                                       pMVar20 = 
                                                       MethodInfo_System_Collections_Generic_List_GameObject_Add
                                                       ;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar11 = (pSVar4->fields)._items;
                                                         if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar3 = (pSVar4->fields)._size;
                                                           if (uVar3 < (uint)pUVar11->max_length) {
                                                             (pSVar4->fields)._size = uVar3 + 1;
                                                             pUVar11->m_Items[(int)uVar3] =
                                                                  (UnityEngine_GameObject_o *)pMVar15;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar11->m_Items + (int)uVar3);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pMVar15,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar20->klass->rgctx_data[0xe].method);
                                                       }
                                                       pUVar19 = (__this->fields).DoublePanelRight;
                                                       pSVar4 = (__this->fields)._elements;
                                                       pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 0xc0);
                                                       pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                                           ("SnowForce",pMVar15);
                                                       pMVar15 = (MethodInfo *)
                                                                 UI_ElementFactory__CreateInputSetting
                                                                           (pUVar19,(UI_ElementStyle_o *)
                                                                                    pMVar14,pSVar10,pSVar13,
                                                                            "",140.0,40.0,
                                                                            false,(
                                                       UnityEngine_Events_UnityAction_o *)0x0,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Func_string__bool__o *)0x0,
                                                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0)
                                                       ;
                                                       pMVar20 = 
                                                       MethodInfo_System_Collections_Generic_List_GameObject_Add
                                                       ;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar11 = (pSVar4->fields)._items;
                                                         if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar3 = (pSVar4->fields)._size;
                                                           if (uVar3 < (uint)pUVar11->max_length) {
                                                             (pSVar4->fields)._size = uVar3 + 1;
                                                             pUVar11->m_Items[(int)uVar3] =
                                                                  (UnityEngine_GameObject_o *)pMVar15;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar11->m_Items + (int)uVar3);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pMVar15,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar20->klass->rgctx_data[0xe].method);
                                                       }
                                                       pUVar19 = (__this->fields).DoublePanelRight;
                                                       pSVar4 = (__this->fields)._elements;
                                                       pSVar10 = *(Settings_BaseSetting_o **)(lVar9 + 200);
                                                       pSVar13 = UI_MapEditorWeatherPopup__WeatherLocale
                                                                           ("WindForce",pMVar15);
                                                       pUVar16 = UI_ElementFactory__CreateInputSetting
                                                                           (pUVar19,(UI_ElementStyle_o *)
                                                                                    pMVar14,pSVar10,pSVar13,
                                                                            "",140.0,40.0,
                                                                            false,(
                                                       UnityEngine_Events_UnityAction_o *)0x0,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Func_string__bool__o *)0x0,
                                                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0)
                                                       ;
                                                       pMVar14 = 
                                                       MethodInfo_System_Collections_Generic_List_GameObject_Add
                                                       ;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar11 = (pSVar4->fields)._items;
                                                         if (pUVar11 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar3 = (pSVar4->fields)._size;
                                                           if (uVar3 < (uint)pUVar11->max_length) {
                                                             (pSVar4->fields)._size = uVar3 + 1;
                                                             pUVar11->m_Items[(int)uVar3] = pUVar16;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar11->m_Items + (int)uVar3);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar16,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar14->klass->rgctx_data[0xe].method);
                                                       }
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
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto label_05da9c13;
                            }
                          }
label_05da9c30:
                          ThrowIndexOutOfRangeException();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_05da9c13:
  ThrowNullReferenceException();
}


// UI.MapEditorWeatherPopup$$Locale
// il2cpp: System_String_o* UI_MapEditorWeatherPopup__Locale (System_String_o* item, const MethodInfo* method);
// 0x5da84d0

System_String_o * UI_MapEditorWeatherPopup__Locale(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075480d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480d6 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MapEditor","Weather",item,"",
                      "",in_R9);
  return pSVar1;
}


// UI.MapEditorWeatherPopup$$WeatherLocale
// il2cpp: System_String_o* UI_MapEditorWeatherPopup__WeatherLocale (System_String_o* item, const MethodInfo* method);
// 0x5da9cc0

System_String_o * UI_MapEditorWeatherPopup__WeatherLocale(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075480d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate");
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Weather.");
    Il2CppMethodInitialized_075480d7 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("Weather.",item,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("GameCreate","Sandbox",pSVar1,"",
                      "",in_R9);
  return pSVar1;
}


// UI.MapEditorWeatherPopup$$OnWeatherButtonClick
// il2cpp: void UI_MapEditorWeatherPopup__OnWeatherButtonClick (UI_MapEditorWeatherPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5da9d80
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5daa0a2: jmp 0x5daa388
// asm:   0x5daa19f: mov rdi, rbp
// asm:   0x5daa1a2: mov rsi, rax
// asm:   0x5daa38d: mov rdi, r15

void UI_MapEditorWeatherPopup__OnWeatherButtonClick
               (UI_MapEditorWeatherPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_TooltipPopup_o *pUVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  long lVar4;
  Settings_BoolSetting_o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  UI_MapEditorTopPanel_o *__this_00;
  bool bVar7;
  char cVar8;
  UI_MapEditorWeatherPopup___c__DisplayClass19_0_o *__this_01;
  UnityEngine_Events_UnityAction_o *__this_02;
  MethodInfo **ppMVar9;
  long *plVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  System_String_o *pSVar12;
  System_Action_o *__this_03;
  MethodInfo *method_00;
  System_String_o **targetAddress;
  UI_MapEditorMenu_c *method_01;
  UI_ExportPopup_o *__this_04;
  UI_BaseMenu_o *pUVar13;
  UI_ImportPopup_o *__this_05;
  
  if (Il2CppMethodInitialized_075480d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorWeatherPopup_c__DisplayClass19_0_OnWeatherButtonClick_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorWeatherPopup_c__DisplayClass19_0_OnWeatherButtonClick_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorWeatherPopup_c__DisplayClass19_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"ExportSchedule");
    il2cpp_codegen_initialize_runtime_metadata(&"ImportSchedule");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    Il2CppMethodInitialized_075480d8 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorWeatherPopup_c__DisplayClass19_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (UI_MapEditorWeatherPopup___c__DisplayClass19_0_o *)0x0) goto label_05daa388;
  (__this_01->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
  targetAddress = &(__this_01->fields).name;
  (__this_01->fields).name = name;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar13 = (UI_BaseMenu_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pUVar13 == (UI_BaseMenu_o *)0x0) goto label_05daa388;
  bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
  if (((((GameManagers_BaseGameManager_c *)pUVar13->klass)->_2).typeHierarchyDepth < bVar1) ||
     ((((GameManagers_BaseGameManager_c *)pUVar13->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
label_05daa390:
    il2cpp_codegen_raise_invalid_cast_exception(pUVar13);
  }
  pUVar2 = (pUVar13->fields).TooltipPopup;
  if (pUVar2 == (UI_TooltipPopup_o *)0x0) goto label_05daa388;
  pSVar3 = (pUVar2->fields)._popups;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  if (TypeInfo_UI_UIManager->static_fields->CurrentMenu == (UI_BaseMenu_o *)0x0) goto label_05daa388;
  pSVar12 = *targetAddress;
  bVar7 = System_String__op_Equality(pSVar12,"Import",(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar13 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar13 == (UI_BaseMenu_o *)0x0) goto label_05daa388;
    __this_05 = (pUVar13->fields).ImportPopup;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    ppMVar9 = &MethodInfo_UI_MapEditorWeatherPopup_c__DisplayClass19_0_OnWeatherButtonClick_b__0;
  }
  else {
    bVar7 = System_String__op_Equality(pSVar12,"Export",(MethodInfo *)0x0);
    if (bVar7) {
      if ((pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) ||
         (plVar10 = (long *)(*(pSVar3->klass->vtable)._5_set_Item.methodPtr)
                                      (pSVar3,(pSVar3->klass->vtable)._5_set_Item.method),
         plVar10 == (long *)0x0)) goto label_05daa388;
      cVar8 = (**(code **)(*plVar10 + 0x2f8))(plVar10,"Preset",*(undefined8 *)(*plVar10 + 0x300))
      ;
      if (cVar8 == '\0') {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_05daa086;
label_05daa166:
        pUVar13 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      }
      else {
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_5764070(false,(MethodInfo *)0x0);
        (**(code **)(*plVar10 + 0x1b8))
                  (plVar10,"Preset",pSVar11,*(undefined8 *)(*plVar10 + 0x1c0));
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_05daa166;
label_05daa086:
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        pUVar13 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      }
      if (pUVar13 != (UI_BaseMenu_o *)0x0) {
        __this_04 = (pUVar13->fields).ExportPopup;
        pSVar12 = (System_String_o *)
                  (**(code **)(*plVar10 + 0x318))(plVar10,4,*(undefined8 *)(*plVar10 + 800));
        if (__this_04 != (UI_ExportPopup_o *)0x0) {
label_05daa1a5:
          UI_ExportPopup__Show(__this_04,pSVar12,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_05daa388;
    }
    bVar7 = System_String__op_Equality(pSVar12,"ImportSchedule",(MethodInfo *)0x0);
    if (!bVar7) {
      bVar7 = System_String__op_Equality(pSVar12,"ExportSchedule",(MethodInfo *)0x0);
      if (!bVar7) {
        bVar7 = System_String__op_Equality(pSVar12,"Save",(MethodInfo *)0x0);
        if (!bVar7) {
          return;
        }
        pUVar2 = (pUVar13->fields).TooltipPopup;
        if (((pUVar2 != (UI_TooltipPopup_o *)0x0) &&
            (pSVar5 = (__this->fields)._hasWeather, pSVar5 != (Settings_BoolSetting_o *)0x0)) &&
           (pUVar6 = (pUVar2->fields).SinglePanel, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
          *(bool *)&(*(uint64_t *)((char *)pUVar6 + 0x20)) = (pSVar5->fields)._value;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar13 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (pUVar13 != (UI_BaseMenu_o *)0x0) {
            bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
            if (((((GameManagers_BaseGameManager_c *)pUVar13->klass)->_2).typeHierarchyDepth < bVar1) ||
               ((((GameManagers_BaseGameManager_c *)pUVar13->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) goto label_05daa390;
            __this_00 = (UI_MapEditorTopPanel_o *)(*(uint64_t *)((char *)pUVar13 + 0xb8));
            if (__this_00 != (UI_MapEditorTopPanel_o *)0x0) {
              method_01 = TypeInfo_UI_MapEditorMenu;
              if (Il2CppMethodInitialized_0754809c == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorTopPanel_Save_b__49_0);
                Il2CppMethodInitialized_0754809c = '\x01';
              }
              UI_MapEditorTopPanel__SyncMapScriptObjects(__this_00,(MethodInfo *)method_01);
              __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
              System_Action___ctor
                        (__this_03,(Il2CppObject *)__this_00,
                         (intptr_t)MethodInfo_UI_MapEditorTopPanel_Save_b__49_0,(MethodInfo *)0x0);
              UI_MapEditorTopPanel__TrySaveMapFile(__this_00,__this_03,method_00);
              (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
              return;
            }
          }
        }
        goto label_05daa388;
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar13 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (((pUVar13 == (UI_BaseMenu_o *)0x0) ||
          (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0)) ||
         ((lVar4 = *(long *)&(*(uint32_t *)((char *)pSVar3 + 0xe0)), lVar4 == 0 ||
          (__this_04 = (pUVar13->fields).ExportPopup, __this_04 == (UI_ExportPopup_o *)0x0))))
      goto label_05daa388;
      pSVar12 = *(System_String_o **)(lVar4 + 0x20);
      goto label_05daa1a5;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar13 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar13 == (UI_BaseMenu_o *)0x0) goto label_05daa388;
    __this_05 = (pUVar13->fields).ImportPopup;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    ppMVar9 = &MethodInfo_UI_MapEditorWeatherPopup_c__DisplayClass19_0_OnWeatherButtonClick_b__1;
  }
  UnityEngine_Events_UnityAction___ctor
            (__this_02,(Il2CppObject *)__this_01,(intptr_t)*ppMVar9,(MethodInfo *)0x0);
  if (__this_05 != (UI_ImportPopup_o *)0x0) {
    UI_ImportPopup__Show
              (__this_05,__this_02,true,"","",(MethodInfo *)0x0);
    return;
  }
label_05daa388:
  ThrowNullReferenceException();
}


// UI.MapEditorWeatherPopup$$OnWeatherSetOperationFinish
// il2cpp: void UI_MapEditorWeatherPopup__OnWeatherSetOperationFinish (UI_MapEditorWeatherPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5daa3b0
// eh: try 0x5daa562..0x5daa6f6 -> pad 0x5daa6f8 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5daa72c..0x5daa7ea -> pad 0x5daa7ea (+1 call sites) cleanup
// eh: try 0x5daa7ed..0x5daa7f2 -> pad 0x5daa7fa catch (...) [compiler noexcept guard]
// asm: 68 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5daa3f5: jmp 0x5daa7c4
// asm:   0x5daa6f6: jmp 0x5daa704
// asm:   0x5daa6f8: jmp 0x5daa704
// asm:   0x5daa6fa: jmp 0x5daa704
// asm:   0x5daa6fc: jmp 0x5daa704
// asm:   0x5daa6fe: jmp 0x5daa704
// asm:   0x5daa700: jmp 0x5daa704
// asm:   0x5daa702: jmp 0x5daa704
// asm:   0x5daa704: mov rbx, rax
// asm:   0x5daa707: cmp edx, 1
// asm:   0x5daa70a: jne 0x5daa7f2
// asm:   0x5daa710: mov rdi, rbx
// asm:   0x5daa713: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5daa718: mov rbx, rax
// asm:   0x5daa71b: lea rax, [rip + 0x17abfa6]
// asm:   0x5daa722: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5daa726: mov rax, qword ptr [rbx]
// asm:   0x5daa729: mov rsi, qword ptr [rax]
// asm:   0x5daa72c: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5daa731: test al, al
// asm:   0x5daa733: je 0x5daa7c9
// asm:   0x5daa739: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5daa73e: lea rdi, [rip + 0x14d3823]  ; TypeInfo_UI_UIManager
// asm:   0x5daa745: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5daa74a: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5daa751: jne 0x5daa75b
// asm:   0x5daa753: mov rdi, rax
// asm:   0x5daa756: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5daa75b: lea rdi, [rip + 0x152d58e]  ; "Common"
// asm:   0x5daa762: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5daa767: mov qword ptr [rsp], rax
// asm:   0x5daa76b: lea rdi, [rip + 0x15354d6]  ; "InvalidPreset"
// asm:   0x5daa772: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5daa777: mov r13, rax
// asm:   0x5daa77a: lea rbx, [rip + 0x15232a7]  ; ""
// asm:   0x5daa781: mov rdi, rbx
// asm:   0x5daa784: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5daa789: mov rbp, rax
// asm:   0x5daa78c: mov rdi, rbx
// asm:   0x5daa78f: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5daa794: mov r12, rax
// asm:   0x5daa797: mov rdi, rbx
// asm:   0x5daa79a: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5daa79f: mov rdi, qword ptr [rsp]
// asm:   0x5daa7a3: mov rsi, r13
// asm:   0x5daa7a6: mov rdx, rbp
// asm:   0x5daa7a9: mov rcx, r12
// asm:   0x5daa7ac: mov r8, rax
// asm:   0x5daa7af: call 0x5d94190  ; UI_UIManager__GetLocale()
// asm:   0x5daa7b4: test r15, r15
// asm:   0x5daa7b7: je 0x5daa7c4
// asm:   0x5daa7b9: mov rdi, r15
// asm:   0x5daa7bc: mov rsi, rax
// asm:   0x5daa7bf: jmp 0x5daa657
// asm:   0x5daa7c9: mov edi, 8
// asm:   0x5daa7ce: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5daa7d3: mov rcx, qword ptr [rbx]
// asm:   0x5daa7d6: mov qword ptr [rax], rcx
// asm:   0x5daa7d9: lea rsi, [rip + 0x1082d20]
// asm:   0x5daa7e0: mov rdi, rax
// asm:   0x5daa7e3: xor edx, edx
// asm:   0x5daa7e5: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5daa7ea: mov rbx, rax
// asm:   0x5daa7ed: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5daa7f2: mov rdi, rbx
// asm:   0x5daa7f5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5daa7fa: mov rdi, rax
// asm:   0x5daa7fd: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorWeatherPopup__OnWeatherSetOperationFinish
               (UI_MapEditorWeatherPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  UI_ImportPopup_o *__this_00;
  long *plVar4;
  Settings_StringSetting_o *pSVar5;
  Il2CppObject *value;
  bool bVar6;
  Weather_WeatherSchedule_o *__this_01;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_075480d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherSchedule);
    il2cpp_codegen_initialize_runtime_metadata(&"ImportSchedule");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    Il2CppMethodInitialized_075480d9 = '\x01';
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_05daa484;
label_05daa3e1:
    pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_05daa3e1;
label_05daa484:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  if ((pUVar2 != (UI_BaseMenu_o *)0x0) &&
     (pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager,
     pGVar3 != (GameManagers_BaseGameManager_o *)0x0)) {
    bVar1 = (((Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)->_2).typeHierarchyDepth;
    if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    if ((*(uint64_t *)((char *)pGVar3 + 0x28)) != (GameManagers_BaseGameManager_c *)0x0) {
      __this_00 = (pUVar2->fields).ImportPopup;
      plVar4 = *(long **)&(((*(Il2CppClass **)((char *)pGVar3 + 0x28)))->_1).this_arg.bits;
      bVar6 = System_String__op_Equality(name,"Import",(MethodInfo *)0x0);
      if (bVar6) {
        if (plVar4 == (long *)0x0) {
          ThrowNullReferenceException();
        }
        if (plVar4[6] == 0) {
          ThrowNullReferenceException();
        }
        if (__this_00 == (UI_ImportPopup_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar5 = (__this_00->fields).ImportSetting;
        if (pSVar5 == (Settings_StringSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        value = *(Il2CppObject **)(plVar4[6] + 0x20);
        (**(code **)(*plVar4 + 0x1c8))(plVar4,(pSVar5->fields)._value,*(undefined8 *)(*plVar4 + 0x1d0));
        if ((Settings_TypedSetting_bool__o *)plVar4[7] == (Settings_TypedSetting_bool__o *)0x0) {
          ThrowNullReferenceException();
        }
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)plVar4[7],false,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        if ((Settings_TypedSetting_T__o *)plVar4[6] == (Settings_TypedSetting_T__o *)0x0) {
          ThrowNullReferenceException();
        }
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)plVar4[6],value,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        (*(__this_00->klass->vtable)._22_Hide.methodPtr)(__this_00,(__this_00->klass->vtable)._22_Hide.method)
        ;
      }
      else {
        bVar6 = System_String__op_Equality(name,"ImportSchedule",(MethodInfo *)0x0);
        if (bVar6) {
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
          Weather_WeatherSchedule___ctor(__this_01,(MethodInfo *)0x0);
          if (((__this_00 == (UI_ImportPopup_o *)0x0) ||
              (pSVar5 = (__this_00->fields).ImportSetting, pSVar5 == (Settings_StringSetting_o *)0x0)) ||
             (__this_01 == (Weather_WeatherSchedule_o *)0x0)) goto label_05daa7c4;
          a = Weather_WeatherSchedule__DeserializeFromCSV(__this_01,(pSVar5->fields)._value,(MethodInfo *)0x0)
          ;
          bVar6 = System_String__op_Inequality
                            (a,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
          if (bVar6) {
            UI_ImportPopup__ShowError(__this_00,a,(MethodInfo *)0x0);
          }
          else {
            if (((plVar4 == (long *)0x0) ||
                (pSVar5 = (__this_00->fields).ImportSetting, pSVar5 == (Settings_StringSetting_o *)0x0)) ||
               ((Settings_TypedSetting_T__o *)plVar4[0x1c] == (Settings_TypedSetting_T__o *)0x0))
            goto label_05daa7c4;
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)plVar4[0x1c],(Il2CppObject *)(pSVar5->fields)._value,
                       (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            (*(__this_00->klass->vtable)._22_Hide.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._22_Hide.method);
          }
        }
      }
      (*(__this->klass->vtable)._21_Show.methodPtr)(__this,(__this->klass->vtable)._21_Show.method);
      return;
    }
  }
label_05daa7c4:
  ThrowNullReferenceException();
}


// UI.MapEditorWeatherPopup$$.ctor
// il2cpp: void UI_MapEditorWeatherPopup___ctor (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x5daa810

void UI_MapEditorWeatherPopup___ctor(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *__this_00;
  System_Collections_Generic_List_GameObject__o *__this_01;
  
  if (Il2CppMethodInitialized_075480da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_075480da = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(__this_00,false,(MethodInfo *)0x0);
  (__this->fields)._hasWeather = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hasWeather);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._elements = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._elements);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorWeatherPopup$$<Setup>b__15_0
// il2cpp: void UI_MapEditorWeatherPopup___Setup_b__15_0 (UI_MapEditorWeatherPopup_o* __this, const MethodInfo* method);
// 0x5daa8d0

void UI_MapEditorWeatherPopup___Setup_b__15_0(UI_MapEditorWeatherPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_075480db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_075480db = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorWeatherPopup__OnWeatherButtonClick(__this,"Save",in_RDX);
  return;
}


