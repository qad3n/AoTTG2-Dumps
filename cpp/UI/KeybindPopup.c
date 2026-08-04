// Type: UI.KeybindPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/KeybindPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/KeybindPopup.cs
// --------------------------------

// UI.KeybindPopup.<WaitAndUpdateSetting>d__19$$.ctor
// il2cpp: void UI_KeybindPopup__WaitAndUpdateSetting_d__19___ctor (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x434f4b0

void UI_KeybindPopup__WaitAndUpdateSetting_d__19___ctor
               (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.KeybindPopup.<WaitAndUpdateSetting>d__19$$System.IDisposable.Dispose
// il2cpp: void UI_KeybindPopup__WaitAndUpdateSetting_d__19__System_IDisposable_Dispose (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o* __this, const MethodInfo* method);
// 0x434f720

void UI_KeybindPopup__WaitAndUpdateSetting_d__19__System_IDisposable_Dispose
               (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o *__this,MethodInfo *method)

{
  return;
}


// UI.KeybindPopup.<WaitAndUpdateSetting>d__19$$MoveNext
// il2cpp: bool UI_KeybindPopup__WaitAndUpdateSetting_d__19__MoveNext (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o* __this, const MethodInfo* method);
// 0x434f730

bool_conflict
UI_KeybindPopup__WaitAndUpdateSetting_d__19__MoveNext
          (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  undefined8 uVar2;
  UI_KeybindPopup_o *__this_01;
  
  if (g_data_057ae12e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForEndOfFrame);
    g_data_057ae12e = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (UI_KeybindPopup_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(__this_01->fields).m_CancellationTokenSource;
    }
    UI_KeybindPopup__UpdateSetting(__this_01,method);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_00;
    uVar2 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
  }
  return 0;
}


// UI.KeybindPopup.<WaitAndUpdateSetting>d__19$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_KeybindPopup__WaitAndUpdateSetting_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o* __this, const MethodInfo* method);
// 0x434f7d0

Il2CppObject *
UI_KeybindPopup__WaitAndUpdateSetting_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.KeybindPopup.<WaitAndUpdateSetting>d__19$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_KeybindPopup__WaitAndUpdateSetting_d__19__System_Collections_IEnumerator_Reset (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o* __this, const MethodInfo* method);
// 0x434f7e0

