// Type: UI.MultiplayerPasswordPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MultiplayerPasswordPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerPasswordPopup.cs
// --------------------------------

// UI.MultiplayerPasswordPopup$$get_Title
// il2cpp: System_String_o* UI_MultiplayerPasswordPopup__get_Title (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x440b490

System_String_o *
UI_MultiplayerPasswordPopup__get_Title(UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae5c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Password");
    g_data_057ae5c7 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Password",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MultiplayerPasswordPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MultiplayerPasswordPopup__get_VerticalPadding (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x440b4f0

int32_t UI_MultiplayerPasswordPopup__get_VerticalPadding
                  (UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.MultiplayerPasswordPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MultiplayerPasswordPopup__get_HorizontalPadding (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x440b500

int32_t UI_MultiplayerPasswordPopup__get_HorizontalPadding
                  (UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MultiplayerPasswordPopup$$get_VerticalSpacing
// il2cpp: float UI_MultiplayerPasswordPopup__get_VerticalSpacing (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x440b510

float UI_MultiplayerPasswordPopup__get_VerticalSpacing
                (UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.MultiplayerPasswordPopup$$get_Width
// il2cpp: float UI_MultiplayerPasswordPopup__get_Width (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x440b520

float UI_MultiplayerPasswordPopup__get_Width(UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.MultiplayerPasswordPopup$$get_Height
// il2cpp: float UI_MultiplayerPasswordPopup__get_Height (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x440b530

float UI_MultiplayerPasswordPopup__get_Height(UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  return 250.0;
}


// UI.MultiplayerPasswordPopup$$get_PanelAlignment
// il2cpp: int32_t UI_MultiplayerPasswordPopup__get_PanelAlignment (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x440b540

int32_t UI_MultiplayerPasswordPopup__get_PanelAlignment
                  (UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.MultiplayerPasswordPopup$$Setup
// il2cpp: void UI_MultiplayerPasswordPopup__Setup (UI_MultiplayerPasswordPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x440b550

void UI_MultiplayerPasswordPopup__Setup
               (UI_MultiplayerPasswordPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_Transform_c *pUVar1;
  undefined8 uVar2;
  UnityEngine_GameObject_o *pUVar3;
  char cVar4;
  int32_t fontSize;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar7;
  MethodInfo_255A0F0 *pMVar8;
  Il2CppObject *pIVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  System_String_o *pSVar13;
  intptr_t extraout_RDX;
  UI_BasePopup_o *__this_02;
  UnityEngine_Transform_o *pUVar14;
  System_Threading_CancellationTokenSource_o *pSVar15;
  undefined1 auVar16 [12];
  
  if (g_data_057ae5c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__20_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__20_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"MultiplayerPasswordPopup");
    il2cpp_runtime_helper_023445d0(&"Confirm");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"IncorrectPassword");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5c8 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar6 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar6,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x14,120.0,20.0,pSVar6,(MethodInfo *)0x0);
  pUVar14 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar14,__this_00,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  pUVar14 = (__this->fields).BottomBar;
  pSVar6 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar14,__this_00,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel
            ((__this->fields).SinglePanel,__this_01,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
             0,4,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            ((__this->fields).SinglePanel,__this_01,
             (Settings_BaseSetting_o *)(__this->fields)._enteredPassword,
             (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"",200.0,40.0,0,
             (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pUVar14 = (__this->fields).SinglePanel;
  pSVar6 = UI_UIManager__GetLocale
                     ("MainMenu","MultiplayerPasswordPopup","IncorrectPassword","","",(MethodInfo *)0x0);
  pSVar13 = (System_String_o *)0x0;
  pSVar15 = (System_Threading_CancellationTokenSource_o *)&g_data_00000004;
  pMVar8 = (MethodInfo_255A0F0 *)
           UI_ElementFactory__CreateDefaultLabel(pUVar14,__this_01,pSVar6,0,4,(MethodInfo *)0x0);
  (__this->fields)._incorrectPasswordLabel = (UnityEngine_GameObject_o *)pMVar8;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._incorrectPasswordLabel);
  __this_02 = (UI_BasePopup_o *)(__this->fields)._incorrectPasswordLabel;
  if ((__this_02 != (UI_BasePopup_o *)0x0) &&
     (pMVar8 = MethodInfo_Text_GetComponent_Text,
     pIVar9 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_02,MethodInfo_Text_GetComponent_Text)
     , pIVar9 != (Il2CppObject *)0x0)) {
    vtableDispatch = pIVar9->klass->vtable[0x17].methodPtr;
    (*vtableDispatch)(0x3f800000,0,pIVar9,pIVar9->klass->vtable[0x17].method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02[1].monitor = pMVar8;
  il2cpp_runtime_helper_022b4080(&__this_02[1].monitor);
  __this_02[1].fields.m_CachedPtr = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&__this_02[1].fields,extraout_RDX);
  __this_02[1].fields.m_CancellationTokenSource = pSVar15;
  il2cpp_runtime_helper_022b4080(&__this_02[1].fields.m_CancellationTokenSource,pSVar15);
  __this_02[1].fields.SinglePanel = (UnityEngine_Transform_o *)pSVar13;
  il2cpp_runtime_helper_022b4080(&__this_02[1].fields.SinglePanel);
  pUVar14 = __this_02[1].fields.DoublePanelLeft;
  if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar14,0,(MethodInfo *)0x0);
    UI_BasePopup__Show(__this_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5c9 = '\x01';
  }
  bVar5 = System_String__op_Equality(pSVar13,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    bVar5 = System_String__op_Equality(pSVar13,"Back",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar1 = pUVar14->klass;
    uVar12._0_4_ = pUVar1[1]._2.token;
    uVar12._4_2_ = pUVar1[1]._2.method_count;
    uVar12._6_2_ = pUVar1[1]._2.property_count;
    (**(code **)&pUVar1[1]._2.thread_static_fields_offset)(pUVar14,uVar12);
    return;
  }
  if (pUVar14[7].klass == (UnityEngine_Transform_c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_0440bade:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar6 = (System_String_o *)((pUVar14[7].klass)->_1).namespaze;
    pSVar13 = (System_String_o *)((UnityEngine_GameObject_Fields *)&pUVar14[7].fields)->m_CachedPtr;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = Utility_Util__CreatePBKDF2(pSVar6,pSVar13,(MethodInfo *)0x0);
    bVar5 = System_String__op_Equality(pSVar6,pUVar14[7].monitor,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      pUVar3 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar14[8].fields)->m_CachedPtr;
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar3,1,(MethodInfo *)0x0);
        return;
      }
      goto label_0440bae8;
    }
    if (pUVar14[7].klass == (UnityEngine_Transform_c *)0x0) goto label_0440bade;
    if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) !=
        (Settings_MultiplayerSettings_o *)0x0) {
      Settings_MultiplayerSettings__JoinRoom
                ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),pUVar14[8].monitor,
                 (System_String_o *)pUVar14[8].klass,(System_String_o *)((pUVar14[7].klass)->_1).namespaze,
                 (MethodInfo *)0x0);
      pUVar1 = pUVar14->klass;
      uVar2._0_4_ = pUVar1[1]._2.token;
      uVar2._4_2_ = pUVar1[1]._2.method_count;
      uVar2._6_2_ = pUVar1[1]._2.property_count;
      (**(code **)&pUVar1[1]._2.thread_static_fields_offset)(pUVar14,uVar2);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0440bae8:
  auVar16 = il2cpp_runtime_helper_022b2c90();
  uVar12 = auVar16._0_8_;
  if (auVar16._8_4_ == 1) {
    puVar10 = (undefined8 *)__cxa_begin_catch(uVar12);
    cVar4 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar10);
    if (cVar4 == '\0') {
      puVar11 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar11 = *puVar10;
      __cxa_throw(puVar11,&PTR_PTR_05215060,0);
    }
    __cxa_end_catch();
    pUVar3 = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_Fields *)&pUVar14[8].fields)->m_CachedPtr;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar3,1,(MethodInfo *)0x0);
      return;
    }
    uVar12 = il2cpp_runtime_helper_022b2c90();
    __cxa_end_catch();
  }
  _Unwind_Resume(uVar12);
}


