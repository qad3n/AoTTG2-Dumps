// Type: UI.PresetSkinEditPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/PresetSkinEditPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$.ctor
// il2cpp: void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28___ctor (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x436f950

void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28___ctor
               (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,int32_t __1__state
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.IDisposable.Dispose
// il2cpp: void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_IDisposable_Dispose (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x436fc60

void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_IDisposable_Dispose
               (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,MethodInfo *method
               )

{
  return;
}


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$MoveNext
// il2cpp: bool UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__MoveNext (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x436fc70

bool_conflict
UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__MoveNext
          (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_DummyHuman_o *__this_00;
  long lVar2;
  Settings_TypedSetting_bool__o *__this_01;
  UnityEngine_WaitForSeconds_o *pUVar3;
  undefined8 uVar4;
  UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this_02;
  
  __this_02 = __this;
  if (g_data_057ae1fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    __this_02 = (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1fc = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
       (__this_02 = *(UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o **)(lVar2 + 0x60),
       __this_02 != (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_02,(uint)(byte)(__this->fields).originalGlobal,
                 MethodInfo_Void_set_Value);
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
        __this_01 = *(Settings_TypedSetting_bool__o **)(lVar2 + 0x58);
        __this_02 = (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *)0x0;
        if (__this_01 != (Settings_TypedSetting_bool__o *)0x0) {
          Settings_TypedSetting_bool___set_Value
                    (__this_01,(uint)*(byte *)((long)&(__this->fields).originalGlobal + 1),MethodInfo_Void_set_Value);
          return 0;
        }
      }
    }
label_0436fde6:
    il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)(__this_02->fields).__2__current;
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    __this_00 = (__this->fields).character;
    __this_02 = (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *)0x0;
    if (__this_00 == (Characters_DummyHuman_o *)0x0) goto label_0436fde6;
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


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x436fdf0

Il2CppObject *
UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_IEnumerator_Reset (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x436fe00

void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_IEnumerator_Reset
               (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,MethodInfo *method
               )

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


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_IEnumerator_get_Current (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x436fe40

Il2CppObject *
UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_IEnumerator_get_Current
          (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.PresetSkinEditPopup$$get_Title
// il2cpp: System_String_o* UI_PresetSkinEditPopup__get_Title (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436d760

System_String_o * UI_PresetSkinEditPopup__get_Title(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  long lVar1;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  Settings_BaseSetSetting_o *pSVar4;
  
  if (g_data_057ae1ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"Skins.Human");
    il2cpp_runtime_helper_023445d0(&"Preset");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae1ef = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","Preset","","",(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
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


// UI.PresetSkinEditPopup$$get_Width
// il2cpp: float UI_PresetSkinEditPopup__get_Width (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436d8a0

float UI_PresetSkinEditPopup__get_Width(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return 1100.0;
}


// UI.PresetSkinEditPopup$$get_Height
// il2cpp: float UI_PresetSkinEditPopup__get_Height (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436d8b0

float UI_PresetSkinEditPopup__get_Height(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return 700.0;
}


// UI.PresetSkinEditPopup$$get_VerticalSpacing
// il2cpp: float UI_PresetSkinEditPopup__get_VerticalSpacing (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436d8c0

float UI_PresetSkinEditPopup__get_VerticalSpacing(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return 15.0;
}


// UI.PresetSkinEditPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_PresetSkinEditPopup__get_HorizontalPadding (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436d8d0

int32_t UI_PresetSkinEditPopup__get_HorizontalPadding(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.PresetSkinEditPopup$$get_VerticalPadding
// il2cpp: int32_t UI_PresetSkinEditPopup__get_VerticalPadding (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436d8e0

int32_t UI_PresetSkinEditPopup__get_VerticalPadding(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.PresetSkinEditPopup$$get_DoublePanel
// il2cpp: bool UI_PresetSkinEditPopup__get_DoublePanel (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436d8f0

bool_conflict UI_PresetSkinEditPopup__get_DoublePanel(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.PresetSkinEditPopup$$get_ScrollBar
// il2cpp: bool UI_PresetSkinEditPopup__get_ScrollBar (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436d900

bool_conflict UI_PresetSkinEditPopup__get_ScrollBar(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.PresetSkinEditPopup$$Setup
// il2cpp: void UI_PresetSkinEditPopup__Setup (UI_PresetSkinEditPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x436d910

void UI_PresetSkinEditPopup__Setup(UI_PresetSkinEditPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  void *pvVar4;
  Settings_HumanCustomSet_o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  Characters_HumanSetup_o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar8;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_05;
  uint uVar9;
  bool_conflict bVar10;
  uint uVar11;
  int32_t iVar12;
  System_String_o *pSVar13;
  Il2CppClass *__this_06;
  UI_ElementStyle_o *pUVar14;
  Il2CppClass *__this_07;
  System_String_o *pSVar15;
  UnityEngine_Events_UnityAction_o *pUVar16;
  undefined4 extraout_var;
  UI_PresetSkinEditPopup_o *pUVar17;
  long *plVar18;
  Settings_BaseSetting_o *setting;
  Il2CppClass *a;
  MethodInfo *pMVar19;
  Settings_StringSetting_o *pSVar20;
  System_String_o **unaff_R13;
  MethodInfo_2A23E90 **ppMVar21;
  UI_PresetSkinEditPopup_o *__this_08;
  System_String_o **x;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar24;
  Il2CppRGCTXData *pIVar25;
  _union_231609 _Var26;
  Il2CppObject *pIVar27;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar28;
  undefined1 auStack_f8 [16];
  _union_231609 _Stack_e8;
  Il2CppObject *pIStack_e0;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSStack_d8;
  Il2CppClass *pIStack_d0;
  Il2CppClass *pIStack_c8;
  Settings_StringSetting_o *pSStack_c0;
  UI_PresetSkinEditPopup_o *pUStack_b8;
  UI_ElementStyle_o *pUStack_b0;
  Settings_StringSetting_o *pSStack_a8;
  undefined8 uStack_a0;
  System_String_o *pSStack_98;
  Il2CppClass *pIStack_90;
  Settings_StringSetting_o *pSStack_88;
  UI_PresetSkinEditPopup_o *pUStack_80;
  UI_ElementStyle_o *pUStack_78;
  UI_PresetSkinEditPopup_o *pUStack_70;
  
  if (g_data_057ae1f0 == '\0') {
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d93d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d949;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d955;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__20_0);
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d961;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__20_1);
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d96d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__20_2);
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d979;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d985;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d991;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d99d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d9a9;
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d9b5;
    il2cpp_runtime_helper_023445d0(&"WeaponTrail");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d9c1;
    il2cpp_runtime_helper_023445d0(&"Clear");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d9cd;
    il2cpp_runtime_helper_023445d0(&"Horse");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d9d9;
    il2cpp_runtime_helper_023445d0(&"Back");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d9e5;
    il2cpp_runtime_helper_023445d0(&"Logo");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d9f1;
    il2cpp_runtime_helper_023445d0(&"Costume");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436d9fd;
    il2cpp_runtime_helper_023445d0(&"Hoodie");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436da09;
    il2cpp_runtime_helper_023445d0(&"GearR");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436da15;
    il2cpp_runtime_helper_023445d0(&"Skins.Human");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436da21;
    il2cpp_runtime_helper_023445d0(&"HookR");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436da2d;
    il2cpp_runtime_helper_023445d0(&"Gas");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436da39;
    il2cpp_runtime_helper_023445d0(&"Face");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436da45;
    il2cpp_runtime_helper_023445d0(&"Head");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436da51;
    il2cpp_runtime_helper_023445d0(&"Glass");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436da5d;
    il2cpp_runtime_helper_023445d0(&"Cancel");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436da69;
    il2cpp_runtime_helper_023445d0(&"HookL");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436da75;
    il2cpp_runtime_helper_023445d0(&"HookRTiling");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436da81;
    il2cpp_runtime_helper_023445d0(&"HookLTiling");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436da8d;
    il2cpp_runtime_helper_023445d0(&"ThunderspearL");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436da99;
    il2cpp_runtime_helper_023445d0(&"Apply");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436daa5;
    il2cpp_runtime_helper_023445d0(&"Eye");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436dab1;
    il2cpp_runtime_helper_023445d0(&"ThunderspearR");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436dabd;
    il2cpp_runtime_helper_023445d0(&"GearL");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436dac9;
    il2cpp_runtime_helper_023445d0(&"Hair");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436dad5;
    il2cpp_runtime_helper_023445d0(&"");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436dae1;
    il2cpp_runtime_helper_023445d0(&"Skin");
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436daed;
    il2cpp_runtime_helper_023445d0(&"Hat");
    g_data_057ae1f0 = '\x01';
  }
  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436db01;
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436db14;
  pSVar13 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436db26;
  __this_06 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436db4b;
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_06,0x18,200.0,20.0,pSVar13,(MethodInfo *)0x0);
  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436db5e;
  uVar9 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                    (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  plVar18 = (long *)(ulong)uVar9;
  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436db73;
  pSVar13 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436db7e;
  pUVar14 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  a = (Il2CppClass *)(ulong)uVar9;
  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436dba0;
  UI_ElementStyle___ctor(pUVar14,uVar9,120.0,20.0,pSVar13,(MethodInfo *)0x0);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  x = (System_String_o **)pUVar14;
  if ((lVar3 == 0) ||
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
     __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) {
label_0436e856:
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e85b;
    __this_07 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
    ppMVar21 = (MethodInfo_2A23E90 **)unaff_R13;
  }
  else {
    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436dbda;
    __this_07 = (Il2CppClass *)Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    a = TypeInfo_HumanCustomSet;
    if (__this_07 == (Il2CppClass *)0x0) {
      (__this->fields)._currentPreset = (Settings_HumanCustomSet_o *)0x0;
label_0436dc50:
      pSVar13 = (System_String_o *)&(__this->fields)._currentPreset;
      pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436dc5b;
      il2cpp_runtime_helper_022b4080(pSVar13);
      pSVar5 = (__this->fields)._currentPreset;
      a = __this_07;
      if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
        plVar18 = (long *)(__this->fields).DoublePanelLeft;
        unaff_R13 = (System_String_o **)(pSVar5->fields).SkinHair;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436dc93;
          il2cpp_runtime_helper_02337ed0();
        }
        x = &"";
        pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436dcc6;
        pSVar15 = UI_UIManager__GetLocale
                            ("SettingsPopup","Skins.Human","Hair","","",
                             (MethodInfo *)0x0);
        pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436dd02;
        a = __this_06;
        UI_ElementFactory__CreateInputSetting
                  ((UnityEngine_Transform_o *)plVar18,(UI_ElementStyle_o *)__this_06,
                   (Settings_BaseSetting_o *)unaff_R13,pSVar15,"",300.0,40.0,0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pSVar5 = *(Settings_HumanCustomSet_o **)pSVar13;
        if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
          pSVar13 = (System_String_o *)(__this->fields).DoublePanelLeft;
          plVar18 = (long *)(pSVar5->fields).SkinEye;
          unaff_R13 = &"SettingsPopup";
          pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436dd46;
          pSVar15 = UI_UIManager__GetLocale
                              ("SettingsPopup","Skins.Human","Eye","","",
                               (MethodInfo *)0x0);
          pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436dd82;
          a = __this_06;
          UI_ElementFactory__CreateInputSetting
                    ((UnityEngine_Transform_o *)pSVar13,(UI_ElementStyle_o *)__this_06,
                     (Settings_BaseSetting_o *)plVar18,pSVar15,"",300.0,40.0,0,
                     (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0
                    );
          pSVar5 = (__this->fields)._currentPreset;
          if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
            pSVar13 = (System_String_o *)(__this->fields).DoublePanelLeft;
            plVar18 = (long *)(pSVar5->fields).SkinGlass;
            pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436ddc3;
            pSVar15 = UI_UIManager__GetLocale
                                ("SettingsPopup","Skins.Human","Glass","","",
                                 (MethodInfo *)0x0);
            pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436ddff;
            a = __this_06;
            UI_ElementFactory__CreateInputSetting
                      ((UnityEngine_Transform_o *)pSVar13,(UI_ElementStyle_o *)__this_06,
                       (Settings_BaseSetting_o *)plVar18,pSVar15,"",300.0,40.0,0,
                       (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                       (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                       (MethodInfo *)0x0);
            pSVar5 = (__this->fields)._currentPreset;
            if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
              pSVar13 = (System_String_o *)(__this->fields).DoublePanelLeft;
              plVar18 = (long *)(pSVar5->fields).SkinFace;
              pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436de40;
              pSVar15 = UI_UIManager__GetLocale
                                  ("SettingsPopup","Skins.Human","Face","","",
                                   (MethodInfo *)0x0);
              pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436de7c;
              a = __this_06;
              UI_ElementFactory__CreateInputSetting
                        ((UnityEngine_Transform_o *)pSVar13,(UI_ElementStyle_o *)__this_06,
                         (Settings_BaseSetting_o *)plVar18,pSVar15,"",300.0,40.0,0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                         (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                         (MethodInfo *)0x0);
              pSVar5 = (__this->fields)._currentPreset;
              if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                pSVar13 = (System_String_o *)(__this->fields).DoublePanelLeft;
                plVar18 = (long *)(pSVar5->fields).SkinSkin;
                pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436debd;
                pSVar15 = UI_UIManager__GetLocale
                                    ("SettingsPopup","Skins.Human","Skin","","",
                                     (MethodInfo *)0x0);
                pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436def9;
                a = __this_06;
                UI_ElementFactory__CreateInputSetting
                          ((UnityEngine_Transform_o *)pSVar13,(UI_ElementStyle_o *)__this_06,
                           (Settings_BaseSetting_o *)plVar18,pSVar15,"",300.0,40.0,0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                           (MethodInfo *)0x0);
                pSVar5 = (__this->fields)._currentPreset;
                if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                  pSVar13 = (System_String_o *)(__this->fields).DoublePanelLeft;
                  plVar18 = (long *)(pSVar5->fields).SkinCostume;
                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436df3a;
                  pSVar15 = UI_UIManager__GetLocale
                                      ("SettingsPopup","Skins.Human","Costume","","",
                                       (MethodInfo *)0x0);
                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436df76;
                  a = __this_06;
                  UI_ElementFactory__CreateInputSetting
                            ((UnityEngine_Transform_o *)pSVar13,(UI_ElementStyle_o *)__this_06,
                             (Settings_BaseSetting_o *)plVar18,pSVar15,"",300.0,40.0,0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                             (MethodInfo *)0x0);
                  pSVar5 = (__this->fields)._currentPreset;
                  if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                    pSVar13 = (System_String_o *)(__this->fields).DoublePanelLeft;
                    plVar18 = (long *)(pSVar5->fields).SkinLogo;
                    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436dfb7;
                    pSVar15 = UI_UIManager__GetLocale
                                        ("SettingsPopup","Skins.Human","Logo","","",
                                         (MethodInfo *)0x0);
                    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436dff3;
                    a = __this_06;
                    UI_ElementFactory__CreateInputSetting
                              ((UnityEngine_Transform_o *)pSVar13,(UI_ElementStyle_o *)__this_06,
                               (Settings_BaseSetting_o *)plVar18,pSVar15,"",300.0,40.0,0,
                               (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0
                               ,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                               (MethodInfo *)0x0);
                    pSVar5 = (__this->fields)._currentPreset;
                    if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                      pSVar13 = (System_String_o *)(__this->fields).DoublePanelLeft;
                      plVar18 = (long *)(pSVar5->fields).SkinGearL;
                      pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e034;
                      pSVar15 = UI_UIManager__GetLocale
                                          ("SettingsPopup","Skins.Human","GearL","","",
                                           (MethodInfo *)0x0);
                      pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e070;
                      a = __this_06;
                      UI_ElementFactory__CreateInputSetting
                                ((UnityEngine_Transform_o *)pSVar13,(UI_ElementStyle_o *)__this_06,
                                 (Settings_BaseSetting_o *)plVar18,pSVar15,"",300.0,40.0,0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                      pSVar5 = (__this->fields)._currentPreset;
                      if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                        pSVar13 = (System_String_o *)(__this->fields).DoublePanelLeft;
                        plVar18 = (long *)(pSVar5->fields).SkinGearR;
                        pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e0b1;
                        pSVar15 = UI_UIManager__GetLocale
                                            ("SettingsPopup","Skins.Human","GearR","","",
                                             (MethodInfo *)0x0);
                        pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e0ed;
                        a = __this_06;
                        UI_ElementFactory__CreateInputSetting
                                  ((UnityEngine_Transform_o *)pSVar13,(UI_ElementStyle_o *)__this_06,
                                   (Settings_BaseSetting_o *)plVar18,pSVar15,"",300.0,40.0,0,
                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                   (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                   (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                        pSVar5 = (__this->fields)._currentPreset;
                        if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                          pSVar13 = (System_String_o *)(__this->fields).DoublePanelLeft;
                          plVar18 = (long *)(pSVar5->fields).SkinGas;
                          pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e12e;
                          pSVar15 = UI_UIManager__GetLocale
                                              ("SettingsPopup","Skins.Human","Gas","",
                                               "",(MethodInfo *)0x0);
                          pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e16a;
                          a = __this_06;
                          UI_ElementFactory__CreateInputSetting
                                    ((UnityEngine_Transform_o *)pSVar13,(UI_ElementStyle_o *)__this_06,
                                     (Settings_BaseSetting_o *)plVar18,pSVar15,"",300.0,40.0,0,
                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                                     (MethodInfo *)0x0);
                          pSVar5 = (__this->fields)._currentPreset;
                          if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                            pSVar13 = (System_String_o *)(__this->fields).DoublePanelLeft;
                            plVar18 = (long *)(pSVar5->fields).SkinHoodie;
                            pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e1ab;
                            pSVar15 = UI_UIManager__GetLocale
                                                ("SettingsPopup","Skins.Human","Hoodie","",
                                                 "",(MethodInfo *)0x0);
                            pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e1e7;
                            a = __this_06;
                            UI_ElementFactory__CreateInputSetting
                                      ((UnityEngine_Transform_o *)pSVar13,(UI_ElementStyle_o *)__this_06,
                                       (Settings_BaseSetting_o *)plVar18,pSVar15,"",300.0,40.0,0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                       (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0
                                       ,(MethodInfo *)0x0);
                            pSVar5 = (__this->fields)._currentPreset;
                            if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                              pSVar13 = (System_String_o *)(__this->fields).DoublePanelRight;
                              plVar18 = (long *)(pSVar5->fields).SkinWeaponTrail;
                              pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e228;
                              pSVar15 = UI_UIManager__GetLocale
                                                  ("SettingsPopup","Skins.Human","WeaponTrail","",
                                                   "",(MethodInfo *)0x0);
                              pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e264;
                              a = __this_06;
                              UI_ElementFactory__CreateInputSetting
                                        ((UnityEngine_Transform_o *)pSVar13,(UI_ElementStyle_o *)__this_06,
                                         (Settings_BaseSetting_o *)plVar18,pSVar15,"",300.0,40.0,0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (System_Func_string__bool__o *)0x0,
                                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                              pSVar5 = (__this->fields)._currentPreset;
                              if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                                pSVar13 = (System_String_o *)(__this->fields).DoublePanelRight;
                                plVar18 = (long *)(pSVar5->fields).SkinHorse;
                                pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e2a5;
                                pSVar15 = UI_UIManager__GetLocale
                                                    ("SettingsPopup","Skins.Human","Horse","",
                                                     "",(MethodInfo *)0x0);
                                pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e2e1;
                                a = __this_06;
                                UI_ElementFactory__CreateInputSetting
                                          ((UnityEngine_Transform_o *)pSVar13,(UI_ElementStyle_o *)__this_06,
                                           (Settings_BaseSetting_o *)plVar18,pSVar15,"",300.0,40.0,0
                                           ,(UnityEngine_Events_UnityAction_o *)0x0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (System_Func_string__bool__o *)0x0,
                                           (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                pSVar5 = (__this->fields)._currentPreset;
                                if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                                  pSVar13 = (System_String_o *)(__this->fields).DoublePanelRight;
                                  plVar18 = (long *)(pSVar5->fields).SkinThunderspearL;
                                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e322;
                                  pSVar15 = UI_UIManager__GetLocale
                                                      ("SettingsPopup","Skins.Human","ThunderspearL","",
                                                       "",(MethodInfo *)0x0);
                                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e35e;
                                  a = __this_06;
                                  UI_ElementFactory__CreateInputSetting
                                            ((UnityEngine_Transform_o *)pSVar13,(UI_ElementStyle_o *)__this_06
                                             ,(Settings_BaseSetting_o *)plVar18,pSVar15,"",300.0,
                                             40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                             (System_Func_string__bool__o *)0x0,
                                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                  pSVar5 = (__this->fields)._currentPreset;
                                  if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                                    pSVar13 = (System_String_o *)(__this->fields).DoublePanelRight;
                                    plVar18 = (long *)(pSVar5->fields).SkinThunderspearR;
                                    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e39f;
                                    pSVar15 = UI_UIManager__GetLocale
                                                        ("SettingsPopup","Skins.Human","ThunderspearR","",
                                                         "",(MethodInfo *)0x0);
                                    pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e3db;
                                    a = __this_06;
                                    UI_ElementFactory__CreateInputSetting
                                              ((UnityEngine_Transform_o *)pSVar13,
                                               (UI_ElementStyle_o *)__this_06,
                                               (Settings_BaseSetting_o *)plVar18,pSVar15,"",300.0,
                                               40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                               (System_Func_string__bool__o *)0x0,
                                               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                    pSVar5 = (__this->fields)._currentPreset;
                                    if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                                      pSVar13 = (System_String_o *)(__this->fields).DoublePanelRight;
                                      plVar18 = (long *)(pSVar5->fields).SkinHookL;
                                      pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e41c;
                                      pSVar15 = UI_UIManager__GetLocale
                                                          ("SettingsPopup","Skins.Human","HookL",""
                                                           ,"",(MethodInfo *)0x0);
                                      pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e458;
                                      a = __this_06;
                                      UI_ElementFactory__CreateInputSetting
                                                ((UnityEngine_Transform_o *)pSVar13,
                                                 (UI_ElementStyle_o *)__this_06,
                                                 (Settings_BaseSetting_o *)plVar18,pSVar15,"",300.0,
                                                 40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                 (System_Func_string__bool__o *)0x0,
                                                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                      pSVar5 = (__this->fields)._currentPreset;
                                      if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                                        pSVar13 = (System_String_o *)(__this->fields).DoublePanelRight;
                                        plVar18 = (long *)(pSVar5->fields).SkinHookLTiling;
                                        pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e499;
                                        pSVar15 = UI_UIManager__GetLocale
                                                            ("SettingsPopup","Skins.Human","HookLTiling",
                                                             "","",(MethodInfo *)0x0);
                                        pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e4d5;
                                        a = __this_06;
                                        UI_ElementFactory__CreateInputSetting
                                                  ((UnityEngine_Transform_o *)pSVar13,
                                                   (UI_ElementStyle_o *)__this_06,
                                                   (Settings_BaseSetting_o *)plVar18,pSVar15,"",
                                                   300.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                   (System_Func_string__bool__o *)0x0,
                                                   (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                        pSVar5 = (__this->fields)._currentPreset;
                                        if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                                          pSVar13 = (System_String_o *)(__this->fields).DoublePanelRight;
                                          plVar18 = (long *)(pSVar5->fields).SkinHookR;
                                          pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e516;
                                          pSVar15 = UI_UIManager__GetLocale
                                                              ("SettingsPopup","Skins.Human","HookR",
                                                               "","",(MethodInfo *)0x0);
                                          pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e552;
                                          a = __this_06;
                                          UI_ElementFactory__CreateInputSetting
                                                    ((UnityEngine_Transform_o *)pSVar13,
                                                     (UI_ElementStyle_o *)__this_06,
                                                     (Settings_BaseSetting_o *)plVar18,pSVar15,"",
                                                     300.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (System_Func_string__bool__o *)0x0,
                                                     (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                          pSVar5 = (__this->fields)._currentPreset;
                                          if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                                            pSVar13 = (System_String_o *)(__this->fields).DoublePanelRight;
                                            plVar18 = (long *)(pSVar5->fields).SkinHookRTiling;
                                            pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e593;
                                            pSVar15 = UI_UIManager__GetLocale
                                                                ("SettingsPopup","Skins.Human","HookRTiling",
                                                                 "","",(MethodInfo *)0x0);
                                            pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e5cf;
                                            a = __this_06;
                                            UI_ElementFactory__CreateInputSetting
                                                      ((UnityEngine_Transform_o *)pSVar13,
                                                       (UI_ElementStyle_o *)__this_06,
                                                       (Settings_BaseSetting_o *)plVar18,pSVar15,"",
                                                       300.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Func_string__bool__o *)0x0,
                                                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0)
                                            ;
                                            pSVar5 = (__this->fields)._currentPreset;
                                            if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                                              pSVar13 = (System_String_o *)(__this->fields).DoublePanelRight;
                                              plVar18 = (long *)(pSVar5->fields).SkinHat;
                                              pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e610;
                                              pSVar15 = UI_UIManager__GetLocale
                                                                  ("SettingsPopup","Skins.Human","Hat",
                                                                   "","",(MethodInfo *)0x0
                                                                  );
                                              pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e64c;
                                              a = __this_06;
                                              UI_ElementFactory__CreateInputSetting
                                                        ((UnityEngine_Transform_o *)pSVar13,
                                                         (UI_ElementStyle_o *)__this_06,
                                                         (Settings_BaseSetting_o *)plVar18,pSVar15,
                                                         "",300.0,40.0,0,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (System_Func_string__bool__o *)0x0,
                                                         (System_Func_string__string__o *)0x0,
                                                         (MethodInfo *)0x0);
                                              pSVar5 = (__this->fields)._currentPreset;
                                              if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                                                pSVar13 = (System_String_o *)(__this->fields).DoublePanelRight
                                                ;
                                                plVar18 = (long *)(pSVar5->fields).SkinHead;
                                                pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e68d;
                                                pSVar15 = UI_UIManager__GetLocale
                                                                    ("SettingsPopup","Skins.Human","Head",
                                                                     "","",
                                                                     (MethodInfo *)0x0);
                                                pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e6c9;
                                                a = __this_06;
                                                UI_ElementFactory__CreateInputSetting
                                                          ((UnityEngine_Transform_o *)pSVar13,
                                                           (UI_ElementStyle_o *)__this_06,
                                                           (Settings_BaseSetting_o *)plVar18,pSVar15,
                                                           "",300.0,40.0,0,
                                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                                           (System_Func_string__bool__o *)0x0,
                                                           (System_Func_string__string__o *)0x0,
                                                           (MethodInfo *)0x0);
                                                pSVar5 = (__this->fields)._currentPreset;
                                                if (pSVar5 != (Settings_HumanCustomSet_o *)0x0) {
                                                  pUVar6 = (__this->fields).DoublePanelRight;
                                                  pSVar20 = (pSVar5->fields).SkinBack;
                                                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e70a;
                                                  pSVar13 = UI_UIManager__GetLocale
                                                                      ("SettingsPopup","Skins.Human","Back",
                                                                       "","",
                                                                       (MethodInfo *)0x0);
                                                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e746;
                                                  UI_ElementFactory__CreateInputSetting
                                                            (pUVar6,(UI_ElementStyle_o *)__this_06,
                                                             (Settings_BaseSetting_o *)pSVar20,pSVar13,
                                                             "",300.0,40.0,0,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (System_Func_string__bool__o *)0x0,
                                                             (System_Func_string__string__o *)0x0,
                                                             (MethodInfo *)0x0);
                                                  pUVar6 = (__this->fields).BottomBar;
                                                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e75b;
                                                  pSVar13 = UI_UIManager__GetLocaleCommon
                                                                      ((System_String_o *)"Clear",
                                                                       (MethodInfo *)0x0);
                                                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e76e;
                                                  pUVar16 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e788;
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e7a4;
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar6,pUVar14,pSVar13,0.0,pUVar16,
                                                             (MethodInfo *)0x0);
                                                  pUVar6 = (__this->fields).BottomBar;
                                                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e7b9;
                                                  pSVar13 = UI_UIManager__GetLocaleCommon
                                                                      ("Apply",(MethodInfo *)0x0);
                                                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e7c5;
                                                  pUVar16 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e7df;
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e7f6;
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar6,pUVar14,pSVar13,0.0,pUVar16,
                                                             (MethodInfo *)0x0);
                                                  pUVar6 = (__this->fields).BottomBar;
                                                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e80b;
                                                  pSVar13 = UI_UIManager__GetLocaleCommon
                                                                      ((System_String_o *)"Cancel",
                                                                       (MethodInfo *)0x0);
                                                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e817;
                                                  pUVar16 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e831;
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar6,pUVar14,pSVar13,0.0,pUVar16,
                                                             (MethodInfo *)0x0);
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
      goto label_0436e856;
    }
    pvVar4 = (__this_07->_1).image;
    bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    ppMVar21 = (MethodInfo_2A23E90 **)unaff_R13;
    if ((bVar1 <= *(byte *)((long)pvVar4 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)((long)pvVar4 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_HumanCustomSet)) {
      (__this->fields)._currentPreset = (Settings_HumanCustomSet_o *)__this_07;
      pvVar4 = (__this_07->_1).image;
      if ((bVar1 <= *(byte *)((long)pvVar4 + 0x130)) &&
         (*(Il2CppClass **)(*(long *)((long)pvVar4 + 200) + -8 + (ulong)bVar1 * 8) == a)) goto label_0436dc50;
    }
  }
  pUStack_70 = (UI_PresetSkinEditPopup_o *)0x436e863;
  pUStack_80 = (UI_PresetSkinEditPopup_o *)il2cpp_runtime_helper_022b2fd0();
  pUStack_78 = (UI_ElementStyle_o *)pSVar13;
  pUStack_70 = __this;
  if (g_data_057ae1f1 == '\0') {
    pSStack_88 = (Settings_StringSetting_o *)0x436e88f;
    il2cpp_runtime_helper_023445d0(&"Clear");
    pSStack_88 = (Settings_StringSetting_o *)0x436e89b;
    il2cpp_runtime_helper_023445d0(&"Cancel");
    pSStack_88 = (Settings_StringSetting_o *)0x436e8a7;
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae1f1 = '\x01';
  }
  pSStack_88 = (Settings_StringSetting_o *)0x436e8c2;
  pMVar19 = "Cancel";
  bVar10 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Cancel",(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (*(char *)&__this_07->rgctx_data != '\0') {
      pSStack_88 = (Settings_StringSetting_o *)0x436e8d8;
      UI_PresetSkinEditPopup__RestoreBackup((UI_PresetSkinEditPopup_o *)__this_07,pMVar19);
    }
    pvVar4 = (__this_07->_1).image;
    (**(code **)((long)pvVar4 + 0x298))(__this_07,*(undefined8 *)((long)pvVar4 + 0x2a0));
    return;
  }
  pSStack_88 = (Settings_StringSetting_o *)0x436e909;
  pMVar19 = "Clear";
  bVar10 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Clear",(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    UI_PresetSkinEditPopup__OnClearClick((UI_PresetSkinEditPopup_o *)__this_07,pMVar19);
    return;
  }
  pSStack_88 = (Settings_StringSetting_o *)0x436e92d;
  bVar10 = System_String__op_Equality((System_String_o *)a,"Save",(MethodInfo *)0x0);
  __this_08 = pUStack_70;
  uStack_a0 = CONCAT44(extraout_var,bVar10);
  if ((char)bVar10 == '\0') {
    return;
  }
  pUStack_80 = pUStack_70;
  pSStack_98 = (System_String_o *)pUStack_78;
  pIStack_90 = __this_06;
  pSStack_88 = (Settings_StringSetting_o *)ppMVar21;
  pUStack_78 = (UI_ElementStyle_o *)x;
  pUStack_70 = (UI_PresetSkinEditPopup_o *)plVar18;
  if (g_data_057ae1f5 == '\0') {
    pSStack_a8 = (Settings_StringSetting_o *)0x436ebe7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    pSStack_a8 = (Settings_StringSetting_o *)0x436ebf3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    pSStack_a8 = (Settings_StringSetting_o *)0x436ebff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pSStack_a8 = (Settings_StringSetting_o *)0x436ec0b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pSStack_a8 = (Settings_StringSetting_o *)0x436ec17;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    pSStack_a8 = (Settings_StringSetting_o *)0x436ec23;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_a8 = (Settings_StringSetting_o *)0x436ec2f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSStack_a8 = (Settings_StringSetting_o *)0x436ec3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSStack_a8 = (Settings_StringSetting_o *)0x436ec47;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    pSStack_a8 = (Settings_StringSetting_o *)0x436ec53;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pSStack_a8 = (Settings_StringSetting_o *)0x436ec5f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae1f5 = '\x01';
  }
  if ((__this_07->_1).implementedInterfaces == (Il2CppClass **)0x0) {
    return;
  }
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_07->_1).interfaceOffsets;
  pSVar20 = (Settings_StringSetting_o *)0x0;
  if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0436efec:
    pSStack_a8 = (Settings_StringSetting_o *)0x436eff1;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStack_a8 = (Settings_StringSetting_o *)0x436ec8f;
    System_Collections_Generic_Dictionary_object__object___Clear(pSVar7,MethodInfo_Void_Clear);
    pSVar20 = (Settings_StringSetting_o *)0x0;
    if (__this_07->static_fields == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
    goto label_0436efec;
    pSStack_a8 = (Settings_StringSetting_o *)0x436ecae;
    System_Collections_Generic_Dictionary_object__float___Clear(__this_07->static_fields,MethodInfo_Void_Clear);
    *(undefined1 *)&__this_07->rgctx_data = 0;
    pSStack_a8 = (Settings_StringSetting_o *)0x436ecbc;
    bVar10 = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
    if ((char)bVar10 == '\0') goto label_0436ef6f;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      pSStack_a8 = (Settings_StringSetting_o *)0x436ecfe;
      il2cpp_runtime_helper_02337ed0();
      pUVar17 = *(UI_PresetSkinEditPopup_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar17 != (UI_PresetSkinEditPopup_o *)0x0) goto label_0436ed12;
label_0436ed32:
      __this_08 = (UI_PresetSkinEditPopup_o *)0x0;
      iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      pUVar17 = *(UI_PresetSkinEditPopup_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar17 == (UI_PresetSkinEditPopup_o *)0x0) goto label_0436ed32;
label_0436ed12:
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((pUVar17->klass->_2).naturalAligment < bVar1) goto label_0436ed32;
      __this_08 = (UI_PresetSkinEditPopup_o *)0x0;
      if ((pUVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
        __this_08 = pUVar17;
      }
      iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar2 == 0) {
      pSStack_a8 = (Settings_StringSetting_o *)0x436ed4e;
      il2cpp_runtime_helper_02337ed0();
    }
    plVar18 = &TypeInfo_Object;
    pSStack_a8 = (Settings_StringSetting_o *)0x436ed5a;
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)__this_08,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') goto label_0436ef6f;
    pSVar20 = *(Settings_StringSetting_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pSVar20 == (Settings_StringSetting_o *)0x0) goto label_0436efec;
    bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    if ((bVar1 <= (pSVar20->klass->_2).naturalAligment) &&
       ((pSVar20->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorGameManager)) {
      pUVar14 = (UI_ElementStyle_o *)pSVar20[1].fields.DefaultValue;
      if (pUVar14 == (UI_ElementStyle_o *)0x0) {
label_0436eddb:
        x = (System_String_o **)0x0;
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
        if ((pUVar14->klass->_2).naturalAligment < bVar1) goto label_0436eddb;
        x = (System_String_o **)(UI_ElementStyle_o *)0x0;
        if ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DummyHuman) {
          x = (System_String_o **)pUVar14;
        }
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
      }
      if (iVar2 == 0) {
        pSStack_a8 = (Settings_StringSetting_o *)0x436edf0;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_a8 = (Settings_StringSetting_o *)0x436edfc;
      bVar10 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
label_0436ef6f:
        pvVar4 = (__this_07->_1).image;
        (**(code **)((long)pvVar4 + 0x298))(__this_07,*(undefined8 *)((long)pvVar4 + 0x2a0));
        return;
      }
      pSStack_a8 = (Settings_StringSetting_o *)0x436ee0b;
      uVar9 = UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview((MethodInfo *)0x0);
      __this_06 = (Il2CppClass *)(ulong)uVar9;
      pSVar20 = (Settings_StringSetting_o *)0x0;
      pSStack_a8 = (Settings_StringSetting_o *)0x436ee15;
      uVar11 = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
      plVar18 = (long *)(ulong)uVar11;
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if ((((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
          (pSVar20 = *(Settings_StringSetting_o **)(lVar3 + 0x60), pSVar20 != (Settings_StringSetting_o *)0x0)
          ) && (*(long *)(lVar3 + 0x58) != 0)) {
        uStack_a0 = CONCAT17(*(undefined1 *)((long)&(pSVar20->fields).DefaultValue + 1),
                             CONCAT16(*(undefined1 *)(*(long *)(lVar3 + 0x58) + 0x11),(undefined6)uStack_a0));
        ppMVar21 = &MethodInfo_Void_set_Value;
        pSStack_a8 = (Settings_StringSetting_o *)0x436ee7e;
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar20,uVar9 & 0xff,MethodInfo_Void_set_Value);
        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
        if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
           (pSVar20 = *(Settings_StringSetting_o **)(lVar3 + 0x58), pSVar20 != (Settings_StringSetting_o *)0x0
           )) {
          pSStack_a8 = (Settings_StringSetting_o *)0x436eec3;
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)pSVar20,uVar11 & 0xff,MethodInfo_Void_set_Value);
          if ((UI_ElementStyle_o *)x != (UI_ElementStyle_o *)0x0) {
            __this_01 = *(Characters_HumanSetup_o **)&((UI_ElementStyle_o *)((long)x + 0x28))->fields;
            pSVar20 = (Settings_StringSetting_o *)0x0;
            if (__this_01 != (Characters_HumanSetup_o *)0x0) {
              pSStack_a8 = (Settings_StringSetting_o *)0x436eef0;
              Characters_HumanSetup__Load
                        (__this_01,(__this_01->fields).CustomSet,(__this_01->fields).Weapon,0,
                         (MethodInfo *)0x0);
              if (g_data_057ae1f6 == '\0') {
                pSStack_a8 = (Settings_StringSetting_o *)0x436ef05;
                il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
                g_data_057ae1f6 = '\x01';
              }
              pSStack_a8 = (Settings_StringSetting_o *)0x436ef1b;
              plVar18 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
              pSStack_a8 = (Settings_StringSetting_o *)0x436ef28;
              pSVar20 = (Settings_StringSetting_o *)plVar18;
              System_Object___ctor((Il2CppObject *)plVar18,(MethodInfo *)0x0);
              *(undefined4 *)&(((Settings_StringSetting_o *)plVar18)->fields).DefaultValue = 0;
              if ((Settings_StringSetting_o *)plVar18 != (Settings_StringSetting_o *)0x0) {
                pSVar20 = (Settings_StringSetting_o *)
                          &(((Settings_StringSetting_o *)plVar18)->fields).MaxLength;
                *(System_String_o ***)&(((Settings_StringSetting_o *)plVar18)->fields).MaxLength = x;
                pSStack_a8 = (Settings_StringSetting_o *)0x436ef4b;
                il2cpp_runtime_helper_022b4080(pSVar20,x);
                *(undefined1 *)&((Settings_StringSetting_o *)((long)plVar18 + 0x28))->klass = uStack_a0._7_1_;
                *(undefined1 *)((long)&((Settings_StringSetting_o *)((long)plVar18 + 0x28))->klass + 1) =
                     uStack_a0._6_1_;
                if (__this_08 != (UI_PresetSkinEditPopup_o *)0x0) {
                  pSStack_a8 = (Settings_StringSetting_o *)0x436ef6f;
                  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                            ((UnityEngine_MonoBehaviour_o *)__this_08,
                             (System_Collections_IEnumerator_o *)plVar18,(MethodInfo *)0x0);
                  goto label_0436ef6f;
                }
              }
            }
          }
        }
      }
      goto label_0436efec;
    }
  }
  pSStack_a8 = (Settings_StringSetting_o *)0x436eff6;
  il2cpp_runtime_helper_022b2fd0();
  pIStack_d0 = __this_07;
  pIStack_c8 = __this_06;
  pSStack_c0 = (Settings_StringSetting_o *)ppMVar21;
  pUStack_b8 = __this_08;
  pUStack_b0 = (UI_ElementStyle_o *)x;
  pSStack_a8 = (Settings_StringSetting_o *)plVar18;
  if (g_data_057ae1f3 == '\0') {
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
    g_data_057ae1f3 = '\x01';
  }
  _Var26.genericMethod = (InvokerMethod)0x0;
  pIVar27 = (Il2CppObject *)0x0;
  pSVar24 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar25 = (Il2CppRGCTXData *)0x0;
  pSVar28 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)pSVar20[4].fields.DefaultValue;
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear(pSVar7,MethodInfo_Void_Clear);
    pSVar8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar20[4].fields._value;
    if (pSVar8 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___Clear(pSVar8,MethodInfo_Void_Clear);
      if ((pSVar20[4].monitor != (void *)0x0) &&
         (pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    ((long)pSVar20[4].monitor + 0x18),
         pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_f8,pSVar7,
                   MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
        pSVar24 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_f8._0_8_;
        pIVar25 = (Il2CppRGCTXData *)auStack_f8._8_8_;
        _Var26 = _Stack_e8;
        pIVar27 = pIStack_e0;
        pSVar28 = pSStack_d8;
label_0436f180:
        __this_02.fields._8_8_ = pIVar25;
        __this_02.fields._dictionary = pSVar24;
        __this_02.fields._current.fields.key = _Var26.genericMethod;
        __this_02.fields._current.fields.value = pIVar27;
        __this_02.fields._32_8_ = pSVar28;
        bVar10 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                           (__this_02,(MethodInfo_3251160 *)&stack0xfffffffffffffed8);
        if ((char)bVar10 != '\0') {
          auVar22 = il2cpp_runtime_helper_03343020(&stack0xfffffffffffffed8);
          setting = auVar22._8_8_;
          iVar12 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
          if (iVar12 == 3) {
            if (setting == (Settings_BaseSetting_o *)0x0) {
label_0436f2b4:
              il2cpp_runtime_helper_022b2c90();
label_0436f2b9:
              il2cpp_runtime_helper_022b2c90();
              goto label_0436f2be;
            }
            bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
            if (((setting->klass->_2).naturalAligment < bVar1) ||
               ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) {
              il2cpp_runtime_helper_022b2fd0(setting);
              goto label_0436f2ac;
            }
            pSVar8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar20[4].fields._value;
            if (pSVar8 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0436f2b9;
            System_Collections_Generic_Dictionary_object__float___set_Item
                      (pSVar8,auVar22._0_8_,*(float *)((long)&setting[1].klass + 4),MethodInfo_Void_set_Item);
          }
          else if (iVar12 == 4) {
            if (setting != (Settings_BaseSetting_o *)0x0) {
              bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
              if (((setting->klass->_2).naturalAligment < bVar1) ||
                 ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) {
label_0436f2ac:
                il2cpp_runtime_helper_022b2fd0(setting);
                goto label_0436f2b4;
              }
              pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
                       pSVar20[4].fields.DefaultValue;
              if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar7,auVar22._0_8_,setting[1].monitor,MethodInfo_Void_set_Item);
                goto label_0436f180;
              }
label_0436f2be:
              il2cpp_runtime_helper_022b2c90();
            }
            il2cpp_runtime_helper_022b2c90();
            goto label_0436f2c8;
          }
          goto label_0436f180;
        }
        __this_03.fields._8_8_ = pIVar25;
        __this_03.fields._dictionary = pSVar24;
        __this_03.fields._current.fields.key = _Var26.genericMethod;
        __this_03.fields._current.fields.value = pIVar27;
        __this_03.fields._32_8_ = pSVar28;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_03,(MethodInfo_3251280 *)&stack0xfffffffffffffed8);
        goto label_0436f28d;
      }
    }
  }
label_0436f2c8:
  auVar23 = il2cpp_runtime_helper_022b2c90();
  if (auVar23._8_4_ == 1) {
    plVar18 = (long *)__cxa_begin_catch(auVar23._0_8_);
    lVar3 = *plVar18;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar25;
    __this_04.fields._dictionary = pSVar24;
    __this_04.fields._current.fields.key = _Var26.genericMethod;
    __this_04.fields._current.fields.value = pIVar27;
    __this_04.fields._32_8_ = pSVar28;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_04,(MethodInfo_3251280 *)&stack0xfffffffffffffed8);
    if (lVar3 == 0) {
label_0436f28d:
      *(undefined1 *)&pSVar20[4].fields.MaxLength = 1;
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_05.fields._8_8_ = pIVar25;
  __this_05.fields._dictionary = pSVar24;
  __this_05.fields._current.fields.key = _Var26.genericMethod;
  __this_05.fields._current.fields.value = pIVar27;
  __this_05.fields._32_8_ = pSVar28;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            (__this_05,(MethodInfo_3251280 *)&stack0xfffffffffffffed8);
  _Unwind_Resume(auVar23._0_8_);
}


// UI.PresetSkinEditPopup$$OnButtonClick
// il2cpp: void UI_PresetSkinEditPopup__OnButtonClick (UI_PresetSkinEditPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x436e870

void UI_PresetSkinEditPopup__OnButtonClick
               (UI_PresetSkinEditPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  UnityEngine_Object_o *pUVar4;
  long lVar5;
  Characters_HumanSetup_o *__this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_05;
  bool_conflict bVar6;
  uint uVar7;
  uint uVar8;
  int32_t iVar9;
  undefined4 extraout_var;
  UnityEngine_MonoBehaviour_o *pUVar10;
  long *plVar11;
  Settings_BaseSetting_o *setting;
  long *unaff_RBP;
  MethodInfo *pMVar12;
  Settings_TypedSetting_bool__o *__this_06;
  ulong unaff_R12;
  MethodInfo_2A23E90 **unaff_R13;
  UnityEngine_MonoBehaviour_o *unaff_R14;
  UnityEngine_Object_o *unaff_R15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar15;
  Il2CppRGCTXData *pIVar16;
  _union_231609 _Var17;
  Il2CppObject *pIVar18;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar19;
  undefined1 auStack_90 [16];
  _union_231609 _Stack_80;
  Il2CppObject *pIStack_78;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSStack_70;
  UI_PresetSkinEditPopup_o *pUStack_68;
  ulong uStack_60;
  MethodInfo_2A23E90 **ppMStack_58;
  UnityEngine_MonoBehaviour_o *pUStack_50;
  UnityEngine_Object_o *pUStack_48;
  Settings_TypedSetting_bool__o *pSStack_40;
  undefined8 uStack_38;
  
  if (g_data_057ae1f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae1f1 = '\x01';
  }
  pMVar12 = "Cancel";
  bVar6 = System_String__op_Equality(name,(System_String_o *)"Cancel",(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if ((char)(__this->fields)._hasBackup != '\0') {
      UI_PresetSkinEditPopup__RestoreBackup(__this,pMVar12);
    }
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  pMVar12 = "Clear";
  bVar6 = System_String__op_Equality(name,(System_String_o *)"Clear",(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    UI_PresetSkinEditPopup__OnClearClick(__this,pMVar12);
    return;
  }
  bVar6 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  uStack_38 = CONCAT44(extraout_var,bVar6);
  if ((char)bVar6 == '\0') {
    return;
  }
  if (g_data_057ae1f5 == '\0') {
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ebe7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ebf3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ebff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec0b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec17;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec23;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec2f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec47;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec53;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec5f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae1f5 = '\x01';
  }
  if ((__this->fields)._currentPreset == (Settings_HumanCustomSet_o *)0x0) {
    return;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
  __this_06 = (Settings_TypedSetting_bool__o *)0x0;
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0436efec:
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436eff1;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec8f;
    System_Collections_Generic_Dictionary_object__object___Clear(pSVar3,MethodInfo_Void_Clear);
    __this_00 = (__this->fields)._backupFloatValues;
    __this_06 = (Settings_TypedSetting_bool__o *)0x0;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_0436efec;
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ecae;
    System_Collections_Generic_Dictionary_object__float___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Void_Clear);
    *(undefined1 *)&(__this->fields)._hasBackup = 0;
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ecbc;
    bVar6 = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
    if ((char)bVar6 == '\0') goto label_0436ef6f;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ecfe;
      il2cpp_runtime_helper_02337ed0();
      pUVar10 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar10 != (UnityEngine_MonoBehaviour_o *)0x0) goto label_0436ed12;
label_0436ed32:
      unaff_R14 = (UnityEngine_MonoBehaviour_o *)0x0;
      iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      pUVar10 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar10 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_0436ed32;
label_0436ed12:
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((pUVar10->klass->_2).naturalAligment < bVar1) goto label_0436ed32;
      unaff_R14 = (UnityEngine_MonoBehaviour_o *)0x0;
      if ((pUVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
        unaff_R14 = pUVar10;
      }
      iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar2 == 0) {
      pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ed4e;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBP = &TypeInfo_Object;
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ed5a;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') goto label_0436ef6f;
    __this_06 = *(Settings_TypedSetting_bool__o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_06 == (Settings_TypedSetting_bool__o *)0x0) goto label_0436efec;
    bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    if ((bVar1 <= (__this_06->klass->_2).naturalAligment) &&
       ((__this_06->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorGameManager)) {
      pUVar4 = __this_06[2].monitor;
      if (pUVar4 == (UnityEngine_Object_o *)0x0) {
label_0436eddb:
        unaff_R15 = (UnityEngine_Object_o *)0x0;
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
        if ((pUVar4->klass->_2).naturalAligment < bVar1) goto label_0436eddb;
        unaff_R15 = (UnityEngine_Object_o *)0x0;
        if ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DummyHuman) {
          unaff_R15 = pUVar4;
        }
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
      }
      if (iVar2 == 0) {
        pSStack_40 = (Settings_TypedSetting_bool__o *)0x436edf0;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_40 = (Settings_TypedSetting_bool__o *)0x436edfc;
      bVar6 = UnityEngine_Object__op_Inequality(unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
label_0436ef6f:
        (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
        return;
      }
      pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ee0b;
      uVar7 = UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview((MethodInfo *)0x0);
      unaff_R12 = (ulong)uVar7;
      __this_06 = (Settings_TypedSetting_bool__o *)0x0;
      pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ee15;
      uVar8 = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
      unaff_RBP = (long *)(ulong)uVar8;
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if ((((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) &&
          (__this_06 = *(Settings_TypedSetting_bool__o **)(lVar5 + 0x60),
          __this_06 != (Settings_TypedSetting_bool__o *)0x0)) && (*(long *)(lVar5 + 0x58) != 0)) {
        uStack_38 = CONCAT17(*(undefined1 *)((long)&(__this_06->fields).DefaultValue + 1),
                             CONCAT16(*(undefined1 *)(*(long *)(lVar5 + 0x58) + 0x11),(undefined6)uStack_38));
        unaff_R13 = &MethodInfo_Void_set_Value;
        pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ee7e;
        Settings_TypedSetting_bool___set_Value(__this_06,uVar7 & 0xff,MethodInfo_Void_set_Value);
        lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
        if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) &&
           (__this_06 = *(Settings_TypedSetting_bool__o **)(lVar5 + 0x58),
           __this_06 != (Settings_TypedSetting_bool__o *)0x0)) {
          pSStack_40 = (Settings_TypedSetting_bool__o *)0x436eec3;
          Settings_TypedSetting_bool___set_Value(__this_06,uVar8 & 0xff,MethodInfo_Void_set_Value);
          if (unaff_R15 != (UnityEngine_Object_o *)0x0) {
            __this_01 = unaff_R15[2].monitor;
            __this_06 = (Settings_TypedSetting_bool__o *)0x0;
            if (__this_01 != (Characters_HumanSetup_o *)0x0) {
              pSStack_40 = (Settings_TypedSetting_bool__o *)0x436eef0;
              Characters_HumanSetup__Load
                        (__this_01,(__this_01->fields).CustomSet,(__this_01->fields).Weapon,0,
                         (MethodInfo *)0x0);
              if (g_data_057ae1f6 == '\0') {
                pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ef05;
                il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
                g_data_057ae1f6 = '\x01';
              }
              pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ef1b;
              unaff_RBP = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
              pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ef28;
              __this_06 = (Settings_TypedSetting_bool__o *)unaff_RBP;
              System_Object___ctor((Il2CppObject *)unaff_RBP,(MethodInfo *)0x0);
              (((Settings_TypedSetting_bool__o *)unaff_RBP)->fields).DefaultValue = 0;
              if ((Settings_TypedSetting_bool__o *)unaff_RBP != (Settings_TypedSetting_bool__o *)0x0) {
                __this_06 = (Settings_TypedSetting_bool__o *)
                            &((Settings_TypedSetting_bool__o *)((long)unaff_RBP + 0x18))->monitor;
                ((Settings_TypedSetting_bool__o *)((long)unaff_RBP + 0x18))->monitor = unaff_R15;
                pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ef4b;
                il2cpp_runtime_helper_022b4080(__this_06,unaff_R15);
                *(undefined1 *)
                 &(((Settings_TypedSetting_bool__o *)((long)unaff_RBP + 0x18))->fields).DefaultValue =
                     uStack_38._7_1_;
                *(undefined1 *)
                 ((long)&(((Settings_TypedSetting_bool__o *)((long)unaff_RBP + 0x18))->fields).DefaultValue +
                 1) = uStack_38._6_1_;
                if (unaff_R14 != (UnityEngine_MonoBehaviour_o *)0x0) {
                  pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ef6f;
                  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                            (unaff_R14,(System_Collections_IEnumerator_o *)unaff_RBP,(MethodInfo *)0x0);
                  goto label_0436ef6f;
                }
              }
            }
          }
        }
      }
      goto label_0436efec;
    }
  }
  pSStack_40 = (Settings_TypedSetting_bool__o *)0x436eff6;
  il2cpp_runtime_helper_022b2fd0();
  pUStack_68 = __this;
  uStack_60 = unaff_R12;
  ppMStack_58 = unaff_R13;
  pUStack_50 = unaff_R14;
  pUStack_48 = unaff_R15;
  pSStack_40 = (Settings_TypedSetting_bool__o *)unaff_RBP;
  if (g_data_057ae1f3 == '\0') {
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
    g_data_057ae1f3 = '\x01';
  }
  _Var17.genericMethod = (InvokerMethod)0x0;
  pIVar18 = (Il2CppObject *)0x0;
  pSVar15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar16 = (Il2CppRGCTXData *)0x0;
  pSVar19 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  if (__this_06[7].monitor != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear(__this_06[7].monitor,MethodInfo_Void_Clear);
    if (__this_06[7].fields != (Settings_TypedSetting_bool__Fields)0x0) {
      System_Collections_Generic_Dictionary_object__float___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06[7].fields,MethodInfo_Void_Clear);
      if ((__this_06[7].klass != (Settings_TypedSetting_bool__c *)0x0) &&
         (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   ((__this_06[7].klass)->_1).namespaze,
         pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_90,pSVar3,
                   MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
        pSVar15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_90._0_8_;
        pIVar16 = (Il2CppRGCTXData *)auStack_90._8_8_;
        _Var17 = _Stack_80;
        pIVar18 = pIStack_78;
        pSVar19 = pSStack_70;
label_0436f180:
        __this_02.fields._8_8_ = pIVar16;
        __this_02.fields._dictionary = pSVar15;
        __this_02.fields._current.fields.key = _Var17.genericMethod;
        __this_02.fields._current.fields.value = pIVar18;
        __this_02.fields._32_8_ = pSVar19;
        bVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                          (__this_02,(MethodInfo_3251160 *)&stack0xffffffffffffff40);
        if ((char)bVar6 != '\0') {
          auVar13 = il2cpp_runtime_helper_03343020(&stack0xffffffffffffff40);
          setting = auVar13._8_8_;
          iVar9 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
          if (iVar9 == 3) {
            if (setting == (Settings_BaseSetting_o *)0x0) {
label_0436f2b4:
              il2cpp_runtime_helper_022b2c90();
label_0436f2b9:
              il2cpp_runtime_helper_022b2c90();
              goto label_0436f2be;
            }
            bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
            if (((setting->klass->_2).naturalAligment < bVar1) ||
               ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) {
              il2cpp_runtime_helper_022b2fd0(setting);
              goto label_0436f2ac;
            }
            if (__this_06[7].fields == (Settings_TypedSetting_bool__Fields)0x0) goto label_0436f2b9;
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06[7].fields,
                       auVar13._0_8_,*(float *)((long)&setting[1].klass + 4),MethodInfo_Void_set_Item);
          }
          else if (iVar9 == 4) {
            if (setting != (Settings_BaseSetting_o *)0x0) {
              bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
              if (((setting->klass->_2).naturalAligment < bVar1) ||
                 ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) {
label_0436f2ac:
                il2cpp_runtime_helper_022b2fd0(setting);
                goto label_0436f2b4;
              }
              if (__this_06[7].monitor != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (__this_06[7].monitor,auVar13._0_8_,setting[1].monitor,MethodInfo_Void_set_Item);
                goto label_0436f180;
              }
label_0436f2be:
              il2cpp_runtime_helper_022b2c90();
            }
            il2cpp_runtime_helper_022b2c90();
            goto label_0436f2c8;
          }
          goto label_0436f180;
        }
        __this_03.fields._8_8_ = pIVar16;
        __this_03.fields._dictionary = pSVar15;
        __this_03.fields._current.fields.key = _Var17.genericMethod;
        __this_03.fields._current.fields.value = pIVar18;
        __this_03.fields._32_8_ = pSVar19;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff40);
        goto label_0436f28d;
      }
    }
  }
label_0436f2c8:
  auVar14 = il2cpp_runtime_helper_022b2c90();
  if (auVar14._8_4_ == 1) {
    plVar11 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar5 = *plVar11;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar16;
    __this_04.fields._dictionary = pSVar15;
    __this_04.fields._current.fields.key = _Var17.genericMethod;
    __this_04.fields._current.fields.value = pIVar18;
    __this_04.fields._32_8_ = pSVar19;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff40);
    if (lVar5 == 0) {
label_0436f28d:
      *(undefined1 *)&__this_06[8].klass = 1;
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_05.fields._8_8_ = pIVar16;
  __this_05.fields._dictionary = pSVar15;
  __this_05.fields._current.fields.key = _Var17.genericMethod;
  __this_05.fields._current.fields.value = pIVar18;
  __this_05.fields._32_8_ = pSVar19;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            (__this_05,(MethodInfo_3251280 *)&stack0xffffffffffffff40);
  _Unwind_Resume(auVar14._0_8_);
}


// UI.PresetSkinEditPopup$$OnClearClick
// il2cpp: void UI_PresetSkinEditPopup__OnClearClick (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436e980

void UI_PresetSkinEditPopup__OnClearClick(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  bool_conflict bVar4;
  uint uVar5;
  System_Object_array *pSVar6;
  long *plVar7;
  long *extraout_RDX;
  uint uVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar10;
  Il2CppType **ppIVar11;
  Il2CppRGCTXData *pIVar12;
  _union_231609 _Var13;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar14;
  undefined1 local_50 [16];
  Il2CppRGCTXData *local_40;
  _union_231609 _Stack_38;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_30;
  
  if (g_data_057ae1f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponentsInChildren_InputSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Value);
    g_data_057ae1f2 = '\x01';
  }
  pIVar12 = (Il2CppRGCTXData *)0x0;
  _Var13.genericMethod = (char *)0x0;
  pSVar10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  ppIVar11 = (Il2CppType **)0x0;
  pSVar14 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  if ((char)(__this->fields)._hasBackup == '\0') {
    UI_PresetSkinEditPopup__CreateBackup(__this,method);
  }
  pSVar1 = (__this->fields)._currentPreset;
  if ((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar1->fields).TypedSettings,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_50,__this_00,
               MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
    pSVar10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_50._0_8_;
    ppIVar11 = (Il2CppType **)local_50._8_8_;
    pIVar12 = local_40;
    _Var13 = _Stack_38;
    pSVar14 = local_30;
    while( true ) {
      __this_01.fields._8_8_ = ppIVar11;
      __this_01.fields._dictionary = pSVar10;
      __this_01.fields._current.fields.key = (Il2CppObject *)pIVar12;
      __this_01.fields._current.fields.value = _Var13.genericMethod;
      __this_01.fields._32_8_ = pSVar14;
      bVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251160 *)&stack0xffffffffffffff88);
      if ((char)bVar4 == '\0') {
        __this_02.fields._8_8_ = ppIVar11;
        __this_02.fields._dictionary = pSVar10;
        __this_02.fields._current.fields.key = (Il2CppObject *)pIVar12;
        __this_02.fields._current.fields.value = _Var13.genericMethod;
        __this_02.fields._32_8_ = pSVar14;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff88);
        goto label_0436eaba;
      }
      il2cpp_runtime_helper_03343020(&stack0xffffffffffffff88,MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
      if (extraout_RDX == (long *)0x0) break;
      (**(code **)(*extraout_RDX + 0x178))(extraout_RDX,*(undefined8 *)(*extraout_RDX + 0x180));
    }
    il2cpp_runtime_helper_022b2c90();
  }
label_0436eb1d:
  il2cpp_runtime_helper_022b2c90();
  do {
    auVar9 = il2cpp_runtime_helper_022b2ca0();
    if (auVar9._8_4_ != 1) {
label_0436eb80:
      __this_04.fields._8_8_ = ppIVar11;
      __this_04.fields._dictionary = pSVar10;
      __this_04.fields._current.fields.key = (Il2CppObject *)pIVar12;
      __this_04.fields._current.fields.value = _Var13.genericMethod;
      __this_04.fields._32_8_ = pSVar14;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff88);
      _Unwind_Resume(auVar9._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar3 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = ppIVar11;
    __this_03.fields._dictionary = pSVar10;
    __this_03.fields._current.fields.key = (Il2CppObject *)pIVar12;
    __this_03.fields._current.fields.value = _Var13.genericMethod;
    __this_03.fields._32_8_ = pSVar14;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff88);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_0436eb80;
    }
label_0436eaba:
    pSVar6 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                       ((UnityEngine_Component_o *)__this,MethodInfo_InputSettingElement_GetComponentsInChildren_InputSetting);
    if (pSVar6 == (System_Object_array *)0x0) goto label_0436eb1d;
    uVar5 = (uint)pSVar6->max_length;
    if ((int)uVar5 < 1) {
      return;
    }
    uVar8 = 0;
    while (uVar8 < uVar5) {
      pIVar2 = pSVar6->m_Items[(int)uVar8];
      if (pIVar2 == (Il2CppObject *)0x0) goto label_0436eb1d;
      (*pIVar2->klass->vtable[6].methodPtr)(pIVar2,pIVar2->klass->vtable[6].method);
      uVar8 = uVar8 + 1;
      uVar5 = (uint)pSVar6->max_length;
      if ((int)uVar5 <= (int)uVar8) {
        return;
      }
    }
  } while( true );
}


// UI.PresetSkinEditPopup$$CreateBackup
// il2cpp: void UI_PresetSkinEditPopup__CreateBackup (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436f000

void UI_PresetSkinEditPopup__CreateBackup(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  Settings_HumanCustomSet_o *pSVar4;
  long lVar5;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  bool_conflict bVar6;
  int32_t iVar7;
  long *plVar8;
  Settings_BaseSetting_o *setting;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar11;
  Il2CppRGCTXData *pIVar12;
  _union_231609 _Var13;
  Il2CppObject *pIVar14;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar15;
  undefined1 local_58 [16];
  _union_231609 local_48;
  Il2CppObject *pIStack_40;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_38;
  
  if (g_data_057ae1f3 == '\0') {
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
    g_data_057ae1f3 = '\x01';
  }
  _Var13.genericMethod = (InvokerMethod)0x0;
  pIVar14 = (Il2CppObject *)0x0;
  pSVar11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar12 = (Il2CppRGCTXData *)0x0;
  pSVar15 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear(pSVar2,MethodInfo_Void_Clear);
    pSVar3 = (__this->fields)._backupFloatValues;
    if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,MethodInfo_Void_Clear);
      pSVar4 = (__this->fields)._currentPreset;
      if ((pSVar4 != (Settings_HumanCustomSet_o *)0x0) &&
         (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar4->fields).TypedSettings,
         pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,pSVar2,
                   MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
        pSVar11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
        pIVar12 = (Il2CppRGCTXData *)local_58._8_8_;
        _Var13 = local_48;
        pIVar14 = pIStack_40;
        pSVar15 = local_38;
label_0436f180:
        __this_00.fields._8_8_ = pIVar12;
        __this_00.fields._dictionary = pSVar11;
        __this_00.fields._current.fields.key = _Var13.genericMethod;
        __this_00.fields._current.fields.value = pIVar14;
        __this_00.fields._32_8_ = pSVar15;
        bVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                          (__this_00,(MethodInfo_3251160 *)&stack0xffffffffffffff78);
        if ((char)bVar6 != '\0') {
          auVar9 = il2cpp_runtime_helper_03343020(&stack0xffffffffffffff78);
          setting = auVar9._8_8_;
          iVar7 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
          if (iVar7 == 3) {
            if (setting == (Settings_BaseSetting_o *)0x0) {
label_0436f2b4:
              il2cpp_runtime_helper_022b2c90();
label_0436f2b9:
              il2cpp_runtime_helper_022b2c90();
              goto label_0436f2be;
            }
            bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
            if (((setting->klass->_2).naturalAligment < bVar1) ||
               ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) {
              il2cpp_runtime_helper_022b2fd0(setting);
              goto label_0436f2ac;
            }
            pSVar3 = (__this->fields)._backupFloatValues;
            if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_0436f2b9;
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,auVar9._0_8_,
                       *(float *)((long)&setting[1].klass + 4),MethodInfo_Void_set_Item);
          }
          else if (iVar7 == 4) {
            if (setting != (Settings_BaseSetting_o *)0x0) {
              bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
              if (((setting->klass->_2).naturalAligment < bVar1) ||
                 ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) {
label_0436f2ac:
                il2cpp_runtime_helper_022b2fd0(setting);
                goto label_0436f2b4;
              }
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._backupValues;
              if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar2,auVar9._0_8_,setting[1].monitor,MethodInfo_Void_set_Item);
                goto label_0436f180;
              }
label_0436f2be:
              il2cpp_runtime_helper_022b2c90();
            }
            il2cpp_runtime_helper_022b2c90();
            goto label_0436f2c8;
          }
          goto label_0436f180;
        }
        __this_01.fields._8_8_ = pIVar12;
        __this_01.fields._dictionary = pSVar11;
        __this_01.fields._current.fields.key = _Var13.genericMethod;
        __this_01.fields._current.fields.value = pIVar14;
        __this_01.fields._32_8_ = pSVar15;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_01,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
        goto label_0436f28d;
      }
    }
  }
label_0436f2c8:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar5 = *plVar8;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar12;
    __this_02.fields._dictionary = pSVar11;
    __this_02.fields._current.fields.key = _Var13.genericMethod;
    __this_02.fields._current.fields.value = pIVar14;
    __this_02.fields._32_8_ = pSVar15;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
    if (lVar5 == 0) {
label_0436f28d:
      *(undefined1 *)&(__this->fields)._hasBackup = 1;
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_03.fields._8_8_ = pIVar12;
  __this_03.fields._dictionary = pSVar11;
  __this_03.fields._current.fields.key = _Var13.genericMethod;
  __this_03.fields._current.fields.value = pIVar14;
  __this_03.fields._32_8_ = pSVar15;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar10._0_8_);
}


// UI.PresetSkinEditPopup$$RestoreBackup
// il2cpp: void UI_PresetSkinEditPopup__RestoreBackup (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436f3a0

void UI_PresetSkinEditPopup__RestoreBackup(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSet_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__float__o *pSVar4;
  long lVar5;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  bool_conflict bVar6;
  int32_t iVar7;
  uint uVar8;
  Il2CppObject *pIVar9;
  System_Object_array *pSVar10;
  long *plVar11;
  uint uVar12;
  Settings_TypedSetting_T__o *unaff_R12;
  float value;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar15;
  Il2CppRGCTXData *pIVar16;
  _union_231609 _Var17;
  Il2CppObject *pIVar18;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar19;
  undefined1 local_58 [16];
  _union_231609 local_48;
  Il2CppObject *pIStack_40;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_38;
  
  if (g_data_057ae1f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponentsInChildren_InputSetting);
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
    g_data_057ae1f4 = '\x01';
  }
  _Var17.genericMethod = (InvokerMethod)0x0;
  pIVar18 = (Il2CppObject *)0x0;
  pSVar15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar16 = (Il2CppRGCTXData *)0x0;
  pSVar19 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  if (((char)(__this->fields)._hasBackup == '\0') ||
     (pSVar2 = (__this->fields)._currentPreset, pSVar2 == (Settings_HumanCustomSet_o *)0x0)) {
    return;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings;
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0436f6fa;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,pSVar3,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin)
  ;
  pSVar15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
  pIVar16 = (Il2CppRGCTXData *)local_58._8_8_;
  _Var17 = local_48;
  pIVar18 = pIStack_40;
  pSVar19 = local_38;
  while( true ) {
    do {
      while( true ) {
        __this_00.fields._8_8_ = pIVar16;
        __this_00.fields._dictionary = pSVar15;
        __this_00.fields._current.fields.key = _Var17.genericMethod;
        __this_00.fields._current.fields.value = pIVar18;
        __this_00.fields._32_8_ = pSVar19;
        bVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                          (__this_00,(MethodInfo_3251160 *)&stack0xffffffffffffff78);
        if ((char)bVar6 == '\0') {
          __this_01.fields._8_8_ = pIVar16;
          __this_01.fields._dictionary = pSVar15;
          __this_01.fields._current.fields.key = _Var17.genericMethod;
          __this_01.fields._current.fields.value = pIVar18;
          __this_01.fields._32_8_ = pSVar19;
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                    (__this_01,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
          goto label_0436f691;
        }
        auVar13 = il2cpp_runtime_helper_03343020(&stack0xffffffffffffff78);
        unaff_R12 = auVar13._8_8_;
        pIVar9 = auVar13._0_8_;
        iVar7 = Settings_SettingsUtil__GetSettingType((Settings_BaseSetting_o *)unaff_R12,(MethodInfo *)0x0);
        if (iVar7 == 3) break;
        if (iVar7 == 4) {
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0436f704;
          bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar3,pIVar9,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar6 != '\0') {
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues
            ;
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0436f723;
            pIVar9 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar3,pIVar9,MethodInfo_String_get_Item);
            if (unaff_R12 == (Settings_TypedSetting_T__o *)0x0) goto label_0436f71e;
            bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
            if ((unaff_R12->klass->_2).naturalAligment < bVar1) goto label_0436f716;
            if ((unaff_R12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting) goto label_0436f716;
            Settings_TypedSetting_object___set_Value(unaff_R12,pIVar9,MethodInfo_Void_set_Value);
          }
        }
      }
      pSVar4 = (__this->fields)._backupFloatValues;
      if (pSVar4 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_0436f709;
      bVar6 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,pIVar9,MethodInfo_Boolean_ContainsKey);
    } while ((char)bVar6 == '\0');
    pSVar4 = (__this->fields)._backupFloatValues;
    if (pSVar4 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_0436f728;
    value = System_Collections_Generic_Dictionary_object__float___get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,pIVar9,MethodInfo_Single_get_Item);
    if (unaff_R12 == (Settings_TypedSetting_T__o *)0x0) goto label_0436f72d;
    bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
    if (((unaff_R12->klass->_2).naturalAligment < bVar1) ||
       ((unaff_R12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) break;
    Settings_TypedSetting_float___set_Value((Settings_TypedSetting_float__o *)unaff_R12,value,MethodInfo_Void_set_Value);
  }
  while( true ) {
    il2cpp_runtime_helper_022b2fd0(unaff_R12);
label_0436f716:
    il2cpp_runtime_helper_022b2fd0(unaff_R12);
label_0436f71e:
    il2cpp_runtime_helper_022b2c90();
label_0436f723:
    il2cpp_runtime_helper_022b2c90();
label_0436f728:
    il2cpp_runtime_helper_022b2c90();
label_0436f72d:
    auVar14 = il2cpp_runtime_helper_022b2c90();
    if (auVar14._8_4_ != 1) break;
    plVar11 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar5 = *plVar11;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar16;
    __this_02.fields._dictionary = pSVar15;
    __this_02.fields._current.fields.key = _Var17.genericMethod;
    __this_02.fields._current.fields.value = pIVar18;
    __this_02.fields._32_8_ = pSVar19;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
    if (lVar5 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar5);
      break;
    }
label_0436f691:
    pSVar10 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                        ((UnityEngine_Component_o *)__this,MethodInfo_InputSettingElement_GetComponentsInChildren_InputSetting);
    if (pSVar10 == (System_Object_array *)0x0) {
label_0436f6fa:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      uVar8 = (uint)pSVar10->max_length;
      if ((int)uVar8 < 1) {
        return;
      }
      uVar12 = 0;
      while (uVar12 < uVar8) {
        pIVar9 = pSVar10->m_Items[(int)uVar12];
        if (pIVar9 == (Il2CppObject *)0x0) goto label_0436f6fa;
        (*pIVar9->klass->vtable[6].methodPtr)(pIVar9,pIVar9->klass->vtable[6].method);
        uVar12 = uVar12 + 1;
        uVar8 = (uint)pSVar10->max_length;
        if ((int)uVar8 <= (int)uVar12) {
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
label_0436f704:
    il2cpp_runtime_helper_022b2c90();
label_0436f709:
    il2cpp_runtime_helper_022b2c90();
  }
  __this_03.fields._8_8_ = pIVar16;
  __this_03.fields._dictionary = pSVar15;
  __this_03.fields._current.fields.key = _Var17.genericMethod;
  __this_03.fields._current.fields.value = pIVar18;
  __this_03.fields._32_8_ = pSVar19;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar14._0_8_);
}


// UI.PresetSkinEditPopup$$OnCancelClick
// il2cpp: void UI_PresetSkinEditPopup__OnCancelClick (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436e950

void UI_PresetSkinEditPopup__OnCancelClick(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if ((char)(__this->fields)._hasBackup != '\0') {
    UI_PresetSkinEditPopup__RestoreBackup(__this,method);
    in_RDX = extraout_RDX;
  }
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtableDispatch);
  return;
}


// UI.PresetSkinEditPopup$$OnSaveClick
// il2cpp: void UI_PresetSkinEditPopup__OnSaveClick (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436ebc0

void UI_PresetSkinEditPopup__OnSaveClick(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  UnityEngine_Object_o *pUVar4;
  long lVar5;
  Characters_HumanSetup_o *__this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_05;
  bool_conflict bVar6;
  uint uVar7;
  uint uVar8;
  int32_t iVar9;
  undefined8 in_RAX;
  UnityEngine_MonoBehaviour_o *pUVar10;
  long *plVar11;
  Settings_BaseSetting_o *setting;
  long *unaff_RBP;
  Settings_TypedSetting_bool__o *__this_06;
  ulong unaff_R12;
  MethodInfo_2A23E90 **unaff_R13;
  UnityEngine_MonoBehaviour_o *unaff_R14;
  UnityEngine_Object_o *unaff_R15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar14;
  Il2CppRGCTXData *pIVar15;
  _union_231609 _Var16;
  Il2CppObject *pIVar17;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar18;
  undefined1 auStack_90 [16];
  _union_231609 _Stack_80;
  Il2CppObject *pIStack_78;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSStack_70;
  UI_PresetSkinEditPopup_o *pUStack_68;
  ulong uStack_60;
  MethodInfo_2A23E90 **ppMStack_58;
  UnityEngine_MonoBehaviour_o *pUStack_50;
  UnityEngine_Object_o *pUStack_48;
  Settings_TypedSetting_bool__o *pSStack_40;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (g_data_057ae1f5 == '\0') {
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ebe7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ebf3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ebff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec0b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec17;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec23;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec2f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec47;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec53;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec5f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae1f5 = '\x01';
  }
  if ((__this->fields)._currentPreset == (Settings_HumanCustomSet_o *)0x0) {
    return;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
  __this_06 = (Settings_TypedSetting_bool__o *)0x0;
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0436efec:
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436eff1;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ec8f;
    System_Collections_Generic_Dictionary_object__object___Clear(pSVar3,MethodInfo_Void_Clear);
    __this_00 = (__this->fields)._backupFloatValues;
    __this_06 = (Settings_TypedSetting_bool__o *)0x0;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_0436efec;
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ecae;
    System_Collections_Generic_Dictionary_object__float___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Void_Clear);
    *(undefined1 *)&(__this->fields)._hasBackup = 0;
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ecbc;
    bVar6 = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
    if ((char)bVar6 == '\0') goto label_0436ef6f;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ecfe;
      il2cpp_runtime_helper_02337ed0();
      pUVar10 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar10 != (UnityEngine_MonoBehaviour_o *)0x0) goto label_0436ed12;
label_0436ed32:
      unaff_R14 = (UnityEngine_MonoBehaviour_o *)0x0;
      iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      pUVar10 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar10 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_0436ed32;
label_0436ed12:
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((pUVar10->klass->_2).naturalAligment < bVar1) goto label_0436ed32;
      unaff_R14 = (UnityEngine_MonoBehaviour_o *)0x0;
      if ((pUVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
        unaff_R14 = pUVar10;
      }
      iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar2 == 0) {
      pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ed4e;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBP = &TypeInfo_Object;
    pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ed5a;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') goto label_0436ef6f;
    __this_06 = *(Settings_TypedSetting_bool__o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_06 == (Settings_TypedSetting_bool__o *)0x0) goto label_0436efec;
    bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    if ((bVar1 <= (__this_06->klass->_2).naturalAligment) &&
       ((__this_06->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorGameManager)) {
      pUVar4 = __this_06[2].monitor;
      if (pUVar4 == (UnityEngine_Object_o *)0x0) {
label_0436eddb:
        unaff_R15 = (UnityEngine_Object_o *)0x0;
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
        if ((pUVar4->klass->_2).naturalAligment < bVar1) goto label_0436eddb;
        unaff_R15 = (UnityEngine_Object_o *)0x0;
        if ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DummyHuman) {
          unaff_R15 = pUVar4;
        }
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
      }
      if (iVar2 == 0) {
        pSStack_40 = (Settings_TypedSetting_bool__o *)0x436edf0;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_40 = (Settings_TypedSetting_bool__o *)0x436edfc;
      bVar6 = UnityEngine_Object__op_Inequality(unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
label_0436ef6f:
        (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
        return;
      }
      pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ee0b;
      uVar7 = UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview((MethodInfo *)0x0);
      unaff_R12 = (ulong)uVar7;
      __this_06 = (Settings_TypedSetting_bool__o *)0x0;
      pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ee15;
      uVar8 = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
      unaff_RBP = (long *)(ulong)uVar8;
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if ((((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) &&
          (__this_06 = *(Settings_TypedSetting_bool__o **)(lVar5 + 0x60),
          __this_06 != (Settings_TypedSetting_bool__o *)0x0)) && (*(long *)(lVar5 + 0x58) != 0)) {
        uStack_38 = CONCAT17(*(undefined1 *)((long)&(__this_06->fields).DefaultValue + 1),
                             CONCAT16(*(undefined1 *)(*(long *)(lVar5 + 0x58) + 0x11),(undefined6)uStack_38));
        unaff_R13 = &MethodInfo_Void_set_Value;
        pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ee7e;
        Settings_TypedSetting_bool___set_Value(__this_06,uVar7 & 0xff,MethodInfo_Void_set_Value);
        lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
        if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) &&
           (__this_06 = *(Settings_TypedSetting_bool__o **)(lVar5 + 0x58),
           __this_06 != (Settings_TypedSetting_bool__o *)0x0)) {
          pSStack_40 = (Settings_TypedSetting_bool__o *)0x436eec3;
          Settings_TypedSetting_bool___set_Value(__this_06,uVar8 & 0xff,MethodInfo_Void_set_Value);
          if (unaff_R15 != (UnityEngine_Object_o *)0x0) {
            __this_01 = unaff_R15[2].monitor;
            __this_06 = (Settings_TypedSetting_bool__o *)0x0;
            if (__this_01 != (Characters_HumanSetup_o *)0x0) {
              pSStack_40 = (Settings_TypedSetting_bool__o *)0x436eef0;
              Characters_HumanSetup__Load
                        (__this_01,(__this_01->fields).CustomSet,(__this_01->fields).Weapon,0,
                         (MethodInfo *)0x0);
              if (g_data_057ae1f6 == '\0') {
                pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ef05;
                il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
                g_data_057ae1f6 = '\x01';
              }
              pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ef1b;
              unaff_RBP = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
              pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ef28;
              __this_06 = (Settings_TypedSetting_bool__o *)unaff_RBP;
              System_Object___ctor((Il2CppObject *)unaff_RBP,(MethodInfo *)0x0);
              (((Settings_TypedSetting_bool__o *)unaff_RBP)->fields).DefaultValue = 0;
              if ((Settings_TypedSetting_bool__o *)unaff_RBP != (Settings_TypedSetting_bool__o *)0x0) {
                __this_06 = (Settings_TypedSetting_bool__o *)
                            &((Settings_TypedSetting_bool__o *)((long)unaff_RBP + 0x18))->monitor;
                ((Settings_TypedSetting_bool__o *)((long)unaff_RBP + 0x18))->monitor = unaff_R15;
                pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ef4b;
                il2cpp_runtime_helper_022b4080(__this_06,unaff_R15);
                *(undefined1 *)
                 &(((Settings_TypedSetting_bool__o *)((long)unaff_RBP + 0x18))->fields).DefaultValue =
                     uStack_38._7_1_;
                *(undefined1 *)
                 ((long)&(((Settings_TypedSetting_bool__o *)((long)unaff_RBP + 0x18))->fields).DefaultValue +
                 1) = uStack_38._6_1_;
                if (unaff_R14 != (UnityEngine_MonoBehaviour_o *)0x0) {
                  pSStack_40 = (Settings_TypedSetting_bool__o *)0x436ef6f;
                  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                            (unaff_R14,(System_Collections_IEnumerator_o *)unaff_RBP,(MethodInfo *)0x0);
                  goto label_0436ef6f;
                }
              }
            }
          }
        }
      }
      goto label_0436efec;
    }
  }
  pSStack_40 = (Settings_TypedSetting_bool__o *)0x436eff6;
  il2cpp_runtime_helper_022b2fd0();
  pUStack_68 = __this;
  uStack_60 = unaff_R12;
  ppMStack_58 = unaff_R13;
  pUStack_50 = unaff_R14;
  pUStack_48 = unaff_R15;
  pSStack_40 = (Settings_TypedSetting_bool__o *)unaff_RBP;
  if (g_data_057ae1f3 == '\0') {
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
    g_data_057ae1f3 = '\x01';
  }
  _Var16.genericMethod = (InvokerMethod)0x0;
  pIVar17 = (Il2CppObject *)0x0;
  pSVar14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar15 = (Il2CppRGCTXData *)0x0;
  pSVar18 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  if (__this_06[7].monitor != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear(__this_06[7].monitor,MethodInfo_Void_Clear);
    if (__this_06[7].fields != (Settings_TypedSetting_bool__Fields)0x0) {
      System_Collections_Generic_Dictionary_object__float___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06[7].fields,MethodInfo_Void_Clear);
      if ((__this_06[7].klass != (Settings_TypedSetting_bool__c *)0x0) &&
         (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   ((__this_06[7].klass)->_1).namespaze,
         pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_90,pSVar3,
                   MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
        pSVar14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_90._0_8_;
        pIVar15 = (Il2CppRGCTXData *)auStack_90._8_8_;
        _Var16 = _Stack_80;
        pIVar17 = pIStack_78;
        pSVar18 = pSStack_70;
label_0436f180:
        __this_02.fields._8_8_ = pIVar15;
        __this_02.fields._dictionary = pSVar14;
        __this_02.fields._current.fields.key = _Var16.genericMethod;
        __this_02.fields._current.fields.value = pIVar17;
        __this_02.fields._32_8_ = pSVar18;
        bVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                          (__this_02,(MethodInfo_3251160 *)&stack0xffffffffffffff40);
        if ((char)bVar6 != '\0') {
          auVar12 = il2cpp_runtime_helper_03343020(&stack0xffffffffffffff40);
          setting = auVar12._8_8_;
          iVar9 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
          if (iVar9 == 3) {
            if (setting == (Settings_BaseSetting_o *)0x0) {
label_0436f2b4:
              il2cpp_runtime_helper_022b2c90();
label_0436f2b9:
              il2cpp_runtime_helper_022b2c90();
              goto label_0436f2be;
            }
            bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
            if (((setting->klass->_2).naturalAligment < bVar1) ||
               ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) {
              il2cpp_runtime_helper_022b2fd0(setting);
              goto label_0436f2ac;
            }
            if (__this_06[7].fields == (Settings_TypedSetting_bool__Fields)0x0) goto label_0436f2b9;
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06[7].fields,
                       auVar12._0_8_,*(float *)((long)&setting[1].klass + 4),MethodInfo_Void_set_Item);
          }
          else if (iVar9 == 4) {
            if (setting != (Settings_BaseSetting_o *)0x0) {
              bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
              if (((setting->klass->_2).naturalAligment < bVar1) ||
                 ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) {
label_0436f2ac:
                il2cpp_runtime_helper_022b2fd0(setting);
                goto label_0436f2b4;
              }
              if (__this_06[7].monitor != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (__this_06[7].monitor,auVar12._0_8_,setting[1].monitor,MethodInfo_Void_set_Item);
                goto label_0436f180;
              }
label_0436f2be:
              il2cpp_runtime_helper_022b2c90();
            }
            il2cpp_runtime_helper_022b2c90();
            goto label_0436f2c8;
          }
          goto label_0436f180;
        }
        __this_03.fields._8_8_ = pIVar15;
        __this_03.fields._dictionary = pSVar14;
        __this_03.fields._current.fields.key = _Var16.genericMethod;
        __this_03.fields._current.fields.value = pIVar17;
        __this_03.fields._32_8_ = pSVar18;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff40);
        goto label_0436f28d;
      }
    }
  }
label_0436f2c8:
  auVar13 = il2cpp_runtime_helper_022b2c90();
  if (auVar13._8_4_ == 1) {
    plVar11 = (long *)__cxa_begin_catch(auVar13._0_8_);
    lVar5 = *plVar11;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar15;
    __this_04.fields._dictionary = pSVar14;
    __this_04.fields._current.fields.key = _Var16.genericMethod;
    __this_04.fields._current.fields.value = pIVar17;
    __this_04.fields._32_8_ = pSVar18;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff40);
    if (lVar5 == 0) {
label_0436f28d:
      *(undefined1 *)&__this_06[8].klass = 1;
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_05.fields._8_8_ = pIVar15;
  __this_05.fields._dictionary = pSVar14;
  __this_05.fields._current.fields.key = _Var16.genericMethod;
  __this_05.fields._current.fields.value = pIVar17;
  __this_05.fields._32_8_ = pSVar18;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            (__this_05,(MethodInfo_3251280 *)&stack0xffffffffffffff40);
  _Unwind_Resume(auVar13._0_8_);
}


// UI.PresetSkinEditPopup$$LoadSkinAndRestoreSettings
// il2cpp: void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettings (UI_PresetSkinEditPopup_o* __this, Characters_DummyHuman_o* character, bool originalGlobal, bool originalCustom, const MethodInfo* method);
// 0x436f8c0

void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettings
               (UI_PresetSkinEditPopup_o *__this,Characters_DummyHuman_o *character,
               bool_conflict originalGlobal,bool_conflict originalCustom,MethodInfo *method)

{
  Il2CppObject *__this_00;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae1f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
    g_data_057ae1f6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)character;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,character);
    *(char *)&__this_00[2].monitor = (char)originalGlobal;
    *(char *)((long)&__this_00[2].monitor + 1) = (char)originalCustom;
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return;
}


// UI.PresetSkinEditPopup$$LoadSkinAndRestoreSettingsCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine (UI_PresetSkinEditPopup_o* __this, Characters_DummyHuman_o* character, bool originalGlobal, bool originalCustom, const MethodInfo* method);
// 0x436f830

System_Collections_IEnumerator_o *
UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine
          (UI_PresetSkinEditPopup_o *__this,Characters_DummyHuman_o *character,bool_conflict originalGlobal,
          bool_conflict originalCustom,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this_00;
  Il2CppObject *__this_01;
  UnityEngine_Coroutine_o *pUVar1;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 extraout_DL;
  undefined4 uVar4;
  Il2CppClass *pIVar5;
  UnityEngine_MonoBehaviour_o *__this_02;
  Il2CppObject *__this_03;
  
  uVar2 = (undefined1)originalCustom;
  uVar3 = uVar2;
  if (g_data_057ae1f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
    g_data_057ae1f6 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
  pIVar5 = (Il2CppClass *)0x0;
  __this_02 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    __this_00[1].klass = (UnityEngine_MonoBehaviour_c *)character;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,character);
    *(char *)&__this_00[1].monitor = (char)originalGlobal;
    *(undefined1 *)((long)&__this_00[1].monitor + 1) = uVar2;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
    g_data_057ae1f6 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
  uVar4 = 0;
  __this_03 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar5;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar5);
    *(undefined1 *)&__this_01[2].monitor = extraout_DL;
    *(undefined1 *)((long)&__this_01[2].monitor + 1) = uVar3;
    pUVar1 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                       (__this_02,(System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
    return (System_Collections_IEnumerator_o *)pUVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = uVar4;
  return extraout_RAX;
}


// UI.PresetSkinEditPopup$$Show
// il2cpp: void UI_PresetSkinEditPopup__Show (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436f970

void UI_PresetSkinEditPopup__Show(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_HumanCustomSet_o *__this_01;
  Settings_HumanCustomSet_o **ppSVar3;
  Il2CppClass *method_00;
  
  if (g_data_057ae1f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae1f7 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar2 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    __this_01 = (Settings_HumanCustomSet_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    method_00 = TypeInfo_HumanCustomSet;
    if (__this_01 == (Settings_HumanCustomSet_o *)0x0) {
      (__this->fields)._currentPreset = (Settings_HumanCustomSet_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((((Settings_BaseSetSetting_c *)__this_01->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetSetting_c *)__this_01->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          TypeInfo_HumanCustomSet)) {
label_0436fa7f:
        il2cpp_runtime_helper_022b2fd0();
        if (*(char *)&(__this_01->fields).JacketColor != '\0') {
          UI_PresetSkinEditPopup__RestoreBackup((UI_PresetSkinEditPopup_o *)__this_01,(MethodInfo *)method_00)
          ;
        }
        *(undefined1 *)&(__this_01->fields).Back = 0;
        return;
      }
      (__this->fields)._currentPreset = __this_01;
      if (((((Settings_BaseSetSetting_c *)__this_01->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetSetting_c *)__this_01->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != method_00))
      goto label_0436fa7f;
    }
    ppSVar3 = &(__this->fields)._currentPreset;
    il2cpp_runtime_helper_022b4080(ppSVar3);
    if ((*ppSVar3 != (Settings_HumanCustomSet_o *)0x0) && ((char)(__this->fields)._hasBackup == '\0')) {
      UI_PresetSkinEditPopup__CreateBackup(__this,(MethodInfo *)__this_01);
    }
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PresetSkinEditPopup$$OnDisable
// il2cpp: void UI_PresetSkinEditPopup__OnDisable (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436fa90

void UI_PresetSkinEditPopup__OnDisable(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((char)(__this->fields)._hasBackup != '\0') {
    UI_PresetSkinEditPopup__RestoreBackup(__this,method);
  }
  *(undefined1 *)&(__this->fields).IsActive = 0;
  return;
}


// UI.PresetSkinEditPopup$$HideImmediate
// il2cpp: void UI_PresetSkinEditPopup__HideImmediate (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436fab0

void UI_PresetSkinEditPopup__HideImmediate(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((char)(__this->fields)._hasBackup != '\0') {
    UI_PresetSkinEditPopup__RestoreBackup(__this,method);
  }
  UI_BasePopup__HideImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PresetSkinEditPopup$$.ctor
// il2cpp: void UI_PresetSkinEditPopup___ctor (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436fad0

void UI_PresetSkinEditPopup___ctor(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  
  if (g_data_057ae1f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057ae1f8 = '\x01';
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


// UI.PresetSkinEditPopup$$<Setup>b__20_0
// il2cpp: void UI_PresetSkinEditPopup___Setup_b__20_0 (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436fba0

void UI_PresetSkinEditPopup___Setup_b__20_0(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae1f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Clear");
    g_data_057ae1f9 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PresetSkinEditPopup__OnButtonClick(__this,"Clear",in_RDX);
  return;
}


// UI.PresetSkinEditPopup$$<Setup>b__20_1
// il2cpp: void UI_PresetSkinEditPopup___Setup_b__20_1 (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436fbe0

void UI_PresetSkinEditPopup___Setup_b__20_1(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae1fa == '\0') {
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae1fa = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PresetSkinEditPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.PresetSkinEditPopup$$<Setup>b__20_2
// il2cpp: void UI_PresetSkinEditPopup___Setup_b__20_2 (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x436fc20

void UI_PresetSkinEditPopup___Setup_b__20_2(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae1fb == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae1fb = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PresetSkinEditPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


