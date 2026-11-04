// Type: UI.LoadingBackgroundPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/LoadingBackgroundPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingBackgroundPanel.cs
// --------------------------------

// UI.LoadingBackgroundPanel$$get_Title
// il2cpp: System_String_o* UI_LoadingBackgroundPanel__get_Title (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_LoadingBackgroundPanel__get_Title(UI_LoadingBackgroundPanel_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.LoadingBackgroundPanel$$get_Width
// il2cpp: float UI_LoadingBackgroundPanel__get_Width (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_LoadingBackgroundPanel__get_Width(UI_LoadingBackgroundPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.LoadingBackgroundPanel$$get_Height
// il2cpp: float UI_LoadingBackgroundPanel__get_Height (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_LoadingBackgroundPanel__get_Height(UI_LoadingBackgroundPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.LoadingBackgroundPanel$$get_TopBarHeight
// il2cpp: float UI_LoadingBackgroundPanel__get_TopBarHeight (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_LoadingBackgroundPanel__get_TopBarHeight(UI_LoadingBackgroundPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.LoadingBackgroundPanel$$get_BottomBarHeight
// il2cpp: float UI_LoadingBackgroundPanel__get_BottomBarHeight (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_LoadingBackgroundPanel__get_BottomBarHeight(UI_LoadingBackgroundPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.LoadingBackgroundPanel$$get_ShowOnTop
// il2cpp: bool UI_LoadingBackgroundPanel__get_ShowOnTop (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x180668280

bool
UI_LoadingBackgroundPanel__get_ShowOnTop(UI_LoadingBackgroundPanel_o* __this, MethodInfo* method)

{
  return false;
}


// UI.LoadingBackgroundPanel$$get_PopupAnimationType
// il2cpp: int32_t UI_LoadingBackgroundPanel__get_PopupAnimationType (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_LoadingBackgroundPanel__get_PopupAnimationType(UI_LoadingBackgroundPanel_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.LoadingBackgroundPanel$$get_AnimationTime
// il2cpp: float UI_LoadingBackgroundPanel__get_AnimationTime (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x182245d40

float
UI_LoadingBackgroundPanel__get_AnimationTime(UI_LoadingBackgroundPanel_o* __this, MethodInfo* method)

{
  return 0.2;
}


// UI.LoadingBackgroundPanel$$Setup
// il2cpp: void UI_LoadingBackgroundPanel__Setup (UI_LoadingBackgroundPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18227a780

void UI_LoadingBackgroundPanel__Setup
               (UI_LoadingBackgroundPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  UnityEngine_GameObject_o *value;
  
  if (Il2CppMethodInitialized_1843473a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/MainMenu/MainBackground");
    Il2CppMethodInitialized_1843473a0 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  parent_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  value = UI_ElementFactory__InstantiateAndBind(parent_00,"Prefabs/MainMenu/MainBackground",(MethodInfo *)0x0);
  (__this->fields)._background = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._background,value);
  return;
}


// UI.LoadingBackgroundPanel$$SetRandomBackground
// il2cpp: void UI_LoadingBackgroundPanel__SetRandomBackground (UI_LoadingBackgroundPanel_o* __this, bool loading, bool seasonal, const MethodInfo* method);
// 0x18227a5e0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18227a702: mov rdx, qword ptr [rip + 0x1e71167]  ; "LoadingBackgrounds"
// asm:   0x18227a709: jmp 0x18227a713
// asm:   0x18227a70b: test rcx, rcx
// asm:   0x18227a710: mov rdx, rdi