// UI.MultiplayerPasswordPopup$$Show
// il2cpp: void UI_MultiplayerPasswordPopup__Show (UI_MultiplayerPasswordPopup_o* __this, System_String_o* actualPasswordHash, System_String_o* passwordSalt, System_String_o* roomId, System_String_o* roomName, const MethodInfo* method);
// 0x440b8c0

void UI_MultiplayerPasswordPopup__Show
               (UI_MultiplayerPasswordPopup_o *__this,System_String_o *actualPasswordHash,
               System_String_o *passwordSalt,System_String_o *roomId,System_String_o *roomName,
               MethodInfo *method)

{
  System_String_o *salt;
  UnityEngine_GameObject_c *pUVar1;
  undefined8 uVar2;
  UnityEngine_GameObject_o *__this_00;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  UnityEngine_GameObject_o *pUVar9;
  undefined1 auVar10 [12];
  
  (__this->fields)._actualPasswordHash = actualPasswordHash;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._actualPasswordHash);
  (__this->fields)._passwordSalt = passwordSalt;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._passwordSalt,passwordSalt);
  (__this->fields)._roomName = roomName;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._roomName,roomName);
  (__this->fields)._roomId = roomId;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._roomId);
  pUVar9 = (__this->fields)._incorrectPasswordLabel;
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5c9 = '\x01';
  }
  bVar4 = System_String__op_Equality(roomId,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    bVar4 = System_String__op_Equality(roomId,"Back",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    pUVar1 = pUVar9->klass;
    uVar8._0_2_ = pUVar1[1]._2.interfaces_count;
    uVar8._2_2_ = pUVar1[1]._2.interface_offsets_count;
    uVar8._4_1_ = pUVar1[1]._2.typeHierarchyDepth;
    uVar8._5_1_ = pUVar1[1]._2.genericRecursionDepth;
    uVar8._6_1_ = pUVar1[1]._2.rank;
    uVar8._7_1_ = pUVar1[1]._2.minimumAlignment;
    (**(code **)&pUVar1[1]._2.field_count)(pUVar9,uVar8);
    return;
  }
  if (pUVar9[7].klass == (UnityEngine_GameObject_c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_0440bade:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar5 = (System_String_o *)((pUVar9[7].klass)->_1).namespaze;
    salt = (System_String_o *)pUVar9[7].fields.m_CachedPtr;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = Utility_Util__CreatePBKDF2(pSVar5,salt,(MethodInfo *)0x0);
    bVar4 = System_String__op_Equality(pSVar5,pUVar9[7].monitor,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      __this_00 = (UnityEngine_GameObject_o *)pUVar9[8].fields.m_CachedPtr;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
        return;
      }
      goto label_0440bae8;
    }
    if (pUVar9[7].klass == (UnityEngine_GameObject_c *)0x0) goto label_0440bade;
    if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) !=
        (Settings_MultiplayerSettings_o *)0x0) {
      Settings_MultiplayerSettings__JoinRoom
                ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),pUVar9[8].monitor,
                 (System_String_o *)pUVar9[8].klass,(System_String_o *)((pUVar9[7].klass)->_1).namespaze,
                 (MethodInfo *)0x0);
      pUVar1 = pUVar9->klass;
      uVar2._0_2_ = pUVar1[1]._2.interfaces_count;
      uVar2._2_2_ = pUVar1[1]._2.interface_offsets_count;
      uVar2._4_1_ = pUVar1[1]._2.typeHierarchyDepth;
      uVar2._5_1_ = pUVar1[1]._2.genericRecursionDepth;
      uVar2._6_1_ = pUVar1[1]._2.rank;
      uVar2._7_1_ = pUVar1[1]._2.minimumAlignment;
      (**(code **)&pUVar1[1]._2.field_count)(pUVar9,uVar2);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0440bae8:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  uVar8 = auVar10._0_8_;
  if (auVar10._8_4_ == 1) {
    puVar6 = (undefined8 *)__cxa_begin_catch(uVar8);
    cVar3 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar6);
    if (cVar3 == '\0') {
      puVar7 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar7 = *puVar6;
      __cxa_throw(puVar7,&PTR_PTR_05215060,0);
    }
    __cxa_end_catch();
    pUVar9 = (UnityEngine_GameObject_o *)pUVar9[8].fields.m_CachedPtr;
    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
      return;
    }
    uVar8 = il2cpp_runtime_helper_022b2c90();
    __cxa_end_catch();
  }
  _Unwind_Resume(uVar8);
}


