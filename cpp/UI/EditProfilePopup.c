// Type: UI.EditProfilePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/EditProfilePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/EditProfilePopup.cs
// --------------------------------

// UI.EditProfilePopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_EditProfilePopup___c__DisplayClass15_0___ctor (UI_EditProfilePopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x43fc410

void UI_EditProfilePopup___c__DisplayClass15_0___ctor
               (UI_EditProfilePopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup.<>c__DisplayClass15_0$$<SetupTopButtons>b__0
// il2cpp: void UI_EditProfilePopup___c__DisplayClass15_0___SetupTopButtons_b__0 (UI_EditProfilePopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x43fc680

void UI_EditProfilePopup___c__DisplayClass15_0___SetupTopButtons_b__0
               (UI_EditProfilePopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  long *plVar1;
  System_Threading_CancellationTokenSource_c *pSVar2;
  code *vtableDispatch;
  undefined8 uVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_Threading_CancellationTokenSource_o *pSVar4;
  System_String_o *a;
  bool_conflict bVar5;
  undefined8 extraout_RDX;
  UI_TooltipPopup_o *__this_00;
  UI_EditProfilePopup_o *pUVar6;
  
  pUVar6 = (__this->fields).__4__this;
  if (pUVar6 != (UI_EditProfilePopup_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar6->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (pUVar6,(__this->fields).buttonName,(pUVar6->klass->vtable)._28_SetCategoryPanel.method,
               UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar4 = (pUVar6->fields).m_CancellationTokenSource;
  if (pSVar4 != (System_Threading_CancellationTokenSource_o *)0x0) {
    a = (System_String_o *)(pUVar6->fields).m_CachedPtr;
    if (g_data_057ae56c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&"Save");
      g_data_057ae56c = '\x01';
    }
    bVar5 = System_String__op_Equality(a,"Save",(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x238))();
        plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
          pSVar2 = pSVar4->klass;
          vtableDispatch = *(code **)&pSVar2[1]._2.element_size;
          uVar3._0_4_ = pSVar2[1]._2.static_fields_size;
          uVar3._4_4_ = pSVar2[1]._2.thread_static_fields_size;
          (*vtableDispatch)(pSVar4,uVar3,extraout_RDX,vtableDispatch);
          return;
        }
      }
      __this_00 = (UI_TooltipPopup_o *)0x0;
      il2cpp_runtime_helper_022b2c90();
      UI_BasePopup___ctor(__this_00,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.EditProfilePopup.<>c__DisplayClass19_0$$.ctor
// il2cpp: void UI_EditProfilePopup___c__DisplayClass19_0___ctor (UI_EditProfilePopup___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x43fc590

void UI_EditProfilePopup___c__DisplayClass19_0___ctor
               (UI_EditProfilePopup___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup.<>c__DisplayClass19_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_EditProfilePopup___c__DisplayClass19_0___SetupBottomButtons_b__0 (UI_EditProfilePopup___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x43fc6b0

void UI_EditProfilePopup___c__DisplayClass19_0___SetupBottomButtons_b__0
               (UI_EditProfilePopup___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  long *plVar1;
  Il2CppMethodPointer vtableDispatch;
  UI_EditProfilePopup_o *pUVar2;
  System_String_o *a;
  bool_conflict bVar3;
  undefined8 extraout_RDX;
  UI_TooltipPopup_o *__this_00;
  
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 == (UI_EditProfilePopup_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  a = (__this->fields).buttonName;
  if (g_data_057ae56c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae56c = '\x01';
  }
  bVar3 = System_String__op_Equality(a,"Save",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x238))();
      plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
        vtableDispatch = (pUVar2->klass->vtable)._22_Hide.methodPtr;
        (*vtableDispatch)
                  (pUVar2,(pUVar2->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
        return;
      }
    }
    __this_00 = (UI_TooltipPopup_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    UI_BasePopup___ctor(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.EditProfilePopup$$get_Title
// il2cpp: System_String_o* UI_EditProfilePopup__get_Title (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x43fbe40

System_String_o * UI_EditProfilePopup__get_Title(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.EditProfilePopup$$get_Width
// il2cpp: float UI_EditProfilePopup__get_Width (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x43fbe60

float UI_EditProfilePopup__get_Width(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  return 730.0;
}


// UI.EditProfilePopup$$get_Height
// il2cpp: float UI_EditProfilePopup__get_Height (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x43fbe70

float UI_EditProfilePopup__get_Height(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  return 770.0;
}


// UI.EditProfilePopup$$get_CategoryPanel
// il2cpp: bool UI_EditProfilePopup__get_CategoryPanel (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x43fbe80

bool_conflict UI_EditProfilePopup__get_CategoryPanel(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.EditProfilePopup$$get_CategoryButtons
// il2cpp: bool UI_EditProfilePopup__get_CategoryButtons (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x43fbe90

bool_conflict UI_EditProfilePopup__get_CategoryButtons(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.EditProfilePopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_EditProfilePopup__get_DefaultCategoryPanel (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x43fbea0

System_String_o *
UI_EditProfilePopup__get_DefaultCategoryPanel(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae568 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Profile");
    g_data_057ae568 = '\x01';
  }
  return "Profile";
}


// UI.EditProfilePopup$$get_UseSound
// il2cpp: bool UI_EditProfilePopup__get_UseSound (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x43fbed0

bool_conflict UI_EditProfilePopup__get_UseSound(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.EditProfilePopup$$Setup
// il2cpp: void UI_EditProfilePopup__Setup (UI_EditProfilePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43fbee0

void UI_EditProfilePopup__Setup(UI_EditProfilePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *pUVar2;
  long lVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UI_HeadedPanel_o *pUVar5;
  UI_HeadedPanel_o *__this_01;
  UI_HeadedPanel_o *__this_02;
  Il2CppObject *value;
  UI_HeadedPanel_o *__this_03;
  ulong uVar6;
  
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (g_data_057ae56b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass19_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae56b = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar2 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar2,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  __this_03 = TypeInfo_string;
  lVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,1);
  if (lVar3 == 0) {
label_043fc12a:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = "Save";
    il2cpp_runtime_helper_022b4080(lVar3 + 0x20);
    if (0 < *(int *)(lVar3 + 0x18)) {
      uVar6 = 0;
      do {
        pUVar5 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass19_0);
        __this_03 = pUVar5;
        System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
        if (pUVar5 == (UI_HeadedPanel_o *)0x0) goto label_043fc12a;
        __this_03 = (UI_HeadedPanel_o *)&(pUVar5->fields).m_CancellationTokenSource;
        (pUVar5->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this;
        il2cpp_runtime_helper_022b4080(__this_03,__this);
        if (*(uint *)(lVar3 + 0x18) <= uVar6) goto label_043fc12f;
        (pUVar5->fields).m_CachedPtr = *(intptr_t *)(lVar3 + 0x20 + uVar6 * 8);
        il2cpp_runtime_helper_022b4080(&pUVar5->fields);
        parent_00 = (__this->fields).BottomBar;
        pSVar1 = (System_String_o *)(pUVar5->fields).m_CachedPtr;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar1 = UI_UIManager__GetLocaleCommon(pSVar1,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton(parent_00,pUVar2,pSVar1,0.0,pUVar4,(MethodInfo *)0x0);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)*(int *)(lVar3 + 0x18));
    }
    return;
  }
label_043fc12f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae569 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Emote");
    il2cpp_runtime_helper_023445d0(&"Stats");
    il2cpp_runtime_helper_023445d0(&"Profile");
    g_data_057ae569 = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this_03->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this_03,(__this_03->klass->vtable)._4_get_ThemePanel.method);
  pUVar2 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar2,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pUVar5 = TypeInfo_string;
  lVar3 = il2cpp_runtime_helper_022b2a40();
  if (lVar3 == 0) {
label_043fc403:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar3 + 0x18) != 0) {
    pUVar5 = (UI_HeadedPanel_o *)(lVar3 + 0x20);
    *(undefined8 *)(lVar3 + 0x20) = "Profile";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar3 + 0x18)) {
      pUVar5 = (UI_HeadedPanel_o *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = "Emote";
      il2cpp_runtime_helper_022b4080();
      if (2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x30) = "Stats";
        il2cpp_runtime_helper_022b4080(lVar3 + 0x30);
        if (0 < *(int *)(lVar3 + 0x18)) {
          uVar6 = 0;
          do {
            __this_01 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass15_0);
            pUVar5 = __this_01;
            System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
            if (__this_01 == (UI_HeadedPanel_o *)0x0) goto label_043fc403;
            pUVar5 = (UI_HeadedPanel_o *)&(__this_01->fields).m_CancellationTokenSource;
            (__this_01->fields).m_CancellationTokenSource =
                 (System_Threading_CancellationTokenSource_o *)__this_03;
            il2cpp_runtime_helper_022b4080();
            if (*(uint *)(lVar3 + 0x18) <= uVar6) goto label_043fc408;
            (__this_01->fields).m_CachedPtr = *(intptr_t *)(lVar3 + 0x20 + uVar6 * 8);
            il2cpp_runtime_helper_022b4080(&__this_01->fields);
            pUVar5 = (UI_HeadedPanel_o *)(__this_03->fields).TopBar;
            pSVar1 = (System_String_o *)(__this_01->fields).m_CachedPtr;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar1 = UI_UIManager__GetLocaleCommon(pSVar1,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            __this_02 = (UI_HeadedPanel_o *)
                        UI_ElementFactory__CreateCategoryButton
                                  ((UnityEngine_Transform_o *)pUVar5,pUVar2,pSVar1,pUVar4,(MethodInfo *)0x0);
            if (__this_02 == (UI_HeadedPanel_o *)0x0) goto label_043fc403;
            __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this_03->fields)._topButtons;
            key = (Il2CppObject *)(__this_01->fields).m_CachedPtr;
            value = UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Button_GetComponent_Button);
            pUVar5 = __this_02;
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto label_043fc403;
            System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
            uVar6 = uVar6 + 1;
          } while ((long)uVar6 < (long)*(int *)(lVar3 + 0x18));
        }
        UI_HeadedPanel__SetupTopButtons(__this_03,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_043fc408:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup$$SetupTopButtons
// il2cpp: void UI_EditProfilePopup__SetupTopButtons (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x43fc140

void UI_EditProfilePopup__SetupTopButtons(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_01;
  long lVar2;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_Transform_o *__this_03;
  Il2CppObject *value;
  UnityEngine_Transform_o *parent;
  ulong uVar3;
  
  if (g_data_057ae569 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Emote");
    il2cpp_runtime_helper_023445d0(&"Stats");
    il2cpp_runtime_helper_023445d0(&"Profile");
    g_data_057ae569 = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent = TypeInfo_string;
  lVar2 = il2cpp_runtime_helper_022b2a40();
  if (lVar2 == 0) {
label_043fc403:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar2 + 0x18) != 0) {
    parent = (UnityEngine_Transform_o *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = "Profile";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar2 + 0x18)) {
      parent = (UnityEngine_Transform_o *)(lVar2 + 0x28);
      *(undefined8 *)(lVar2 + 0x28) = "Emote";
      il2cpp_runtime_helper_022b4080();
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = "Stats";
        il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
        if (0 < *(int *)(lVar2 + 0x18)) {
          uVar3 = 0;
          do {
            __this_02 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass15_0);
            parent = __this_02;
            System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
            if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_043fc403;
            parent = __this_02 + 1;
            __this_02[1].klass = (UnityEngine_Transform_c *)__this;
            il2cpp_runtime_helper_022b4080();
            if (*(uint *)(lVar2 + 0x18) <= uVar3) goto label_043fc408;
            (__this_02->fields).m_CachedPtr = *(intptr_t *)(lVar2 + 0x20 + uVar3 * 8);
            il2cpp_runtime_helper_022b4080(&__this_02->fields);
            parent = (__this->fields).TopBar;
            pSVar1 = (System_String_o *)(__this_02->fields).m_CachedPtr;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar1 = UI_UIManager__GetLocaleCommon(pSVar1,(MethodInfo *)0x0);
            onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            __this_03 = (UnityEngine_Transform_o *)
                        UI_ElementFactory__CreateCategoryButton
                                  (parent,__this_01,pSVar1,onClick,(MethodInfo *)0x0);
            if (__this_03 == (UnityEngine_Transform_o *)0x0) goto label_043fc403;
            __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields)._topButtons;
            key = (Il2CppObject *)(__this_02->fields).m_CachedPtr;
            value = UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)__this_03,MethodInfo_Button_GetComponent_Button);
            parent = __this_03;
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto label_043fc403;
            System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
            uVar3 = uVar3 + 1;
          } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
        }
        UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_043fc408:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup$$RegisterCategoryPanels
// il2cpp: void UI_EditProfilePopup__RegisterCategoryPanels (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x43fc420

void UI_EditProfilePopup__RegisterCategoryPanels(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Type_o *pSVar2;
  System_RuntimeTypeHandle_o handle;
  
  if (g_data_057ae56a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeRef_EditProfileEmotePanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_EditProfileProfilePanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_EditProfileStatsPanel);
    il2cpp_runtime_helper_023445d0(&"Emote");
    il2cpp_runtime_helper_023445d0(&"Stats");
    il2cpp_runtime_helper_023445d0(&"Profile");
    g_data_057ae56a = '\x01';
  }
  handle.fields.value = TypeRef_EditProfileProfilePanel.fields.value;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,"Profile",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    handle.fields.value = TypeRef_EditProfileEmotePanel.fields.value;
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_EditProfileEmotePanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,"Emote",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      handle.fields.value = TypeRef_EditProfileStatsPanel.fields.value;
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_EditProfileStatsPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,"Stats",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)handle.fields.value,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup$$SetupPopups
// il2cpp: void UI_EditProfilePopup__SetupPopups (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x43fc560

void UI_EditProfilePopup__SetupPopups(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup$$Show
// il2cpp: void UI_EditProfilePopup__Show (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x43fc570

void UI_EditProfilePopup__Show(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup$$SetupBottomButtons
// il2cpp: void UI_EditProfilePopup__SetupBottomButtons (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x43fbf00

void UI_EditProfilePopup__SetupBottomButtons(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *pUVar2;
  long lVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UI_HeadedPanel_o *pUVar5;
  UI_HeadedPanel_o *__this_01;
  UI_HeadedPanel_o *__this_02;
  Il2CppObject *value;
  UI_HeadedPanel_o *__this_03;
  ulong uVar6;
  
  if (g_data_057ae56b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass19_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae56b = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar2 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar2,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  __this_03 = TypeInfo_string;
  lVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,1);
  if (lVar3 == 0) {
label_043fc12a:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = "Save";
    il2cpp_runtime_helper_022b4080(lVar3 + 0x20);
    if (0 < *(int *)(lVar3 + 0x18)) {
      uVar6 = 0;
      do {
        pUVar5 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass19_0);
        __this_03 = pUVar5;
        System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
        if (pUVar5 == (UI_HeadedPanel_o *)0x0) goto label_043fc12a;
        __this_03 = (UI_HeadedPanel_o *)&(pUVar5->fields).m_CancellationTokenSource;
        (pUVar5->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this;
        il2cpp_runtime_helper_022b4080(__this_03,__this);
        if (*(uint *)(lVar3 + 0x18) <= uVar6) goto label_043fc12f;
        (pUVar5->fields).m_CachedPtr = *(intptr_t *)(lVar3 + 0x20 + uVar6 * 8);
        il2cpp_runtime_helper_022b4080(&pUVar5->fields);
        parent = (__this->fields).BottomBar;
        pSVar1 = (System_String_o *)(pUVar5->fields).m_CachedPtr;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar1 = UI_UIManager__GetLocaleCommon(pSVar1,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton(parent,pUVar2,pSVar1,0.0,pUVar4,(MethodInfo *)0x0);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)*(int *)(lVar3 + 0x18));
    }
    return;
  }
label_043fc12f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae569 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Emote");
    il2cpp_runtime_helper_023445d0(&"Stats");
    il2cpp_runtime_helper_023445d0(&"Profile");
    g_data_057ae569 = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this_03->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this_03,(__this_03->klass->vtable)._4_get_ThemePanel.method);
  pUVar2 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar2,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pUVar5 = TypeInfo_string;
  lVar3 = il2cpp_runtime_helper_022b2a40();
  if (lVar3 == 0) {
label_043fc403:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar3 + 0x18) != 0) {
    pUVar5 = (UI_HeadedPanel_o *)(lVar3 + 0x20);
    *(undefined8 *)(lVar3 + 0x20) = "Profile";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar3 + 0x18)) {
      pUVar5 = (UI_HeadedPanel_o *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = "Emote";
      il2cpp_runtime_helper_022b4080();
      if (2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x30) = "Stats";
        il2cpp_runtime_helper_022b4080(lVar3 + 0x30);
        if (0 < *(int *)(lVar3 + 0x18)) {
          uVar6 = 0;
          do {
            __this_01 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass15_0);
            pUVar5 = __this_01;
            System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
            if (__this_01 == (UI_HeadedPanel_o *)0x0) goto label_043fc403;
            pUVar5 = (UI_HeadedPanel_o *)&(__this_01->fields).m_CancellationTokenSource;
            (__this_01->fields).m_CancellationTokenSource =
                 (System_Threading_CancellationTokenSource_o *)__this_03;
            il2cpp_runtime_helper_022b4080();
            if (*(uint *)(lVar3 + 0x18) <= uVar6) goto label_043fc408;
            (__this_01->fields).m_CachedPtr = *(intptr_t *)(lVar3 + 0x20 + uVar6 * 8);
            il2cpp_runtime_helper_022b4080(&__this_01->fields);
            pUVar5 = (UI_HeadedPanel_o *)(__this_03->fields).TopBar;
            pSVar1 = (System_String_o *)(__this_01->fields).m_CachedPtr;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar1 = UI_UIManager__GetLocaleCommon(pSVar1,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            __this_02 = (UI_HeadedPanel_o *)
                        UI_ElementFactory__CreateCategoryButton
                                  ((UnityEngine_Transform_o *)pUVar5,pUVar2,pSVar1,pUVar4,(MethodInfo *)0x0);
            if (__this_02 == (UI_HeadedPanel_o *)0x0) goto label_043fc403;
            __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this_03->fields)._topButtons;
            key = (Il2CppObject *)(__this_01->fields).m_CachedPtr;
            value = UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Button_GetComponent_Button);
            pUVar5 = __this_02;
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto label_043fc403;
            System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
            uVar6 = uVar6 + 1;
          } while ((long)uVar6 < (long)*(int *)(lVar3 + 0x18));
        }
        UI_HeadedPanel__SetupTopButtons(__this_03,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_043fc408:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup$$OnBottomBarButtonClick
// il2cpp: void UI_EditProfilePopup__OnBottomBarButtonClick (UI_EditProfilePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43fc5a0

void UI_EditProfilePopup__OnBottomBarButtonClick
               (UI_EditProfilePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  long *plVar1;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  undefined8 extraout_RDX;
  UI_TooltipPopup_o *__this_00;
  
  if (g_data_057ae56c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae56c = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x238))();
      plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
        vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
        (*vtableDispatch)
                  (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
        return;
      }
    }
    __this_00 = (UI_TooltipPopup_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    UI_BasePopup___ctor(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.EditProfilePopup$$.ctor
// il2cpp: void UI_EditProfilePopup___ctor (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x43fc670

void UI_EditProfilePopup___ctor(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