void UI_LoadingBackgroundPanel__SetRandomBackground
               (UI_LoadingBackgroundPanel_o *__this,bool loading,bool seasonal,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  MethodInfo *pMVar2;
  System_String_o *pSVar3;
  bool bVar4;
  int iVar5;
  int32_t backgroundIndex;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  longlong *plVar7;
  System_Xml_Schema_XmlSchema_o *pSVar8;
  MethodInfo *path;
  
  if (Il2CppMethodInitialized_1843473a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadingBackgrounds");
    il2cpp_codegen_initialize_runtime_metadata(&"EventBackgrounds");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBackgrounds");
    Il2CppMethodInitialized_1843473a1 = '\x01';
  }
  path = (MethodInfo *)"MainBackgrounds";
  pSVar3 = "EventBackgrounds";
  if (seasonal) {
    pSVar1 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
    if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18227a776;
    bVar4 = (*(pSVar1->klass->vtable)._28_HasKey.methodPtr)(pSVar1,(MethodInfo *)"EventBackgrounds");
    if (bVar4) {
      pSVar1 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
      if (((pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
          (pSVar6 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,(MethodInfo *)pSVar3),
          pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0)) ||
         (plVar7 = (longlong *)
                   (*(code *)((Il2CppClass *)pSVar6->klass)->vtable[45].methodPtr)
                             (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[45].method),
         plVar7 == (longlong *)0x0)) goto label_18227a776;
      iVar5 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
      if (0 < iVar5) {
        path = (MethodInfo *)pSVar3;
      }
    }
  }
  pSVar1 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
  pMVar2 = path;
  if (loading) {
    pMVar2 = (MethodInfo *)"LoadingBackgrounds";
  }
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar6 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,pMVar2);
    while (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar8 = (*(pSVar6->klass->vtable)._11_get_NameAttribute.methodPtr)
                         (pSVar6,(pSVar6->klass->vtable)._11_get_NameAttribute.method);
      backgroundIndex = UnityEngine_Random__RandomRangeInt(0,(int32_t)pSVar8,(MethodInfo *)0x0);
      if (backgroundIndex != (__this->fields).BackgroundIndex) {
        UI_LoadingBackgroundPanel__SetBackground
                  (__this,loading,backgroundIndex,(System_String_o *)path,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_18227a776:
  ThrowNullReferenceException();
}


// UI.LoadingBackgroundPanel$$SetBackground
// il2cpp: void UI_LoadingBackgroundPanel__SetBackground (UI_LoadingBackgroundPanel_o* __this, bool loading, int32_t backgroundIndex, System_String_o* path, const MethodInfo* method);
// 0x18227a1e0
// eh: try 0x18227a32f..0x18227a5d6 -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 47 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18227a2ba: mov rdx, qword ptr [rip + 0x1e715af]  ; "LoadingBackgrounds"
// asm:   0x18227a2c1: jmp 0x18227a2cf
// asm:   0x18227a2c3: test rcx, rcx
// asm:   0x18227a2cc: mov rdx, rsi
// asm:   0x18227a52c: xor edx, edx
// asm:   0x18227a52e: lea rcx, [rsp + 0x90]
// asm:   0x18227a536: call 0x181b29870  ; System_Int32__ToString()
// asm:   0x18227a53b: mov rbx, rax
// asm:   0x18227a53e: lea rcx, [rip + 0x1e548eb]  ; "Error loading main background "
// asm:   0x18227a545: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18227a54a: mov rcx, rax
// asm:   0x18227a54d: xor r8d, r8d
// asm:   0x18227a550: mov rdx, rbx
// asm:   0x18227a553: call 0x181969e50  ; System_String__Concat()
// asm:   0x18227a558: mov rbx, rax
// asm:   0x18227a55b: lea rcx, [rip + 0x1e80ed6]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18227a562: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18227a567: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18227a56e: jne 0x18227a578
// asm:   0x18227a570: mov rcx, rax
// asm:   0x18227a573: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18227a578: xor edx, edx
// asm:   0x18227a57a: mov rcx, rbx
// asm:   0x18227a57d: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

void UI_LoadingBackgroundPanel__SetBackground
               (UI_LoadingBackgroundPanel_o *__this,bool loading,int32_t backgroundIndex,System_String_o *path
               ,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar2;
  UnityEngine_Vector2_o value;
  int32_t iVar3;
  int32_t iVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_RawImage_o *__this_01;
  longlong *plVar7;
  System_String_o *pSVar8;
  UnityEngine_Texture_o *pUVar9;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_Texture_o *pUVar10;
  float fVar11;
  
  if (Il2CppMethodInitialized_1843473a2 == '\0') {
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
    Il2CppMethodInitialized_1843473a2 = '\x01';
  }
  (__this->fields).BackgroundIndex = backgroundIndex;
  pSVar1 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
  if (loading) {
    path = "LoadingBackgrounds";
  }
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar5 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,(MethodInfo *)path);
    __this_00 = (__this->fields)._background;
    if (((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
        (pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
        pUVar6 != (UnityEngine_Transform_o *)0x0)) &&
       (pUVar6 = UnityEngine_Transform__Find(pUVar6,"Image",(MethodInfo *)0x0),
       pUVar6 != (UnityEngine_Transform_o *)0x0)) {
      __this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar6,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
      if ((__this->fields).BackgroundIndex < 0) {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pUVar9 = (UnityEngine_Texture_o *)
                 ApplicationManagers_ResourceManager__LoadAsset
                           (pSVar2,"Backgrounds/MainBackgroundBlankTexture",false,(MethodInfo *)0x0);
        if (__this_01 == (UnityEngine_UI_RawImage_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar10 = (UnityEngine_Texture_o *)0x0;
        if (pUVar9 != (UnityEngine_Texture_o *)0x0) {
          if (pUVar9->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
            pUVar10 = pUVar9;
          }
          if (pUVar10 == (UnityEngine_Texture_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar9,TypeInfo_UnityEngine_Texture2D);
          }
        }
        UnityEngine_UI_RawImage__set_texture(__this_01,pUVar10,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        if (pSVar5 == (System_Xml_Schema_XmlSchema_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
        plVar7 = (longlong *)
                 (*(pSVar5->klass->vtable)._5_OnRemove.methodPtr)
                           (pSVar5,(System_Type_o *)backgroundIndex,(pSVar5->klass->vtable)._5_OnRemove.method
                           );
        if (plVar7 == (longlong *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar8 = (System_String_o *)(**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
        pSVar8 = System_String__Concat_1969e50("Backgrounds/",pSVar8,(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pUVar9 = (UnityEngine_Texture_o *)
                 ApplicationManagers_ResourceManager__LoadAsset(pSVar2,pSVar8,false,(MethodInfo *)0x0);
        if (__this_01 == (UnityEngine_UI_RawImage_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar10 = (UnityEngine_Texture_o *)0x0;
        if (pUVar9 != (UnityEngine_Texture_o *)0x0) {
          if (pUVar9->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
            pUVar10 = pUVar9;
          }
          if (pUVar10 == (UnityEngine_Texture_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar9,TypeInfo_UnityEngine_Texture2D);
          }
        }
        UnityEngine_UI_RawImage__set_texture(__this_01,pUVar10,(MethodInfo *)0x0);
      }
      pUVar9 = (__this_01->fields).m_Texture;
      if (pUVar9 == (UnityEngine_Texture_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar3 = (*(pUVar9->klass->vtable)._5_get_width.methodPtr)
                        (pUVar9,(pUVar9->klass->vtable)._5_get_width.method);
      pUVar9 = (__this_01->fields).m_Texture;
      if (pUVar9 == (UnityEngine_Texture_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar4 = (*(pUVar9->klass->vtable)._7_get_height.methodPtr)
                        (pUVar9,(pUVar9->klass->vtable)._7_get_height.method);
      fVar11 = (float)iVar4 * (1928.0 / (float)iVar3);
      if (fVar11 <= 1084.0) {
        fVar11 = 1084.0;
      }
      __this_02 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_01,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform)
      ;
      if (__this_02 == (UnityEngine_RectTransform_o *)0x0) {
        ThrowNullReferenceException();
      }
      value.fields.y = fVar11;
      value.fields.x = 1928.0;
      UnityEngine_RectTransform__set_sizeDelta(__this_02,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.LoadingBackgroundPanel$$GetAnimationSpeed
// il2cpp: float UI_LoadingBackgroundPanel__GetAnimationSpeed (UI_LoadingBackgroundPanel_o* __this, float min, float max, const MethodInfo* method);
// 0x18227a130

float UI_LoadingBackgroundPanel__GetAnimationSpeed
                (UI_LoadingBackgroundPanel_o *__this,float min,float max,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843473a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_1843473a3 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).FadeLoadscreen, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar2->fields)._value == false) {
      return (max - min) / 0.01;
    }
    fVar3 = UI_BasePopup__GetAnimationSpeed((UI_BasePopup_o *)__this,min,max,(MethodInfo *)0x0);
    return fVar3;
  }
  ThrowNullReferenceException();
}


// UI.LoadingBackgroundPanel$$.ctor
// il2cpp: void UI_LoadingBackgroundPanel___ctor (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x18227a800

void UI_LoadingBackgroundPanel___ctor(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  (__this->fields).BackgroundIndex = -1;
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


