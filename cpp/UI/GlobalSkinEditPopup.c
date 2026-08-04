// Type: UI.GlobalSkinEditPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/GlobalSkinEditPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$.ctor
// il2cpp: void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27___ctor (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x436c390

void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27___ctor
               (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.IDisposable.Dispose
// il2cpp: void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_IDisposable_Dispose (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x436d160

void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_IDisposable_Dispose
               (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,MethodInfo *method)

{
  return;
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$MoveNext
// il2cpp: bool UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__MoveNext (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x436d170

bool_conflict
UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__MoveNext
          (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_DummyHuman_o *__this_00;
  long lVar2;
  Settings_TypedSetting_bool__o *__this_01;
  UnityEngine_WaitForSeconds_o *pUVar3;
  undefined8 uVar4;
  UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this_02;
  
  __this_02 = __this;
  if (g_data_057ae1eb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    __this_02 = (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1eb = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
       (__this_02 = *(UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o **)(lVar2 + 0x60),
       __this_02 != (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_02,(uint)(byte)(__this->fields).originalGlobal,
                 MethodInfo_Void_set_Value);
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
        __this_01 = *(Settings_TypedSetting_bool__o **)(lVar2 + 0x58);
        __this_02 = (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *)0x0;
        if (__this_01 != (Settings_TypedSetting_bool__o *)0x0) {
          Settings_TypedSetting_bool___set_Value
                    (__this_01,(uint)*(byte *)((long)&(__this->fields).originalGlobal + 1),MethodInfo_Void_set_Value);
          return 0;
        }
      }
    }
label_0436d2e6:
    il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)(__this_02->fields).__2__current;
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    __this_00 = (__this->fields).character;
    __this_02 = (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *)0x0;
    if (__this_00 == (Characters_DummyHuman_o *)0x0) goto label_0436d2e6;
    Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
    pUVar3 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pUVar3,0.1,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar3;
    uVar4 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar3);
    (__this->fields).__1__state = 2;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pUVar3 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pUVar3,0.1,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar3;
    uVar4 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar3);
    (__this->fields).__1__state = 1;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x436d2f0

Il2CppObject *
UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_IEnumerator_Reset (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x436d300

void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_IEnumerator_Reset
               (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,MethodInfo *method)

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


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_IEnumerator_get_Current (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x436d340

Il2CppObject *
UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_IEnumerator_get_Current
          (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.GlobalSkinEditPopup$$get_Title
// il2cpp: System_String_o* UI_GlobalSkinEditPopup__get_Title (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436a0e0

System_String_o * UI_GlobalSkinEditPopup__get_Title(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  long lVar1;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  Settings_BaseSetSetting_o *pSVar4;
  
  if (g_data_057ae1de == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"EditGlobal");
    il2cpp_runtime_helper_023445d0(&"Skins.Human");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae1de = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","EditGlobal","","",(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if ((lVar1 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar1 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar4 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (pSVar4 == (Settings_BaseSetSetting_o *)0x0) {
      pSVar3 = System_String__Concat_3af7150(pSVar3,": ",(System_String_o *)0x0,(MethodInfo *)0x0);
      return pSVar3;
    }
    pSVar2 = (pSVar4->fields).Name;
    if (pSVar2 != (Settings_StringSetting_o *)0x0) {
      pSVar3 = System_String__Concat_3af7150(pSVar3,": ",(pSVar2->fields)._value,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  return pSVar3;
}


// UI.GlobalSkinEditPopup$$get_Width
// il2cpp: float UI_GlobalSkinEditPopup__get_Width (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436a220

float UI_GlobalSkinEditPopup__get_Width(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return 1100.0;
}


// UI.GlobalSkinEditPopup$$get_Height
// il2cpp: float UI_GlobalSkinEditPopup__get_Height (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436a230

float UI_GlobalSkinEditPopup__get_Height(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return 700.0;
}


// UI.GlobalSkinEditPopup$$get_VerticalSpacing
// il2cpp: float UI_GlobalSkinEditPopup__get_VerticalSpacing (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436a240

float UI_GlobalSkinEditPopup__get_VerticalSpacing(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return 15.0;
}


// UI.GlobalSkinEditPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_GlobalSkinEditPopup__get_HorizontalPadding (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436a250

int32_t UI_GlobalSkinEditPopup__get_HorizontalPadding(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.GlobalSkinEditPopup$$get_VerticalPadding
// il2cpp: int32_t UI_GlobalSkinEditPopup__get_VerticalPadding (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436a260

int32_t UI_GlobalSkinEditPopup__get_VerticalPadding(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.GlobalSkinEditPopup$$get_DoublePanel
// il2cpp: bool UI_GlobalSkinEditPopup__get_DoublePanel (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436a270

bool_conflict UI_GlobalSkinEditPopup__get_DoublePanel(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.GlobalSkinEditPopup$$get_ScrollBar
// il2cpp: bool UI_GlobalSkinEditPopup__get_ScrollBar (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436a280

bool_conflict UI_GlobalSkinEditPopup__get_ScrollBar(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.GlobalSkinEditPopup$$Setup
// il2cpp: void UI_GlobalSkinEditPopup__Setup (UI_GlobalSkinEditPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x436a290

void UI_GlobalSkinEditPopup__Setup(UI_GlobalSkinEditPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  void *pvVar4;
  Settings_HumanCustomSkinSet_o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  Settings_StringSetting_o *setting;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_MonoBehaviour_c *pUVar7;
  Settings_TypedSetting_bool__c *pSVar8;
  UnityEngine_Transform_c *pUVar9;
  Characters_HumanSetup_o *__this_02;
  Il2CppClass **ppIVar10;
  undefined8 uVar11;
  code *pcVar12;
  Il2CppObject *pIVar13;
  Il2CppMethodPointer pIVar14;
  uint uVar15;
  bool_conflict bVar16;
  System_String_o *pSVar17;
  Il2CppClass *__this_03;
  Il2CppClass *pIVar18;
  Il2CppClass *pIVar19;
  Il2CppClass *__this_04;
  UnityEngine_Events_UnityAction_o *pUVar20;
  undefined4 extraout_var;
  Il2CppClass *pIVar21;
  long *plVar22;
  System_Object_array *pSVar23;
  undefined8 *puVar24;
  uint uVar25;
  MethodInfo *pMVar26;
  Il2CppClass *__this_05;
  System_String_o **unaff_R13;
  MethodInfo_2A23E90 **ppMVar27;
  System_String_o **x;
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined8 uStackY_a0;
  Il2CppClass *pIStackY_98;
  Il2CppClass *pIStackY_90;
  Settings_StringSetting_o *pSStackY_88;
  Il2CppClass *pIStackY_80;
  Il2CppClass *pIStackY_78;
  Il2CppClass *pIStackY_70;
  
  puVar24 = (undefined8 *)&stack0xffffffffffffff98;
  if (g_data_057ae1df == '\0') {
    pIStackY_70 = (Il2CppClass *)0x436a2bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    pIStackY_70 = (Il2CppClass *)0x436a2c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__20_0);
    pIStackY_70 = (Il2CppClass *)0x436a2d5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__20_1);
    pIStackY_70 = (Il2CppClass *)0x436a2e1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__20_2);
    pIStackY_70 = (Il2CppClass *)0x436a2ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSkinSet);
    pIStackY_70 = (Il2CppClass *)0x436a2f9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    pIStackY_70 = (Il2CppClass *)0x436a305;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pIStackY_70 = (Il2CppClass *)0x436a311;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pIStackY_70 = (Il2CppClass *)0x436a31d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pIStackY_70 = (Il2CppClass *)0x436a329;
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    pIStackY_70 = (Il2CppClass *)0x436a335;
    il2cpp_runtime_helper_023445d0(&"WeaponTrail");
    pIStackY_70 = (Il2CppClass *)0x436a341;
    il2cpp_runtime_helper_023445d0(&"Clear");
    pIStackY_70 = (Il2CppClass *)0x436a34d;
    il2cpp_runtime_helper_023445d0(&"Horse");
    pIStackY_70 = (Il2CppClass *)0x436a359;
    il2cpp_runtime_helper_023445d0(&"Back");
    pIStackY_70 = (Il2CppClass *)0x436a365;
    il2cpp_runtime_helper_023445d0(&"Logo");
    pIStackY_70 = (Il2CppClass *)0x436a371;
    il2cpp_runtime_helper_023445d0(&"Costume");
    pIStackY_70 = (Il2CppClass *)0x436a37d;
    il2cpp_runtime_helper_023445d0(&"Hoodie");
    pIStackY_70 = (Il2CppClass *)0x436a389;
    il2cpp_runtime_helper_023445d0(&"GearR");
    pIStackY_70 = (Il2CppClass *)0x436a395;
    il2cpp_runtime_helper_023445d0(&"Skins.Human");
    pIStackY_70 = (Il2CppClass *)0x436a3a1;
    il2cpp_runtime_helper_023445d0(&"HookR");
    pIStackY_70 = (Il2CppClass *)0x436a3ad;
    il2cpp_runtime_helper_023445d0(&"Gas");
    pIStackY_70 = (Il2CppClass *)0x436a3b9;
    il2cpp_runtime_helper_023445d0(&"Face");
    pIStackY_70 = (Il2CppClass *)0x436a3c5;
    il2cpp_runtime_helper_023445d0(&"Head");
    pIStackY_70 = (Il2CppClass *)0x436a3d1;
    il2cpp_runtime_helper_023445d0(&"Glass");
    pIStackY_70 = (Il2CppClass *)0x436a3dd;
    il2cpp_runtime_helper_023445d0(&"Cancel");
    pIStackY_70 = (Il2CppClass *)0x436a3e9;
    il2cpp_runtime_helper_023445d0(&"HookL");
    pIStackY_70 = (Il2CppClass *)0x436a3f5;
    il2cpp_runtime_helper_023445d0(&"HookRTiling");
    pIStackY_70 = (Il2CppClass *)0x436a401;
    il2cpp_runtime_helper_023445d0(&"HookLTiling");
    pIStackY_70 = (Il2CppClass *)0x436a40d;
    il2cpp_runtime_helper_023445d0(&"ThunderspearL");
    pIStackY_70 = (Il2CppClass *)0x436a419;
    il2cpp_runtime_helper_023445d0(&"Apply");
    pIStackY_70 = (Il2CppClass *)0x436a425;
    il2cpp_runtime_helper_023445d0(&"Eye");
    pIStackY_70 = (Il2CppClass *)0x436a431;
    il2cpp_runtime_helper_023445d0(&"ThunderspearR");
    pIStackY_70 = (Il2CppClass *)0x436a43d;
    il2cpp_runtime_helper_023445d0(&"GearL");
    pIStackY_70 = (Il2CppClass *)0x436a449;
    il2cpp_runtime_helper_023445d0(&"Hair");
    pIStackY_70 = (Il2CppClass *)0x436a455;
    il2cpp_runtime_helper_023445d0(&"");
    pIStackY_70 = (Il2CppClass *)0x436a461;
    il2cpp_runtime_helper_023445d0(&"Skin");
    pIStackY_70 = (Il2CppClass *)0x436a46d;
    il2cpp_runtime_helper_023445d0(&"Hat");
    g_data_057ae1df = '\x01';
  }
  pIStackY_70 = (Il2CppClass *)0x436a481;
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pIStackY_70 = (Il2CppClass *)0x436a494;
  pSVar17 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pIStackY_70 = (Il2CppClass *)0x436a4a6;
  __this_03 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pIStackY_70 = (Il2CppClass *)0x436a4cb;
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_03,0x18,200.0,20.0,pSVar17,(MethodInfo *)0x0);
  pIStackY_70 = (Il2CppClass *)0x436a4de;
  uVar15 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                     (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  plVar22 = (long *)(ulong)uVar15;
  pIStackY_70 = (Il2CppClass *)0x436a4f3;
  pIVar18 = (Il2CppClass *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pIStackY_70 = (Il2CppClass *)0x436a4fe;
  pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pIVar21 = (Il2CppClass *)(ulong)uVar15;
  pIStackY_70 = (Il2CppClass *)0x436a520;
  UI_ElementStyle___ctor
            ((UI_ElementStyle_o *)pIVar19,uVar15,120.0,20.0,(System_String_o *)pIVar18,(MethodInfo *)0x0);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  x = (System_String_o **)pIVar19;
  if ((lVar3 == 0) ||
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
     __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) {
label_0436b18a:
    pIStackY_70 = (Il2CppClass *)0x436b18f;
    __this_04 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
    ppMVar27 = (MethodInfo_2A23E90 **)unaff_R13;
  }
  else {
    pIStackY_70 = (Il2CppClass *)0x436a55a;
    __this_04 = (Il2CppClass *)Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (__this_04 == (Il2CppClass *)0x0) {
label_0436a591:
      pIVar18 = (Il2CppClass *)&(__this->fields)._currentGlobalSet;
      (__this->fields)._currentGlobalSet = (Settings_HumanCustomSkinSet_o *)__this_04;
      pIStackY_70 = (Il2CppClass *)0x436a5aa;
      il2cpp_runtime_helper_022b4080(pIVar18);
      pSVar5 = (__this->fields)._currentGlobalSet;
      pIVar21 = __this_04;
      if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
        plVar22 = (long *)(__this->fields).DoublePanelLeft;
        unaff_R13 = (System_String_o **)(pSVar5->fields).Hair;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          pIStackY_70 = (Il2CppClass *)0x436a5df;
          il2cpp_runtime_helper_02337ed0();
        }
        x = &"";
        pIStackY_70 = (Il2CppClass *)0x436a612;
        pSVar17 = UI_UIManager__GetLocale
                            ("SettingsPopup","Skins.Human","Hair","","",
                             (MethodInfo *)0x0);
        pIStackY_70 = (Il2CppClass *)0x436a64e;
        pIVar21 = __this_03;
        UI_ElementFactory__CreateInputSetting
                  ((UnityEngine_Transform_o *)plVar22,(UI_ElementStyle_o *)__this_03,
                   (Settings_BaseSetting_o *)unaff_R13,pSVar17,"",300.0,40.0,0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pSVar5 = *(Settings_HumanCustomSkinSet_o **)pIVar18;
        if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
          pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelLeft;
          plVar22 = (long *)(pSVar5->fields).Eye;
          unaff_R13 = &"SettingsPopup";
          pIStackY_70 = (Il2CppClass *)0x436a68f;
          pSVar17 = UI_UIManager__GetLocale
                              ("SettingsPopup","Skins.Human","Eye","","",
                               (MethodInfo *)0x0);
          pIStackY_70 = (Il2CppClass *)0x436a6cb;
          pIVar21 = __this_03;
          UI_ElementFactory__CreateInputSetting
                    ((UnityEngine_Transform_o *)pIVar18,(UI_ElementStyle_o *)__this_03,
                     (Settings_BaseSetting_o *)plVar22,pSVar17,"",300.0,40.0,0,
                     (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0
                    );
          pSVar5 = (__this->fields)._currentGlobalSet;
          if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
            pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelLeft;
            plVar22 = (long *)(pSVar5->fields).Glass;
            pIStackY_70 = (Il2CppClass *)0x436a709;
            pSVar17 = UI_UIManager__GetLocale
                                ("SettingsPopup","Skins.Human","Glass","","",
                                 (MethodInfo *)0x0);
            pIStackY_70 = (Il2CppClass *)0x436a745;
            pIVar21 = __this_03;
            UI_ElementFactory__CreateInputSetting
                      ((UnityEngine_Transform_o *)pIVar18,(UI_ElementStyle_o *)__this_03,
                       (Settings_BaseSetting_o *)plVar22,pSVar17,"",300.0,40.0,0,
                       (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                       (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                       (MethodInfo *)0x0);
            pSVar5 = (__this->fields)._currentGlobalSet;
            if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
              pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelLeft;
              plVar22 = (long *)(pSVar5->fields).Face;
              pIStackY_70 = (Il2CppClass *)0x436a783;
              pSVar17 = UI_UIManager__GetLocale
                                  ("SettingsPopup","Skins.Human","Face","","",
                                   (MethodInfo *)0x0);
              pIStackY_70 = (Il2CppClass *)0x436a7bf;
              pIVar21 = __this_03;
              UI_ElementFactory__CreateInputSetting
                        ((UnityEngine_Transform_o *)pIVar18,(UI_ElementStyle_o *)__this_03,
                         (Settings_BaseSetting_o *)plVar22,pSVar17,"",300.0,40.0,0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                         (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                         (MethodInfo *)0x0);
              pSVar5 = (__this->fields)._currentGlobalSet;
              if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelLeft;
                plVar22 = (long *)(pSVar5->fields).Skin;
                pIStackY_70 = (Il2CppClass *)0x436a7fd;
                pSVar17 = UI_UIManager__GetLocale
                                    ("SettingsPopup","Skins.Human","Skin","","",
                                     (MethodInfo *)0x0);
                pIStackY_70 = (Il2CppClass *)0x436a839;
                pIVar21 = __this_03;
                UI_ElementFactory__CreateInputSetting
                          ((UnityEngine_Transform_o *)pIVar18,(UI_ElementStyle_o *)__this_03,
                           (Settings_BaseSetting_o *)plVar22,pSVar17,"",300.0,40.0,0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                           (MethodInfo *)0x0);
                pSVar5 = (__this->fields)._currentGlobalSet;
                if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                  pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelLeft;
                  plVar22 = (long *)(pSVar5->fields).Costume;
                  pIStackY_70 = (Il2CppClass *)0x436a877;
                  pSVar17 = UI_UIManager__GetLocale
                                      ("SettingsPopup","Skins.Human","Costume","","",
                                       (MethodInfo *)0x0);
                  pIStackY_70 = (Il2CppClass *)0x436a8b3;
                  pIVar21 = __this_03;
                  UI_ElementFactory__CreateInputSetting
                            ((UnityEngine_Transform_o *)pIVar18,(UI_ElementStyle_o *)__this_03,
                             (Settings_BaseSetting_o *)plVar22,pSVar17,"",300.0,40.0,0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                             (MethodInfo *)0x0);
                  pSVar5 = (__this->fields)._currentGlobalSet;
                  if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                    pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelLeft;
                    plVar22 = (long *)(pSVar5->fields).Logo;
                    pIStackY_70 = (Il2CppClass *)0x436a8f1;
                    pSVar17 = UI_UIManager__GetLocale
                                        ("SettingsPopup","Skins.Human","Logo","","",
                                         (MethodInfo *)0x0);
                    pIStackY_70 = (Il2CppClass *)0x436a92d;
                    pIVar21 = __this_03;
                    UI_ElementFactory__CreateInputSetting
                              ((UnityEngine_Transform_o *)pIVar18,(UI_ElementStyle_o *)__this_03,
                               (Settings_BaseSetting_o *)plVar22,pSVar17,"",300.0,40.0,0,
                               (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0
                               ,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                               (MethodInfo *)0x0);
                    pSVar5 = (__this->fields)._currentGlobalSet;
                    if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                      pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelLeft;
                      plVar22 = (long *)(pSVar5->fields).GearL;
                      pIStackY_70 = (Il2CppClass *)0x436a96b;
                      pSVar17 = UI_UIManager__GetLocale
                                          ("SettingsPopup","Skins.Human","GearL","","",
                                           (MethodInfo *)0x0);
                      pIStackY_70 = (Il2CppClass *)0x436a9a7;
                      pIVar21 = __this_03;
                      UI_ElementFactory__CreateInputSetting
                                ((UnityEngine_Transform_o *)pIVar18,(UI_ElementStyle_o *)__this_03,
                                 (Settings_BaseSetting_o *)plVar22,pSVar17,"",300.0,40.0,0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                      pSVar5 = (__this->fields)._currentGlobalSet;
                      if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                        pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelLeft;
                        plVar22 = (long *)(pSVar5->fields).GearR;
                        pIStackY_70 = (Il2CppClass *)0x436a9e5;
                        pSVar17 = UI_UIManager__GetLocale
                                            ("SettingsPopup","Skins.Human","GearR","","",
                                             (MethodInfo *)0x0);
                        pIStackY_70 = (Il2CppClass *)0x436aa21;
                        pIVar21 = __this_03;
                        UI_ElementFactory__CreateInputSetting
                                  ((UnityEngine_Transform_o *)pIVar18,(UI_ElementStyle_o *)__this_03,
                                   (Settings_BaseSetting_o *)plVar22,pSVar17,"",300.0,40.0,0,
                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                   (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                   (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                        pSVar5 = (__this->fields)._currentGlobalSet;
                        if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                          pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelLeft;
                          plVar22 = (long *)(pSVar5->fields).Gas;
                          pIStackY_70 = (Il2CppClass *)0x436aa62;
                          pSVar17 = UI_UIManager__GetLocale
                                              ("SettingsPopup","Skins.Human","Gas","",
                                               "",(MethodInfo *)0x0);
                          pIStackY_70 = (Il2CppClass *)0x436aa9e;
                          pIVar21 = __this_03;
                          UI_ElementFactory__CreateInputSetting
                                    ((UnityEngine_Transform_o *)pIVar18,(UI_ElementStyle_o *)__this_03,
                                     (Settings_BaseSetting_o *)plVar22,pSVar17,"",300.0,40.0,0,
                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                                     (MethodInfo *)0x0);
                          pSVar5 = (__this->fields)._currentGlobalSet;
                          if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                            pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelLeft;
                            plVar22 = (long *)(pSVar5->fields).Hoodie;
                            pIStackY_70 = (Il2CppClass *)0x436aadf;
                            pSVar17 = UI_UIManager__GetLocale
                                                ("SettingsPopup","Skins.Human","Hoodie","",
                                                 "",(MethodInfo *)0x0);
                            pIStackY_70 = (Il2CppClass *)0x436ab1b;
                            pIVar21 = __this_03;
                            UI_ElementFactory__CreateInputSetting
                                      ((UnityEngine_Transform_o *)pIVar18,(UI_ElementStyle_o *)__this_03,
                                       (Settings_BaseSetting_o *)plVar22,pSVar17,"",300.0,40.0,0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                       (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0
                                       ,(MethodInfo *)0x0);
                            pSVar5 = (__this->fields)._currentGlobalSet;
                            if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                              pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelRight;
                              plVar22 = (long *)(pSVar5->fields).WeaponTrail;
                              pIStackY_70 = (Il2CppClass *)0x436ab5c;
                              pSVar17 = UI_UIManager__GetLocale
                                                  ("SettingsPopup","Skins.Human","WeaponTrail","",
                                                   "",(MethodInfo *)0x0);
                              pIStackY_70 = (Il2CppClass *)0x436ab98;
                              pIVar21 = __this_03;
                              UI_ElementFactory__CreateInputSetting
                                        ((UnityEngine_Transform_o *)pIVar18,(UI_ElementStyle_o *)__this_03,
                                         (Settings_BaseSetting_o *)plVar22,pSVar17,"",300.0,40.0,0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (System_Func_string__bool__o *)0x0,
                                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                              pSVar5 = (__this->fields)._currentGlobalSet;
                              if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelRight;
                                plVar22 = (long *)(pSVar5->fields).Horse;
                                pIStackY_70 = (Il2CppClass *)0x436abd9;
                                pSVar17 = UI_UIManager__GetLocale
                                                    ("SettingsPopup","Skins.Human","Horse","",
                                                     "",(MethodInfo *)0x0);
                                pIStackY_70 = (Il2CppClass *)0x436ac15;
                                pIVar21 = __this_03;
                                UI_ElementFactory__CreateInputSetting
                                          ((UnityEngine_Transform_o *)pIVar18,(UI_ElementStyle_o *)__this_03,
                                           (Settings_BaseSetting_o *)plVar22,pSVar17,"",300.0,40.0,0
                                           ,(UnityEngine_Events_UnityAction_o *)0x0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (System_Func_string__bool__o *)0x0,
                                           (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                pSVar5 = (__this->fields)._currentGlobalSet;
                                if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                  pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelRight;
                                  plVar22 = (long *)(pSVar5->fields).ThunderspearL;
                                  pIStackY_70 = (Il2CppClass *)0x436ac56;
                                  pSVar17 = UI_UIManager__GetLocale
                                                      ("SettingsPopup","Skins.Human","ThunderspearL","",
                                                       "",(MethodInfo *)0x0);
                                  pIStackY_70 = (Il2CppClass *)0x436ac92;
                                  pIVar21 = __this_03;
                                  UI_ElementFactory__CreateInputSetting
                                            ((UnityEngine_Transform_o *)pIVar18,(UI_ElementStyle_o *)__this_03
                                             ,(Settings_BaseSetting_o *)plVar22,pSVar17,"",300.0,
                                             40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                             (System_Func_string__bool__o *)0x0,
                                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                  pSVar5 = (__this->fields)._currentGlobalSet;
                                  if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                    pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelRight;
                                    plVar22 = (long *)(pSVar5->fields).ThunderspearR;
                                    pIStackY_70 = (Il2CppClass *)0x436acd3;
                                    pSVar17 = UI_UIManager__GetLocale
                                                        ("SettingsPopup","Skins.Human","ThunderspearR","",
                                                         "",(MethodInfo *)0x0);
                                    pIStackY_70 = (Il2CppClass *)0x436ad0f;
                                    pIVar21 = __this_03;
                                    UI_ElementFactory__CreateInputSetting
                                              ((UnityEngine_Transform_o *)pIVar18,
                                               (UI_ElementStyle_o *)__this_03,
                                               (Settings_BaseSetting_o *)plVar22,pSVar17,"",300.0,
                                               40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                               (System_Func_string__bool__o *)0x0,
                                               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                    pSVar5 = (__this->fields)._currentGlobalSet;
                                    if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                      pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelRight;
                                      plVar22 = (long *)(pSVar5->fields).HookL;
                                      pIStackY_70 = (Il2CppClass *)0x436ad50;
                                      pSVar17 = UI_UIManager__GetLocale
                                                          ("SettingsPopup","Skins.Human","HookL",""
                                                           ,"",(MethodInfo *)0x0);
                                      pIStackY_70 = (Il2CppClass *)0x436ad8c;
                                      pIVar21 = __this_03;
                                      UI_ElementFactory__CreateInputSetting
                                                ((UnityEngine_Transform_o *)pIVar18,
                                                 (UI_ElementStyle_o *)__this_03,
                                                 (Settings_BaseSetting_o *)plVar22,pSVar17,"",300.0,
                                                 40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                 (System_Func_string__bool__o *)0x0,
                                                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                      pSVar5 = (__this->fields)._currentGlobalSet;
                                      if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                        pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelRight;
                                        plVar22 = (long *)(pSVar5->fields).HookLTiling;
                                        pIStackY_70 = (Il2CppClass *)0x436adcd;
                                        pSVar17 = UI_UIManager__GetLocale
                                                            ("SettingsPopup","Skins.Human","HookLTiling",
                                                             "","",(MethodInfo *)0x0);
                                        pIStackY_70 = (Il2CppClass *)0x436ae09;
                                        pIVar21 = __this_03;
                                        UI_ElementFactory__CreateInputSetting
                                                  ((UnityEngine_Transform_o *)pIVar18,
                                                   (UI_ElementStyle_o *)__this_03,
                                                   (Settings_BaseSetting_o *)plVar22,pSVar17,"",
                                                   300.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                   (System_Func_string__bool__o *)0x0,
                                                   (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                        pSVar5 = (__this->fields)._currentGlobalSet;
                                        if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                          pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelRight;
                                          plVar22 = (long *)(pSVar5->fields).HookR;
                                          pIStackY_70 = (Il2CppClass *)0x436ae4a;
                                          pSVar17 = UI_UIManager__GetLocale
                                                              ("SettingsPopup","Skins.Human","HookR",
                                                               "","",(MethodInfo *)0x0);
                                          pIStackY_70 = (Il2CppClass *)0x436ae86;
                                          pIVar21 = __this_03;
                                          UI_ElementFactory__CreateInputSetting
                                                    ((UnityEngine_Transform_o *)pIVar18,
                                                     (UI_ElementStyle_o *)__this_03,
                                                     (Settings_BaseSetting_o *)plVar22,pSVar17,"",
                                                     300.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (System_Func_string__bool__o *)0x0,
                                                     (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                          pSVar5 = (__this->fields)._currentGlobalSet;
                                          if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                            pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelRight;
                                            plVar22 = (long *)(pSVar5->fields).HookRTiling;
                                            pIStackY_70 = (Il2CppClass *)0x436aec7;
                                            pSVar17 = UI_UIManager__GetLocale
                                                                ("SettingsPopup","Skins.Human","HookRTiling",
                                                                 "","",(MethodInfo *)0x0);
                                            pIStackY_70 = (Il2CppClass *)0x436af03;
                                            pIVar21 = __this_03;
                                            UI_ElementFactory__CreateInputSetting
                                                      ((UnityEngine_Transform_o *)pIVar18,
                                                       (UI_ElementStyle_o *)__this_03,
                                                       (Settings_BaseSetting_o *)plVar22,pSVar17,"",
                                                       300.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Func_string__bool__o *)0x0,
                                                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0)
                                            ;
                                            pSVar5 = (__this->fields)._currentGlobalSet;
                                            if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                              pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelRight;
                                              plVar22 = (long *)(pSVar5->fields).Hat;
                                              pIStackY_70 = (Il2CppClass *)0x436af44;
                                              pSVar17 = UI_UIManager__GetLocale
                                                                  ("SettingsPopup","Skins.Human","Hat",
                                                                   "","",(MethodInfo *)0x0
                                                                  );
                                              pIStackY_70 = (Il2CppClass *)0x436af80;
                                              pIVar21 = __this_03;
                                              UI_ElementFactory__CreateInputSetting
                                                        ((UnityEngine_Transform_o *)pIVar18,
                                                         (UI_ElementStyle_o *)__this_03,
                                                         (Settings_BaseSetting_o *)plVar22,pSVar17,
                                                         "",300.0,40.0,0,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (System_Func_string__bool__o *)0x0,
                                                         (System_Func_string__string__o *)0x0,
                                                         (MethodInfo *)0x0);
                                              pSVar5 = (__this->fields)._currentGlobalSet;
                                              if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                                pIVar18 = (Il2CppClass *)(__this->fields).DoublePanelRight;
                                                plVar22 = (long *)(pSVar5->fields).Head;
                                                pIStackY_70 = (Il2CppClass *)0x436afc1;
                                                pSVar17 = UI_UIManager__GetLocale
                                                                    ("SettingsPopup","Skins.Human","Head",
                                                                     "","",
                                                                     (MethodInfo *)0x0);
                                                pIStackY_70 = (Il2CppClass *)0x436affd;
                                                pIVar21 = __this_03;
                                                UI_ElementFactory__CreateInputSetting
                                                          ((UnityEngine_Transform_o *)pIVar18,
                                                           (UI_ElementStyle_o *)__this_03,
                                                           (Settings_BaseSetting_o *)plVar22,pSVar17,
                                                           "",300.0,40.0,0,
                                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                                           (System_Func_string__bool__o *)0x0,
                                                           (System_Func_string__string__o *)0x0,
                                                           (MethodInfo *)0x0);
                                                pSVar5 = (__this->fields)._currentGlobalSet;
                                                if (pSVar5 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                                  pUVar6 = (__this->fields).DoublePanelRight;
                                                  setting = (pSVar5->fields).Back;
                                                  pIStackY_70 = (Il2CppClass *)0x436b03e;
                                                  pSVar17 = UI_UIManager__GetLocale
                                                                      ("SettingsPopup","Skins.Human","Back",
                                                                       "","",
                                                                       (MethodInfo *)0x0);
                                                  pIStackY_70 = (Il2CppClass *)0x436b07a;
                                                  UI_ElementFactory__CreateInputSetting
                                                            (pUVar6,(UI_ElementStyle_o *)__this_03,
                                                             (Settings_BaseSetting_o *)setting,pSVar17,
                                                             "",300.0,40.0,0,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (System_Func_string__bool__o *)0x0,
                                                             (System_Func_string__string__o *)0x0,
                                                             (MethodInfo *)0x0);
                                                  pUVar6 = (__this->fields).BottomBar;
                                                  pIStackY_70 = (Il2CppClass *)0x436b08f;
                                                  pSVar17 = UI_UIManager__GetLocaleCommon
                                                                      ((System_String_o *)"Clear",
                                                                       (MethodInfo *)0x0);
                                                  pIStackY_70 = (Il2CppClass *)0x436b0a2;
                                                  pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                  pIStackY_70 = (Il2CppClass *)0x436b0bc;
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  pIStackY_70 = (Il2CppClass *)0x436b0d8;
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar6,(UI_ElementStyle_o *)pIVar19,pSVar17,0.0,
                                                             pUVar20,(MethodInfo *)0x0);
                                                  pUVar6 = (__this->fields).BottomBar;
                                                  pIStackY_70 = (Il2CppClass *)0x436b0ed;
                                                  pSVar17 = UI_UIManager__GetLocaleCommon
                                                                      ("Apply",(MethodInfo *)0x0);
                                                  pIStackY_70 = (Il2CppClass *)0x436b0f9;
                                                  pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                  pIStackY_70 = (Il2CppClass *)0x436b113;
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  pIStackY_70 = (Il2CppClass *)0x436b12a;
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar6,(UI_ElementStyle_o *)pIVar19,pSVar17,0.0,
                                                             pUVar20,(MethodInfo *)0x0);
                                                  pUVar6 = (__this->fields).BottomBar;
                                                  pIStackY_70 = (Il2CppClass *)0x436b13f;
                                                  pSVar17 = UI_UIManager__GetLocaleCommon
                                                                      ((System_String_o *)"Cancel",
                                                                       (MethodInfo *)0x0);
                                                  pIStackY_70 = (Il2CppClass *)0x436b14b;
                                                  pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                  pIStackY_70 = (Il2CppClass *)0x436b165;
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar6,(UI_ElementStyle_o *)pIVar19,pSVar17,0.0,
                                                             pUVar20,(MethodInfo *)0x0);
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
      goto label_0436b18a;
    }
    pvVar4 = (__this_04->_1).image;
    bVar1 = (TypeInfo_HumanCustomSkinSet->_2).naturalAligment;
    pIVar21 = TypeInfo_HumanCustomSkinSet;
    ppMVar27 = (MethodInfo_2A23E90 **)unaff_R13;
    if ((bVar1 <= *(byte *)((long)pvVar4 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)((long)pvVar4 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_HumanCustomSkinSet))
    goto label_0436a591;
  }
  pIStackY_70 = (Il2CppClass *)0x436b197;
  pIStackY_80 = (Il2CppClass *)il2cpp_runtime_helper_022b2fd0();
  pIStackY_78 = pIVar18;
  pIStackY_70 = (Il2CppClass *)__this;
  if (g_data_057ae1e0 == '\0') {
    pSStackY_88 = (Settings_StringSetting_o *)0x436b1bf;
    il2cpp_runtime_helper_023445d0(&"Clear");
    pSStackY_88 = (Settings_StringSetting_o *)0x436b1cb;
    il2cpp_runtime_helper_023445d0(&"Cancel");
    pSStackY_88 = (Settings_StringSetting_o *)0x436b1d7;
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae1e0 = '\x01';
  }
  pSStackY_88 = (Settings_StringSetting_o *)0x436b1f2;
  pIVar19 = "Save";
  bVar16 = System_String__op_Equality
                     ((System_String_o *)pIVar21,(System_String_o *)"Save",(MethodInfo *)0x0);
  pIVar18 = pIStackY_70;
  if ((char)bVar16 == '\0') {
    pSStackY_88 = (Settings_StringSetting_o *)0x436b216;
    pMVar26 = "Cancel";
    bVar16 = System_String__op_Equality
                       ((System_String_o *)pIVar21,(System_String_o *)"Cancel",(MethodInfo *)0x0);
    if ((char)bVar16 != '\0') {
      if (*(char *)&__this_04->rgctx_data != '\0') {
        pSStackY_88 = (Settings_StringSetting_o *)0x436b22c;
        UI_GlobalSkinEditPopup__RestoreBackup((UI_GlobalSkinEditPopup_o *)__this_04,pMVar26);
      }
      pvVar4 = (__this_04->_1).image;
      (**(code **)((long)pvVar4 + 0x298))(__this_04,*(undefined8 *)((long)pvVar4 + 0x2a0));
      return;
    }
    pSStackY_88 = (Settings_StringSetting_o *)0x436b25d;
    pIVar19 = "Clear";
    bVar16 = System_String__op_Equality
                       ((System_String_o *)pIVar21,(System_String_o *)"Clear",(MethodInfo *)0x0);
    pIVar21 = pIStackY_78;
    pIVar18 = pIStackY_70;
    if ((char)bVar16 == '\0') {
      return;
    }
    goto UI_GlobalSkinEditPopup__OnClearClick;
  }
  pIStackY_80 = pIStackY_70;
  pIStackY_98 = pIStackY_78;
  puVar24 = &uStackY_a0;
  uStackY_a0 = CONCAT44(extraout_var,bVar16);
  pIStackY_90 = __this_03;
  pSStackY_88 = (Settings_StringSetting_o *)ppMVar27;
  pIStackY_78 = (Il2CppClass *)x;
  pIStackY_70 = (Il2CppClass *)plVar22;
  if (g_data_057ae1e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae1e4 = '\x01';
  }
  if ((__this_04->_1).implementedInterfaces == (Il2CppClass **)0x0) {
    return;
  }
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_04->_1).interfaceOffsets;
  __this_05 = (Il2CppClass *)0x0;
  if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0436b69d:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar19 = MethodInfo_Void_Clear;
    System_Collections_Generic_Dictionary_object__object___Clear(__this_01,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear)
    ;
    __this_05 = (Il2CppClass *)0x0;
    if (__this_04->static_fields == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
    goto label_0436b69d;
    System_Collections_Generic_Dictionary_object__float___Clear(__this_04->static_fields,MethodInfo_Void_Clear);
    *(undefined1 *)&__this_04->rgctx_data = 0;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pIVar21 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pIVar21 != (Il2CppClass *)0x0) goto label_0436b3c3;
label_0436b3e3:
      pIVar18 = (Il2CppClass *)0x0;
      iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      pIVar21 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pIVar21 == (Il2CppClass *)0x0) goto label_0436b3e3;
label_0436b3c3:
      pUVar7 = (pIVar21->_1).image;
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((pUVar7->_2).naturalAligment < bVar1) goto label_0436b3e3;
      pIVar18 = (Il2CppClass *)0x0;
      if ((pUVar7->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
        pIVar18 = pIVar21;
      }
      iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar22 = &TypeInfo_Object;
    pIVar19 = (Il2CppClass *)0x0;
    bVar16 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pIVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar16 == '\0') goto label_0436b620;
    __this_05 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_05 == (Il2CppClass *)0x0) goto label_0436b69d;
    pSVar8 = (__this_05->_1).image;
    bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    pIVar19 = TypeInfo_CharacterEditorGameManager;
    if ((bVar1 <= (pSVar8->_2).naturalAligment) &&
       ((pSVar8->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorGameManager)) {
      pIVar21 = *(Il2CppClass **)&(__this_05->_1).this_arg.bits;
      if (pIVar21 == (Il2CppClass *)0x0) {
label_0436b48c:
        x = (System_String_o **)0x0;
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        pUVar9 = (pIVar21->_1).image;
        if ((pUVar9->_2).naturalAligment < *(byte *)(TypeInfo_DummyHuman + 0x130)) goto label_0436b48c;
        x = (System_String_o **)(Il2CppClass *)0x0;
        if ((pUVar9->_2).typeHierarchy[(ulong)*(byte *)(TypeInfo_DummyHuman + 0x130) - 1] ==
            (Il2CppClass *)TypeInfo_DummyHuman) {
          x = (System_String_o **)pIVar21;
        }
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar19 = (Il2CppClass *)0x0;
      bVar16 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar16 == '\0') {
label_0436b620:
        pvVar4 = (__this_04->_1).image;
        (**(code **)((long)pvVar4 + 0x298))(__this_04,*(undefined8 *)((long)pvVar4 + 0x2a0));
        return;
      }
      uVar15 = UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview((MethodInfo *)0x0);
      __this_03 = (Il2CppClass *)(ulong)uVar15;
      __this_05 = (Il2CppClass *)0x0;
      uVar15 = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
      plVar22 = (long *)(ulong)uVar15;
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if ((((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
          (__this_05 = *(Il2CppClass **)(lVar3 + 0x60), __this_05 != (Il2CppClass *)0x0)) &&
         (*(long *)(lVar3 + 0x58) != 0)) {
        uStackY_a0 = CONCAT17(*(undefined1 *)
                               ((long)&((Settings_TypedSetting_bool__Fields *)&(__this_05->_1).name)->
                                       DefaultValue + 1),
                              CONCAT16(*(undefined1 *)(*(long *)(lVar3 + 0x58) + 0x11),(undefined6)uStackY_a0)
                             );
        ppMVar27 = &MethodInfo_Void_set_Value;
        pIVar19 = (Il2CppClass *)((ulong)__this_03 & 0xff);
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this_05,(bool_conflict)pIVar19,MethodInfo_Void_set_Value);
        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
        if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
           (__this_05 = *(Il2CppClass **)(lVar3 + 0x58), __this_05 != (Il2CppClass *)0x0)) {
          pIVar19 = (Il2CppClass *)(ulong)(byte)uVar15;
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)__this_05,uVar15 & 0xff,MethodInfo_Void_set_Value);
          if ((Il2CppClass *)x != (Il2CppClass *)0x0) {
            __this_02 = *(Characters_HumanSetup_o **)&(((Il2CppClass *)x)->_1).this_arg.bits;
            __this_05 = (Il2CppClass *)0x0;
            if (__this_02 != (Characters_HumanSetup_o *)0x0) {
              Characters_HumanSetup__Load
                        (__this_02,(__this_02->fields).CustomSet,(__this_02->fields).Weapon,0,
                         (MethodInfo *)0x0);
              if (g_data_057ae1e5 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinAndRestoreSettings_d__27);
                g_data_057ae1e5 = '\x01';
              }
              plVar22 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinAndRestoreSettings_d__27);
              pIVar19 = (Il2CppClass *)0x0;
              __this_05 = (Il2CppClass *)plVar22;
              System_Object___ctor((Il2CppObject *)plVar22,(MethodInfo *)0x0);
              ((Settings_TypedSetting_bool__Fields *)&(((Il2CppClass *)plVar22)->_1).name)->DefaultValue = 0;
              if ((Il2CppClass *)plVar22 != (Il2CppClass *)0x0) {
                __this_05 = (Il2CppClass *)&(((Il2CppClass *)plVar22)->_1).byval_arg;
                (((Il2CppClass *)plVar22)->_1).byval_arg.data = x;
                pIVar19 = (Il2CppClass *)x;
                il2cpp_runtime_helper_022b4080();
                *(undefined1 *)&(((Il2CppClass *)plVar22)->_1).byval_arg.bits = uStackY_a0._7_1_;
                *(undefined1 *)((long)&(((Il2CppClass *)plVar22)->_1).byval_arg.bits + 1) = uStackY_a0._6_1_;
                if (pIVar18 != (Il2CppClass *)0x0) {
                  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                            ((UnityEngine_MonoBehaviour_o *)pIVar18,
                             (System_Collections_IEnumerator_o *)plVar22,(MethodInfo *)0x0);
                  goto label_0436b620;
                }
              }
            }
          }
        }
      }
      goto label_0436b69d;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pIVar21 = __this_04;
  __this_04 = __this_05;
UI_GlobalSkinEditPopup__OnClearClick:
  *(long **)((long)puVar24 + -8) = plVar22;
  *(System_String_o ***)((long)puVar24 + -0x10) = x;
  *(Il2CppClass **)((long)puVar24 + -0x18) = pIVar18;
  *(MethodInfo_2A23E90 ***)((long)puVar24 + -0x20) = ppMVar27;
  *(Il2CppClass **)((long)puVar24 + -0x28) = __this_03;
  *(Il2CppClass **)((long)puVar24 + -0x30) = pIVar21;
  if (g_data_057ae1e3 == '\0') {
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b6d6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponentsInChildren_InputSetting);
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b6e2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b6ee;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b6fa;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b706;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b712;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b71e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Value);
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b72a;
    il2cpp_runtime_helper_023445d0(&"UniqueId");
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b736;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b742;
    il2cpp_runtime_helper_023445d0(&"Preset");
    g_data_057ae1e3 = '\x01';
  }
  *(undefined8 *)((long)puVar24 + -0x78) = 0;
  *(undefined8 *)((long)puVar24 + -0x70) = 0;
  *(undefined8 *)((long)puVar24 + -0x88) = 0;
  *(undefined8 *)((long)puVar24 + -0x80) = 0;
  *(undefined8 *)((long)puVar24 + -0x68) = 0;
  if (*(char *)&__this_04->rgctx_data == '\0') {
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b76f;
    UI_GlobalSkinEditPopup__CreateBackup((UI_GlobalSkinEditPopup_o *)__this_04,(MethodInfo *)pIVar19);
  }
  ppIVar10 = (__this_04->_1).implementedInterfaces;
  if (ppIVar10 == (Il2CppClass **)0x0) goto label_0436b8da;
  *(Il2CppClass **)((long)puVar24 + -0x60) = __this_04;
  pIVar18 = ppIVar10[3];
  if (pIVar18 == (Il2CppClass *)0x0) goto label_0436b8da;
  *(undefined8 *)((long)puVar24 + -0x90) = 0x436b7a5;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)((long)puVar24 + -0x58),
             (System_Collections_Generic_Dictionary_object__object__o *)pIVar18,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
  *(undefined8 *)((long)puVar24 + -0x68) = *(undefined8 *)((long)puVar24 + -0x38);
  *(undefined8 *)((long)puVar24 + -0x78) = *(undefined8 *)((long)puVar24 + -0x48);
  *(undefined8 *)((long)puVar24 + -0x70) = *(undefined8 *)((long)puVar24 + -0x40);
  *(undefined8 *)((long)puVar24 + -0x88) = *(undefined8 *)((long)puVar24 + -0x58);
  *(undefined8 *)((long)puVar24 + -0x80) = *(undefined8 *)((long)puVar24 + -0x50);
  while( true ) {
    do {
      do {
        do {
          *(undefined8 *)((long)puVar24 + -0x90) = 0x436b7ec;
          bVar16 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                             ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
                              *(System_Collections_Generic_Dictionary_Enumerator_object__object__Fields *)
                               ((long)puVar24 + -0x88),(MethodInfo_3251160 *)((long)puVar24 + -0x88));
          if ((char)bVar16 == '\0') {
            *(undefined8 *)((long)puVar24 + -0x90) = 0x436b877;
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
                       *(System_Collections_Generic_Dictionary_Enumerator_object__object__Fields *)
                        ((long)puVar24 + -0x88),(MethodInfo_3251280 *)((long)puVar24 + -0x88));
            goto label_0436b877;
          }
          *(undefined8 *)((long)puVar24 + -0x90) = 0x436b7fc;
          auVar28 = il2cpp_runtime_helper_03343020((undefined1 *)((long)puVar24 + -0x88),MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
          plVar22 = auVar28._8_8_;
          pSVar17 = auVar28._0_8_;
          *(undefined8 *)((long)puVar24 + -0x90) = 0x436b80f;
          bVar16 = System_String__op_Equality(pSVar17,"Name",(MethodInfo *)0x0);
        } while ((char)bVar16 != '\0');
        *(undefined8 *)((long)puVar24 + -0x90) = 0x436b827;
        bVar16 = System_String__op_Equality(pSVar17,"Preset",(MethodInfo *)0x0);
      } while ((char)bVar16 != '\0');
      *(undefined8 *)((long)puVar24 + -0x90) = 0x436b83f;
      bVar16 = System_String__op_Equality(pSVar17,"UniqueId",(MethodInfo *)0x0);
    } while ((char)bVar16 != '\0');
    if (plVar22 == (long *)0x0) break;
    uVar11 = *(undefined8 *)(*plVar22 + 0x180);
    pcVar12 = *(code **)(*plVar22 + 0x178);
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b860;
    (*pcVar12)(plVar22,uVar11);
  }
  do {
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b8e9;
    auVar29 = il2cpp_runtime_helper_022b2c90();
    if (auVar29._8_4_ != 1) {
label_0436b960:
      *(undefined8 *)((long)puVar24 + -0x90) = 0x436b979;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
                 *(System_Collections_Generic_Dictionary_Enumerator_object__object__Fields *)
                  ((long)puVar24 + -0x88),(MethodInfo_3251280 *)((long)puVar24 + -0x88));
      *(undefined8 *)((long)puVar24 + -0x90) = 0x436b986;
      _Unwind_Resume(auVar29._0_8_);
    }
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b935;
    plVar22 = (long *)__cxa_begin_catch(auVar29._0_8_);
    lVar3 = *plVar22;
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b93d;
    __cxa_end_catch();
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b94f;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
               *(System_Collections_Generic_Dictionary_Enumerator_object__object__Fields *)
                ((long)puVar24 + -0x88),(MethodInfo_3251280 *)((long)puVar24 + -0x88));
    if (lVar3 != 0) {
      *(undefined8 *)((long)puVar24 + -0x90) = 0x436b960;
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_0436b960;
    }
label_0436b877:
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b88b;
    pSVar23 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                        (*(UnityEngine_Component_o **)((long)puVar24 + -0x60),MethodInfo_InputSettingElement_GetComponentsInChildren_InputSetting);
    if (pSVar23 == (System_Object_array *)0x0) {
label_0436b8da:
      *(undefined8 *)((long)puVar24 + -0x90) = 0x436b8df;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      uVar15 = (uint)pSVar23->max_length;
      if ((int)uVar15 < 1) {
        return;
      }
      uVar25 = 0;
      while (uVar25 < uVar15) {
        pIVar13 = pSVar23->m_Items[(int)uVar25];
        if (pIVar13 == (Il2CppObject *)0x0) goto label_0436b8da;
        pMVar26 = pIVar13->klass->vtable[6].method;
        pIVar14 = pIVar13->klass->vtable[6].methodPtr;
        *(undefined8 *)((long)puVar24 + -0x90) = 0x436b8c1;
        (*pIVar14)(pIVar13,pMVar26);
        uVar25 = uVar25 + 1;
        uVar15 = (uint)pSVar23->max_length;
        if ((int)uVar15 <= (int)uVar25) {
          return;
        }
      }
    }
    *(undefined8 *)((long)puVar24 + -0x90) = 0x436b8e4;
    il2cpp_runtime_helper_022b2ca0();
  } while( true );
}


// UI.GlobalSkinEditPopup$$OnButtonClick
// il2cpp: void UI_GlobalSkinEditPopup__OnButtonClick (UI_GlobalSkinEditPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x436b1a0

void UI_GlobalSkinEditPopup__OnButtonClick
               (UI_GlobalSkinEditPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  UnityEngine_Object_c *pUVar4;
  long lVar5;
  Characters_HumanSetup_o *__this_01;
  Settings_HumanCustomSkinSet_o *pSVar6;
  undefined8 uVar7;
  code *pcVar8;
  Il2CppObject *pIVar9;
  Il2CppMethodPointer pIVar10;
  bool_conflict bVar11;
  uint uVar12;
  undefined4 extraout_var;
  UnityEngine_MonoBehaviour_o *pUVar13;
  System_String_o *a;
  System_Object_array *pSVar14;
  long *plVar15;
  UI_GlobalSkinEditPopup_o *unaff_RBX;
  uint uVar16;
  long *unaff_RBP;
  MethodInfo *pMVar17;
  Il2CppClass *pIVar18;
  UI_GlobalSkinEditPopup_o *__this_02;
  ulong unaff_R12;
  MethodInfo_2A23E90 **unaff_R13;
  UnityEngine_MonoBehaviour_o *unaff_R14;
  Il2CppClass *unaff_R15;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined8 uStack_38;
  
  if (g_data_057ae1e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae1e0 = '\x01';
  }
  pIVar18 = "Save";
  bVar11 = System_String__op_Equality(name,(System_String_o *)"Save",(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    pMVar17 = "Cancel";
    bVar11 = System_String__op_Equality(name,(System_String_o *)"Cancel",(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      if ((char)(__this->fields)._hasBackup != '\0') {
        UI_GlobalSkinEditPopup__RestoreBackup(__this,pMVar17);
      }
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
    pIVar18 = "Clear";
    bVar11 = System_String__op_Equality(name,(System_String_o *)"Clear",(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return;
    }
    goto UI_GlobalSkinEditPopup__OnClearClick;
  }
  register0x00000020 = (BADSPACEBASE *)&uStack_38;
  uStack_38 = CONCAT44(extraout_var,bVar11);
  if (g_data_057ae1e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae1e4 = '\x01';
  }
  if ((__this->fields)._currentGlobalSet == (Settings_HumanCustomSkinSet_o *)0x0) {
    return;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
  __this_02 = (UI_GlobalSkinEditPopup_o *)0x0;
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0436b69d:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar18 = MethodInfo_Void_Clear;
    System_Collections_Generic_Dictionary_object__object___Clear(pSVar3,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear);
    __this_00 = (__this->fields)._backupFloatValues;
    __this_02 = (UI_GlobalSkinEditPopup_o *)0x0;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_0436b69d;
    System_Collections_Generic_Dictionary_object__float___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Void_Clear);
    *(undefined1 *)&(__this->fields)._hasBackup = 0;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pUVar13 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar13 != (UnityEngine_MonoBehaviour_o *)0x0) goto label_0436b3c3;
label_0436b3e3:
      unaff_R14 = (UnityEngine_MonoBehaviour_o *)0x0;
      iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      pUVar13 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar13 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_0436b3e3;
label_0436b3c3:
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((pUVar13->klass->_2).naturalAligment < bVar1) goto label_0436b3e3;
      unaff_R14 = (UnityEngine_MonoBehaviour_o *)0x0;
      if ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
        unaff_R14 = pUVar13;
      }
      iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBP = &TypeInfo_Object;
    pIVar18 = (Il2CppClass *)0x0;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') goto label_0436b620;
    __this_02 = *(UI_GlobalSkinEditPopup_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_02 == (UI_GlobalSkinEditPopup_o *)0x0) goto label_0436b69d;
    bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    pIVar18 = TypeInfo_CharacterEditorGameManager;
    if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
       ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorGameManager)) {
      pIVar18 = (Il2CppClass *)(__this_02->fields)._popups;
      if (pIVar18 == (Il2CppClass *)0x0) {
label_0436b48c:
        unaff_R15 = (Il2CppClass *)0x0;
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        pUVar4 = (pIVar18->_1).image;
        if ((pUVar4->_2).naturalAligment < *(byte *)(TypeInfo_DummyHuman + 0x130)) goto label_0436b48c;
        unaff_R15 = (Il2CppClass *)0x0;
        if ((pUVar4->_2).typeHierarchy[(ulong)*(byte *)(TypeInfo_DummyHuman + 0x130) - 1] ==
            (Il2CppClass *)TypeInfo_DummyHuman) {
          unaff_R15 = pIVar18;
        }
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar18 = (Il2CppClass *)0x0;
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
label_0436b620:
        (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
        return;
      }
      uVar12 = UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview((MethodInfo *)0x0);
      unaff_R12 = (ulong)uVar12;
      __this_02 = (UI_GlobalSkinEditPopup_o *)0x0;
      uVar12 = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
      unaff_RBP = (long *)(ulong)uVar12;
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if ((((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) &&
          (__this_02 = *(UI_GlobalSkinEditPopup_o **)(lVar5 + 0x60),
          __this_02 != (UI_GlobalSkinEditPopup_o *)0x0)) && (*(long *)(lVar5 + 0x58) != 0)) {
        uStack_38 = CONCAT17(*(undefined1 *)((long)&(__this_02->fields).m_CachedPtr + 1),
                             CONCAT16(*(undefined1 *)(*(long *)(lVar5 + 0x58) + 0x11),(undefined6)uStack_38));
        unaff_R13 = &MethodInfo_Void_set_Value;
        pIVar18 = (Il2CppClass *)(unaff_R12 & 0xff);
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this_02,(bool_conflict)pIVar18,MethodInfo_Void_set_Value);
        lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
        if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) &&
           (__this_02 = *(UI_GlobalSkinEditPopup_o **)(lVar5 + 0x58),
           __this_02 != (UI_GlobalSkinEditPopup_o *)0x0)) {
          pIVar18 = (Il2CppClass *)(ulong)(byte)uVar12;
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)__this_02,uVar12 & 0xff,MethodInfo_Void_set_Value);
          if (unaff_R15 != (Il2CppClass *)0x0) {
            __this_01 = *(Characters_HumanSetup_o **)&(unaff_R15->_1).this_arg.bits;
            __this_02 = (UI_GlobalSkinEditPopup_o *)0x0;
            if (__this_01 != (Characters_HumanSetup_o *)0x0) {
              Characters_HumanSetup__Load
                        (__this_01,(__this_01->fields).CustomSet,(__this_01->fields).Weapon,0,
                         (MethodInfo *)0x0);
              if (g_data_057ae1e5 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinAndRestoreSettings_d__27);
                g_data_057ae1e5 = '\x01';
              }
              unaff_RBP = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinAndRestoreSettings_d__27);
              pIVar18 = (Il2CppClass *)0x0;
              __this_02 = (UI_GlobalSkinEditPopup_o *)unaff_RBP;
              System_Object___ctor((Il2CppObject *)unaff_RBP,(MethodInfo *)0x0);
              *(bool_conflict *)&(((UI_GlobalSkinEditPopup_o *)unaff_RBP)->fields).m_CachedPtr = 0;
              if ((UI_GlobalSkinEditPopup_o *)unaff_RBP != (UI_GlobalSkinEditPopup_o *)0x0) {
                __this_02 = (UI_GlobalSkinEditPopup_o *)
                            &(((UI_GlobalSkinEditPopup_o *)unaff_RBP)->fields).SinglePanel;
                (((UI_GlobalSkinEditPopup_o *)unaff_RBP)->fields).SinglePanel =
                     (UnityEngine_Transform_o *)unaff_R15;
                pIVar18 = unaff_R15;
                il2cpp_runtime_helper_022b4080();
                *(undefined1 *)&(((UI_GlobalSkinEditPopup_o *)unaff_RBP)->fields).DoublePanelLeft =
                     uStack_38._7_1_;
                *(undefined1 *)((long)&(((UI_GlobalSkinEditPopup_o *)unaff_RBP)->fields).DoublePanelLeft + 1)
                     = uStack_38._6_1_;
                if (unaff_R14 != (UnityEngine_MonoBehaviour_o *)0x0) {
                  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                            (unaff_R14,(System_Collections_IEnumerator_o *)unaff_RBP,(MethodInfo *)0x0);
                  goto label_0436b620;
                }
              }
            }
          }
        }
      }
      goto label_0436b69d;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  unaff_RBX = __this;
  __this = __this_02;
UI_GlobalSkinEditPopup__OnClearClick:
  *(long **)((long)register0x00000020 + -8) = unaff_RBP;
  *(Il2CppClass **)((long)register0x00000020 + -0x10) = unaff_R15;
  *(UnityEngine_MonoBehaviour_o **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(MethodInfo_2A23E90 ***)((long)register0x00000020 + -0x20) = unaff_R13;
  *(ulong *)((long)register0x00000020 + -0x28) = unaff_R12;
  *(UI_GlobalSkinEditPopup_o **)((long)register0x00000020 + -0x30) = unaff_RBX;
  if (g_data_057ae1e3 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b6d6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponentsInChildren_InputSetting);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b6e2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b6ee;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b6fa;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b706;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b712;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b71e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b72a;
    il2cpp_runtime_helper_023445d0(&"UniqueId");
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b736;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b742;
    il2cpp_runtime_helper_023445d0(&"Preset");
    g_data_057ae1e3 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
  if ((char)(__this->fields)._hasBackup == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b76f;
    UI_GlobalSkinEditPopup__CreateBackup(__this,(MethodInfo *)pIVar18);
  }
  pSVar6 = (__this->fields)._currentGlobalSet;
  if (pSVar6 == (Settings_HumanCustomSkinSet_o *)0x0) goto label_0436b8da;
  *(UI_GlobalSkinEditPopup_o **)((long)register0x00000020 + -0x60) = __this;
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar6->fields).TypedSettings;
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0436b8da;
  *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b7a5;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
             ((long)register0x00000020 + -0x58),pSVar3,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
  *(undefined8 *)((long)register0x00000020 + -0x68) = *(undefined8 *)((long)register0x00000020 + -0x38);
  *(undefined8 *)((long)register0x00000020 + -0x78) = *(undefined8 *)((long)register0x00000020 + -0x48);
  *(undefined8 *)((long)register0x00000020 + -0x70) = *(undefined8 *)((long)register0x00000020 + -0x40);
  *(undefined8 *)((long)register0x00000020 + -0x88) = *(undefined8 *)((long)register0x00000020 + -0x58);
  *(undefined8 *)((long)register0x00000020 + -0x80) = *(undefined8 *)((long)register0x00000020 + -0x50);
  while( true ) {
    do {
      do {
        do {
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b7ec;
          bVar11 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                             ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
                              *(System_Collections_Generic_Dictionary_Enumerator_object__object__Fields *)
                               ((long)register0x00000020 + -0x88),
                              (MethodInfo_3251160 *)((long)register0x00000020 + -0x88));
          if ((char)bVar11 == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b877;
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
                       *(System_Collections_Generic_Dictionary_Enumerator_object__object__Fields *)
                        ((long)register0x00000020 + -0x88),
                       (MethodInfo_3251280 *)((long)register0x00000020 + -0x88));
            goto label_0436b877;
          }
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b7fc;
          auVar19 = il2cpp_runtime_helper_03343020((undefined1 *)((long)register0x00000020 + -0x88),MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
          plVar15 = auVar19._8_8_;
          a = auVar19._0_8_;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b80f;
          bVar11 = System_String__op_Equality(a,"Name",(MethodInfo *)0x0);
        } while ((char)bVar11 != '\0');
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b827;
        bVar11 = System_String__op_Equality(a,"Preset",(MethodInfo *)0x0);
      } while ((char)bVar11 != '\0');
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b83f;
      bVar11 = System_String__op_Equality(a,"UniqueId",(MethodInfo *)0x0);
    } while ((char)bVar11 != '\0');
    if (plVar15 == (long *)0x0) break;
    uVar7 = *(undefined8 *)(*plVar15 + 0x180);
    pcVar8 = *(code **)(*plVar15 + 0x178);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b860;
    (*pcVar8)(plVar15,uVar7);
  }
  do {
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b8e9;
    auVar20 = il2cpp_runtime_helper_022b2c90();
    if (auVar20._8_4_ != 1) {
label_0436b960:
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b979;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
                 *(System_Collections_Generic_Dictionary_Enumerator_object__object__Fields *)
                  ((long)register0x00000020 + -0x88),(MethodInfo_3251280 *)((long)register0x00000020 + -0x88))
      ;
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b986;
      _Unwind_Resume(auVar20._0_8_);
    }
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b935;
    plVar15 = (long *)__cxa_begin_catch(auVar20._0_8_);
    lVar5 = *plVar15;
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b93d;
    __cxa_end_catch();
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b94f;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
               *(System_Collections_Generic_Dictionary_Enumerator_object__object__Fields *)
                ((long)register0x00000020 + -0x88),(MethodInfo_3251280 *)((long)register0x00000020 + -0x88));
    if (lVar5 != 0) {
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b960;
      il2cpp_runtime_helper_022fefe0(lVar5);
      goto label_0436b960;
    }
label_0436b877:
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b88b;
    pSVar14 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                        (*(UnityEngine_Component_o **)((long)register0x00000020 + -0x60),MethodInfo_InputSettingElement_GetComponentsInChildren_InputSetting);
    if (pSVar14 == (System_Object_array *)0x0) {
label_0436b8da:
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b8df;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      uVar12 = (uint)pSVar14->max_length;
      if ((int)uVar12 < 1) {
        return;
      }
      uVar16 = 0;
      while (uVar16 < uVar12) {
        pIVar9 = pSVar14->m_Items[(int)uVar16];
        if (pIVar9 == (Il2CppObject *)0x0) goto label_0436b8da;
        pMVar17 = pIVar9->klass->vtable[6].method;
        pIVar10 = pIVar9->klass->vtable[6].methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b8c1;
        (*pIVar10)(pIVar9,pMVar17);
        uVar16 = uVar16 + 1;
        uVar12 = (uint)pSVar14->max_length;
        if ((int)uVar12 <= (int)uVar16) {
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x436b8e4;
    il2cpp_runtime_helper_022b2ca0();
  } while( true );
}


// UI.GlobalSkinEditPopup$$CreateBackup
// il2cpp: void UI_GlobalSkinEditPopup__CreateBackup (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436b9a0

void UI_GlobalSkinEditPopup__CreateBackup(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  Settings_HumanCustomSkinSet_o *pSVar4;
  long lVar5;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  bool_conflict bVar6;
  int32_t iVar7;
  System_String_o *a;
  long *plVar8;
  Settings_BaseSetting_o *unaff_R12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined8 in_stack_ffffffffffffff68;
  UI_GlobalSkinEditPopup_o *in_stack_ffffffffffffff70;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar11;
  Il2CppRGCTXData *pIVar12;
  _union_231609 _Var13;
  undefined1 local_58 [16];
  _union_231609 local_48;
  
  if (g_data_057ae1e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&"UniqueId");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Preset");
    g_data_057ae1e1 = '\x01';
  }
  _Var13.genericMethod = (Il2CppObject *)0x0;
  pSVar11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar12 = (Il2CppRGCTXData *)0x0;
  if ((__this->fields)._currentGlobalSet == (Settings_HumanCustomSkinSet_o *)0x0) {
    return;
  }
  if ((char)(__this->fields)._hasBackup != '\0') {
    return;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear(pSVar2,MethodInfo_Void_Clear);
    pSVar3 = (__this->fields)._backupFloatValues;
    if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,MethodInfo_Void_Clear);
      pSVar4 = (__this->fields)._currentGlobalSet;
      if ((pSVar4 != (Settings_HumanCustomSkinSet_o *)0x0) &&
         (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar4->fields).TypedSettings,
         in_stack_ffffffffffffff70 = __this,
         pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,pSVar2,
                   MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
        pSVar11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
        pIVar12 = (Il2CppRGCTXData *)local_58._8_8_;
        _Var13 = local_48;
        while (__this_00.fields._8_8_ = __this,
              __this_00.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68,
              __this_00.fields._current.fields.key = (Il2CppObject *)pSVar11,
              __this_00.fields._current.fields.value = (Il2CppObject *)pIVar12,
              __this_00.fields._32_8_ = _Var13.genericMethod,
              bVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                (__this_00,(MethodInfo_3251160 *)&stack0xffffffffffffff78),
              (char)bVar6 != '\0') {
          auVar9 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
          unaff_R12 = auVar9._8_8_;
          a = auVar9._0_8_;
          bVar6 = System_String__op_Equality(a,"Name",(MethodInfo *)0x0);
          if ((((char)bVar6 == '\0') &&
              (bVar6 = System_String__op_Equality(a,"Preset",(MethodInfo *)0x0), (char)bVar6 == '\0')) &&
             (bVar6 = System_String__op_Equality(a,"UniqueId",(MethodInfo *)0x0), (char)bVar6 == '\0')) {
            iVar7 = Settings_SettingsUtil__GetSettingType(unaff_R12,(MethodInfo *)0x0);
            if (iVar7 == 3) {
              if (unaff_R12 == (Settings_BaseSetting_o *)0x0) goto label_0436bcef;
              bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
              if (((unaff_R12->klass->_2).naturalAligment < bVar1) ||
                 ((unaff_R12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) goto label_0436bcf4;
              pSVar3 = (__this->fields)._backupFloatValues;
              if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_0436bcfc;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,(Il2CppObject *)a,
                         *(float *)((long)&unaff_R12[1].klass + 4),MethodInfo_Void_set_Item);
            }
            else if (iVar7 == 4) {
              if (unaff_R12 == (Settings_BaseSetting_o *)0x0) goto label_0436bd01;
              bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
              if (((unaff_R12->klass->_2).naturalAligment < bVar1) ||
                 ((unaff_R12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) goto label_0436bd0b;
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._backupValues;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0436bd06;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (pSVar2,(Il2CppObject *)a,unaff_R12[1].monitor,MethodInfo_Void_set_Item);
            }
          }
        }
        __this_01.fields._8_8_ = __this;
        __this_01.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
        __this_01.fields._current.fields.key = (Il2CppObject *)pSVar11;
        __this_01.fields._current.fields.value = (Il2CppObject *)pIVar12;
        __this_01.fields._32_8_ = _Var13.genericMethod;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_01,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
        goto label_0436bccf;
      }
    }
  }
  __this = in_stack_ffffffffffffff70;
  il2cpp_runtime_helper_022b2c90();
label_0436bcef:
  il2cpp_runtime_helper_022b2c90();
label_0436bcf4:
  il2cpp_runtime_helper_022b2fd0(unaff_R12);
label_0436bcfc:
  il2cpp_runtime_helper_022b2c90();
label_0436bd01:
  il2cpp_runtime_helper_022b2c90();
label_0436bd06:
  il2cpp_runtime_helper_022b2c90();
label_0436bd0b:
  auVar10 = il2cpp_runtime_helper_022b2fd0(unaff_R12);
  if (auVar10._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar5 = *plVar8;
    __cxa_end_catch();
    __this_02.fields._8_8_ = __this;
    __this_02.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
    __this_02.fields._current.fields.key = (Il2CppObject *)pSVar11;
    __this_02.fields._current.fields.value = (Il2CppObject *)pIVar12;
    __this_02.fields._32_8_ = _Var13.genericMethod;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
    if (lVar5 == 0) {
label_0436bccf:
      *(undefined1 *)&(__this->fields)._hasBackup = 1;
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_03.fields._8_8_ = __this;
  __this_03.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
  __this_03.fields._current.fields.key = (Il2CppObject *)pSVar11;
  __this_03.fields._current.fields.value = (Il2CppObject *)pIVar12;
  __this_03.fields._32_8_ = _Var13.genericMethod;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar10._0_8_);
}


// UI.GlobalSkinEditPopup$$RestoreBackup
// il2cpp: void UI_GlobalSkinEditPopup__RestoreBackup (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436be10

void UI_GlobalSkinEditPopup__RestoreBackup(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSkinSet_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__float__o *pSVar4;
  long lVar5;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  bool_conflict bVar6;
  int32_t iVar7;
  System_String_o *a;
  Il2CppObject *value;
  long *plVar8;
  Settings_TypedSetting_T__o *__this_04;
  float value_00;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined8 in_stack_ffffffffffffff68;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar11;
  Il2CppRGCTXData *pIVar12;
  _union_231609 _Var13;
  undefined1 local_58 [16];
  _union_231609 local_48;
  
  if (g_data_057ae1e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"UniqueId");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Preset");
    g_data_057ae1e2 = '\x01';
  }
  _Var13.genericMethod = (Il2CppObject *)0x0;
  pSVar11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar12 = (Il2CppRGCTXData *)0x0;
  pSVar2 = (__this->fields)._currentGlobalSet;
  if ((pSVar2 != (Settings_HumanCustomSkinSet_o *)0x0) && ((char)(__this->fields)._hasBackup != '\0')) {
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0436c1bd:
      auVar10 = il2cpp_runtime_helper_022b2c90();
      if (auVar10._8_4_ == 1) {
        plVar8 = (long *)__cxa_begin_catch(auVar10._0_8_);
        lVar5 = *plVar8;
        __cxa_end_catch();
        __this_02.fields._8_8_ = __this;
        __this_02.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
        __this_02.fields._current.fields.key = (Il2CppObject *)pSVar11;
        __this_02.fields._current.fields.value = (Il2CppObject *)pIVar12;
        __this_02.fields._32_8_ = _Var13.genericMethod;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
        if (lVar5 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar5);
      }
      __this_03.fields._8_8_ = __this;
      __this_03.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
      __this_03.fields._current.fields.key = (Il2CppObject *)pSVar11;
      __this_03.fields._current.fields.value = (Il2CppObject *)pIVar12;
      __this_03.fields._32_8_ = _Var13.genericMethod;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
      _Unwind_Resume(auVar10._0_8_);
    }
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,pSVar3,
               MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
    pSVar11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
    pIVar12 = (Il2CppRGCTXData *)local_58._8_8_;
    _Var13 = local_48;
label_0436bfa0:
    __this_00.fields._8_8_ = __this;
    __this_00.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
    __this_00.fields._current.fields.key = (Il2CppObject *)pSVar11;
    __this_00.fields._current.fields.value = (Il2CppObject *)pIVar12;
    __this_00.fields._32_8_ = _Var13.genericMethod;
    bVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      (__this_00,(MethodInfo_3251160 *)&stack0xffffffffffffff78);
    if ((char)bVar6 != '\0') {
      auVar9 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
      __this_04 = auVar9._8_8_;
      a = auVar9._0_8_;
      bVar6 = System_String__op_Equality(a,"Name",(MethodInfo *)0x0);
      if ((((char)bVar6 == '\0') &&
          (bVar6 = System_String__op_Equality(a,"Preset",(MethodInfo *)0x0), (char)bVar6 == '\0')) &&
         (bVar6 = System_String__op_Equality(a,"UniqueId",(MethodInfo *)0x0), (char)bVar6 == '\0')) {
        iVar7 = Settings_SettingsUtil__GetSettingType((Settings_BaseSetting_o *)__this_04,(MethodInfo *)0x0);
        if (iVar7 == 3) {
          pSVar4 = (__this->fields)._backupFloatValues;
          if (pSVar4 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_0436c1a1;
          bVar6 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,(Il2CppObject *)a
                             ,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar6 == '\0') goto label_0436bfa0;
          pSVar4 = (__this->fields)._backupFloatValues;
          if (pSVar4 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_0436c1a6;
          value_00 = System_Collections_Generic_Dictionary_object__float___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                                (Il2CppObject *)a,MethodInfo_Single_get_Item);
          if (__this_04 == (Settings_TypedSetting_T__o *)0x0) goto label_0436c1ab;
          bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
          if ((bVar1 <= (__this_04->klass->_2).naturalAligment) &&
             ((__this_04->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_FloatSetting)) {
            Settings_TypedSetting_float___set_Value
                      ((Settings_TypedSetting_float__o *)__this_04,value_00,MethodInfo_Void_set_Value);
            goto label_0436bfa0;
          }
label_0436c1b0:
          il2cpp_runtime_helper_022b2fd0(__this_04);
        }
        else {
          if (iVar7 != 4) goto label_0436bfa0;
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
          if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                              (pSVar3,(Il2CppObject *)a,MethodInfo_Boolean_ContainsKey);
            if ((char)bVar6 != '\0') {
              pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._backupValues;
              if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
label_0436c194:
                il2cpp_runtime_helper_022b2c90();
              }
              else {
                value = System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar3,(Il2CppObject *)a,MethodInfo_String_get_Item);
                if (__this_04 == (Settings_TypedSetting_T__o *)0x0) goto label_0436c194;
                bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
                if ((bVar1 <= (__this_04->klass->_2).naturalAligment) &&
                   ((__this_04->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
                  Settings_TypedSetting_object___set_Value(__this_04,value,MethodInfo_Void_set_Value);
                  goto label_0436bfa0;
                }
              }
              il2cpp_runtime_helper_022b2fd0(__this_04);
label_0436c1a1:
              il2cpp_runtime_helper_022b2c90();
label_0436c1a6:
              il2cpp_runtime_helper_022b2c90();
label_0436c1ab:
              il2cpp_runtime_helper_022b2c90();
              goto label_0436c1b0;
            }
            goto label_0436bfa0;
          }
        }
        il2cpp_runtime_helper_022b2c90();
        goto label_0436c1bd;
      }
      goto label_0436bfa0;
    }
    __this_01.fields._8_8_ = __this;
    __this_01.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
    __this_01.fields._current.fields.key = (Il2CppObject *)pSVar11;
    __this_01.fields._current.fields.value = (Il2CppObject *)pIVar12;
    __this_01.fields._32_8_ = _Var13.genericMethod;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_01,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
  }
  return;
}


// UI.GlobalSkinEditPopup$$OnCancelClick
// il2cpp: void UI_GlobalSkinEditPopup__OnCancelClick (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x4363560

void UI_GlobalSkinEditPopup__OnCancelClick(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if ((char)(__this->fields)._hasBackup != '\0') {
    UI_GlobalSkinEditPopup__RestoreBackup(__this,method);
    in_RDX = extraout_RDX;
  }
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtableDispatch);
  return;
}


// UI.GlobalSkinEditPopup$$OnClearClick
// il2cpp: void UI_GlobalSkinEditPopup__OnClearClick (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436b6b0

void UI_GlobalSkinEditPopup__OnClearClick(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSkinSet_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  bool_conflict bVar4;
  uint uVar5;
  System_String_o *a;
  System_Object_array *pSVar6;
  long *plVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar11;
  Il2CppRGCTXData *pIVar12;
  _union_231609 _Var13;
  Il2CppObject *pIVar14;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar15;
  UI_GlobalSkinEditPopup_o *pUStack_60;
  undefined1 auStack_58 [16];
  _union_231609 _Stack_48;
  Il2CppObject *pIStack_40;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSStack_38;
  
  if (g_data_057ae1e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponentsInChildren_InputSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&"UniqueId");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Preset");
    g_data_057ae1e3 = '\x01';
  }
  _Var13.genericMethod = (InvokerMethod)0x0;
  pIVar14 = (Il2CppObject *)0x0;
  pSVar11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar12 = (Il2CppRGCTXData *)0x0;
  pSVar15 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  if ((char)(__this->fields)._hasBackup == '\0') {
    UI_GlobalSkinEditPopup__CreateBackup(__this,method);
  }
  pSVar1 = (__this->fields)._currentGlobalSet;
  if (pSVar1 == (Settings_HumanCustomSkinSet_o *)0x0) goto label_0436b8da;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar1->fields).TypedSettings;
  pUStack_60 = __this;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0436b8da;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,__this_00,
             MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
  pSVar11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_58._0_8_;
  pIVar12 = (Il2CppRGCTXData *)auStack_58._8_8_;
  _Var13 = _Stack_48;
  pIVar14 = pIStack_40;
  pSVar15 = pSStack_38;
  while( true ) {
    do {
      __this_01.fields._8_8_ = pIVar12;
      __this_01.fields._dictionary = pSVar11;
      __this_01.fields._current.fields.key = _Var13.genericMethod;
      __this_01.fields._current.fields.value = pIVar14;
      __this_01.fields._32_8_ = pSVar15;
      bVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251160 *)&stack0xffffffffffffff78);
      if ((char)bVar4 == '\0') {
        __this_02.fields._8_8_ = pIVar12;
        __this_02.fields._dictionary = pSVar11;
        __this_02.fields._current.fields.key = _Var13.genericMethod;
        __this_02.fields._current.fields.value = pIVar14;
        __this_02.fields._32_8_ = pSVar15;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
        goto label_0436b877;
      }
      auVar9 = il2cpp_runtime_helper_03343020(&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
      plVar7 = auVar9._8_8_;
      a = auVar9._0_8_;
      bVar4 = System_String__op_Equality(a,"Name",(MethodInfo *)0x0);
    } while ((((char)bVar4 != '\0') ||
             (bVar4 = System_String__op_Equality(a,"Preset",(MethodInfo *)0x0), (char)bVar4 != '\0')) ||
            (bVar4 = System_String__op_Equality(a,"UniqueId",(MethodInfo *)0x0), (char)bVar4 != '\0'));
    if (plVar7 == (long *)0x0) break;
    (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
  }
  do {
    auVar10 = il2cpp_runtime_helper_022b2c90();
    if (auVar10._8_4_ != 1) {
label_0436b960:
      __this_04.fields._8_8_ = pIVar12;
      __this_04.fields._dictionary = pSVar11;
      __this_04.fields._current.fields.key = _Var13.genericMethod;
      __this_04.fields._current.fields.value = pIVar14;
      __this_04.fields._32_8_ = pSVar15;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
      _Unwind_Resume(auVar10._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar3 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar12;
    __this_03.fields._dictionary = pSVar11;
    __this_03.fields._current.fields.key = _Var13.genericMethod;
    __this_03.fields._current.fields.value = pIVar14;
    __this_03.fields._32_8_ = pSVar15;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_0436b960;
    }
label_0436b877:
    pSVar6 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                       ((UnityEngine_Component_o *)pUStack_60,MethodInfo_InputSettingElement_GetComponentsInChildren_InputSetting);
    if (pSVar6 == (System_Object_array *)0x0) {
label_0436b8da:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      uVar5 = (uint)pSVar6->max_length;
      if ((int)uVar5 < 1) {
        return;
      }
      uVar8 = 0;
      while (uVar8 < uVar5) {
        pIVar2 = pSVar6->m_Items[(int)uVar8];
        if (pIVar2 == (Il2CppObject *)0x0) goto label_0436b8da;
        (*pIVar2->klass->vtable[6].methodPtr)(pIVar2,pIVar2->klass->vtable[6].method);
        uVar8 = uVar8 + 1;
        uVar5 = (uint)pSVar6->max_length;
        if ((int)uVar5 <= (int)uVar8) {
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  } while( true );
}


// UI.GlobalSkinEditPopup$$OnSaveClick
// il2cpp: void UI_GlobalSkinEditPopup__OnSaveClick (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436b280

void UI_GlobalSkinEditPopup__OnSaveClick(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  Il2CppClass *pIVar4;
  UnityEngine_Object_c *pUVar5;
  long lVar6;
  Characters_HumanSetup_o *__this_01;
  Settings_HumanCustomSkinSet_o *pSVar7;
  Il2CppObject *pIVar8;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_05;
  bool_conflict bVar9;
  uint uVar10;
  undefined8 in_RAX;
  UnityEngine_MonoBehaviour_o *pUVar11;
  System_String_o *a;
  System_Object_array *pSVar12;
  long *plVar13;
  uint uVar14;
  long *unaff_RBP;
  UI_GlobalSkinEditPopup_o *__this_06;
  ulong unaff_R12;
  MethodInfo_2A23E90 **unaff_R13;
  UnityEngine_MonoBehaviour_o *unaff_R14;
  Il2CppClass *unaff_R15;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar17;
  Il2CppRGCTXData *pIVar18;
  _union_231609 _Var19;
  Il2CppObject *pIVar20;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar21;
  UI_GlobalSkinEditPopup_o *pUStack_98;
  undefined1 auStack_90 [16];
  _union_231609 _Stack_80;
  Il2CppObject *pIStack_78;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSStack_70;
  UI_GlobalSkinEditPopup_o *pUStack_68;
  ulong uStack_60;
  MethodInfo_2A23E90 **ppMStack_58;
  UnityEngine_MonoBehaviour_o *pUStack_50;
  Il2CppClass *pIStack_48;
  UI_GlobalSkinEditPopup_o *pUStack_40;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (g_data_057ae1e4 == '\0') {
    pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b2a7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b2b3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b2bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b2cb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b2d7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b2e3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b2ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b2fb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b307;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b313;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b31f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae1e4 = '\x01';
  }
  if ((__this->fields)._currentGlobalSet == (Settings_HumanCustomSkinSet_o *)0x0) {
    return;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
  __this_06 = (UI_GlobalSkinEditPopup_o *)0x0;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b34f;
    method = (MethodInfo *)MethodInfo_Void_Clear;
    System_Collections_Generic_Dictionary_object__object___Clear(pSVar3,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear);
    __this_00 = (__this->fields)._backupFloatValues;
    __this_06 = (UI_GlobalSkinEditPopup_o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b36e;
      System_Collections_Generic_Dictionary_object__float___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Void_Clear);
      *(undefined1 *)&(__this->fields)._hasBackup = 0;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b3af;
        il2cpp_runtime_helper_02337ed0();
        pUVar11 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (pUVar11 != (UnityEngine_MonoBehaviour_o *)0x0) goto label_0436b3c3;
label_0436b3e3:
        unaff_R14 = (UnityEngine_MonoBehaviour_o *)0x0;
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        pUVar11 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (pUVar11 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_0436b3e3;
label_0436b3c3:
        bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
        if ((pUVar11->klass->_2).naturalAligment < bVar1) goto label_0436b3e3;
        unaff_R14 = (UnityEngine_MonoBehaviour_o *)0x0;
        if ((pUVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
          unaff_R14 = pUVar11;
        }
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
      }
      if (iVar2 == 0) {
        pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b3ff;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBP = &TypeInfo_Object;
      method = (MethodInfo *)0x0;
      pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b40b;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') goto label_0436b620;
      __this_06 = *(UI_GlobalSkinEditPopup_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (__this_06 == (UI_GlobalSkinEditPopup_o *)0x0) goto label_0436b69d;
      bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
      method = (MethodInfo *)TypeInfo_CharacterEditorGameManager;
      if (((__this_06->klass->_2).naturalAligment < bVar1) ||
         ((__this_06->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager)) goto label_0436b6a2;
      pIVar4 = (Il2CppClass *)(__this_06->fields)._popups;
      if (pIVar4 == (Il2CppClass *)0x0) {
label_0436b48c:
        unaff_R15 = (Il2CppClass *)0x0;
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        pUVar5 = (pIVar4->_1).image;
        if ((pUVar5->_2).naturalAligment < *(byte *)(TypeInfo_DummyHuman + 0x130)) goto label_0436b48c;
        unaff_R15 = (Il2CppClass *)0x0;
        if ((pUVar5->_2).typeHierarchy[(ulong)*(byte *)(TypeInfo_DummyHuman + 0x130) - 1] ==
            (Il2CppClass *)TypeInfo_DummyHuman) {
          unaff_R15 = pIVar4;
        }
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
      }
      if (iVar2 == 0) {
        pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b4a1;
        il2cpp_runtime_helper_02337ed0();
      }
      method = (MethodInfo *)0x0;
      pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b4ad;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
label_0436b620:
        (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
        return;
      }
      pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b4bc;
      uVar10 = UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview((MethodInfo *)0x0);
      unaff_R12 = (ulong)uVar10;
      __this_06 = (UI_GlobalSkinEditPopup_o *)0x0;
      pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b4c6;
      uVar10 = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
      unaff_RBP = (long *)(ulong)uVar10;
      lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if ((((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) &&
          (__this_06 = *(UI_GlobalSkinEditPopup_o **)(lVar6 + 0x60),
          __this_06 != (UI_GlobalSkinEditPopup_o *)0x0)) && (*(long *)(lVar6 + 0x58) != 0)) {
        uStack_38 = CONCAT17(*(undefined1 *)((long)&(__this_06->fields).m_CachedPtr + 1),
                             CONCAT16(*(undefined1 *)(*(long *)(lVar6 + 0x58) + 0x11),(undefined6)uStack_38));
        unaff_R13 = &MethodInfo_Void_set_Value;
        method = (MethodInfo *)(unaff_R12 & 0xff);
        pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b52f;
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this_06,(bool_conflict)method,MethodInfo_Void_set_Value);
        lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
        if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) &&
           (__this_06 = *(UI_GlobalSkinEditPopup_o **)(lVar6 + 0x58),
           __this_06 != (UI_GlobalSkinEditPopup_o *)0x0)) {
          method = (MethodInfo *)(ulong)(byte)uVar10;
          pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b574;
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)__this_06,uVar10 & 0xff,MethodInfo_Void_set_Value);
          if (unaff_R15 != (Il2CppClass *)0x0) {
            __this_01 = *(Characters_HumanSetup_o **)&(unaff_R15->_1).this_arg.bits;
            __this_06 = (UI_GlobalSkinEditPopup_o *)0x0;
            if (__this_01 != (Characters_HumanSetup_o *)0x0) {
              pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b5a1;
              Characters_HumanSetup__Load
                        (__this_01,(__this_01->fields).CustomSet,(__this_01->fields).Weapon,0,
                         (MethodInfo *)0x0);
              if (g_data_057ae1e5 == '\0') {
                pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b5b6;
                il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinAndRestoreSettings_d__27);
                g_data_057ae1e5 = '\x01';
              }
              pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b5cc;
              unaff_RBP = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinAndRestoreSettings_d__27);
              method = (MethodInfo *)0x0;
              pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b5d9;
              __this_06 = (UI_GlobalSkinEditPopup_o *)unaff_RBP;
              System_Object___ctor((Il2CppObject *)unaff_RBP,(MethodInfo *)0x0);
              *(bool_conflict *)&(((UI_GlobalSkinEditPopup_o *)unaff_RBP)->fields).m_CachedPtr = 0;
              if ((UI_GlobalSkinEditPopup_o *)unaff_RBP != (UI_GlobalSkinEditPopup_o *)0x0) {
                __this_06 = (UI_GlobalSkinEditPopup_o *)
                            &(((UI_GlobalSkinEditPopup_o *)unaff_RBP)->fields).SinglePanel;
                (((UI_GlobalSkinEditPopup_o *)unaff_RBP)->fields).SinglePanel =
                     (UnityEngine_Transform_o *)unaff_R15;
                pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b5fc;
                method = (MethodInfo *)unaff_R15;
                il2cpp_runtime_helper_022b4080();
                *(undefined1 *)&(((UI_GlobalSkinEditPopup_o *)unaff_RBP)->fields).DoublePanelLeft =
                     uStack_38._7_1_;
                *(undefined1 *)((long)&(((UI_GlobalSkinEditPopup_o *)unaff_RBP)->fields).DoublePanelLeft + 1)
                     = uStack_38._6_1_;
                if (unaff_R14 != (UnityEngine_MonoBehaviour_o *)0x0) {
                  pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b620;
                  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                            (unaff_R14,(System_Collections_IEnumerator_o *)unaff_RBP,(MethodInfo *)0x0);
                  goto label_0436b620;
                }
              }
            }
          }
        }
      }
    }
  }
label_0436b69d:
  pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b6a2;
  il2cpp_runtime_helper_022b2c90();
label_0436b6a2:
  pUStack_40 = (UI_GlobalSkinEditPopup_o *)0x436b6a7;
  il2cpp_runtime_helper_022b2fd0();
  pUStack_68 = __this;
  uStack_60 = unaff_R12;
  ppMStack_58 = unaff_R13;
  pUStack_50 = unaff_R14;
  pIStack_48 = unaff_R15;
  pUStack_40 = (UI_GlobalSkinEditPopup_o *)unaff_RBP;
  if (g_data_057ae1e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponentsInChildren_InputSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&"UniqueId");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Preset");
    g_data_057ae1e3 = '\x01';
  }
  _Var19.genericMethod = (InvokerMethod)0x0;
  pIVar20 = (Il2CppObject *)0x0;
  pSVar17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar18 = (Il2CppRGCTXData *)0x0;
  pSVar21 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  if ((char)(__this_06->fields)._hasBackup == '\0') {
    UI_GlobalSkinEditPopup__CreateBackup(__this_06,method);
  }
  pSVar7 = (__this_06->fields)._currentGlobalSet;
  if (pSVar7 == (Settings_HumanCustomSkinSet_o *)0x0) goto label_0436b8da;
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar7->fields).TypedSettings;
  pUStack_98 = __this_06;
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0436b8da;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_90,pSVar3,
             MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
  pSVar17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_90._0_8_;
  pIVar18 = (Il2CppRGCTXData *)auStack_90._8_8_;
  _Var19 = _Stack_80;
  pIVar20 = pIStack_78;
  pSVar21 = pSStack_70;
  while( true ) {
    do {
      __this_02.fields._8_8_ = pIVar18;
      __this_02.fields._dictionary = pSVar17;
      __this_02.fields._current.fields.key = _Var19.genericMethod;
      __this_02.fields._current.fields.value = pIVar20;
      __this_02.fields._32_8_ = pSVar21;
      bVar9 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (__this_02,(MethodInfo_3251160 *)&stack0xffffffffffffff40);
      if ((char)bVar9 == '\0') {
        __this_03.fields._8_8_ = pIVar18;
        __this_03.fields._dictionary = pSVar17;
        __this_03.fields._current.fields.key = _Var19.genericMethod;
        __this_03.fields._current.fields.value = pIVar20;
        __this_03.fields._32_8_ = pSVar21;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff40);
        goto label_0436b877;
      }
      auVar15 = il2cpp_runtime_helper_03343020(&stack0xffffffffffffff40,MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
      plVar13 = auVar15._8_8_;
      a = auVar15._0_8_;
      bVar9 = System_String__op_Equality(a,"Name",(MethodInfo *)0x0);
    } while ((((char)bVar9 != '\0') ||
             (bVar9 = System_String__op_Equality(a,"Preset",(MethodInfo *)0x0), (char)bVar9 != '\0')) ||
            (bVar9 = System_String__op_Equality(a,"UniqueId",(MethodInfo *)0x0), (char)bVar9 != '\0'));
    if (plVar13 == (long *)0x0) break;
    (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
  }
  do {
    auVar16 = il2cpp_runtime_helper_022b2c90();
    if (auVar16._8_4_ != 1) {
label_0436b960:
      __this_05.fields._8_8_ = pIVar18;
      __this_05.fields._dictionary = pSVar17;
      __this_05.fields._current.fields.key = _Var19.genericMethod;
      __this_05.fields._current.fields.value = pIVar20;
      __this_05.fields._32_8_ = pSVar21;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_05,(MethodInfo_3251280 *)&stack0xffffffffffffff40);
      _Unwind_Resume(auVar16._0_8_);
    }
    plVar13 = (long *)__cxa_begin_catch(auVar16._0_8_);
    lVar6 = *plVar13;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar18;
    __this_04.fields._dictionary = pSVar17;
    __this_04.fields._current.fields.key = _Var19.genericMethod;
    __this_04.fields._current.fields.value = pIVar20;
    __this_04.fields._32_8_ = pSVar21;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff40);
    if (lVar6 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar6);
      goto label_0436b960;
    }
label_0436b877:
    pSVar12 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                        ((UnityEngine_Component_o *)pUStack_98,MethodInfo_InputSettingElement_GetComponentsInChildren_InputSetting);
    if (pSVar12 == (System_Object_array *)0x0) {
label_0436b8da:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      uVar10 = (uint)pSVar12->max_length;
      if ((int)uVar10 < 1) {
        return;
      }
      uVar14 = 0;
      while (uVar14 < uVar10) {
        pIVar8 = pSVar12->m_Items[(int)uVar14];
        if (pIVar8 == (Il2CppObject *)0x0) goto label_0436b8da;
        (*pIVar8->klass->vtable[6].methodPtr)(pIVar8,pIVar8->klass->vtable[6].method);
        uVar14 = uVar14 + 1;
        uVar10 = (uint)pSVar12->max_length;
        if ((int)uVar10 <= (int)uVar14) {
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  } while( true );
}


// UI.GlobalSkinEditPopup$$LoadSkinAndRestoreSettings
// il2cpp: System_Collections_IEnumerator_o* UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings (UI_GlobalSkinEditPopup_o* __this, Characters_DummyHuman_o* character, bool originalGlobal, bool originalCustom, const MethodInfo* method);
// 0x436c300

System_Collections_IEnumerator_o *
UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings
          (UI_GlobalSkinEditPopup_o *__this,Characters_DummyHuman_o *character,bool_conflict originalGlobal,
          bool_conflict originalCustom,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae1e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinAndRestoreSettings_d__27);
    g_data_057ae1e5 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinAndRestoreSettings_d__27);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)character;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,character);
    *(char *)&__this_00[2].monitor = (char)originalGlobal;
    *(char *)((long)&__this_00[2].monitor + 1) = (char)originalCustom;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// UI.GlobalSkinEditPopup$$Show
// il2cpp: void UI_GlobalSkinEditPopup__Show (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436c3b0

void UI_GlobalSkinEditPopup__Show(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_string__float__o *__this_02;
  System_Collections_IEnumerator_c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  Il2CppClass *pIVar10;
  char cVar11;
  Settings_HumanCustomSkinSet_o *pSVar12;
  UnityEngine_Transform_o *pUVar13;
  VirtualInvokeData *pVVar14;
  UnityEngine_Component_o *pUVar15;
  UnityEngine_Object_o *pUVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *unaff_RBP;
  MethodInfo *method_00;
  long lVar19;
  long lVar20;
  System_Collections_IEnumerator_o *unaff_R13;
  Il2CppClass **unaff_R14;
  int iVar21;
  undefined1 auVar22 [12];
  Il2CppClass **ppIStack_38;
  
  if (g_data_057ae1e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSkinSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Transform);
    g_data_057ae1e6 = '\x01';
  }
  lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  ppIStack_38 = unaff_R14;
  if ((lVar19 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar19 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar12 = (Settings_HumanCustomSkinSet_o *)
              Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    pIVar10 = TypeInfo_HumanCustomSkinSet;
    if (pSVar12 == (Settings_HumanCustomSkinSet_o *)0x0) {
      (__this->fields)._currentGlobalSet = (Settings_HumanCustomSkinSet_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_HumanCustomSkinSet->_2).naturalAligment;
      if (((((Settings_BaseSetSetting_c *)pSVar12->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSkinSet)
         ) goto label_0436cc61;
      (__this->fields)._currentGlobalSet = pSVar12;
      if (((((Settings_BaseSetSetting_c *)pSVar12->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar10))
      goto label_0436cc61;
    }
    il2cpp_runtime_helper_022b4080(&(__this->fields)._currentGlobalSet,pSVar12);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear(__this_01,MethodInfo_Void_Clear);
      __this_02 = (__this->fields)._backupFloatValues;
      if (__this_02 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        System_Collections_Generic_Dictionary_object__float___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,MethodInfo_Void_Clear);
        *(undefined1 *)&(__this->fields)._hasBackup = 0;
        pUVar13 = (__this->fields).DoublePanelLeft;
        if ((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
           (pUVar13 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
           pUVar13 != (UnityEngine_Transform_o *)0x0)) {
          unaff_R13 = UnityEngine_Transform__GetEnumerator(pUVar13,(MethodInfo *)0x0);
          if (unaff_R13 == (System_Collections_IEnumerator_o *)0x0) goto label_0436cc71;
          do {
            pSVar8 = unaff_R13->klass;
            uVar2._0_1_ = (pSVar8->_2).rank;
            uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar19 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IEnumerator) {
                  pVVar14 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar19);
                  goto label_0436c5f3;
                }
                lVar19 = lVar19 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar19);
            }
            pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_0436c5f3:
            cVar11 = (*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
            if (cVar11 == '\0') {
              unaff_RBP = (long *)0x0;
              plVar17 = (long *)il2cpp_runtime_helper_023051f0();
              if (plVar17 == (long *)0x0) goto label_0436c756;
              lVar19 = *plVar17;
              if ((ulong)*(ushort *)(lVar19 + 0x12e) == 0) goto label_0436c72f;
              lVar20 = 0;
              goto label_0436c720;
            }
            pSVar8 = unaff_R13->klass;
            uVar3._0_1_ = (pSVar8->_2).rank;
            uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar3 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar19 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IEnumerator) {
                  pVVar14 = pSVar8->vtable + (*(int *)((long)&pIVar9->offset + lVar19) + 1);
                  goto label_0436c678;
                }
                lVar19 = lVar19 + 0x10;
              } while ((ulong)uVar3 << 4 != lVar19);
            }
            pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,1);
label_0436c678:
            pUVar15 = (UnityEngine_Component_o *)(*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
            if (pUVar15 == (UnityEngine_Component_o *)0x0) goto label_0436cc4d;
            bVar1 = (TypeInfo_Transform->_2).naturalAligment;
            if (((pUVar15->klass->_2).naturalAligment < bVar1) ||
               ((pUVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Transform)) goto label_0436cc35;
            pUVar16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0)
            ;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__Destroy_4e01c60(pUVar16,(MethodInfo *)0x0);
          } while( true );
        }
      }
    }
  }
  goto label_0436cc5c;
  while (lVar20 = lVar20 + 0x10, (ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20) {
label_0436c720:
    if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
      puVar18 = (undefined8 *)(lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
      goto label_0436c74d;
    }
  }
label_0436c72f:
  puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar17,TypeInfo_IDisposable,0);