// UI.MultiplayerPasswordPopup$$OnButtonClick
// il2cpp: void UI_MultiplayerPasswordPopup__OnButtonClick (UI_MultiplayerPasswordPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x440b960

void UI_MultiplayerPasswordPopup__OnButtonClick
               (UI_MultiplayerPasswordPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *salt;
  UnityEngine_GameObject_o *pUVar2;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auVar9 [12];
  
  if (g_data_057ae5c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5c9 = '\x01';
  }
  bVar4 = System_String__op_Equality(name,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    bVar4 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  pSVar1 = (__this->fields)._enteredPassword;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_0440bade:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar5 = (pSVar1->fields)._value;
    salt = (__this->fields)._passwordSalt;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = Utility_Util__CreatePBKDF2(pSVar5,salt,(MethodInfo *)0x0);
    bVar4 = System_String__op_Equality(pSVar5,(__this->fields)._actualPasswordHash,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pUVar2 = (__this->fields)._incorrectPasswordLabel;
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar2,1,(MethodInfo *)0x0);
        return;
      }
      goto label_0440bae8;
    }
    pSVar1 = (__this->fields)._enteredPassword;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_0440bade;
    if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) !=
        (Settings_MultiplayerSettings_o *)0x0) {
      Settings_MultiplayerSettings__JoinRoom
                ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                 (__this->fields)._roomId,(__this->fields)._roomName,(pSVar1->fields)._value,(MethodInfo *)0x0
                );
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0440bae8:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  uVar8 = auVar9._0_8_;
  if (auVar9._8_4_ == 1) {
    puVar6 = (undefined8 *)__cxa_begin_catch(uVar8);
    cVar3 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar6);
    if (cVar3 == '\0') {
      puVar7 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar7 = *puVar6;
      __cxa_throw(puVar7,&PTR_PTR_05215060,0);
    }
    __cxa_end_catch();
    pUVar2 = (__this->fields)._incorrectPasswordLabel;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar2,1,(MethodInfo *)0x0);
      return;
    }
    uVar8 = il2cpp_runtime_helper_022b2c90();
    __cxa_end_catch();
  }
  _Unwind_Resume(uVar8);
}