void UI_KeybindPopup__WaitAndUpdateSetting_d__19__System_Collections_IEnumerator_Reset
               (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// UI.KeybindPopup.<WaitAndUpdateSetting>d__19$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_KeybindPopup__WaitAndUpdateSetting_d__19__System_Collections_IEnumerator_get_Current (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o* __this, const MethodInfo* method);
// 0x434f820

Il2CppObject *
UI_KeybindPopup__WaitAndUpdateSetting_d__19__System_Collections_IEnumerator_get_Current
          (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.KeybindPopup$$get_Title
// il2cpp: System_String_o* UI_KeybindPopup__get_Title (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x434ee30

System_String_o * UI_KeybindPopup__get_Title(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae127 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    il2cpp_runtime_helper_023445d0(&"KeybindPopup");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae127 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","KeybindPopup","Title","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.KeybindPopup$$get_Width
// il2cpp: float UI_KeybindPopup__get_Width (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x434eed0

float UI_KeybindPopup__get_Width(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.KeybindPopup$$get_Height
// il2cpp: float UI_KeybindPopup__get_Height (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x434eee0

float UI_KeybindPopup__get_Height(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  return 250.0;
}


// UI.KeybindPopup$$get_VerticalSpacing
// il2cpp: float UI_KeybindPopup__get_VerticalSpacing (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x434eef0

float UI_KeybindPopup__get_VerticalSpacing(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  return 15.0;
}


// UI.KeybindPopup$$get_VerticalPadding
// il2cpp: int32_t UI_KeybindPopup__get_VerticalPadding (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x434ef00

int32_t UI_KeybindPopup__get_VerticalPadding(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.KeybindPopup$$get_PanelAlignment
// il2cpp: int32_t UI_KeybindPopup__get_PanelAlignment (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x434ef10

int32_t UI_KeybindPopup__get_PanelAlignment(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.KeybindPopup$$Setup
// il2cpp: void UI_KeybindPopup__Setup (UI_KeybindPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x434ef20

void UI_KeybindPopup__Setup(UI_KeybindPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Il2CppRGCTXData *pIVar2;
  long *plVar3;
  int32_t fontSize;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  Settings_InputKey_o *pSVar9;
  Il2CppObject *__this_01;
  UnityEngine_Component_o *pUVar10;
  undefined8 uVar11;
  MethodInfo *extraout_RDX;
  undefined4 uVar12;
  MethodInfo *method_00;
  Il2CppClass *__this_02;
  Il2CppObject *pIVar13;
  UnityEngine_Component_o *__this_03;
  
  if (g_data_057ae128 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InputKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    il2cpp_runtime_helper_023445d0(&"KeybindPopup");
    il2cpp_runtime_helper_023445d0(&"Unbind");
    il2cpp_runtime_helper_023445d0(&"CurrentKey");
    il2cpp_runtime_helper_023445d0(&":");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae128 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar5 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar5,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = UI_UIManager__GetLocale
                     ("SettingsPopup","KeybindPopup","Unbind","","",(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar5,0.0,pUVar6,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar5 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar5,0.0,pUVar6,(MethodInfo *)0x0);
  __this_02 = (Il2CppClass *)(__this->fields).SinglePanel;
  pSVar5 = UI_UIManager__GetLocale
                     ("SettingsPopup","KeybindPopup","CurrentKey","","",(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_3ae5ba0(pSVar5,":",(MethodInfo *)0x0);
  pUVar7 = UI_ElementFactory__CreateDefaultLabel
                     ((UnityEngine_Transform_o *)__this_02,__this_00,pSVar5,0,4,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_Text_GetComponent_Text);
    __this_02 = (Il2CppClass *)(__this->fields).SinglePanel;
    pUVar7 = UI_ElementFactory__CreateDefaultLabel
                       ((UnityEngine_Transform_o *)__this_02,__this_00,
                        (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
      pUVar8 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_Text_GetComponent_Text);
      (__this->fields)._displayLabel = pUVar8;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._displayLabel);
      pSVar9 = (Settings_InputKey_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InputKey);
      Settings_InputKey___ctor(pSVar9,(MethodInfo *)0x0);
      (__this->fields)._buffer = pSVar9;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._buffer,pSVar9);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae129 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Mouse0");
    g_data_057ae129 = '\x01';
  }
  if (((__this_02->_1).implementedInterfaces == (Il2CppClass **)0x0) ||
     (*(char *)&(__this_02->_2).typeHierarchy != '\0')) {
    return;
  }
  pIVar13 = (Il2CppObject *)0x0;
  if (__this_02->rgctx_data != (Il2CppRGCTXData *)0x0) {
    bVar4 = Settings_InputKey__ReadNextInput((Settings_InputKey_o *)__this_02->rgctx_data,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    *(undefined1 *)&(__this_02->_2).typeHierarchy = 1;
    pIVar2 = __this_02->rgctx_data;
    pIVar13 = (Il2CppObject *)0x0;
    if (pIVar2 != (Il2CppRGCTXData *)0x0) {
      pSVar5 = (System_String_o *)
               (*pIVar2->klass->vtable[3].methodPtr)(pIVar2,pIVar2->klass->vtable[3].method);
      method_00 = "Mouse0";
      bVar4 = System_String__op_Equality(pSVar5,(System_String_o *)"Mouse0",(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        UI_KeybindPopup__UpdateSetting((UI_KeybindPopup_o *)__this_02,method_00);
        return;
      }
      if (g_data_057ae12a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndUpdateSetting_d__19);
        g_data_057ae12a = '\x01';
      }
      __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndUpdateSetting_d__19);
      pIVar13 = __this_01;
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&__this_01[1].klass = 0;
      if (__this_01 != (Il2CppObject *)0x0) {
        __this_01[2].klass = __this_02;
        il2cpp_runtime_helper_022b4080(__this_01 + 2,__this_02);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this_02,(System_Collections_IEnumerator_o *)__this_01,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae12a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndUpdateSetting_d__19);
    g_data_057ae12a = '\x01';
  }
  pUVar10 = (UnityEngine_Component_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndUpdateSetting_d__19);
  uVar12 = 0;
  __this_03 = pUVar10;
  System_Object___ctor((Il2CppObject *)pUVar10,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar10->fields).m_CachedPtr = 0;
  if (pUVar10 == (UnityEngine_Component_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pUVar10 = (UnityEngine_Component_o *)__this_03[8].klass;
    if (pUVar10 != (UnityEngine_Component_o *)0x0) {
      pSVar9 = (Settings_InputKey_o *)__this_03[7].klass;
      uVar12 = SUB84((pUVar10->klass->vtable)._3_ToString.method,0);
      pSVar5 = (System_String_o *)(*(pUVar10->klass->vtable)._3_ToString.methodPtr)();
      if (pSVar9 != (Settings_InputKey_o *)0x0) {
        Settings_InputKey__LoadFromString(pSVar9,pSVar5,(MethodInfo *)0x0);
        uVar12 = SUB84(pSVar5,0);
        pUVar10 = (UnityEngine_Component_o *)__this_03[7].klass;
        if (pUVar10 != (UnityEngine_Component_o *)0x0) {
          plVar3 = __this_03[7].monitor;
          uVar12 = SUB84((pUVar10->klass->vtable)._3_ToString.method,0);
          uVar11 = (*(pUVar10->klass->vtable)._3_ToString.methodPtr)();
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x5e8))(plVar3,uVar11,*(undefined8 *)(*plVar3 + 0x5f0));
            uVar12 = 0;
            pUVar7 = UnityEngine_Component__get_gameObject(__this_03,(MethodInfo *)0x0);
            pUVar10 = __this_03;
            if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar7,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar10,(MethodInfo *)0x0);
    *(undefined4 *)&(pUVar10->fields).m_CachedPtr = uVar12;
    return;
  }
  pUVar10[1].monitor = pIVar13;
  il2cpp_runtime_helper_022b4080(&pUVar10[1].monitor,pIVar13);
  return;
}


// UI.KeybindPopup$$Update
// il2cpp: void UI_KeybindPopup__Update (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x434f260

void UI_KeybindPopup__Update(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  Settings_InputKey_o *pSVar1;
  long *plVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Il2CppObject *__this_00;
  UnityEngine_Component_o *pUVar5;
  undefined8 uVar6;
  UnityEngine_GameObject_o *__this_01;
  undefined4 uVar7;
  MethodInfo *method_00;
  Il2CppObject *pIVar8;
  UnityEngine_Component_o *__this_02;
  
  if (g_data_057ae129 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Mouse0");
    g_data_057ae129 = '\x01';
  }
  if (((__this->fields)._setting == (Settings_InputKey_o *)0x0) || ((char)(__this->fields)._isDone != '\0')) {
    return;
  }
  pSVar1 = (__this->fields)._buffer;
  pIVar8 = (Il2CppObject *)0x0;
  if (pSVar1 != (Settings_InputKey_o *)0x0) {
    bVar3 = Settings_InputKey__ReadNextInput(pSVar1,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    *(undefined1 *)&(__this->fields)._isDone = 1;
    pSVar1 = (__this->fields)._buffer;
    pIVar8 = (Il2CppObject *)0x0;
    if (pSVar1 != (Settings_InputKey_o *)0x0) {
      pSVar4 = (System_String_o *)
               (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
      method_00 = "Mouse0";
      bVar3 = System_String__op_Equality(pSVar4,(System_String_o *)"Mouse0",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        UI_KeybindPopup__UpdateSetting(__this,method_00);
        return;
      }
      if (g_data_057ae12a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndUpdateSetting_d__19);
        g_data_057ae12a = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndUpdateSetting_d__19);
      pIVar8 = __this_00;
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 != (Il2CppObject *)0x0) {
        __this_00[2].klass = (Il2CppClass *)__this;
        il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae12a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndUpdateSetting_d__19);
    g_data_057ae12a = '\x01';
  }
  pUVar5 = (UnityEngine_Component_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndUpdateSetting_d__19);
  uVar7 = 0;
  __this_02 = pUVar5;
  System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar5->fields).m_CachedPtr = 0;
  if (pUVar5 == (UnityEngine_Component_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pUVar5 = (UnityEngine_Component_o *)__this_02[8].klass;
    if (pUVar5 != (UnityEngine_Component_o *)0x0) {
      pSVar1 = (Settings_InputKey_o *)__this_02[7].klass;
      uVar7 = SUB84((pUVar5->klass->vtable)._3_ToString.method,0);
      pSVar4 = (System_String_o *)(*(pUVar5->klass->vtable)._3_ToString.methodPtr)();
      if (pSVar1 != (Settings_InputKey_o *)0x0) {
        Settings_InputKey__LoadFromString(pSVar1,pSVar4,(MethodInfo *)0x0);
        uVar7 = SUB84(pSVar4,0);
        pUVar5 = (UnityEngine_Component_o *)__this_02[7].klass;
        if (pUVar5 != (UnityEngine_Component_o *)0x0) {
          plVar2 = __this_02[7].monitor;
          uVar7 = SUB84((pUVar5->klass->vtable)._3_ToString.method,0);
          uVar6 = (*(pUVar5->klass->vtable)._3_ToString.methodPtr)();
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x5e8))(plVar2,uVar6,*(undefined8 *)(*plVar2 + 0x5f0));
            uVar7 = 0;
            __this_01 = UnityEngine_Component__get_gameObject(__this_02,(MethodInfo *)0x0);
            pUVar5 = __this_02;
            if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
    *(undefined4 *)&(pUVar5->fields).m_CachedPtr = uVar7;
    return;
  }
  pUVar5[1].monitor = pIVar8;
  il2cpp_runtime_helper_022b4080(&pUVar5[1].monitor,pIVar8);
  return;
}


// UI.KeybindPopup$$WaitAndUpdateSetting
// il2cpp: System_Collections_IEnumerator_o* UI_KeybindPopup__WaitAndUpdateSetting (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x434f390

System_Collections_IEnumerator_o *
UI_KeybindPopup__WaitAndUpdateSetting(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  Settings_InputKey_o *__this_00;
  long *plVar1;
  UnityEngine_Component_o *pUVar2;
  System_String_o *serializedKey;
  undefined8 uVar3;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_IEnumerator_o *extraout_RAX;
  System_Collections_IEnumerator_o *extraout_RAX_00;
  undefined4 uVar4;
  UnityEngine_Component_o *__this_02;
  
  if (g_data_057ae12a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndUpdateSetting_d__19);
    g_data_057ae12a = '\x01';
  }
  pUVar2 = (UnityEngine_Component_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndUpdateSetting_d__19);
  uVar4 = 0;
  __this_02 = pUVar2;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar2->fields).m_CachedPtr = 0;
  if (pUVar2 != (UnityEngine_Component_o *)0x0) {
    pUVar2[1].monitor = __this;
    il2cpp_runtime_helper_022b4080(&pUVar2[1].monitor,__this);
    return (System_Collections_IEnumerator_o *)pUVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Component_o *)__this_02[8].klass;
  if (pUVar2 != (UnityEngine_Component_o *)0x0) {
    __this_00 = (Settings_InputKey_o *)__this_02[7].klass;
    uVar4 = SUB84((pUVar2->klass->vtable)._3_ToString.method,0);
    serializedKey = (System_String_o *)(*(pUVar2->klass->vtable)._3_ToString.methodPtr)();
    if (__this_00 != (Settings_InputKey_o *)0x0) {
      Settings_InputKey__LoadFromString(__this_00,serializedKey,(MethodInfo *)0x0);
      uVar4 = SUB84(serializedKey,0);
      pUVar2 = (UnityEngine_Component_o *)__this_02[7].klass;
      if (pUVar2 != (UnityEngine_Component_o *)0x0) {
        plVar1 = __this_02[7].monitor;
        uVar4 = SUB84((pUVar2->klass->vtable)._3_ToString.method,0);
        uVar3 = (*(pUVar2->klass->vtable)._3_ToString.methodPtr)();
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x5e8))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0x5f0));
          uVar4 = 0;
          __this_01 = UnityEngine_Component__get_gameObject(__this_02,(MethodInfo *)0x0);
          pUVar2 = __this_02;
          if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
            return extraout_RAX;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar2->fields).m_CachedPtr = uVar4;
  return extraout_RAX_00;
}


// UI.KeybindPopup$$UpdateSetting
// il2cpp: void UI_KeybindPopup__UpdateSetting (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x434f400

void UI_KeybindPopup__UpdateSetting(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  Settings_InputKey_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  System_String_o *serializedKey;
  undefined8 uVar2;
  UnityEngine_GameObject_o *__this_01;
  undefined4 uVar3;
  UI_KeybindPopup_o *__this_02;
  
  uVar3 = SUB84(method,0);
  __this_02 = (UI_KeybindPopup_o *)(__this->fields)._buffer;
  if (__this_02 != (UI_KeybindPopup_o *)0x0) {
    __this_00 = (__this->fields)._setting;
    uVar3 = SUB84((__this_02->klass->vtable)._3_ToString.method,0);
    serializedKey = (System_String_o *)(*(__this_02->klass->vtable)._3_ToString.methodPtr)();
    if (__this_00 != (Settings_InputKey_o *)0x0) {
      Settings_InputKey__LoadFromString(__this_00,serializedKey,(MethodInfo *)0x0);
      uVar3 = SUB84(serializedKey,0);
      __this_02 = (UI_KeybindPopup_o *)(__this->fields)._setting;
      if (__this_02 != (UI_KeybindPopup_o *)0x0) {
        pUVar1 = (__this->fields)._settingLabel;
        uVar3 = SUB84((__this_02->klass->vtable)._3_ToString.method,0);
        uVar2 = (*(__this_02->klass->vtable)._3_ToString.methodPtr)();
        if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                    (pUVar1,uVar2,(pUVar1->klass->vtable)._75_set_text.method);
          uVar3 = 0;
          __this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          __this_02 = __this;
          if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_02->fields).m_CachedPtr = uVar3;
  return;
}


// UI.KeybindPopup$$Show
// il2cpp: void UI_KeybindPopup__Show (UI_KeybindPopup_o* __this, Settings_InputKey_o* setting, UnityEngine_UI_Text_o* label, const MethodInfo* method);
// 0x434f4d0

void UI_KeybindPopup__Show
               (UI_KeybindPopup_o *__this,Settings_InputKey_o *setting,UnityEngine_UI_Text_o *label,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  Settings_InputKey_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_01;
  undefined8 uVar3;
  System_String_o *pSVar4;
  UnityEngine_UI_Text_o *pUVar5;
  MethodInfo *pMVar6;
  UI_KeybindPopup_o *pUVar7;
  UI_TooltipPopup_o *__this_02;
  undefined1 auStack_68 [32];
  UnityEngine_Transform_o *pUStack_48;
  undefined4 uStack_40;
  UI_KeybindPopup_o *pUStack_38;
  
  pUVar5 = (UnityEngine_UI_Text_o *)0x0;
  pUVar7 = __this;
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pMVar6 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar6);
    (__this->fields)._setting = setting;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._setting,setting);
    (__this->fields)._settingLabel = label;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._settingLabel);
    pUVar7 = (UI_KeybindPopup_o *)(__this->fields)._setting;
    pUVar5 = label;
    if (pUVar7 != (UI_KeybindPopup_o *)0x0) {
      pUVar1 = (__this->fields)._displayLabel;
      pUVar5 = (UnityEngine_UI_Text_o *)(pUVar7->klass->vtable)._3_ToString.method;
      uVar3 = (*(pUVar7->klass->vtable)._3_ToString.methodPtr)();
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                  (pUVar1,uVar3,(pUVar1->klass->vtable)._75_set_text.method);
        *(undefined1 *)&(__this->fields)._isDone = 0;
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_38 = __this;
  if (g_data_057ae12b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SpecialKey);
    il2cpp_runtime_helper_023445d0(&"Unbind");
    g_data_057ae12b = '\x01';
  }
  bVar2 = System_String__op_Equality((System_String_o *)pUVar5,"Unbind",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
label_0434f663:
    *(undefined1 *)&(pUVar7->fields)._isDone = 1;
    (*(pUVar7->klass->vtable)._22_Hide.methodPtr)(pUVar7,(pUVar7->klass->vtable)._22_Hide.method);
    return;
  }
  __this_00 = (pUVar7->fields)._setting;
  auStack_68._24_8_ = TypeInfo_SpecialKey;
  pUStack_48 = (UnityEngine_Transform_o *)0xffffffffffffffff;
  uStack_40 = 0;
  __this_02 = (UI_TooltipPopup_o *)(auStack_68 + 0x18);
  pMVar6 = (MethodInfo *)0x0;
  pSVar4 = System_Enum__ToString((System_Enum_o *)__this_02,(MethodInfo *)0x0);
  if (__this_00 != (Settings_InputKey_o *)0x0) {
    Settings_InputKey__LoadFromString(__this_00,pSVar4,(MethodInfo *)0x0);
    pUVar5 = (pUVar7->fields)._settingLabel;
    auStack_68._0_8_ = TypeInfo_SpecialKey;
    auStack_68._8_8_ = (void *)0xffffffffffffffff;
    auStack_68._16_4_ = 0;
    __this_02 = (UI_TooltipPopup_o *)auStack_68;
    pMVar6 = (MethodInfo *)0x0;
    pSVar4 = System_Enum__ToString((System_Enum_o *)__this_02,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                (pUVar5,pSVar4,(pUVar5->klass->vtable)._75_set_text.method);
      goto label_0434f663;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_BasePopup___ctor(__this_02,pMVar6);
  return;
}


// UI.KeybindPopup$$OnButtonClick
// il2cpp: void UI_KeybindPopup__OnButtonClick (UI_KeybindPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x434f580

void UI_KeybindPopup__OnButtonClick(UI_KeybindPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_InputKey_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  UI_TooltipPopup_o *__this_01;
  undefined1 local_50 [32];
  UnityEngine_Transform_o *local_30;
  undefined4 local_28;
  
  if (g_data_057ae12b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SpecialKey);
    il2cpp_runtime_helper_023445d0(&"Unbind");
    g_data_057ae12b = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Unbind",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    __this_00 = (__this->fields)._setting;
    local_50._24_8_ = TypeInfo_SpecialKey;
    local_30 = (UnityEngine_Transform_o *)0xffffffffffffffff;
    local_28 = 0;
    __this_01 = (UI_TooltipPopup_o *)(local_50 + 0x18);
    method_00 = (MethodInfo *)0x0;
    pSVar3 = System_Enum__ToString((System_Enum_o *)__this_01,(MethodInfo *)0x0);
    if (__this_00 != (Settings_InputKey_o *)0x0) {
      Settings_InputKey__LoadFromString(__this_00,pSVar3,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._settingLabel;
      local_50._0_8_ = TypeInfo_SpecialKey;
      local_50._8_8_ = (void *)0xffffffffffffffff;
      local_50._16_4_ = 0;
      __this_01 = (UI_TooltipPopup_o *)local_50;
      method_00 = (MethodInfo *)0x0;
      pSVar3 = System_Enum__ToString((System_Enum_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                  (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
        goto label_0434f663;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    UI_BasePopup___ctor(__this_01,method_00);
    return;
  }
label_0434f663:
  *(undefined1 *)&(__this->fields)._isDone = 1;
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.KeybindPopup$$.ctor
// il2cpp: void UI_KeybindPopup___ctor (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x434f690

void UI_KeybindPopup___ctor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor(__this,method);
  return;
}


// UI.KeybindPopup$$<Setup>b__17_0
// il2cpp: void UI_KeybindPopup___Setup_b__17_0 (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x434f6a0

void UI_KeybindPopup___Setup_b__17_0(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae12c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Unbind");
    g_data_057ae12c = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_KeybindPopup__OnButtonClick(__this,"Unbind",in_RDX);
  return;
}


// UI.KeybindPopup$$<Setup>b__17_1
// il2cpp: void UI_KeybindPopup___Setup_b__17_1 (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x434f6e0

void UI_KeybindPopup___Setup_b__17_1(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae12d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae12d = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_KeybindPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