label_0436c74d:
  (*(code *)*puVar18)(plVar17);
label_0436c756:
  pUVar13 = (__this->fields).DoublePanelRight;
  ppIStack_38 = (Il2CppClass **)&TypeInfo_IDisposable;
  if ((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
     ppIStack_38 = (Il2CppClass **)&TypeInfo_IDisposable, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
    unaff_R13 = UnityEngine_Transform__GetEnumerator(pUVar13,(MethodInfo *)0x0);
    if (unaff_R13 == (System_Collections_IEnumerator_o *)0x0) goto label_0436cc7e;
    ppIStack_38 = (Il2CppClass **)0x0;
    do {
      pSVar8 = unaff_R13->klass;
      uVar4._0_1_ = (pSVar8->_2).rank;
      uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar9 = (pSVar8->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IEnumerator) {
            pVVar14 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar19);
            goto label_0436c813;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar19);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_0436c813:
      cVar11 = (*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
      if (cVar11 == '\0') {
        unaff_RBP = &TypeInfo_IDisposable;
        plVar17 = (long *)il2cpp_runtime_helper_023051f0();
        if (plVar17 == (long *)0x0) goto label_0436c986;
        lVar19 = *plVar17;
        if ((ulong)*(ushort *)(lVar19 + 0x12e) == 0) goto label_0436c95f;
        lVar20 = 0;
        goto label_0436c950;
      }
      pSVar8 = unaff_R13->klass;
      uVar5._0_1_ = (pSVar8->_2).rank;
      uVar5._1_1_ = (pSVar8->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar9 = (pSVar8->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IEnumerator) {
            pVVar14 = pSVar8->vtable + (*(int *)((long)&pIVar9->offset + lVar19) + 1);
            goto label_0436c898;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar19);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,1);
label_0436c898:
      pUVar15 = (UnityEngine_Component_o *)(*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
      if (pUVar15 == (UnityEngine_Component_o *)0x0) goto label_0436cc52;
      bVar1 = (TypeInfo_Transform->_2).naturalAligment;
      if (((pUVar15->klass->_2).naturalAligment < bVar1) ||
         ((pUVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Transform)) goto label_0436cc3d;
      pUVar16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(pUVar16,(MethodInfo *)0x0);
    } while( true );
  }
  goto label_0436cc5c;
label_0436cc35:
  pUVar15 = (UnityEngine_Component_o *)il2cpp_runtime_helper_022b2fd0(pUVar15);
label_0436cc3d:
  pUVar15 = (UnityEngine_Component_o *)il2cpp_runtime_helper_022b2fd0(pUVar15);
label_0436cc45:
  il2cpp_runtime_helper_022b2fd0(pUVar15);
label_0436cc4d:
  il2cpp_runtime_helper_022b2c90();
label_0436cc52:
  il2cpp_runtime_helper_022b2c90();
label_0436cc57:
  unaff_RBP = &TypeInfo_IEnumerator;
  il2cpp_runtime_helper_022b2c90();
  ppIStack_38 = &TypeInfo_Transform;
  goto label_0436cc5c;
  while (lVar20 = lVar20 + 0x10, (ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20) {
label_0436c950:
    if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
      puVar18 = (undefined8 *)(lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
      goto label_0436c97d;
    }
  }
label_0436c95f:
  puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar17,TypeInfo_IDisposable,0);
label_0436c97d:
  (*(code *)*puVar18)(plVar17);
label_0436c986:
  pUVar13 = (__this->fields).BottomBar;
  ppIStack_38 = ppIStack_38;
  if ((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
     ppIStack_38 = (Il2CppClass **)0x0, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
    unaff_R13 = UnityEngine_Transform__GetEnumerator(pUVar13,(MethodInfo *)0x0);
    if (unaff_R13 == (System_Collections_IEnumerator_o *)0x0) goto label_0436cc83;
    ppIStack_38 = (Il2CppClass **)0x0;
    do {
      pSVar8 = unaff_R13->klass;
      uVar6._0_1_ = (pSVar8->_2).rank;
      uVar6._1_1_ = (pSVar8->_2).minimumAlignment;
      if ((ulong)uVar6 != 0) {
        pIVar9 = (pSVar8->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IEnumerator) {
            pVVar14 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar19);
            goto label_0436ca53;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar6 << 4 != lVar19);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_0436ca53:
      cVar11 = (*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
      if (cVar11 == '\0') {
        iVar21 = 10;
        goto label_0436cb42;
      }
      pSVar8 = unaff_R13->klass;
      uVar7._0_1_ = (pSVar8->_2).rank;
      uVar7._1_1_ = (pSVar8->_2).minimumAlignment;
      if ((ulong)uVar7 != 0) {
        pIVar9 = (pSVar8->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IEnumerator) {
            pVVar14 = pSVar8->vtable + (*(int *)((long)&pIVar9->offset + lVar19) + 1);
            goto label_0436cad8;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar7 << 4 != lVar19);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,1);
label_0436cad8:
      pUVar15 = (UnityEngine_Component_o *)(*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
      if (pUVar15 == (UnityEngine_Component_o *)0x0) goto label_0436cc57;
      bVar1 = (TypeInfo_Transform->_2).naturalAligment;
      if (((pUVar15->klass->_2).naturalAligment < bVar1) ||
         ((pUVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Transform)) goto label_0436cc45;
      pUVar16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(pUVar16,(MethodInfo *)0x0);
    } while( true );
  }
label_0436cc5c:
  pSVar12 = (Settings_HumanCustomSkinSet_o *)il2cpp_runtime_helper_022b2c90();
label_0436cc61:
  il2cpp_runtime_helper_022b2fd0(pSVar12);
  while( true ) {
    il2cpp_runtime_helper_022fefe0(ppIStack_38);
label_0436cc71:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(unaff_RBP);
label_0436cc7e:
    il2cpp_runtime_helper_022b2c90();
label_0436cc83:
    auVar22 = il2cpp_runtime_helper_022b2c90();
    iVar21 = 0;
    if (auVar22._8_4_ != 1) break;
    puVar18 = (undefined8 *)__cxa_begin_catch(auVar22._0_8_);
    ppIStack_38 = (Il2CppClass **)*puVar18;
    __cxa_end_catch();
label_0436cb42:
    unaff_RBP = &TypeInfo_IDisposable;
    plVar17 = (long *)il2cpp_runtime_helper_023051f0();
    if (plVar17 != (long *)0x0) {
      lVar19 = *plVar17;
      if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
        lVar20 = 0;
        do {
          if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
            puVar18 = (undefined8 *)
                      (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
            goto label_0436cbbd;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
      }
      puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar17,TypeInfo_IDisposable,0);
label_0436cbbd:
      (*(code *)*puVar18)(plVar17);
    }
    if (ppIStack_38 == (Il2CppClass **)0x0) {
      if ((iVar21 != 10) && (iVar21 != 0)) {
        return;
      }
      method_00 = (MethodInfo *)0x0;
      (*(__this->klass->vtable)._20_Setup.methodPtr)(__this,0,(__this->klass->vtable)._20_Setup.method);
      if (((__this->fields)._currentGlobalSet != (Settings_HumanCustomSkinSet_o *)0x0) &&
         ((char)(__this->fields)._hasBackup == '\0')) {
        UI_GlobalSkinEditPopup__CreateBackup(__this,method_00);
      }
      UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  plVar17 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
  if (plVar17 != (long *)0x0) {
    lVar19 = *plVar17;
    if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
      lVar20 = 0;
      do {
        if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
          puVar18 = (undefined8 *)
                    (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
          goto label_0436cdad;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
    }
    puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar17,TypeInfo_IDisposable,0);
label_0436cdad:
    (*(code *)*puVar18)(plVar17,puVar18[1]);
  }
  _Unwind_Resume(auVar22._0_8_);
}


// UI.GlobalSkinEditPopup$$OnDisable
// il2cpp: void UI_GlobalSkinEditPopup__OnDisable (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436cf90

void UI_GlobalSkinEditPopup__OnDisable(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((char)(__this->fields)._hasBackup != '\0') {
    UI_GlobalSkinEditPopup__RestoreBackup(__this,method);
  }
  *(undefined1 *)&(__this->fields).IsActive = 0;
  return;
}


// UI.GlobalSkinEditPopup$$HideImmediate
// il2cpp: void UI_GlobalSkinEditPopup__HideImmediate (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436cfb0

void UI_GlobalSkinEditPopup__HideImmediate(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((char)(__this->fields)._hasBackup != '\0') {
    UI_GlobalSkinEditPopup__RestoreBackup(__this,method);
  }
  UI_BasePopup__HideImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GlobalSkinEditPopup$$.ctor
// il2cpp: void UI_GlobalSkinEditPopup___ctor (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436cfd0

void UI_GlobalSkinEditPopup___ctor(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  
  if (g_data_057ae1e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057ae1e7 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_String);
  (__this->fields)._backupValues = (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._backupValues,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_string__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Dictionary_2_System_String_System_Single);
  (__this->fields)._backupFloatValues = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._backupFloatValues);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GlobalSkinEditPopup$$<Setup>b__20_0
// il2cpp: void UI_GlobalSkinEditPopup___Setup_b__20_0 (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436d0a0

void UI_GlobalSkinEditPopup___Setup_b__20_0(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae1e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Clear");
    g_data_057ae1e8 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_GlobalSkinEditPopup__OnButtonClick(__this,"Clear",in_RDX);
  return;
}


// UI.GlobalSkinEditPopup$$<Setup>b__20_1
// il2cpp: void UI_GlobalSkinEditPopup___Setup_b__20_1 (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436d0e0

void UI_GlobalSkinEditPopup___Setup_b__20_1(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae1e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae1e9 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_GlobalSkinEditPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.GlobalSkinEditPopup$$<Setup>b__20_2
// il2cpp: void UI_GlobalSkinEditPopup___Setup_b__20_2 (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436d120

void UI_GlobalSkinEditPopup___Setup_b__20_2(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae1ea == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae1ea = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_GlobalSkinEditPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