// UI.MultiplayerPasswordPopup$$.ctor
// il2cpp: void UI_MultiplayerPasswordPopup___ctor (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x440bbd0

void UI_MultiplayerPasswordPopup___ctor(UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  
  if (g_data_057ae5ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae5ca = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._enteredPassword = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._enteredPassword);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerPasswordPopup$$<Setup>b__20_0
// il2cpp: void UI_MultiplayerPasswordPopup___Setup_b__20_0 (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x440bc60

void UI_MultiplayerPasswordPopup___Setup_b__20_0(UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *salt;
  UnityEngine_GameObject_o *pUVar2;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auVar9 [12];
  
  if (g_data_057ae5cb == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae5cb = '\x01';
  }
  pSVar5 = "Confirm";
  if (g_data_057ae5c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5c9 = '\x01';
  }
  bVar4 = System_String__op_Equality(pSVar5,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    bVar4 = System_String__op_Equality(pSVar5,"Back",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  pSVar1 = (__this->fields)._enteredPassword;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_0440bade:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar5 = (pSVar1->fields)._value;
    salt = (__this->fields)._passwordSalt;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = Utility_Util__CreatePBKDF2(pSVar5,salt,(MethodInfo *)0x0);
    bVar4 = System_String__op_Equality(pSVar5,(__this->fields)._actualPasswordHash,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pUVar2 = (__this->fields)._incorrectPasswordLabel;
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar2,1,(MethodInfo *)0x0);
        return;
      }
      goto label_0440bae8;
    }
    pSVar1 = (__this->fields)._enteredPassword;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_0440bade;
    if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) !=
        (Settings_MultiplayerSettings_o *)0x0) {
      Settings_MultiplayerSettings__JoinRoom
                ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                 (__this->fields)._roomId,(__this->fields)._roomName,(pSVar1->fields)._value,(MethodInfo *)0x0
                );
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0440bae8:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  uVar8 = auVar9._0_8_;
  if (auVar9._8_4_ == 1) {
    puVar6 = (undefined8 *)__cxa_begin_catch(uVar8);
    cVar3 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar6);
    if (cVar3 == '\0') {
      puVar7 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar7 = *puVar6;
      __cxa_throw(puVar7,&PTR_PTR_05215060,0);
    }
    __cxa_end_catch();
    pUVar2 = (__this->fields)._incorrectPasswordLabel;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar2,1,(MethodInfo *)0x0);
      return;
    }
    uVar8 = il2cpp_runtime_helper_022b2c90();
    __cxa_end_catch();
  }
  _Unwind_Resume(uVar8);
}


