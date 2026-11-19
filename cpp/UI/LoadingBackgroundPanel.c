// Type: UI.LoadingBackgroundPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/LoadingBackgroundPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingBackgroundPanel.cs
// --------------------------------

// UI.LoadingBackgroundPanel$$get_Title
// il2cpp: System_String_o* UI_LoadingBackgroundPanel__get_Title (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5d55580

System_String_o * UI_LoadingBackgroundPanel__get_Title(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.LoadingBackgroundPanel$$get_Width
// il2cpp: float UI_LoadingBackgroundPanel__get_Width (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5d555a0

float UI_LoadingBackgroundPanel__get_Width(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.LoadingBackgroundPanel$$get_Height
// il2cpp: float UI_LoadingBackgroundPanel__get_Height (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5d555b0

float UI_LoadingBackgroundPanel__get_Height(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.LoadingBackgroundPanel$$get_TopBarHeight
// il2cpp: float UI_LoadingBackgroundPanel__get_TopBarHeight (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5d555c0

float UI_LoadingBackgroundPanel__get_TopBarHeight(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.LoadingBackgroundPanel$$get_BottomBarHeight
// il2cpp: float UI_LoadingBackgroundPanel__get_BottomBarHeight (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5d555d0

float UI_LoadingBackgroundPanel__get_BottomBarHeight(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.LoadingBackgroundPanel$$get_ShowOnTop
// il2cpp: bool UI_LoadingBackgroundPanel__get_ShowOnTop (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5d555e0

bool UI_LoadingBackgroundPanel__get_ShowOnTop(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return false;
}


// UI.LoadingBackgroundPanel$$get_PopupAnimationType
// il2cpp: int32_t UI_LoadingBackgroundPanel__get_PopupAnimationType (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5d555f0

int32_t UI_LoadingBackgroundPanel__get_PopupAnimationType
                  (UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.LoadingBackgroundPanel$$get_AnimationTime
// il2cpp: float UI_LoadingBackgroundPanel__get_AnimationTime (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5d55600

float UI_LoadingBackgroundPanel__get_AnimationTime(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.LoadingBackgroundPanel$$Setup
// il2cpp: void UI_LoadingBackgroundPanel__Setup (UI_LoadingBackgroundPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d55610

void UI_LoadingBackgroundPanel__Setup
               (UI_LoadingBackgroundPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  UnityEngine_GameObject_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547f23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/MainMenu/MainBackground");
    Il2CppMethodInitialized_07547f23 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  parent_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar1 = UI_ElementFactory__InstantiateAndBind(parent_00,"Prefabs/MainMenu/MainBackground",(MethodInfo *)0x0);
  (__this->fields)._background = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._background);
  return;
}


// UI.LoadingBackgroundPanel$$SetRandomBackground
// il2cpp: void UI_LoadingBackgroundPanel__SetRandomBackground (UI_LoadingBackgroundPanel_o* __this, bool loading, bool seasonal, const MethodInfo* method);
// 0x5d55690
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d557e1: mov rbp, rax
// asm:   0x5d557e4: nop word ptr cs:[rax + rax]

void UI_LoadingBackgroundPanel__SetRandomBackground
               (UI_LoadingBackgroundPanel_o *__this,bool loading,bool seasonal,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  int32_t iVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONArray_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *in_R8;
  System_String_o *path;
  
  if (Il2CppMethodInitialized_07547f24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadingBackgrounds");
    il2cpp_codegen_initialize_runtime_metadata(&"EventBackgrounds");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBackgrounds");
    Il2CppMethodInitialized_07547f24 = '\x01';
  }
  path = "MainBackgrounds";
  pSVar6 = "EventBackgrounds";
  if (seasonal) {
    pSVar4 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
    if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05d55830;
    bVar1 = (*(pSVar4->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar4,"EventBackgrounds",(pSVar4->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      pSVar4 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
      if (((pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
          (pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                              (pSVar4,pSVar6,(pSVar4->klass->vtable)._7_get_Item.method),
          pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0)) ||
         (pSVar5 = (*(pSVar4->klass->vtable)._45_get_AsArray.methodPtr)
                             (pSVar4,(pSVar4->klass->vtable)._45_get_AsArray.method),
         pSVar5 == (SimpleJSONFixed_JSONArray_o *)0x0)) goto label_05d55830;
      iVar2 = (**(code **)((long)pSVar5->klass + 0x1e8))(pSVar5,*(undefined8 *)((long)pSVar5->klass + 0x1f0));
      if (0 < iVar2) {
        path = pSVar6;
      }
    }
  }
  pSVar4 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
  if (loading) {
    if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05d55830;
    pSVar6 = "LoadingBackgrounds";
  }
  else {
    pSVar6 = path;
    if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05d55830;
  }
  pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar4,pSVar6,(pSVar4->klass->vtable)._7_get_Item.method);
  if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    do {
      iVar3 = (*(pSVar4->klass->vtable)._11_get_Count.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._11_get_Count.method);
      iVar3 = UnityEngine_Random__Range_690e2b0(0,iVar3,(MethodInfo *)0x0);
    } while (iVar3 == (__this->fields).BackgroundIndex);
    UI_LoadingBackgroundPanel__SetBackground(__this,loading,iVar3,path,in_R8);
    return;
  }
label_05d55830:
  ThrowNullReferenceException();
}


// UI.LoadingBackgroundPanel$$SetBackground
// il2cpp: void UI_LoadingBackgroundPanel__SetBackground (UI_LoadingBackgroundPanel_o* __this, bool loading, int32_t backgroundIndex, System_String_o* path, const MethodInfo* method);
// 0x5d55840
// eh: try 0x5d559ab..0x5d55bb1 -> pad 0x5d55bb5 (+18 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5d55bf5..0x5d55c7b -> pad 0x5d55c7b (+1 call sites) cleanup
// eh: try 0x5d55c7e..0x5d55c83 -> pad 0x5d55c8b catch (...) [compiler noexcept guard]
// asm: 63 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d55bb1: jmp 0x5d55bcd
// asm:   0x5d55bb3: jmp 0x5d55bcd
// asm:   0x5d55bb5: jmp 0x5d55bcd
// asm:   0x5d55bb7: jmp 0x5d55bcd
// asm:   0x5d55bb9: jmp 0x5d55bcd
// asm:   0x5d55bbb: jmp 0x5d55bcd
// asm:   0x5d55bbd: jmp 0x5d55bcd
// asm:   0x5d55bbf: jmp 0x5d55bcd
// asm:   0x5d55bc1: jmp 0x5d55bcd
// asm:   0x5d55bc3: jmp 0x5d55bcd
// asm:   0x5d55bc5: jmp 0x5d55bcd
// asm:   0x5d55bc7: jmp 0x5d55bcd
// asm:   0x5d55bc9: jmp 0x5d55bcd
// asm:   0x5d55bcb: jmp 0x5d55bcd
// asm:   0x5d55bcd: mov rbx, rax
// asm:   0x5d55bd0: cmp edx, 1
// asm:   0x5d55bd3: jne 0x5d55c83
// asm:   0x5d55bd9: mov rdi, rbx
// asm:   0x5d55bdc: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d55be1: mov rbx, rax
// asm:   0x5d55be4: lea rax, [rip + 0x1800add]
// asm:   0x5d55beb: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5d55bef: mov rax, qword ptr [rbx]
// asm:   0x5d55bf2: mov rsi, qword ptr [rax]
// asm:   0x5d55bf5: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5d55bfa: test al, al
// asm:   0x5d55bfc: je 0x5d55c5a
// asm:   0x5d55bfe: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d55c03: lea rdi, [rsp + 0xc]
// asm:   0x5d55c08: xor esi, esi
// asm:   0x5d55c0a: call 0x55b73e0  ; System_Int32__ToString()
// asm:   0x5d55c0f: mov rbx, rax
// asm:   0x5d55c12: lea rdi, [rip + 0x1585377]  ; "Error loading main background "
// asm:   0x5d55c19: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5d55c1e: mov rdi, rax
// asm:   0x5d55c21: mov rsi, rbx
// asm:   0x5d55c24: xor edx, edx
// asm:   0x5d55c26: call 0x53f0320  ; System_String__Concat()
// asm:   0x5d55c2b: mov rbx, rax
// asm:   0x5d55c2e: lea rdi, [rip + 0x1521a13]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5d55c35: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5d55c3a: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5d55c41: jne 0x5d55c4b
// asm:   0x5d55c43: mov rdi, rax
// asm:   0x5d55c46: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5d55c4b: mov rdi, rbx
// asm:   0x5d55c4e: xor esi, esi
// asm:   0x5d55c50: call 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5d55c55: jmp 0x5d55b6c
// asm:   0x5d55c5a: mov edi, 8
// asm:   0x5d55c5f: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5d55c64: mov rcx, qword ptr [rbx]
// asm:   0x5d55c67: mov qword ptr [rax], rcx
// asm:   0x5d55c6a: lea rsi, [rip + 0x10d788f]
// asm:   0x5d55c71: mov rdi, rax
// asm:   0x5d55c74: xor edx, edx
// asm:   0x5d55c76: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5d55c7b: mov rbx, rax
// asm:   0x5d55c7e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d55c83: mov rdi, rbx
// asm:   0x5d55c86: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d55c8b: mov rdi, rax
// asm:   0x5d55c8e: call 0x2ab61e0  ; __clang_call_terminate()

void UI_LoadingBackgroundPanel__SetBackground
               (UI_LoadingBackgroundPanel_o *__this,bool loading,int32_t backgroundIndex,System_String_o *path
               ,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar2;
  UnityEngine_Vector2_o value;
  int32_t iVar3;
  int32_t iVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_RawImage_o *__this_01;
  System_String_o *pSVar7;
  UnityEngine_Texture_o *pUVar8;
  UnityEngine_RectTransform_o *__this_02;
  float fVar9;
  
  if (Il2CppMethodInitialized_07547f25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadingBackgrounds");
    il2cpp_codegen_initialize_runtime_metadata(&"Backgrounds/");
    il2cpp_codegen_initialize_runtime_metadata(&"Backgrounds/MainBackgroundBlankTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    Il2CppMethodInitialized_07547f25 = '\x01';
  }
  (__this->fields).BackgroundIndex = backgroundIndex;
  pSVar5 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
  if (loading) {
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05d55b79;
    path = "LoadingBackgrounds";
  }
  else if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05d55b79;
  pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar5,path,(pSVar5->klass->vtable)._7_get_Item.method);
  __this_00 = (__this->fields)._background;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      pUVar6 = UnityEngine_Transform__Find(pUVar6,"Image",(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        __this_01 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar6,
                               (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
        uVar1 = (TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor;
        if ((__this->fields).BackgroundIndex < 0) {
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pUVar8 = (UnityEngine_Texture_o *)
                   ApplicationManagers_ResourceManager__LoadAsset
                             (pSVar2,"Backgrounds/MainBackgroundBlankTexture",false,false,(MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_UI_RawImage_o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pUVar8 != (UnityEngine_Texture_o *)0x0) &&
             (pUVar8->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar8);
          }
          UnityEngine_UI_RawImage__set_texture(__this_01,pUVar8,(MethodInfo *)0x0);
        }
        else {
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
          pSVar5 = (*(pSVar5->klass->vtable)._5_get_Item.methodPtr)
                             (pSVar5,backgroundIndex,(pSVar5->klass->vtable)._5_get_Item.method);
          if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar7 = (System_String_o *)
                   (**(code **)((long)pSVar5->klass + 0x1c8))
                             (pSVar5,*(undefined8 *)((long)pSVar5->klass + 0x1d0));
          pSVar7 = System_String__Concat_52f0320("Backgrounds/",pSVar7,(MethodInfo *)0x0);
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pUVar8 = (UnityEngine_Texture_o *)
                   ApplicationManagers_ResourceManager__LoadAsset(pSVar2,pSVar7,false,false,(MethodInfo *)0x0)
          ;
          if (__this_01 == (UnityEngine_UI_RawImage_o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pUVar8 != (UnityEngine_Texture_o *)0x0) &&
             (pUVar8->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar8);
          }
          UnityEngine_UI_RawImage__set_texture(__this_01,pUVar8,(MethodInfo *)0x0);
        }
        pUVar8 = (__this_01->fields).m_Texture;
        if (pUVar8 == (UnityEngine_Texture_o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar3 = (*(pUVar8->klass->vtable)._5_get_width.methodPtr)
                          (pUVar8,(pUVar8->klass->vtable)._5_get_width.method);
        pUVar8 = (__this_01->fields).m_Texture;
        if (pUVar8 == (UnityEngine_Texture_o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar4 = (*(pUVar8->klass->vtable)._7_get_height.methodPtr)
                          (pUVar8,(pUVar8->klass->vtable)._7_get_height.method);
        __this_02 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_01,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        if (__this_02 == (UnityEngine_RectTransform_o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar9 = (float)iVar4 * (1928.0 / (float)iVar3);
        if (fVar9 <= 1084.0) {
          fVar9 = 1084.0;
        }
        value.fields.y = fVar9;
        value.fields.x = 1928.0;
        UnityEngine_RectTransform__set_sizeDelta(__this_02,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05d55b79:
  ThrowNullReferenceException();
}


// UI.LoadingBackgroundPanel$$GetAnimationSpeed
// il2cpp: float UI_LoadingBackgroundPanel__GetAnimationSpeed (UI_LoadingBackgroundPanel_o* __this, float min, float max, const MethodInfo* method);
// 0x5d55ca0

float UI_LoadingBackgroundPanel__GetAnimationSpeed
                (UI_LoadingBackgroundPanel_o *__this,float min,float max,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07547f26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547f26 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).FadeLoadscreen, pSVar2 == (Settings_BoolSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((pSVar2->fields)._value == false) {
    return (max - min) / 0.01;
  }
  fVar3 = UI_BasePopup__GetAnimationSpeed((UI_BasePopup_o *)__this,min,max,(MethodInfo *)0x0);
  return fVar3;
}


// UI.LoadingBackgroundPanel$$.ctor
// il2cpp: void UI_LoadingBackgroundPanel___ctor (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x5d55d40

void UI_LoadingBackgroundPanel___ctor(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  (__this->fields).BackgroundIndex = -1;
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