// UI.MultiplayerPasswordPopup$$<Setup>b__20_1
// il2cpp: void UI_MultiplayerPasswordPopup___Setup_b__20_1 (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x440bca0

void UI_MultiplayerPasswordPopup___Setup_b__20_1(UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *salt;
  UnityEngine_GameObject_o *pUVar2;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auVar9 [12];
  
  if (g_data_057ae5cc == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5cc = '\x01';
  }
  pSVar5 = "Back";
  if (g_data_057ae5c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5c9 = '\x01';
  }
  bVar4 = System_String__op_Equality(pSVar5,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    bVar4 = System_String__op_Equality(pSVar5,"Back",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  pSVar1 = (__this->fields)._enteredPassword;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_0440bade:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar5 = (pSVar1->fields)._value;
    salt = (__this->fields)._passwordSalt;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = Utility_Util__CreatePBKDF2(pSVar5,salt,(MethodInfo *)0x0);
    bVar4 = System_String__op_Equality(pSVar5,(__this->fields)._actualPasswordHash,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pUVar2 = (__this->fields)._incorrectPasswordLabel;
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar2,1,(MethodInfo *)0x0);
        return;
      }
      goto label_0440bae8;
    }
    pSVar1 = (__this->fields)._enteredPassword;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_0440bade;
    if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) !=
        (Settings_MultiplayerSettings_o *)0x0) {
      Settings_MultiplayerSettings__JoinRoom
                ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                 (__this->fields)._roomId,(__this->fields)._roomName,(pSVar1->fields)._value,(MethodInfo *)0x0
                );
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0440bae8:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  uVar8 = auVar9._0_8_;
  if (auVar9._8_4_ == 1) {
    puVar6 = (undefined8 *)__cxa_begin_catch(uVar8);
    cVar3 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar6);
    if (cVar3 == '\0') {
      puVar7 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar7 = *puVar6;
      __cxa_throw(puVar7,&PTR_PTR_05215060,0);
    }
    __cxa_end_catch();
    pUVar2 = (__this->fields)._incorrectPasswordLabel;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar2,1,(MethodInfo *)0x0);
      return;
    }
    uVar8 = il2cpp_runtime_helper_022b2c90();
    __cxa_end_catch();
  }
  _Unwind_Resume(uVar8);
}


