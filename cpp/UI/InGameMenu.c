// Type: UI.InGameMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/InGameMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/InGameMenu.cs
// --------------------------------

// UI.InGameMenu.HudText$$Locale
// il2cpp: System_String_o* UI_InGameMenu_HudText__Locale (System_String_o* item, const MethodInfo* method);
// 0x5d30ff0

System_String_o * UI_InGameMenu_HudText__Locale(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Hud");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e1f = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("InGame","Hud",item,"",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.InGameMenu.HudText$$.ctor
// il2cpp: void UI_InGameMenu_HudText___ctor (UI_InGameMenu_HudText_o* __this, const MethodInfo* method);
// 0x5d29050
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d2906b: lea rax, [rip + 0x15bdf86]  ; "RestartingIn"
// asm:   0x5d29072: mov r14, qword ptr [rax]
// asm:   0x5d29075: cmp byte ptr [rip + 0x181eda3], 0
// asm:   0x5d2907c: je 0x5d29755

void UI_InGameMenu_HudText___ctor(UI_InGameMenu_HudText_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  
  pSVar2 = "RestartingIn";
  if (Il2CppMethodInitialized_07547e20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SpectateJoin");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Interpolation");
    il2cpp_codegen_initialize_runtime_metadata(&"On");
    il2cpp_codegen_initialize_runtime_metadata(&"Off");
    il2cpp_codegen_initialize_runtime_metadata(&"Spectating");
    il2cpp_codegen_initialize_runtime_metadata(&"SpectateNext");
    il2cpp_codegen_initialize_runtime_metadata(&"SpectatorCount");
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"RestartingIn");
    il2cpp_codegen_initialize_runtime_metadata(&"SpectatingPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"SpectatePrevious");
    Il2CppMethodInitialized_07547e20 = '\x01';
    pSVar2 = "RestartingIn";
  }
  "RestartingIn" = pSVar2;
  if (Il2CppMethodInitialized_07547e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Hud");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e1f = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("InGame","Hud",pSVar2,"",
                      "",(MethodInfo *)0x0);
  (__this->fields).RestartingIn = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RestartingIn);
  pSVar2 = "SpectatePrevious";
  if (Il2CppMethodInitialized_07547e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Hud");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e1f = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("InGame","Hud",pSVar2,"",
                      "",(MethodInfo *)0x0);
  (__this->fields).SpectatePrevious = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SpectatePrevious);
  pSVar2 = "SpectateNext";
  if (Il2CppMethodInitialized_07547e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Hud");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e1f = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("InGame","Hud",pSVar2,"",
                      "",(MethodInfo *)0x0);
  (__this->fields).SpectateNext = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SpectateNext);
  pSVar2 = "SpectateJoin";
  if (Il2CppMethodInitialized_07547e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Hud");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e1f = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("InGame","Hud",pSVar2,"",
                      "",(MethodInfo *)0x0);
  (__this->fields).SpectateJoin = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SpectateJoin);
  pSVar2 = "SpectatingPlayer";
  if (Il2CppMethodInitialized_07547e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Hud");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e1f = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("InGame","Hud",pSVar2,"",
                      "",(MethodInfo *)0x0);
  (__this->fields).SpectatingPlayer = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SpectatingPlayer);
  pSVar2 = "Spectating";
  if (Il2CppMethodInitialized_07547e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Hud");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e1f = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("InGame","Hud",pSVar2,"",
                      "",(MethodInfo *)0x0);
  (__this->fields).Spectating = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Spectating);
  pSVar2 = "Sandbox";
  if (Il2CppMethodInitialized_07547e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Hud");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e1f = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("InGame","Hud",pSVar2,"",
                      "",(MethodInfo *)0x0);
  (__this->fields).Sandbox = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Sandbox);
  pSVar2 = "Interpolation";
  if (Il2CppMethodInitialized_07547e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Hud");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e1f = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("InGame","Hud",pSVar2,"",
                      "",(MethodInfo *)0x0);
  (__this->fields).Interpolation = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Interpolation);
  pSVar2 = "On";
  if (Il2CppMethodInitialized_07547e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Hud");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e1f = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("InGame","Hud",pSVar2,"",
                      "",(MethodInfo *)0x0);
  (__this->fields).On = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).On);
  pSVar2 = "Off";
  if (Il2CppMethodInitialized_07547e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Hud");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e1f = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("InGame","Hud",pSVar2,"",
                      "",(MethodInfo *)0x0);
  (__this->fields).Off = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Off);
  pSVar2 = "Position";
  if (Il2CppMethodInitialized_07547e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Hud");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e1f = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("InGame","Hud",pSVar2,"",
                      "",(MethodInfo *)0x0);
  (__this->fields).Position = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Position);
  pSVar2 = "SpectatorCount";
  if (Il2CppMethodInitialized_07547e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Hud");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e1f = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("InGame","Hud",pSVar2,"",
                      "",(MethodInfo *)0x0);
  (__this->fields).SpectatorCount = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SpectatorCount);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.InGameMenu.<>c$$.cctor
// il2cpp: void UI_InGameMenu___c___cctor (const MethodInfo* method);
// 0x5d31080

void UI_InGameMenu___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547e21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu_c);
    Il2CppMethodInitialized_07547e21 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_InGameMenu_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_InGameMenu_c->static_fields->__9 = (UI_InGameMenu___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_InGameMenu_c->static_fields->__9);
  return;
}


// UI.InGameMenu.<>c$$.ctor
// il2cpp: void UI_InGameMenu___c___ctor (UI_InGameMenu___c_o* __this, const MethodInfo* method);
// 0x5d310f0

void UI_InGameMenu___c___ctor(UI_InGameMenu___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.InGameMenu.<>c$$<GetPlayerListTeams>b__125_0
// il2cpp: bool UI_InGameMenu___c___GetPlayerListTeams_b__125_0 (UI_InGameMenu___c_o* __this, Photon_Realtime_Player_o* e, const MethodInfo* method);
// 0x5d31100

bool UI_InGameMenu___c___GetPlayerListTeams_b__125_0
               (UI_InGameMenu___c_o *__this,Photon_Realtime_Player_o *e,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_07547e22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e22 = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  a = PhotonExtensions__GetStringProperty
                (e,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,"",
                 (MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  bVar1 = System_String__op_Equality(a,TypeInfo_GameManagers_TeamInfo->static_fields->None,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InGameMenu.<>c$$<GetPlayerListTeams>b__125_1
// il2cpp: bool UI_InGameMenu___c___GetPlayerListTeams_b__125_1 (UI_InGameMenu___c_o* __this, Photon_Realtime_Player_o* e, const MethodInfo* method);
// 0x5d311b0

bool UI_InGameMenu___c___GetPlayerListTeams_b__125_1
               (UI_InGameMenu___c_o *__this,Photon_Realtime_Player_o *e,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_07547e23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e23 = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  a = PhotonExtensions__GetStringProperty
                (e,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,"",
                 (MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  bVar1 = System_String__op_Inequality
                    (a,TypeInfo_GameManagers_TeamInfo->static_fields->None,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InGameMenu.<>c$$<GetPlayerListTeams>b__125_2
// il2cpp: System_String_o* UI_InGameMenu___c___GetPlayerListTeams_b__125_2 (UI_InGameMenu___c_o* __this, Photon_Realtime_Player_o* e, const MethodInfo* method);
// 0x5d31260

System_String_o *
UI_InGameMenu___c___GetPlayerListTeams_b__125_2
          (UI_InGameMenu___c_o *__this,Photon_Realtime_Player_o *e,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547e24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e24 = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (e,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.InGameMenu.<>c__DisplayClass66_0$$.ctor
// il2cpp: void UI_InGameMenu___c__DisplayClass66_0___ctor (UI_InGameMenu___c__DisplayClass66_0_o* __this, const MethodInfo* method);
// 0x5d29040

void UI_InGameMenu___c__DisplayClass66_0___ctor
               (UI_InGameMenu___c__DisplayClass66_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.InGameMenu.<>c__DisplayClass66_0$$<RebuildPopups>b__0
// il2cpp: bool UI_InGameMenu___c__DisplayClass66_0___RebuildPopups_b__0 (UI_InGameMenu___c__DisplayClass66_0_o* __this, UI_BasePopup_o* popup, const MethodInfo* method);
// 0x5d312d0

bool UI_InGameMenu___c__DisplayClass66_0___RebuildPopups_b__0
               (UI_InGameMenu___c__DisplayClass66_0_o *__this,UI_BasePopup_o *popup,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547e25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BasePopup_Contains);
    Il2CppMethodInitialized_07547e25 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).customPopups;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_object___Contains
                    (__this_00,(Il2CppObject *)popup,
                     (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_BasePopup_Contains);
  return !bVar1;
}


// UI.InGameMenu.<WaitAndShowBlood>d__118$$.ctor
// il2cpp: void UI_InGameMenu__WaitAndShowBlood_d__118___ctor (UI_InGameMenu__WaitAndShowBlood_d__118_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5d2d2e0

void UI_InGameMenu__WaitAndShowBlood_d__118___ctor
               (UI_InGameMenu__WaitAndShowBlood_d__118_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.InGameMenu.<WaitAndShowBlood>d__118$$System.IDisposable.Dispose
// il2cpp: void UI_InGameMenu__WaitAndShowBlood_d__118__System_IDisposable_Dispose (UI_InGameMenu__WaitAndShowBlood_d__118_o* __this, const MethodInfo* method);
// 0x5d31320

void UI_InGameMenu__WaitAndShowBlood_d__118__System_IDisposable_Dispose
               (UI_InGameMenu__WaitAndShowBlood_d__118_o *__this,MethodInfo *method)

{
  return;
}


// UI.InGameMenu.<WaitAndShowBlood>d__118$$MoveNext
// il2cpp: bool UI_InGameMenu__WaitAndShowBlood_d__118__MoveNext (UI_InGameMenu__WaitAndShowBlood_d__118_o* __this, const MethodInfo* method);
// 0x5d31330

bool UI_InGameMenu__WaitAndShowBlood_d__118__MoveNext
               (UI_InGameMenu__WaitAndShowBlood_d__118_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_InGameMenu_o *pUVar2;
  UI_InGameBackgroundMenu_o *pUVar3;
  UI_BloodBackgroundPanel_o *pUVar4;
  UnityEngine_WaitForSeconds_o *__this_00;
  
  if (Il2CppMethodInitialized_07547e26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_07547e26 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  pUVar2 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (((pUVar2 == (UI_InGameMenu_o *)0x0) ||
        (pUVar3 = (pUVar2->fields)._backgroundMenu, pUVar3 == (UI_InGameBackgroundMenu_o *)0x0)) ||
       (pUVar4 = (pUVar3->fields)._bloodBackgroundPanel, pUVar4 == (UI_BloodBackgroundPanel_o *)0x0)) {
label_05d31436:
      ThrowNullReferenceException();
    }
    (*(pUVar4->klass->vtable)._21_Show.methodPtr)(pUVar4,(pUVar4->klass->vtable)._21_Show.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,5.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (((pUVar2 == (UI_InGameMenu_o *)0x0) ||
        (pUVar3 = (pUVar2->fields)._backgroundMenu, pUVar3 == (UI_InGameBackgroundMenu_o *)0x0)) ||
       (pUVar4 = (pUVar3->fields)._bloodBackgroundPanel, pUVar4 == (UI_BloodBackgroundPanel_o *)0x0))
    goto label_05d31436;
    (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
    (pUVar2->fields)._showingBlood = false;
  }
  return iVar1 == 0;
}


// UI.InGameMenu.<WaitAndShowBlood>d__118$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_InGameMenu__WaitAndShowBlood_d__118__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_InGameMenu__WaitAndShowBlood_d__118_o* __this, const MethodInfo* method);
// 0x5d31440

Il2CppObject *
UI_InGameMenu__WaitAndShowBlood_d__118__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_InGameMenu__WaitAndShowBlood_d__118_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.InGameMenu.<WaitAndShowBlood>d__118$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_InGameMenu__WaitAndShowBlood_d__118__System_Collections_IEnumerator_Reset (UI_InGameMenu__WaitAndShowBlood_d__118_o* __this, const MethodInfo* method);
// 0x5d31450

void UI_InGameMenu__WaitAndShowBlood_d__118__System_Collections_IEnumerator_Reset
               (UI_InGameMenu__WaitAndShowBlood_d__118_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_InGameMenu_WaitAndShowBlood_d__118_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.InGameMenu.<WaitAndShowBlood>d__118$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_InGameMenu__WaitAndShowBlood_d__118__System_Collections_IEnumerator_get_Current (UI_InGameMenu__WaitAndShowBlood_d__118_o* __this, const MethodInfo* method);
// 0x5d31490

Il2CppObject *
UI_InGameMenu__WaitAndShowBlood_d__118__System_Collections_IEnumerator_get_Current
          (UI_InGameMenu__WaitAndShowBlood_d__118_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.InGameMenu$$get_RootVisualElement
// il2cpp: UnityEngine_UIElements_VisualElement_o* UI_InGameMenu__get_RootVisualElement (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d28a60

UnityEngine_UIElements_VisualElement_o *
UI_InGameMenu__get_RootVisualElement(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_UIDocument_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *pUVar1;
  
  __this_00 = (__this->fields)._uiDocument;
  if (__this_00 == (UnityEngine_UIElements_UIDocument_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar1 = UnityEngine_UIElements_UIDocument__get_rootVisualElement(__this_00,(MethodInfo *)0x0);
  return pUVar1;
}


// UI.InGameMenu$$RebuildPopups
// il2cpp: void UI_InGameMenu__RebuildPopups (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d28a80
// eh: try 0x5d28d60..0x5d28fd5 -> pad 0x5d28fdd (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d28ff9..0x5d28ffe -> pad 0x5d29021 cleanup
// eh: try 0x5d29024..0x5d2902e -> pad 0x5d29036 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d28fd5: jmp 0x5d28fe1
// asm:   0x5d28fd7: jmp 0x5d28fe1
// asm:   0x5d28fd9: jmp 0x5d28fe1
// asm:   0x5d28fdb: jmp 0x5d28fe1
// asm:   0x5d28fdd: jmp 0x5d28fe1
// asm:   0x5d28fdf: jmp 0x5d28fe1
// asm:   0x5d28fe1: mov rbx, rax
// asm:   0x5d28fe4: cmp edx, 1
// asm:   0x5d28fe7: jne 0x5d29024
// asm:   0x5d28fe9: mov rdi, rbx
// asm:   0x5d28fec: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d28ff1: mov rbx, qword ptr [rax]
// asm:   0x5d28ff4: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d28ff9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d28ffe: lea rax, [rip + 0x156475b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x5d29005: mov rsi, qword ptr [rax]
// asm:   0x5d29008: mov rdi, rsp
// asm:   0x5d2900b: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d29010: test rbx, rbx
// asm:   0x5d29013: je 0x5d28e10
// asm:   0x5d29019: mov rdi, rbx
// asm:   0x5d2901c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d29021: mov rbx, rax
// asm:   0x5d29024: lea rdi, [rsp + 0x20]
// asm:   0x5d29029: call 0x2fdc0a0  ; il2cpp_runtime_helper_02fdc0a0()
// asm:   0x5d2902e: mov rdi, rbx
// asm:   0x5d29031: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d29036: mov rdi, rax
// asm:   0x5d29039: call 0x2ab61e0  ; __clang_call_terminate()

void UI_InGameMenu__RebuildPopups(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UI_GlobalPauseGamePopup_o **targetAddress;
  UI_ChatPanel_o *pUVar2;
  UI_CustomAssetUrlPopup_o *pUVar3;
  UI_CustomAssetVideoUrlPopup_o *pUVar4;
  UI_BasePopup_o *pUVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_BasePopup__o *pSVar6;
  System_Collections_Generic_HashSet_object__o *__this_01;
  bool bVar7;
  int32_t iVar8;
  UI_InGameMenu___c__DisplayClass66_0_o *__this_02;
  UI_InGameMenu_HudText_o *__this_03;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *collection;
  System_Collections_Generic_HashSet_BasePopup__o *__this_04;
  UnityEngine_Object_o *pUVar9;
  System_Predicate_T__o *match;
  UnityEngine_Transform_o *pUVar10;
  UI_GlobalPauseGamePopup_o *pUVar11;
  MethodInfo *pMVar12;
  ulong uVar13;
  undefined1 auStack_78 [8];
  undefined1 *puStack_70;
  UnityEngine_Object_o *pUStack_68;
  undefined1 auStack_58 [16];
  UnityEngine_Object_o *pUStack_48;
  ulong uStack_40;
  UI_InGameMenu___c__DisplayClass66_0_o *pUStack_38;
  
  if (Il2CppMethodInitialized_07547dee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_GlobalPauseGamePopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BasePopup_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_BasePopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu_HudText);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_InGameMenu_c__DisplayClass66_0_RebuildPopups_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu_c__DisplayClass66_0);
    Il2CppMethodInitialized_07547dee = '\x01';
  }
  auStack_78 = (undefined1  [8])0x0;
  puStack_70 = (undefined1 *)0x0;
  pUStack_68 = (UnityEngine_Object_o *)0x0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_InGameMenu_c__DisplayClass66_0);
  pMVar12 = (MethodInfo *)0x0;
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_InGameMenu_HudText);
  UI_InGameMenu_HudText___ctor(__this_03,pMVar12);
  (__this->fields)._hudText = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hudText);
  pUVar2 = (__this->fields).ChatPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pUVar2 = (__this->fields).ChatPanel;
    if (pUVar2 == (UI_ChatPanel_o *)0x0) goto label_05d28fc6;
    UI_ChatPanel__ApplyLanguageFont(pUVar2,(MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields)._customAssetUrlPopup;
  if (pUVar3 != (UI_CustomAssetUrlPopup_o *)0x0) {
    if ((pUVar3->fields).IsActive != false) {
      return;
    }
    pUVar4 = (__this->fields)._customAssetVideoUrlPopup;
    if (pUVar4 != (UI_CustomAssetVideoUrlPopup_o *)0x0) {
      if ((pUVar4->fields).IsActive != false) {
        return;
      }
      pUVar5 = (__this->fields)._characterPopup;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      uVar13 = 0;
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        pUVar5 = (__this->fields)._characterPopup;
        if (pUVar5 == (UI_BasePopup_o *)0x0) goto label_05d28fc6;
        uVar13 = (ulong)(pUVar5->fields).IsActive;
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._customPopups;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        collection = System_Collections_Generic_Dictionary_object__object___get_Values
                               (__this_00,
                                (MethodInfo_4AAD2A0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_get_Values);
        __this_04 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BasePopup);
        System_Collections_Generic_HashSet_object____ctor_4fb2fe0
                  ((System_Collections_Generic_HashSet_object__o *)__this_04,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,
                   (MethodInfo_4FB2FE0 *)MethodInfo_System_Collections_Generic_HashSet_BasePopup_ctor);
        if (__this_02 != (UI_InGameMenu___c__DisplayClass66_0_o *)0x0) {
          (__this_02->fields).customPopups = __this_04;
          uStack_40 = uVar13;
          pUStack_38 = __this_02;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).customPopups);
          pSVar6 = (__this->fields)._popups;
          if (pSVar6 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,
                       (System_Collections_Generic_List_object__o *)pSVar6,
                       (MethodInfo_395E050 *)
                       MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
            pUStack_68 = pUStack_48;
            auStack_78 = (undefined1  [8])auStack_58._0_8_;
            puStack_70 = (undefined1 *)auStack_58._8_8_;
            auStack_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
            auStack_58._8_8_ = auStack_78;
            while( true ) {
              bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
              pUVar9 = pUStack_68;
              if (!bVar7) break;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar7 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar7) {
                __this_01 = (System_Collections_Generic_HashSet_object__o *)(__this_02->fields).customPopups;
                if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar7 = System_Collections_Generic_HashSet_object___Contains
                                  (__this_01,(Il2CppObject *)pUVar9,
                                   (MethodInfo_4FB3720 *)
                                   MethodInfo_System_Collections_Generic_HashSet_BasePopup_Contains);
                if (!bVar7) {
                  if (pUVar9 == (UnityEngine_Object_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar9 = (UnityEngine_Object_o *)
                           UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  UnityEngine_Object__Destroy_69214e0(pUVar9,(MethodInfo *)0x0);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
            pSVar6 = (__this->fields)._popups;
            match = (System_Predicate_T__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_BasePopup);
            System_Predicate_object____ctor
                      ((System_Predicate_object__o *)match,(Il2CppObject *)pUStack_38,
                       (intptr_t)MethodInfo_UI_InGameMenu_c__DisplayClass66_0_RebuildPopups_b__0,
                       (MethodInfo_3DC95B0 *)0x0);
            if (pSVar6 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
              System_Collections_Generic_List_object___RemoveAll
                        ((System_Collections_Generic_List_object__o *)pSVar6,match,
                         (MethodInfo_395EF50 *)MethodInfo_System_Collections_Generic_List_BasePopup_RemoveAll)
              ;
              pSVar6 = (__this->fields)._allPausePopups;
              if (pSVar6 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                piVar1 = &(pSVar6->fields)._version;
                *piVar1 = *piVar1 + 1;
                iVar8 = (pSVar6->fields)._size;
                (pSVar6->fields)._size = 0;
                if (0 < iVar8) {
                  System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar8,(MethodInfo *)0x0);
                }
                (__this->fields)._characterChangePopup = (UI_BasePopup_o *)0x0;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._characterChangePopup);
                (*(__this->klass->vtable)._5_SetupPopups.methodPtr)
                          (__this,(__this->klass->vtable)._5_SetupPopups.method);
                pUVar11 = (__this->fields)._globalPauseGamePopup;
                if ((pUVar11 != (UI_GlobalPauseGamePopup_o *)0x0) &&
                   (pUVar10 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
                   pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                  targetAddress = &(__this->fields)._globalPauseGamePopup;
                  iVar8 = UnityEngine_Transform__GetSiblingIndex(pUVar10,(MethodInfo *)0x0);
                  pUVar11 = *targetAddress;
                  if (pUVar11 != (UI_GlobalPauseGamePopup_o *)0x0) {
                    pUVar9 = (UnityEngine_Object_o *)
                             UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    UnityEngine_Object__Destroy_69214e0(pUVar9,(MethodInfo *)0x0);
                    pUVar10 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar11 = UI_ElementFactory__CreateDefaultPopup_object_
                                        (pUVar10,false,
                                         (MethodInfo_34D7290 *)
                                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_GlobalPauseGamePopup)
                    ;
                    (__this->fields)._globalPauseGamePopup = pUVar11;
                    Il2CppCodeGenWriteBarrier(targetAddress);
                    pUVar11 = (__this->fields)._globalPauseGamePopup;
                    if ((pUVar11 != (UI_GlobalPauseGamePopup_o *)0x0) &&
                       (pUVar10 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
                       pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                      UnityEngine_Transform__SetSiblingIndex(pUVar10,iVar8,(MethodInfo *)0x0);
                      pMVar12 = (MethodInfo *)0x0;
                      bVar7 = UnityEngine_Object__op_Equality
                                        ((UnityEngine_Object_o *)(__this->fields)._gameManager,
                                         (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                      if (bVar7) {
                        return;
                      }
                      UI_InGameMenu__SetupGameplayPopups(__this,pMVar12);
                      if ((int)uStack_40 == 0) {
                        return;
                      }
                      pUVar5 = (__this->fields)._characterPopup;
                      if (pUVar5 != (UI_BasePopup_o *)0x0) {
                        (*(pUVar5->klass->vtable)._21_Show.methodPtr)
                                  (pUVar5,(pUVar5->klass->vtable)._21_Show.method);
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
label_05d28fc6:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$Setup
// il2cpp: void UI_InGameMenu__Setup (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d299c0

void UI_InGameMenu__Setup(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UI_EmoteHandler_o *pUVar2;
  UI_ItemHandler_o *pUVar3;
  UI_ActionHandler_o *pUVar4;
  UI_HUDBottomHandler_o *pUVar5;
  UI_CharacterInfoHandler_o *pUVar6;
  UI_StylebarHandler_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UI_SongPopup_o *method_00;
  UnityEngine_UIElements_UIDocument_o *pUVar9;
  UnityEngine_UIElements_PanelSettings_o *pUVar10;
  MethodInfo *method_01;
  MethodInfo *pMVar11;
  
  if (Il2CppMethodInitialized_07547def == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_UIDocument);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_SongPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ActionHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CharacterInfoHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CrosshairHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_EmoteHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HUDBottomHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ItemHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_StylebarHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_PanelSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/NapeLockImage");
    Il2CppMethodInitialized_07547def = '\x01';
  }
  pMVar11 = (MethodInfo *)0x0;
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  UI_InGameMenu__SetupLoading(__this,pMVar11);
  UI_InGameMenu__SetupTopLeftHud(__this,pMVar11);
  UI_InGameMenu__SetupLabels(__this,pMVar11);
  pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (pUVar1,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_EmoteHandler);
    (__this->fields).EmoteHandler = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).EmoteHandler);
    pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar1,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_ItemHandler);
      (__this->fields).ItemHandler = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).ItemHandler);
      pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = UnityEngine_GameObject__AddComponent_object_
                           (pUVar1,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_ActionHandler);
        (__this->fields).ActionHandler = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields).ActionHandler);
        pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          pUVar5 = UnityEngine_GameObject__AddComponent_object_
                             (pUVar1,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_HUDBottomHandler);
          (__this->fields).HUDBottomHandler = pUVar5;
          Il2CppCodeGenWriteBarrier(&(__this->fields).HUDBottomHandler);
          pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pUVar6 = UnityEngine_GameObject__AddComponent_object_
                               (pUVar1,(MethodInfo_353B6A0 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_CharacterInfoHandler);
            (__this->fields).CharacterInfoHandler = pUVar6;
            Il2CppCodeGenWriteBarrier(&(__this->fields).CharacterInfoHandler);
            pUVar1 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
              pUVar7 = UnityEngine_GameObject__AddComponent_object_
                                 (pUVar1,(MethodInfo_353B6A0 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_StylebarHandler);
              (__this->fields).StylebarHandler = pUVar7;
              Il2CppCodeGenWriteBarrier(&(__this->fields).StylebarHandler);
              pUVar1 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__AddComponent_object_
                          (pUVar1,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_CrosshairHandler);
                pUVar8 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                pUVar1 = UI_ElementFactory__InstantiateAndBind(pUVar8,"Prefabs/InGame/NapeLockImage",(MethodInfo *)0x0)
                ;
                (__this->fields).NapeLock = pUVar1;
                Il2CppCodeGenWriteBarrier(&(__this->fields).NapeLock);
                pUVar1 = (__this->fields).NapeLock;
                if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                  pMVar11 = (MethodInfo *)0x0;
                  UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
                  UI_InGameMenu__SetupChat(__this,pMVar11);
                  UI_InGameMenu__SetupMinimap(__this,pMVar11);
                  pUVar8 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  method_00 = UI_ElementFactory__CreateDefaultPopup_object_
                                        (pUVar8,false,
                                         (MethodInfo_34D7290 *)
                                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_SongPopup);
                  (__this->fields)._songPopup = (UI_BasePopup_o *)method_00;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._songPopup);
                  UI_InGameMenu__SetupSnapshot(__this,(MethodInfo *)method_00);
                  UI_InGameMenu__HideAllMenus(__this,(UI_BasePopup_o *)0x0,method_01);
                  pUVar9 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)__this,
                                      (MethodInfo_34B0830 *)
                                      MethodInfo_UnityEngine_Component_GetComponent_UIDocument);
                  (__this->fields)._uiDocument = pUVar9;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._uiDocument);
                  pUVar9 = (__this->fields)._uiDocument;
                  if (pUVar9 != (UnityEngine_UIElements_UIDocument_o *)0x0) {
                    pUVar10 = UnityEngine_UIElements_UIDocument__get_panelSettings(pUVar9,(MethodInfo *)0x0);
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    pUVar10 = UnityEngine_Object__Instantiate_object__35a4190
                                        ((Il2CppObject *)pUVar10,
                                         (MethodInfo_35A4190 *)
                                         MethodInfo_UnityEngine_Object_Instantiate_PanelSettings);
                    (__this->fields)._panelSettings = pUVar10;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._panelSettings);
                    pUVar9 = (__this->fields)._uiDocument;
                    if (pUVar9 != (UnityEngine_UIElements_UIDocument_o *)0x0) {
                      pUVar10 = (__this->fields)._panelSettings;
                      UnityEngine_UIElements_UIDocument__set_panelSettings(pUVar9,pUVar10,(MethodInfo *)0x0);
                      UI_InGameMenu__ApplyCustomLogicPanelSettings(__this,(MethodInfo *)pUVar10);
                      pUVar8 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi->_2).cctor_finished_or_no_cctor == 0)
                      {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi);
                      }
                      Gisketch_Aottg2UI_Game_AottgMobileUi__CreateControls(pUVar8,__this,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// UI.InGameMenu$$ApplyUISettings
// il2cpp: void UI_InGameMenu__ApplyUISettings (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2b090

void UI_InGameMenu__ApplyUISettings(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UI_TopLeftHUD_o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547df0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TopLeftHUD);
    Il2CppMethodInitialized_07547df0 = '\x01';
  }
  __this_00 = (__this->fields).TopLeftHud;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_TopLeftHUD);
    if (__this_01 != (UI_TopLeftHUD_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      UI_TopLeftHUD__ApplySettings(__this_01,(MethodInfo *)0x0);
      UI_InGameMenu__ApplyCustomLogicPanelSettings(__this,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$ApplyCustomLogicPanelSettings
// il2cpp: void UI_InGameMenu__ApplyCustomLogicPanelSettings (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2ae60

void UI_InGameMenu__ApplyCustomLogicPanelSettings(UI_InGameMenu_o *__this,MethodInfo *method)

{
  Settings_UISettings_o *__this_00;
  UnityEngine_UIElements_PanelSettings_o *pUVar1;
  UnityEngine_UIElements_UIDocument_o *pUVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  bool bVar5;
  UnityEngine_UIElements_Length_o v;
  UnityEngine_UIElements_VisualElement_o *pUVar6;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  UnityEngine_UIElements_StyleLength_o UVar12;
  
  if (Il2CppMethodInitialized_07547df1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_IStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07547df1 = '\x01';
  }
  __this_00 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (__this_00 != (Settings_UISettings_o *)0x0) {
    pUVar1 = (__this->fields)._panelSettings;
    fVar11 = Settings_UISettings__get_AppliedMasterScale(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UIElements_PanelSettings_o *)0x0) {
      (pUVar1->fields).m_Scale = fVar11;
      bVar5 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
      fVar11 = Gisketch_Aottg2UI_Game_AottgMobileMenuSafeArea__HorizontalInset((MethodInfo *)0x0);
      v = UnityEngine_UIElements_Length__Percent(fVar11 * 100.0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._uiDocument;
      if (pUVar2 != (UnityEngine_UIElements_UIDocument_o *)0x0) {
        pUVar6 = UnityEngine_UIElements_UIDocument__get_rootVisualElement(pUVar2,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
          pIVar7 = (Il2CppObject *)UnityEngine_UIElements_VisualElement__get_style(pUVar6,(MethodInfo *)0x0);
          UVar12 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570(v,(MethodInfo *)0x0);
          if (pIVar7 != (Il2CppObject *)0x0) {
            pIVar3 = pIVar7->klass;
            uVar9 = (ulong)(pIVar3->_2).interface_offsets_count;
            if (uVar9 != 0) {
              pIVar4 = (pIVar3->_1).interfaceOffsets;
              lVar10 = 0;
              do {
                if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar4->interfaceType + lVar10) ==
                    TypeInfo_UnityEngine_UIElements_IStyle) {
                  pVVar8 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar10) + 0x4d);
                  goto label_05d2afb4;
                }
                lVar10 = lVar10 + 0x10;
              } while (uVar9 * 0x10 != lVar10);
            }
            pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                               (pIVar7,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x4d);
label_05d2afb4:
            (*pVVar8->methodPtr)(pIVar7,UVar12,pVVar8->method);
            pUVar2 = (__this->fields)._uiDocument;
            if (pUVar2 != (UnityEngine_UIElements_UIDocument_o *)0x0) {
              pUVar6 = UnityEngine_UIElements_UIDocument__get_rootVisualElement(pUVar2,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
                pIVar7 = (Il2CppObject *)
                         UnityEngine_UIElements_VisualElement__get_style(pUVar6,(MethodInfo *)0x0);
                UVar12 = UnityEngine_UIElements_StyleLength__op_Implicit_6b13570(v,(MethodInfo *)0x0);
                if (pIVar7 != (Il2CppObject *)0x0) {
                  pIVar3 = pIVar7->klass;
                  uVar9 = (ulong)(pIVar3->_2).interface_offsets_count;
                  if (uVar9 != 0) {
                    pIVar4 = (pIVar3->_1).interfaceOffsets;
                    lVar10 = 0;
                    do {
                      if (*(UnityEngine_UIElements_IStyle_c **)((long)&pIVar4->interfaceType + lVar10) ==
                          TypeInfo_UnityEngine_UIElements_IStyle) {
                        pVVar8 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar10) + 0x4f);
                        goto label_05d2b065;
                      }
                      lVar10 = lVar10 + 0x10;
                    } while (uVar9 * 0x10 != lVar10);
                  }
                  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                                     (pIVar7,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_IStyle,0x4f);
label_05d2b065:
                  (*pVVar8->methodPtr)(pIVar7,UVar12,pVVar8->method);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$OnDestroy
// il2cpp: void UI_InGameMenu__OnDestroy (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2b0f0

void UI_InGameMenu__OnDestroy(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_PanelSettings_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547df2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547df2 = '\x01';
  }
  pUVar1 = (__this->fields)._panelSettings;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._panelSettings;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.InGameMenu$$SetupTopLeftHud
// il2cpp: void UI_InGameMenu__SetupTopLeftHud (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d29ea0

void UI_InGameMenu__SetupTopLeftHud(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *obj;
  UI_TopLeftHUD_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547df3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_TopLeftHUD);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TopLeftHUD);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/TopLeftHUD");
    Il2CppMethodInitialized_07547df3 = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  obj = UI_ElementFactory__InstantiateAndSetupPanel_object_
                  (parent,"Prefabs/InGame/TopLeftHUD",false,
                   (MethodInfo_34D7620 *)MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_TopLeftHUD);
  UI_ElementFactory__SetAnchor(obj,0,0,(UnityEngine_Vector2_o)0xc100000041200000,(MethodInfo *)0x0);
  (__this->fields).TopLeftHud = obj;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TopLeftHud);
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__GetComponent_object_
                       (obj,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_TopLeftHUD);
    if (pUVar1 != (UI_TopLeftHUD_o *)0x0) {
      (__this->fields).KDRReference = (pUVar1->fields).kdrAndLabel;
      Il2CppCodeGenWriteBarrier(&(__this->fields).KDRReference);
      pUVar1 = UnityEngine_GameObject__GetComponent_object_
                         (obj,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_TopLeftHUD)
      ;
      if (pUVar1 != (UI_TopLeftHUD_o *)0x0) {
        (__this->fields).KDRPanel = (pUVar1->fields)._kdr;
        Il2CppCodeGenWriteBarrier(&(__this->fields).KDRPanel);
        UnityEngine_GameObject__SetActive(obj,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$ToggleUI
// il2cpp: void UI_InGameMenu__ToggleUI (UI_InGameMenu_o* __this, bool toggle, const MethodInfo* method);
// 0x5d2b170

void UI_InGameMenu__ToggleUI(UI_InGameMenu_o *__this,bool toggle,MethodInfo *method)

{
  UnityEngine_Canvas_o *__this_00;
  
  if (Il2CppMethodInitialized_07547df4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    Il2CppMethodInitialized_07547df4 = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
  if (__this_00 == (UnityEngine_Canvas_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,toggle,(MethodInfo *)0x0);
  return;
}


// UI.InGameMenu$$IsActive
// il2cpp: bool UI_InGameMenu__IsActive (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2b1d0

bool UI_InGameMenu__IsActive(UI_InGameMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Canvas_o *__this_00;
  
  if (Il2CppMethodInitialized_07547df5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    Il2CppMethodInitialized_07547df5 = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
  if (__this_00 == (UnityEngine_Canvas_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InGameMenu$$CreateCustomPopup
// il2cpp: void UI_InGameMenu__CreateCustomPopup (UI_InGameMenu_o* __this, System_String_o* name, System_String_o* title, float width, float height, const MethodInfo* method);
// 0x5d2b220

void UI_InGameMenu__CreateCustomPopup
               (UI_InGameMenu_o *__this,System_String_o *name,System_String_o *title,float width,float height,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  UI_BasePopup_array *pUVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  MethodInfo *pMVar4;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_02;
  UI_CustomPopup_o *item;
  
  if (Il2CppMethodInitialized_07547df6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CustomPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    Il2CppMethodInitialized_07547df6 = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_02 = UI_ElementFactory__InstantiateAndSetupCustomPopup
                        (parent,title,width,height,false,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    item = UnityEngine_GameObject__GetComponent_object_
                     (__this_02,
                      (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_CustomPopup);
    pMVar4 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    __this_00 = (__this->fields)._popups;
    if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_00->fields)._items;
      if (pUVar3 != (UI_BasePopup_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2] = (UI_BasePopup_o *)item;
          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._customPopups;
        if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this_01,(Il2CppObject *)name,(Il2CppObject *)item,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_set_Item);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$GetCustomPopup
// il2cpp: UI_CustomPopup_o* UI_InGameMenu__GetCustomPopup (UI_InGameMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d2b350

UI_CustomPopup_o *
UI_InGameMenu__GetCustomPopup(UI_InGameMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UI_CustomPopup_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547df7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CustomPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_get_Item);
    Il2CppMethodInitialized_07547df7 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._customPopups;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = (UI_CustomPopup_o *)
           System_Collections_Generic_Dictionary_object__object___get_Item
                     (__this_00,(Il2CppObject *)name,
                      (MethodInfo_4AAD450 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_get_Item);
  if (pUVar2 != (UI_CustomPopup_o *)0x0) {
    bVar1 = (TypeInfo_UI_CustomPopup->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_CustomPopup)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
  }
  return pUVar2;
}


// UI.InGameMenu$$IsCustomPopupActive
// il2cpp: bool UI_InGameMenu__IsCustomPopupActive (UI_InGameMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d2b3f0

bool UI_InGameMenu__IsCustomPopupActive(UI_InGameMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  UI_BasePopup_o *pUVar3;
  
  if (Il2CppMethodInitialized_07547df8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_get_Item);
    Il2CppMethodInitialized_07547df8 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._customPopups;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)name,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_ContainsKey);
    if (!bVar2) {
      return false;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._customPopups;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)name,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_get_Item);
      if (pUVar3 != (UI_BasePopup_o *)0x0) {
        return (pUVar3->fields).IsActive != false;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$GetAllCustomPopups
// il2cpp: System_Collections_Generic_List_string__o* UI_InGameMenu__GetAllCustomPopups (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2b490

System_Collections_Generic_List_string__o *
UI_InGameMenu__GetAllCustomPopups(UI_InGameMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Collections_Generic_List_string__o *pSVar1;
  
  if (Il2CppMethodInitialized_07547df9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    Il2CppMethodInitialized_07547df9 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._customPopups;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  source = System_Collections_Generic_Dictionary_object__object___get_Keys
                     (__this_00,
                      (MethodInfo_4AAD0F0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_get_Keys);
  pSVar1 = (System_Collections_Generic_List_string__o *)
           System_Linq_Enumerable__ToList_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
  return pSVar1;
}


// UI.InGameMenu$$SetupMinimap
// il2cpp: void UI_InGameMenu__SetupMinimap (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2aa40

void UI_InGameMenu__SetupMinimap(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  int32_t iVar1;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547dfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MinimapHandler)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MinimapScaler);
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap/Prefabs/MinimapPanel");
    Il2CppMethodInitialized_07547dfa = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UI_ElementFactory__InstantiateAndBind(parent,"Minimap/Prefabs/MinimapPanel",(MethodInfo *)0x0);
  targetAddress = &(__this->fields)._minimapPanel;
  (__this->fields)._minimapPanel = pUVar2;
  Il2CppCodeGenWriteBarrier(targetAddress);
  UI_ElementFactory__SetAnchor
            ((__this->fields)._minimapPanel,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._minimapPanel;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_
              (pUVar2,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_MinimapScaler);
    pUVar2 = *targetAddress;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      iVar1 = UnityEngine_SystemInfo__get_graphicsDeviceType((MethodInfo *)0x0);
      if (iVar1 == 4) {
        return;
      }
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__AddComponent_object_
                  (pUVar2,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_MinimapHandler)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetupSnapshot
// il2cpp: void UI_InGameMenu__SetupSnapshot (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2ab40

void UI_InGameMenu__SetupSnapshot(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UI_SnapshotPopup_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547dfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_SnapshotPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_SnapshotPopup);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Snapshot/SnapshotPopup");
    Il2CppMethodInitialized_07547dfb = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                        (pUVar1,"Prefabs/Snapshot/SnapshotPopup",false,
                         (MethodInfo_34D7620 *)
                         MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_SnapshotPopup);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this_00,
                        (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_SnapshotPopup);
    (__this->fields)._snapshotPopup = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._snapshotPopup);
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (pUVar1,(UnityEngine_Vector3_o)ZEXT812(0x3f4ccccd3f4ccccd),(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(__this_00,0,0,(UnityEngine_Vector2_o)0xc302000041a00000,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetupChat
// il2cpp: void UI_InGameMenu__SetupChat (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2a730

void UI_InGameMenu__SetupChat(UI_InGameMenu_o *__this,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  UI_InGameLabel_o *pUVar3;
  UnityEngine_UI_Text_o *__this_00;
  TMPro_TextMeshProUGUI_o *__this_01;
  Settings_IntSetting_o *pSVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UI_FeedPanel_o *pUVar7;
  Settings_SettingsManager_StaticFields *pSVar8;
  UI_VoiceChatPanel_o *pUVar9;
  UI_ChatPanel_o *pUVar10;
  
  if (Il2CppMethodInitialized_07547dfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_ChatPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_FeedPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_VoiceChatPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ChatPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FeedPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_VoiceChatPanel)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/VoiceChatPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/ChatPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/FeedPanel");
    Il2CppMethodInitialized_07547dfc = '\x01';
  }
  pSVar8 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1 = pSVar8->UISettings;
  if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).FeedConsole, pSVar2 == (Settings_BoolSetting_o *)0x0)) goto label_05d2aa3a;
  if ((pSVar2->fields)._value != false) {
    pSVar2 = (pSVar1->fields).GameFeed;
    if (pSVar2 == (Settings_BoolSetting_o *)0x0) goto label_05d2aa3a;
    if ((pSVar2->fields)._value != false) {
      pUVar3 = (__this->fields)._bottomRightLabel;
      if (pUVar3 == (UI_InGameLabel_o *)0x0) goto label_05d2aa3a;
      if ((pUVar3->fields)._legacy == false) {
        __this_01 = (pUVar3->fields)._tmpText;
        if (__this_01 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d2aa3a;
        pUVar5 = TMPro_TMP_Text__get_transform((TMPro_TMP_Text_o *)__this_01,(MethodInfo *)0x0);
      }
      else {
        __this_00 = (pUVar3->fields)._legacyText;
        if (__this_00 == (UnityEngine_UI_Text_o *)0x0) goto label_05d2aa3a;
        pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      }
      pUVar6 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                         (pUVar5,"Prefabs/InGame/FeedPanel",true,
                          (MethodInfo_34D7620 *)
                          MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_FeedPanel);
      if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_05d2aa3a;
      pUVar7 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar6,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_FeedPanel);
      (__this->fields).FeedPanel = pUVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields).FeedPanel);
      pUVar7 = (__this->fields).FeedPanel;
      if (pUVar7 == (UI_FeedPanel_o *)0x0) goto label_05d2aa3a;
      pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar6,2,2,(UnityEngine_Vector2_o)0xc248000000000000,(MethodInfo *)0x0);
      pSVar8 = TypeInfo_Settings_SettingsManager->static_fields;
    }
  }
  if ((pSVar8->SoundSettings == (Settings_SoundSettings_o *)0x0) ||
     (pSVar4 = (pSVar8->SoundSettings->fields).VoiceChatInput, pSVar4 == (Settings_IntSetting_o *)0x0))
  goto label_05d2aa3a;
  if ((pSVar4->fields)._value != 2) {
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar6 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                       (pUVar5,"Prefabs/InGame/VoiceChatPanel",true,
                        (MethodInfo_34D7620 *)
                        MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_VoiceChatPanel);
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_05d2aa3a;
    pUVar9 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar6,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_VoiceChatPanel);
    (__this->fields).VoiceChatPanel = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields).VoiceChatPanel);
    pUVar9 = (__this->fields).VoiceChatPanel;
    if (pUVar9 == (UI_VoiceChatPanel_o *)0x0) goto label_05d2aa3a;
    pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(pUVar6,3,3,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                     (pUVar5,"Prefabs/InGame/ChatPanel",true,
                      (MethodInfo_34D7620 *)MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_ChatPanel);
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    pUVar10 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar6,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_ChatPanel
                        );
    (__this->fields).ChatPanel = pUVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields).ChatPanel);
    pUVar10 = (__this->fields).ChatPanel;
    if (pUVar10 != (UI_ChatPanel_o *)0x0) {
      pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar6,6,6,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
      return;
    }
  }
label_05d2aa3a:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetupLabels
// il2cpp: void UI_InGameMenu__SetupLabels (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d29fb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d29fe5: cmp byte ptr [rip + 0x181d0a1], 0

void UI_InGameMenu__SetupLabels(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UI_KillScorePopup_o **targetAddress;
  UI_KillFeedBigPopup_o **targetAddress_00;
  uint32_t uVar2;
  uint uVar3;
  Settings_UISettings_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  System_Collections_Generic_List_KillFeedSmallPopup__o *__this_00;
  UI_KillFeedSmallPopup_array *pUVar6;
  MethodInfo *pMVar7;
  UI_InGameMenu_HudText_o *__this_01;
  UI_ElementStyle_o *__this_02;
  UnityEngine_Transform_o *pUVar8;
  UI_InGameLabel_o *pUVar9;
  UI_KillScorePopup_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  UI_KillFeedBigPopup_o *pUVar12;
  UI_KillFeedSmallPopup_o *__this_03;
  int iVar13;
  int iVar14;
  MethodInfo *in_stack_ffffffffffffffa8;
  ulong local_48;
  
  if (Il2CppMethodInitialized_07547dfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_KillFeedBigPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_KillFeedSmallPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_KillScorePopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_IgnoreScaler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_KillFeedScaler)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu_HudText);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"TopRight");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleRight");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TopLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TopCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomRight");
    Il2CppMethodInitialized_07547dfd = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_0754708d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_0754708d = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  (__this->fields)._legacyLabels = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_legacyLabels;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_InGameMenu_HudText);
  UI_InGameMenu_HudText___ctor(__this_01,method);
  (__this->fields)._hudText = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hudText);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_02,0x16,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar9 = UI_InGameMenu__CreateLabel
                     (__this,"TopCenter",pUVar8,__this_02,0x202,1,
                      (UnityEngine_Vector2_o)0xc120000000000000,in_stack_ffffffffffffffa8);
  (__this->fields)._topCenterLabel = pUVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._topCenterLabel);
  pUVar11 = (__this->fields).KDRReference;
  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
    pUVar9 = UI_InGameMenu__CreateLabel
                       (__this,"TopLeft",pUVar8,__this_02,0x201,0,
                        (UnityEngine_Vector2_o)0xc120000041200000,in_stack_ffffffffffffffa8);
    (__this->fields)._topLeftLabel = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._topLeftLabel);
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar9 = UI_InGameMenu__CreateLabel
                       (__this,"TopRight",pUVar8,__this_02,0x204,2,
                        (UnityEngine_Vector2_o)0xc1200000c1200000,in_stack_ffffffffffffffa8);
    (__this->fields)._topRightLabel = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._topRightLabel);
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar9 = UI_InGameMenu__CreateLabel
                       (__this,"MiddleCenter",pUVar8,__this_02,0x202,4,
                        (UnityEngine_Vector2_o)0x42c8000000000000,in_stack_ffffffffffffffa8);
    (__this->fields)._middleCenterLabel = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._middleCenterLabel);
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar9 = UI_InGameMenu__CreateLabel
                       (__this,"MiddleRight",pUVar8,__this_02,0x202,5,
                        (UnityEngine_Vector2_o)0xc1200000,in_stack_ffffffffffffffa8);
    (__this->fields)._middleRightLabel = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._middleRightLabel);
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar9 = UI_InGameMenu__CreateLabel
                       (__this,"MiddleLeft",pUVar8,__this_02,0x202,3,
                        (UnityEngine_Vector2_o)0x41200000,in_stack_ffffffffffffffa8);
    (__this->fields)._middleLeftLabel = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._middleLeftLabel);
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar9 = UI_InGameMenu__CreateLabel
                       (__this,"BottomCenter",pUVar8,__this_02,0x202,7,
                        (UnityEngine_Vector2_o)0x4120000000000000,in_stack_ffffffffffffffa8);
    (__this->fields)._bottomCenterLabel = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._bottomCenterLabel);
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar9 = UI_InGameMenu__CreateLabel
                       (__this,"BottomLeft",pUVar8,__this_02,0x201,6,
                        (UnityEngine_Vector2_o)0x4120000041200000,in_stack_ffffffffffffffa8);
    (__this->fields)._bottomLeftLabel = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._bottomLeftLabel);
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar9 = UI_InGameMenu__CreateLabel
                       (__this,"BottomRight",pUVar8,__this_02,0x204,8,
                        (UnityEngine_Vector2_o)0x41200000c1200000,in_stack_ffffffffffffffa8);
    (__this->fields)._bottomRightLabel = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._bottomRightLabel);
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar10 = UI_ElementFactory__CreateDefaultPopup_object_
                        (pUVar8,false,
                         (MethodInfo_34D7290 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_KillScorePopup)
    ;
    targetAddress = &(__this->fields)._killScorePopup;
    (__this->fields)._killScorePopup = pUVar10;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar10 = (__this->fields)._killScorePopup;
    if ((pUVar10 != (UI_KillScorePopup_o *)0x0) &&
       (pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0),
       pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__AddComponent_object_
                (pUVar11,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_IgnoreScaler);
      pUVar10 = *targetAddress;
      if (pUVar10 != (UI_KillScorePopup_o *)0x0) {
        pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
        UI_ElementFactory__SetAnchor(pUVar11,4,4,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
        pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar12 = UI_ElementFactory__CreateDefaultPopup_object_
                            (pUVar8,false,
                             (MethodInfo_34D7290 *)
                             MethodInfo_UI_ElementFactory_CreateDefaultPopup_KillFeedBigPopup);
        targetAddress_00 = &(__this->fields)._killFeedBigPopup;
        (__this->fields)._killFeedBigPopup = pUVar12;
        Il2CppCodeGenWriteBarrier(targetAddress_00);
        pUVar12 = (__this->fields)._killFeedBigPopup;
        if ((pUVar12 != (UI_KillFeedBigPopup_o *)0x0) &&
           (pUVar11 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
           pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__AddComponent_object_
                    (pUVar11,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_KillFeedScaler);
          pUVar12 = *targetAddress_00;
          if (pUVar12 != (UI_KillFeedBigPopup_o *)0x0) {
            pUVar11 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      (pUVar11,1,4,(UnityEngine_Vector2_o)0xc2f0000000000000,(MethodInfo *)0x0);
            pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
            if ((pSVar4 != (Settings_UISettings_o *)0x0) &&
               (pSVar5 = (pSVar4->fields).KillFeedCount, pSVar5 != (Settings_IntSetting_o *)0x0)) {
              iVar14 = (pSVar5->fields)._value + -1;
              if (0 < iVar14) {
                iVar13 = 0;
                do {
                  while( true ) {
                    pUVar8 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    __this_03 = UI_ElementFactory__CreateDefaultPopup_object_
                                          (pUVar8,false,
                                           (MethodInfo_34D7290 *)
                                           MethodInfo_UI_ElementFactory_CreateDefaultPopup_KillFeedSmallPopup)
                    ;
                    if ((__this_03 == (UI_KillFeedSmallPopup_o *)0x0) ||
                       (pUVar11 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
                       pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2a724;
                    UnityEngine_GameObject__AddComponent_object_
                              (pUVar11,(MethodInfo_353B6A0 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_KillFeedScaler);
                    pUVar11 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                    local_48 = (ulong)(uint)((float)iVar13 * -35.0 + -162.0);
                    UI_ElementFactory__SetAnchor
                              (pUVar11,1,4,(UnityEngine_Vector2_o)(local_48 << 0x20),(MethodInfo *)0x0);
                    pMVar7 = MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_Add;
                    __this_00 = (__this->fields)._killFeedSmallPopups;
                    if (__this_00 == (System_Collections_Generic_List_KillFeedSmallPopup__o *)0x0)
                    goto label_05d2a724;
                    piVar1 = &(__this_00->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar6 = (__this_00->fields)._items;
                    if (pUVar6 == (UI_KillFeedSmallPopup_array *)0x0) goto label_05d2a724;
                    uVar3 = (__this_00->fields)._size;
                    if ((uint)pUVar6->max_length <= uVar3) break;
                    (__this_00->fields)._size = uVar3 + 1;
                    pUVar6->m_Items[(int)uVar3] = __this_03;
                    Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar3);
                    iVar13 = iVar13 + 1;
                    if (iVar14 == iVar13) {
                      return;
                    }
                  }
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_03,
                             (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                  iVar13 = iVar13 + 1;
                } while (iVar14 != iVar13);
              }
              return;
            }
          }
        }
      }
    }
  }
label_05d2a724:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$CreateLabel
// il2cpp: UI_InGameLabel_o* UI_InGameMenu__CreateLabel (UI_InGameMenu_o* __this, System_String_o* label, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, int32_t alignment, int32_t anchor, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x5d2b4f0

UI_InGameLabel_o *
UI_InGameMenu__CreateLabel
          (UI_InGameMenu_o *__this,System_String_o *label,UnityEngine_Transform_o *parent,
          UI_ElementStyle_o *style,int32_t alignment,int32_t anchor,UnityEngine_Vector2_o offset,
          MethodInfo *method)

{
  bool legacy;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UI_InGameLabel_o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547dfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameLabel);
    Il2CppMethodInitialized_07547dfe = '\x01';
  }
  legacy = (__this->fields)._legacyLabels;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_InGameLabel);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields)._parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._parent);
  (__this_01->fields)._style = style;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._style);
  (__this_01->fields)._alignment = alignment;
  (__this_01->fields)._anchor = anchor;
  (__this_01->fields)._offset.fields = offset.fields;
  UI_InGameLabel__SetLegacy(__this_01,legacy,method_00);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._labels;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this_00,(Il2CppObject *)label,(Il2CppObject *)__this_01,
             (MethodInfo_4AAD4C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_set_Item);
  return __this_01;
}


// UI.InGameMenu$$SetLegacyLabels
// il2cpp: void UI_InGameMenu__SetLegacyLabels (UI_InGameMenu_o* __this, bool legacy, const MethodInfo* method);
// 0x5d2b5e0
// eh: try 0x5d2b6e4..0x5d2b7c4 -> pad 0x5d2b7cd (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d2b7e5..0x5d2b7ea -> pad 0x5d2b80d cleanup
// eh: try 0x5d2b810..0x5d2b81a -> pad 0x5d2b822 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d2b785: jmp 0x5d2b7c4
// asm:   0x5d2b7c9: jmp 0x5d2b7cd
// asm:   0x5d2b7cb: jmp 0x5d2b7cd
// asm:   0x5d2b7cd: mov rbp, rax
// asm:   0x5d2b7d0: cmp edx, 1
// asm:   0x5d2b7d3: jne 0x5d2b810
// asm:   0x5d2b7d5: mov rdi, rbp
// asm:   0x5d2b7d8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d2b7dd: mov rbx, qword ptr [rax]
// asm:   0x5d2b7e0: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d2b7e5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d2b7ea: lea rax, [rip + 0x15647d7]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_Dispose
// asm:   0x5d2b7f1: mov rsi, qword ptr [rax]
// asm:   0x5d2b7f4: mov rdi, rsp
// asm:   0x5d2b7f7: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5d2b7fc: test rbx, rbx
// asm:   0x5d2b7ff: je 0x5d2b719
// asm:   0x5d2b805: mov rdi, rbx
// asm:   0x5d2b808: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d2b80d: mov rbp, rax
// asm:   0x5d2b810: lea rdi, [rsp + 0x18]
// asm:   0x5d2b815: call 0x2fdc0d0  ; il2cpp_runtime_helper_02fdc0d0()
// asm:   0x5d2b81a: mov rdi, rbp
// asm:   0x5d2b81d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d2b822: mov rdi, rax
// asm:   0x5d2b825: call 0x2ab61e0  ; __clang_call_terminate()

void UI_InGameMenu__SetLegacyLabels(UI_InGameMenu_o *__this,bool legacy,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UI_FeedPanel_o *pUVar1;
  UI_InGameLabel_o *pUVar2;
  UnityEngine_UI_Text_o *__this_01;
  TMPro_TextMeshProUGUI_o *__this_02;
  bool bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Transform_o *parent;
  MethodInfo *method_00;
  undefined1 auStack_58 [8];
  undefined1 *puStack_50;
  UI_InGameLabel_o *pUStack_48;
  undefined1 auStack_40 [16];
  UI_InGameLabel_o *pUStack_30;
  
  if (Il2CppMethodInitialized_07547dff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_InGameLabel_GetEnumerator
              );
    Il2CppMethodInitialized_07547dff = '\x01';
  }
  auStack_58 = (undefined1  [8])0x0;
  puStack_50 = (undefined1 *)0x0;
  pUStack_48 = (UI_InGameLabel_o *)0x0;
  if ((__this->fields)._legacyLabels != legacy) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._labels;
    if ((__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (__this_03 = System_Collections_Generic_Dictionary_object__object___get_Values
                              (__this_00,
                               (MethodInfo_4AAD2A0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_get_Values)
       , __this_03 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
    goto label_05d2b7c4;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_40,
               __this_03,
               (MethodInfo_43F93D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_InGameLabel_GetEnumerator
              );
    pUStack_48 = pUStack_30;
    auStack_58 = (undefined1  [8])auStack_40._0_8_;
    puStack_50 = (undefined1 *)auStack_40._8_8_;
    auStack_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    auStack_40._8_8_ = auStack_58;
    while( true ) {
      bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                         auStack_58,
                         (MethodInfo_4CE7200 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_MoveNext
                        );
      if (!bVar3) break;
      if (pUStack_48 == (UI_InGameLabel_o *)0x0) {
        ThrowNullReferenceException();
      }
      UI_InGameLabel__SetLegacy(pUStack_48,legacy,method_00);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_58,
               (MethodInfo_4CE71F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_Dispose
              );
    pUVar1 = (__this->fields).FeedPanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (__this->fields).FeedPanel;
      if (pUVar1 == (UI_FeedPanel_o *)0x0) {
label_05d2b7c4:
        ThrowNullReferenceException();
      }
      __this_04 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._bottomRightLabel;
      if (pUVar2 == (UI_InGameLabel_o *)0x0) goto label_05d2b7c4;
      if ((pUVar2->fields)._legacy == false) {
        __this_02 = (pUVar2->fields)._tmpText;
        if (__this_02 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d2b7c4;
        parent = TMPro_TMP_Text__get_transform((TMPro_TMP_Text_o *)__this_02,(MethodInfo *)0x0);
      }
      else {
        __this_01 = (pUVar2->fields)._legacyText;
        if (__this_01 == (UnityEngine_UI_Text_o *)0x0) goto label_05d2b7c4;
        parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      }
      if (__this_04 == (UnityEngine_Transform_o *)0x0) goto label_05d2b7c4;
      UnityEngine_Transform__SetParent_692d510(__this_04,parent,false,(MethodInfo *)0x0);
    }
    (__this->fields)._legacyLabels = legacy;
  }
  return;
}


// UI.InGameMenu$$SetupLoading
// il2cpp: void UI_InGameMenu__SetupLoading (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d29db0

void UI_InGameMenu__SetupLoading(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_InGameBackgroundMenu_o **targetAddress;
  UI_InGameBackgroundMenu_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UI_GlobalPauseGamePopup_o *pUVar3;
  
  if (Il2CppMethodInitialized_07547e00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_GlobalPauseGamePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateMenu_InGameBackgroundMenu);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/BackgroundMenu");
    Il2CppMethodInitialized_07547e00 = '\x01';
  }
  pUVar1 = UI_ElementFactory__CreateMenu_object_
                     ("Prefabs/Panels/BackgroundMenu",
                      (MethodInfo_34D73E0 *)MethodInfo_UI_ElementFactory_CreateMenu_InGameBackgroundMenu);
  targetAddress = &(__this->fields)._backgroundMenu;
  (__this->fields)._backgroundMenu = pUVar1;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar1 = (__this->fields)._backgroundMenu;
  if (pUVar1 != (UI_InGameBackgroundMenu_o *)0x0) {
    (*(pUVar1->klass->vtable)._4_Setup.methodPtr)(pUVar1,(pUVar1->klass->vtable)._4_Setup.method);
    pUVar1 = *targetAddress;
    if (pUVar1 != (UI_InGameBackgroundMenu_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetAsFirstSibling(pUVar2,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar3 = UI_ElementFactory__CreateDefaultPopup_object_
                           (pUVar2,false,
                            (MethodInfo_34D7290 *)
                            MethodInfo_UI_ElementFactory_CreateDefaultPopup_GlobalPauseGamePopup);
        (__this->fields)._globalPauseGamePopup = pUVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._globalPauseGamePopup);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$OnFinishLoading
// il2cpp: void UI_InGameMenu__OnFinishLoading (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2b830
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d2b971: lea rdi, [r14 + 0x238]
// asm:   0x5d2b978: jmp 0x5d2b98c

void UI_InGameMenu__OnFinishLoading(UI_InGameMenu_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *pGVar2;
  Settings_GeneralSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  GameManagers_InGameManager_c *pGVar5;
  bool bVar6;
  UnityEngine_Transform_o *parent;
  UI_CutsceneDialoguePanel_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  MethodInfo *method_00;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_07547e01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_CutsceneDialoguePanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547e01 = '\x01';
  }
  UI_InGameMenu__SetupGameplayPopups(__this,method);
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar7 = UI_ElementFactory__CreateDefaultPopup_object_
                     (parent,false,
                      (MethodInfo_34D7290 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_CutsceneDialoguePanel);
  (__this->fields)._cutsceneDialoguePanel = pUVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cutsceneDialoguePanel);
  pUVar7 = (__this->fields)._cutsceneDialoguePanel;
  if (pUVar7 != (UI_CutsceneDialoguePanel_o *)0x0) {
    pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(pUVar8,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    pGVar5 = TypeInfo_GameManagers_InGameManager;
    pGVar2 = (GameManagers_InGameManager_o *)
             TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
      (__this->fields)._gameManager = (GameManagers_InGameManager_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
label_05d2ba1c:
        il2cpp_codegen_raise_invalid_cast_exception(pGVar2,pGVar5);
      }
      (__this->fields)._gameManager = pGVar2;
      if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pGVar5)) goto label_05d2ba1c;
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager);
    __this_00 = (UI_InGameMenu_o *)(__this->fields)._minimapPanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      return;
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if ((pSVar3 != (Settings_GeneralSettings_o *)0x0) &&
       (pSVar4 = (pSVar3->fields).MinimapEnabled, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
      if ((pSVar4->fields)._value == false) {
        return;
      }
      bVar6 = UI_InGameMenu__AllowMap(__this_00,method_00);
      if (!bVar6) {
        return;
      }
      pUVar8 = (__this->fields)._minimapPanel;
      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar8,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetupGameplayPopups
// il2cpp: void UI_InGameMenu__SetupGameplayPopups (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d297b0

void UI_InGameMenu__SetupGameplayPopups(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_o *pUVar4;
  UI_BasePopup_array *pUVar5;
  MethodInfo *pMVar6;
  UnityEngine_Transform_o *pUVar7;
  UI_CharacterPopup_o *pUVar8;
  UI_ScoreboardPopup_o *pUVar9;
  UI_MapPopup_o *pUVar10;
  
  if (Il2CppMethodInitialized_07547e02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_CharacterPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    Il2CppMethodInitialized_07547e02 = '\x01';
  }
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = UI_ElementFactory__CreateDefaultPopup_object_
                     (pUVar7,false,
                      (MethodInfo_34D7290 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_CharacterPopup);
  (__this->fields)._characterPopup = (UI_BasePopup_o *)pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._characterPopup);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar9 = UI_ElementFactory__CreateDefaultPopup_object_
                     (pUVar7,false,
                      (MethodInfo_34D7290 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_ScoreboardPopup);
  (__this->fields)._scoreboardPopup = (UI_BasePopup_o *)pUVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scoreboardPopup);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar10 = UI_ElementFactory__CreateDefaultPopup_object_
                      (pUVar7,false,
                       (MethodInfo_34D7290 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapPopup);
  (__this->fields)._mapPopup = (UI_BasePopup_o *)pUVar10;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mapPopup);
  pMVar6 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
  pSVar3 = (__this->fields)._popups;
  if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    pUVar4 = (__this->fields)._characterPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar3->fields)._items;
    if (pUVar5 != (UI_BasePopup_array *)0x0) {
      uVar2 = (pSVar3->fields)._size;
      if (uVar2 < (uint)pUVar5->max_length) {
        (pSVar3->fields)._size = uVar2 + 1;
        pUVar5->m_Items[(int)uVar2] = pUVar4;
        Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar4,
                   (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
      }
      pMVar6 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
      pSVar3 = (__this->fields)._popups;
      if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        pUVar4 = (__this->fields)._scoreboardPopup;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar5 = (pSVar3->fields)._items;
        if (pUVar5 != (UI_BasePopup_array *)0x0) {
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pUVar5->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pUVar5->m_Items[(int)uVar2] = pUVar4;
            Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar4,
                       (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          }
          pMVar6 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
          pSVar3 = (__this->fields)._popups;
          if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            pUVar4 = (__this->fields)._mapPopup;
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar5 = (pSVar3->fields)._items;
            if (pUVar5 != (UI_BasePopup_array *)0x0) {
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pUVar5->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pUVar5->m_Items[(int)uVar2] = pUVar4;
                Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
                return;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar4,
                         (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$AllowMap
// il2cpp: bool UI_InGameMenu__AllowMap (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2ba30

bool UI_InGameMenu__AllowMap(UI_InGameMenu_o *__this,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547e03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547e03 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).GlobalMinimapDisable, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar3->fields)._value != false) {
      return false;
    }
    pSVar3 = (pSVar2->fields).RealismMode;
    if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
      return (pSVar3->fields)._value == false;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$InMenu
// il2cpp: bool UI_InGameMenu__InMenu (const MethodInfo* method);
// 0x5d1f610
// eh: try 0x5d1f773..0x5d1f80a -> pad 0x5d1f819 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d1f831..0x5d1f836 -> pad 0x5d1f859 cleanup
// eh: try 0x5d1f85c..0x5d1f866 -> pad 0x5d1f86e catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d1f6a7: jmp 0x5d1f6f4
// asm:   0x5d1f76d: nop dword ptr [rax]
// asm:   0x5d1f817: jmp 0x5d1f819
// asm:   0x5d1f819: mov r14, rax
// asm:   0x5d1f81c: cmp edx, 1
// asm:   0x5d1f81f: jne 0x5d1f85c
// asm:   0x5d1f821: mov rdi, r14
// asm:   0x5d1f824: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d1f829: mov rbp, qword ptr [rax]
// asm:   0x5d1f82c: mov qword ptr [rsp + 0x20], rbp
// asm:   0x5d1f831: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d1f836: lea rax, [rip + 0x156df23]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x5d1f83d: mov rsi, qword ptr [rax]
// asm:   0x5d1f840: mov rdi, rsp
// asm:   0x5d1f843: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d1f848: test rbp, rbp
// asm:   0x5d1f84b: je 0x5d1f7b8
// asm:   0x5d1f851: mov rdi, rbp
// asm:   0x5d1f854: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d1f859: mov r14, rax
// asm:   0x5d1f85c: lea rdi, [rsp + 0x20]
// asm:   0x5d1f861: call 0x2fdc100  ; il2cpp_runtime_helper_02fdc100()
// asm:   0x5d1f866: mov rdi, r14
// asm:   0x5d1f869: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d1f86e: mov rdi, rax
// asm:   0x5d1f871: call 0x2ab61e0  ; __clang_call_terminate()

bool UI_InGameMenu__InMenu(MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_BaseMenu_o *pUVar3;
  System_Collections_Generic_List_BasePopup__o *__this;
  UI_ActionHandler_o *__this_00;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07547e04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547e04 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  if (pUVar3 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
    }
  }
  bVar4 = UI_MobileLayoutEditorOverlay__get_IsOpen((MethodInfo *)0x0);
  if ((!bVar4) &&
     (bVar4 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsInGameOverlayActive((MethodInfo *)0x0), !bVar4
     )) {
    if (pUVar3 == (UI_BaseMenu_o *)0x0) {
label_05d1f812:
      ThrowNullReferenceException();
    }
    iVar2 = *(int *)&(*(uint64_t *)((char *)pUVar3 + 0x260));
    iVar5 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if (iVar2 != iVar5) {
      __this = (pUVar3->fields)._popups;
      if (__this == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_05d1f812;
      System_Collections_Generic_List_object___GetEnumerator
                (&local_58,(System_Collections_Generic_List_object__o *)__this,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
      local_38 = 0;
      local_30 = (undefined1 *)&local_58;
      do {
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
          if ((*(uint64_t *)((char *)pUVar3 + 0x98)) != (UI_BaseMenu_c *)0x0) {
            if (*(char *)&(((*(Il2CppClass **)((char *)pUVar3 + 0x98)))->_1).element_class != '\0') {
              return true;
            }
            if ((*(uint64_t *)((char *)pUVar3 + 0xa0)) != (void *)0x0) {
              if (*(char *)((long)(*(uint64_t *)((char *)pUVar3 + 0xa0)) + 0x28) != '\0') {
                return true;
              }
              __this_00 = (UI_ActionHandler_o *)(*(uint64_t *)((char *)pUVar3 + 0xa8));
              if (__this_00 != (UI_ActionHandler_o *)0x0) {
                bVar4 = UI_ActionHandler__get_BlocksInput(__this_00,(MethodInfo *)0x0);
                return bVar4;
              }
            }
          }
          goto label_05d1f812;
        }
        if (local_58.fields._current == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
      } while (*(char *)&local_58.fields._current[9].klass == '\0');
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
                );
    }
  }
  return true;
}


// UI.InGameMenu$$TryDismissGameplayMenu
// il2cpp: bool UI_InGameMenu__TryDismissGameplayMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2bab0

bool UI_InGameMenu__TryDismissGameplayMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_GeneralInputSettings_o *pSVar3;
  UI_BasePopup_o *pUVar4;
  Settings_KeybindSetting_o *pSVar5;
  bool bVar6;
  int32_t iVar7;
  UnityEngine_Transform_o *parent;
  UI_BasePopup_o *x;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547e05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547e05 = '\x01';
  }
  iVar1 = (__this->fields)._lastDismissedMenuFrame;
  iVar7 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  if (iVar1 == iVar7) {
    return true;
  }
  bVar6 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsInGameOverlayActive((MethodInfo *)0x0);
  if (bVar6) {
    return false;
  }
  method_00 = (MethodInfo *)0x0;
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  x = UI_InGameMenu__FindTopmostPopup(parent,method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return false;
  }
  if (x == (UI_BasePopup_o *)0x0) goto label_05d2bd1b;
  bVar6 = (*(x->klass->vtable)._57_DismissFromEscape.methodPtr)
                    (x,(x->klass->vtable)._57_DismissFromEscape.method);
  if (!bVar6) {
    return false;
  }
  iVar7 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  (__this->fields)._lastDismissedMenuFrame = iVar7;
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  Gisketch_Aottg2UI_Actions_GisketchInputCapture__BlockThisFrame((MethodInfo *)0x0);
  (__this->fields).SkipAHSSInput = true;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar2 == (Settings_InputSettings_o *)0x0) goto label_05d2bd1b;
  pSVar3 = (pSVar2->fields).General;
  pUVar4 = (__this->fields)._scoreboardPopup;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
label_05d2bc39:
    if ((pSVar3 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar5 = (pSVar3->fields).ToggleScoreboard, pSVar5 == (Settings_KeybindSetting_o *)0x0))
    goto label_05d2bd1b;
    bVar6 = Settings_KeybindSetting__GetKey(pSVar5,false,(MethodInfo *)0x0);
  }
  else {
    pUVar4 = (__this->fields)._scoreboardPopup;
    if (pUVar4 == (UI_BasePopup_o *)0x0) goto label_05d2bd1b;
    if ((pUVar4->fields).IsActive == false) goto label_05d2bc39;
    bVar6 = false;
  }
  (__this->fields).ScoreboardDismissedUntilRelease = bVar6;
  pUVar4 = (__this->fields)._mapPopup;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    pUVar4 = (__this->fields)._mapPopup;
    if (pUVar4 == (UI_BasePopup_o *)0x0) goto label_05d2bd1b;
    if ((pUVar4->fields).IsActive != false) {
      bVar6 = false;
      goto label_05d2bcc2;
    }
  }
  if ((pSVar3 != (Settings_GeneralInputSettings_o *)0x0) &&
     (pSVar5 = (pSVar3->fields).ToggleMap, pSVar5 != (Settings_KeybindSetting_o *)0x0)) {
    bVar6 = Settings_KeybindSetting__GetKey(pSVar5,false,(MethodInfo *)0x0);
label_05d2bcc2:
    (__this->fields).MapDismissedUntilRelease = bVar6;
    if (((x->fields).IsActive == false) &&
       (bVar6 = (*(x->klass->vtable)._56_get_PlayEscapeSound.methodPtr)
                          (x,(x->klass->vtable)._56_get_PlayEscapeSound.method), bVar6)) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      UI_UIManager__PlaySound(1,(MethodInfo *)0x0);
    }
    return true;
  }
label_05d2bd1b:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$FindTopmostPopup
// il2cpp: UI_BasePopup_o* UI_InGameMenu__FindTopmostPopup (UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x5d2bd20

UI_BasePopup_o * UI_InGameMenu__FindTopmostPopup(UnityEngine_Transform_o *parent,MethodInfo *method)

{
  bool bVar1;
  uint index;
  int32_t iVar2;
  UnityEngine_GameObject_o *__this;
  UI_BasePopup_o *x;
  UnityEngine_Transform_o *parent_00;
  UI_BasePopup_o *x_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547e06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e06 = '\x01';
  }
  if ((parent == (UnityEngine_Transform_o *)0x0) ||
     (__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent,(MethodInfo *)0x0),
     __this == (UnityEngine_GameObject_o *)0x0)) {
label_05d2be89:
    ThrowNullReferenceException();
  }
  x_00 = (UI_BasePopup_o *)0x0;
  bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this,(MethodInfo *)0x0);
  if (bVar1) {
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)parent,
                   (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UI_BasePopup_o *)0x0) goto label_05d2be89;
      if ((x->fields).IsActive == false) {
        return (UI_BasePopup_o *)0x0;
      }
    }
    index = UnityEngine_Transform__get_childCount(parent,(MethodInfo *)0x0);
    do {
      index = index - 1;
      if ((int)index < 0) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          return (UI_BasePopup_o *)0x0;
        }
        if (x != (UI_BasePopup_o *)0x0) {
          iVar2 = (*(x->klass->vtable)._55_get_EscapeBehavior.methodPtr)
                            (x,(x->klass->vtable)._55_get_EscapeBehavior.method);
          if (iVar2 == 2) {
            x = (UI_BasePopup_o *)0x0;
          }
          return x;
        }
        goto label_05d2be89;
      }
      method_00 = (MethodInfo *)(ulong)index;
      parent_00 = UnityEngine_Transform__GetChild(parent,index,(MethodInfo *)0x0);
      x_00 = UI_InGameMenu__FindTopmostPopup(parent_00,method_00);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while (!bVar1);
  }
  return x_00;
}


// UI.InGameMenu$$SetPauseMenu
// il2cpp: void UI_InGameMenu__SetPauseMenu (UI_InGameMenu_o* __this, bool enabled, const MethodInfo* method);
// 0x5d2be90

void UI_InGameMenu__SetPauseMenu(UI_InGameMenu_o *__this,bool enabled,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Canvas_o *__this_00;
  MethodInfo *method_00;
  undefined7 in_register_00000031;
  
  if ((int)(MethodInfo *)CONCAT71(in_register_00000031,enabled) == 0) {
    UI_InGameMenu__HideAllMenus(__this,(__this->fields)._characterPopup,method);
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__HideInGameOverlay(true,(MethodInfo *)0x0);
    (__this->fields).SkipAHSSInput = true;
  }
  else {
    bVar1 = UI_InGameMenu__IsPauseMenuActive(__this,(MethodInfo *)CONCAT71(in_register_00000031,enabled));
    if (!bVar1) {
      UI_InGameMenu__HideAllMenus(__this,(__this->fields)._characterPopup,method_00);
      Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowPause((MethodInfo *)0x0);
    }
  }
  if (Il2CppMethodInitialized_07547df4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    Il2CppMethodInitialized_07547df4 = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
  if (__this_00 == (UnityEngine_Canvas_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,true,(MethodInfo *)0x0);
  return;
}


// UI.InGameMenu$$ToggleScoreboardMenu
// il2cpp: void UI_InGameMenu__ToggleScoreboardMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2c0c0

void UI_InGameMenu__ToggleScoreboardMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  bool bVar2;
  MethodInfo *method_00;
  UnityEngine_Canvas_o *__this_00;
  MethodInfo *method_01;
  
  pUVar1 = (__this->fields)._scoreboardPopup;
  if (pUVar1 != (UI_BasePopup_o *)0x0) {
    method_00 = (MethodInfo *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      bVar2 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)method_00,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar1 = (__this->fields)._scoreboardPopup;
        if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_05d2c186;
        (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
      }
      else {
        bVar2 = UI_InGameMenu__InMenu(method_00);
        if (!bVar2) {
          UI_InGameMenu__HideAllMenus(__this,(UI_BasePopup_o *)0x0,method_01);
          pUVar1 = (__this->fields)._scoreboardPopup;
          if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_05d2c186;
          (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
        }
      }
      if (Il2CppMethodInitialized_07547df4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
        Il2CppMethodInitialized_07547df4 = '\x01';
      }
      __this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
      if (__this_00 != (UnityEngine_Canvas_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05d2c186:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetScoreboardMenu
// il2cpp: void UI_InGameMenu__SetScoreboardMenu (UI_InGameMenu_o* __this, bool enabled, bool fromClick, const MethodInfo* method);
// 0x5d2c190

void UI_InGameMenu__SetScoreboardMenu(UI_InGameMenu_o *__this,bool enabled,bool fromClick,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  bool bVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_var;
  undefined7 in_register_00000031;
  
  if ((int)CONCAT71(in_register_00000031,enabled) == 0) {
    pUVar1 = (__this->fields)._scoreboardPopup;
    if (pUVar1 != (UI_BasePopup_o *)0x0) {
      (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
      if (fromClick) {
        (__this->fields).SkipAHSSInput = true;
        return;
      }
      return;
    }
  }
  else {
    bVar2 = UI_InGameMenu__InMenu((MethodInfo *)__this);
    if (bVar2) {
      return;
    }
    UI_InGameMenu__HideAllMenus
              (__this,(UI_BasePopup_o *)0x0,(MethodInfo *)CONCAT44(extraout_var,extraout_EDX));
    pUVar1 = (__this->fields)._scoreboardPopup;
    if (pUVar1 != (UI_BasePopup_o *)0x0) {
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$ToggleMapMenu
// il2cpp: void UI_InGameMenu__ToggleMapMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2c210

void UI_InGameMenu__ToggleMapMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  bool bVar2;
  UI_InGameMenu_o *__this_00;
  UnityEngine_Canvas_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  pUVar1 = (__this->fields)._mapPopup;
  if (pUVar1 != (UI_BasePopup_o *)0x0) {
    __this_00 = (UI_InGameMenu_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      method_01 = (MethodInfo *)0x0;
      bVar2 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar1 = (__this->fields)._mapPopup;
        if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_05d2c2df;
        (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
      }
      else {
        bVar2 = UI_InGameMenu__InMenu((MethodInfo *)__this_00);
        if (!bVar2) {
          bVar2 = UI_InGameMenu__AllowMap(__this_00,method_01);
          if (bVar2) {
            UI_InGameMenu__HideAllMenus(__this,(UI_BasePopup_o *)0x0,method_00);
            pUVar1 = (__this->fields)._mapPopup;
            if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_05d2c2df;
            (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
          }
        }
      }
      if (Il2CppMethodInitialized_07547df4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
        Il2CppMethodInitialized_07547df4 = '\x01';
      }
      __this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
      if (__this_01 != (UnityEngine_Canvas_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05d2c2df:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetMapMenu
// il2cpp: void UI_InGameMenu__SetMapMenu (UI_InGameMenu_o* __this, bool enabled, bool fromClick, const MethodInfo* method);
// 0x5d2c2f0

void UI_InGameMenu__SetMapMenu(UI_InGameMenu_o *__this,bool enabled,bool fromClick,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  bool bVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_var;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  UI_InGameMenu_o *__this_00;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,enabled);
  if ((int)method_00 == 0) {
    pUVar1 = (__this->fields)._mapPopup;
    if (pUVar1 == (UI_BasePopup_o *)0x0) {
label_05d2c36c:
      ThrowNullReferenceException();
    }
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    if (fromClick) {
      (__this->fields).SkipAHSSInput = true;
    }
  }
  else {
    __this_00 = __this;
    bVar2 = UI_InGameMenu__InMenu((MethodInfo *)__this);
    if (!bVar2) {
      bVar2 = UI_InGameMenu__AllowMap(__this_00,method_00);
      if (bVar2) {
        UI_InGameMenu__HideAllMenus
                  (__this,(UI_BasePopup_o *)0x0,(MethodInfo *)CONCAT44(extraout_var,extraout_EDX));
        pUVar1 = (__this->fields)._mapPopup;
        if (pUVar1 != (UI_BasePopup_o *)0x0) {
          (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
          return;
        }
        goto label_05d2c36c;
      }
    }
  }
  return;
}


// UI.InGameMenu$$SetCharacterMenu
// il2cpp: void UI_InGameMenu__SetCharacterMenu (UI_InGameMenu_o* __this, bool enabled, const MethodInfo* method);
// 0x5d2c380

void UI_InGameMenu__SetCharacterMenu(UI_InGameMenu_o *__this,bool enabled,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  bool bVar2;
  UnityEngine_Canvas_o *__this_00;
  MethodInfo *method_00;
  UnityEngine_Object_c **method_01;
  
  method_01 = (UnityEngine_Object_c **)__this;
  if (Il2CppMethodInitialized_07547e07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    method_01 = &TypeInfo_UnityEngine_Object;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e07 = '\x01';
  }
  if (enabled) {
    bVar2 = UI_InGameMenu__InMenu((MethodInfo *)method_01);
    if (!bVar2) {
      UI_InGameMenu__HideAllMenus(__this,(UI_BasePopup_o *)0x0,method_00);
      pUVar1 = (__this->fields)._characterPopup;
      if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_05d2c4c0;
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
    }
  }
  else {
    pUVar1 = (__this->fields)._characterPopup;
    if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_05d2c4c0;
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    pUVar1 = (__this->fields)._characterChangePopup;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._characterChangePopup;
      if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_05d2c4c0;
      (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    }
  }
  if (Il2CppMethodInitialized_07547df4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    Il2CppMethodInitialized_07547df4 = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
  if (__this_00 != (UnityEngine_Canvas_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,true,(MethodInfo *)0x0);
    return;
  }
label_05d2c4c0:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$ShowCharacterChangeMenu
// il2cpp: void UI_InGameMenu__ShowCharacterChangeMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2c4d0

void UI_InGameMenu__ShowCharacterChangeMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UI_BasePopup_o **targetAddress;
  uint uVar2;
  UI_BasePopup_o *pUVar3;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  UI_BasePopup_array *pUVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  UnityEngine_Transform_o *parent;
  UI_CharacterChangePopup_o *pUVar7;
  MethodInfo *method_00;
  UnityEngine_Object_c **method_01;
  
  method_01 = (UnityEngine_Object_c **)__this;
  if (Il2CppMethodInitialized_07547e08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_CharacterChangePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    method_01 = &TypeInfo_UnityEngine_Object;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e08 = '\x01';
  }
  bVar6 = UI_InGameMenu__InMenu((MethodInfo *)method_01);
  if (bVar6) {
    return;
  }
  UI_InGameMenu__HideAllMenus(__this,(UI_BasePopup_o *)0x0,method_00);
  pUVar3 = (__this->fields)._characterChangePopup;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._characterChangePopup;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar7 = UI_ElementFactory__CreateDefaultPopup_object_
                       (parent,false,
                        (MethodInfo_34D7290 *)
                        MethodInfo_UI_ElementFactory_CreateDefaultPopup_CharacterChangePopup);
    (__this->fields)._characterChangePopup = (UI_BasePopup_o *)pUVar7;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    __this_00 = (__this->fields)._popups;
    if (__this_00 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_05d2c60c;
    pUVar3 = (__this->fields)._characterChangePopup;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (__this_00->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_05d2c60c;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pUVar4->m_Items[(int)uVar2] = pUVar3;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar3,
                 (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
    }
  }
  pUVar3 = *targetAddress;
  if (pUVar3 != (UI_BasePopup_o *)0x0) {
    (*(pUVar3->klass->vtable)._21_Show.methodPtr)(pUVar3,(pUVar3->klass->vtable)._21_Show.method);
    return;
  }
label_05d2c60c:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$ShowCutsceneMenu
// il2cpp: void UI_InGameMenu__ShowCutsceneMenu (UI_InGameMenu_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, bool full, const MethodInfo* method);
// 0x5d2c620

void UI_InGameMenu__ShowCutsceneMenu
               (UI_InGameMenu_o *__this,System_String_o *icon,System_String_o *title,System_String_o *content,
               bool full,MethodInfo *method)

{
  UI_CutsceneDialoguePanel_o *__this_00;
  
  __this_00 = (__this->fields)._cutsceneDialoguePanel;
  if (__this_00 == (UI_CutsceneDialoguePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CutsceneDialoguePanel__Show(__this_00,icon,title,content,full,method);
  return;
}


// UI.InGameMenu$$HideCutsceneMenu
// il2cpp: void UI_InGameMenu__HideCutsceneMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2c640

void UI_InGameMenu__HideCutsceneMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_CutsceneDialoguePanel_o *pUVar1;
  
  pUVar1 = (__this->fields)._cutsceneDialoguePanel;
  if (pUVar1 == (UI_CutsceneDialoguePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
  return;
}


// UI.InGameMenu$$IsPauseMenuActive
// il2cpp: bool UI_InGameMenu__IsPauseMenuActive (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2bf30
// eh: try 0x5d2bfe3..0x5d2c052 -> pad 0x5d2c05f (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d2c077..0x5d2c07c -> pad 0x5d2c0a2 cleanup
// eh: try 0x5d2c0a5..0x5d2c0af -> pad 0x5d2c0b7 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d2c057: jmp 0x5d2c05f
// asm:   0x5d2c059: jmp 0x5d2c05f
// asm:   0x5d2c05b: jmp 0x5d2c05f
// asm:   0x5d2c05d: jmp 0x5d2c05f
// asm:   0x5d2c05f: mov rbx, rax
// asm:   0x5d2c062: cmp edx, 1
// asm:   0x5d2c065: jne 0x5d2c0a5
// asm:   0x5d2c067: mov rdi, rbx
// asm:   0x5d2c06a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d2c06f: mov r14, qword ptr [rax]
// asm:   0x5d2c072: mov qword ptr [rsp + 0x18], r14
// asm:   0x5d2c077: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d2c07c: lea rax, [rip + 0x15616dd]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x5d2c083: mov rsi, qword ptr [rax]
// asm:   0x5d2c086: mov rdi, rsp
// asm:   0x5d2c089: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d2c08e: xor ebx, ebx
// asm:   0x5d2c090: mov ebp, 0
// asm:   0x5d2c095: test r14, r14
// asm:   0x5d2c098: je 0x5d2c033
// asm:   0x5d2c09a: mov rdi, r14
// asm:   0x5d2c09d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d2c0a2: mov rbx, rax
// asm:   0x5d2c0a5: lea rdi, [rsp + 0x18]
// asm:   0x5d2c0aa: call 0x2fdc130  ; il2cpp_runtime_helper_02fdc130()
// asm:   0x5d2c0af: mov rdi, rbx
// asm:   0x5d2c0b2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d2c0b7: mov rdi, rax
// asm:   0x5d2c0ba: call 0x2ab61e0  ; __clang_call_terminate()

bool UI_InGameMenu__IsPauseMenuActive(UI_InGameMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  bool bVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_01;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_07547e09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    Il2CppMethodInitialized_07547e09 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  bVar1 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsInGameOverlayActive((MethodInfo *)0x0);
  bVar2 = true;
  if (!bVar1) {
    __this_00 = (__this->fields)._allPausePopups;
    if (__this_00 == (System_Collections_Generic_List_BasePopup__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    local_30 = 0;
    local_28 = (undefined1 *)&local_48;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
      if (!bVar2) {
        iVar3 = 6;
        goto label_05d2c021;
      }
      if ((UnityEngine_Component_o *)local_48.fields._current == (UnityEngine_Component_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)local_48.fields._current,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    } while (!bVar1);
    iVar3 = 5;
label_05d2c021:
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    bVar2 = iVar3 == 5 && bVar2;
  }
  return bVar2;
}


// UI.InGameMenu$$ShowBlood
// il2cpp: void UI_InGameMenu__ShowBlood (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2c670

void UI_InGameMenu__ShowBlood(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_InGameMenu__WaitAndShowBlood_d__118_o *__this_00;
  
  if ((__this->fields)._showingBlood != false) {
    return;
  }
  (__this->fields)._showingBlood = true;
  if (Il2CppMethodInitialized_07547e14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu_WaitAndShowBlood_d__118);
    Il2CppMethodInitialized_07547e14 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_InGameMenu_WaitAndShowBlood_d__118);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.InGameMenu$$ShowSnapshot
// il2cpp: void UI_InGameMenu__ShowSnapshot (UI_InGameMenu_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x5d2c770

void UI_InGameMenu__ShowSnapshot(UI_InGameMenu_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  UI_SnapshotPopup_o *pUVar1;
  
  pUVar1 = (__this->fields)._snapshotPopup;
  if (pUVar1 != (UI_SnapshotPopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._62_Load.methodPtr)(pUVar1,texture,(pUVar1->klass->vtable)._62_Load.method);
    pUVar1 = (__this->fields)._snapshotPopup;
    if (pUVar1 != (UI_SnapshotPopup_o *)0x0) {
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      (__this->fields)._snapshotTimeLeft = 2.0;
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$ShowKillFeed
// il2cpp: void UI_InGameMenu__ShowKillFeed (UI_InGameMenu_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, const MethodInfo* method);
// 0x5d2c7c0

void UI_InGameMenu__ShowKillFeed
               (UI_InGameMenu_o *__this,System_String_o *killer,System_String_o *victim,int32_t score,
               System_String_o *weapon,MethodInfo *method)

{
  MethodInfo *in_stack_fffffffffffffff0;
  
  UI_InGameMenu__ShowKillFeed_5c2c7e0(__this,killer,victim,score,weapon,-1,-1,in_stack_fffffffffffffff0);
  return;
}


// UI.InGameMenu$$ShowKillFeed
// il2cpp: void UI_InGameMenu__ShowKillFeed (UI_InGameMenu_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, int32_t killerActorNumber, int32_t victimActorNumber, const MethodInfo* method);
// 0x5d2c7e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d2c8e5: add rsp, 8

void UI_InGameMenu__ShowKillFeed_5c2c7e0
               (UI_InGameMenu_o *__this,System_String_o *killer,System_String_o *victim,int32_t score,
               System_String_o *weapon,int32_t killerActorNumber,int32_t victimActorNumber,MethodInfo *method)

{
  float timeLeft;
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UI_KillFeedBigPopup_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_07547e0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547e0a = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).KillFeedCount, pSVar2 == (Settings_IntSetting_o *)0x0)) {
label_05d2c8f4:
    ThrowNullReferenceException();
  }
  if (0 < (pSVar2->fields)._value) {
    __this_00 = (__this->fields)._killFeedBigPopup;
    if (__this_00 == (UI_KillFeedBigPopup_o *)0x0) goto label_05d2c8f4;
    timeLeft = (__this_00->fields).TimeLeft;
    if (0.0 < timeLeft) {
      UI_InGameMenu__ShowKillFeedPushSmall
                (__this,(__this_00->fields).Killer,(__this_00->fields).Victim,(__this_00->fields).Score,
                 (__this_00->fields).Weapon,timeLeft,(__this_00->fields).KillerActorNumber,
                 (__this_00->fields).VictimActorNumber,0,in_stack_ffffffffffffffb8);
      __this_00 = (__this->fields)._killFeedBigPopup;
      if (__this_00 == (UI_KillFeedBigPopup_o *)0x0) goto label_05d2c8f4;
    }
    UI_KillFeedBigPopup__Show_5c34060
              (__this_00,killer,victim,score,weapon,killerActorNumber,victimActorNumber,(MethodInfo *)0x0);
  }
  return;
}


// UI.InGameMenu$$ShowKillFeedPushSmall
// il2cpp: void UI_InGameMenu__ShowKillFeedPushSmall (UI_InGameMenu_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, float timeLeft, int32_t killerActorNumber, int32_t victimActorNumber, int32_t index, const MethodInfo* method);
// 0x5d2c900
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d2ca15: add rsp, 0x18

void UI_InGameMenu__ShowKillFeedPushSmall
               (UI_InGameMenu_o *__this,System_String_o *killer,System_String_o *victim,int32_t score,
               System_String_o *weapon,float timeLeft,int32_t killerActorNumber,int32_t victimActorNumber,
               int32_t index,MethodInfo *method)

{
  float timeLeft_00;
  System_Collections_Generic_List_KillFeedSmallPopup__o *__this_00;
  UI_KillFeedSmallPopup_o *__this_01;
  MethodInfo *in_stack_ffffffffffffffa8;
  
  if (Il2CppMethodInitialized_07547e0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_get_Item);
    Il2CppMethodInitialized_07547e0b = '\x01';
  }
  __this_00 = (__this->fields)._killFeedSmallPopups;
  if (__this_00 == (System_Collections_Generic_List_KillFeedSmallPopup__o *)0x0) {
label_05d2ca24:
    ThrowNullReferenceException();
  }
  if (index < (__this_00->fields)._size) {
    __this_01 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,index,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_get_Item);
    if (__this_01 == (UI_KillFeedSmallPopup_o *)0x0) goto label_05d2ca24;
    timeLeft_00 = (__this_01->fields).TimeLeft;
    if (0.0 < timeLeft_00) {
      UI_InGameMenu__ShowKillFeedPushSmall
                (__this,(__this_01->fields).Killer,(__this_01->fields).Victim,(__this_01->fields).Score,
                 (__this_01->fields).Weapon,timeLeft_00,(__this_01->fields).KillerActorNumber,
                 (__this_01->fields).VictimActorNumber,index + 1,in_stack_ffffffffffffffa8);
    }
    UI_KillFeedSmallPopup__ShowImmediate_5c34930
              (__this_01,killer,victim,score,weapon,timeLeft,killerActorNumber,victimActorNumber,
               (MethodInfo *)0x0);
  }
  return;
}


// UI.InGameMenu$$ShowKillScore
// il2cpp: void UI_InGameMenu__ShowKillScore (UI_InGameMenu_o* __this, int32_t score, bool force, const MethodInfo* method);
// 0x5d2ca30

void UI_InGameMenu__ShowKillScore(UI_InGameMenu_o *__this,int32_t score,bool force,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  UI_KillScorePopup_o *__this_00;
  UI_StylebarHandler_o *__this_01;
  
  if (Il2CppMethodInitialized_07547e0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07547e0c = '\x01';
  }
  if (!force) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05d2cad2;
    if ((pCVar1->fields).DefaultShowKillScore == false) {
      return;
    }
  }
  __this_00 = (__this->fields)._killScorePopup;
  if (__this_00 != (UI_KillScorePopup_o *)0x0) {
    UI_KillScorePopup__Show(__this_00,score,(MethodInfo *)0x0);
    (__this->fields)._killScoreTimeLeft = 3.0;
    __this_01 = (__this->fields).StylebarHandler;
    if (__this_01 != (UI_StylebarHandler_o *)0x0) {
      UI_StylebarHandler__OnHit(__this_01,score,(MethodInfo *)0x0);
      return;
    }
  }
label_05d2cad2:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$GetStylebarRank
// il2cpp: int32_t UI_InGameMenu__GetStylebarRank (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2cae0

int32_t UI_InGameMenu__GetStylebarRank(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_StylebarHandler_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_07547e0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e0d = '\x01';
  }
  pUVar1 = (__this->fields).StylebarHandler;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  iVar3 = 0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).StylebarHandler;
    if (pUVar1 == (UI_StylebarHandler_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = (pUVar1->fields)._rank;
  }
  return iVar3;
}


// UI.InGameMenu$$SetLabelActive
// il2cpp: void UI_InGameMenu__SetLabelActive (UI_InGameMenu_o* __this, System_String_o* label, bool active, const MethodInfo* method);
// 0x5d2cb60

void UI_InGameMenu__SetLabelActive
               (UI_InGameMenu_o *__this,System_String_o *label,bool active,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Il2CppObject *pIStack_20;
  
  if (Il2CppMethodInitialized_07547e0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_TryGetValue);
    Il2CppMethodInitialized_07547e0e = '\x01';
  }
  pIStack_20 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._labels;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05d2cbe4:
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this_00,(Il2CppObject *)label,&pIStack_20,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_TryGetValue);
  if (bVar1) {
    if ((pIStack_20 == (Il2CppObject *)0x0) || (pIStack_20[6].klass == (Il2CppClass *)0x0)) goto label_05d2cbe4;
    UnityEngine_GameObject__SetActive
              ((UnityEngine_GameObject_o *)pIStack_20[6].klass,active,(MethodInfo *)0x0);
  }
  return;
}


// UI.InGameMenu$$SetLabelBackgroundColor
// il2cpp: void UI_InGameMenu__SetLabelBackgroundColor (UI_InGameMenu_o* __this, System_String_o* label, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5d2cbf0

void UI_InGameMenu__SetLabelBackgroundColor
               (UI_InGameMenu_o *__this,System_String_o *label,UnityEngine_Color_o color,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *pIVar1;
  void *pvVar2;
  bool bVar3;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  Il2CppObject *pIStack_40;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  auStack_28._8_4_ = in_XMM1_Dc;
  auStack_28._0_8_ = color.fields._8_8_;
  auStack_28._12_4_ = in_XMM1_Dd;
  auStack_38._8_4_ = in_XMM0_Dc;
  auStack_38._0_8_ = color.fields._0_8_;
  auStack_38._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_07547e0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_TryGetValue);
    Il2CppMethodInitialized_07547e0f = '\x01';
  }
  pIStack_40 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._labels;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)label,&pIStack_40,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_TryGetValue);
    if (!bVar3) {
      return;
    }
    if (pIStack_40 != (Il2CppObject *)0x0) {
      if (*(char *)&pIStack_40[5].monitor != '\0') {
        return;
      }
      pIVar1 = pIStack_40[5].klass;
      if (pIVar1 != (Il2CppClass *)0x0) {
        pvVar2 = (pIVar1->_1).image;
        (**(code **)((long)pvVar2 + 0x2a8))
                  (auStack_38._0_4_,auStack_28._0_4_,pIVar1,*(undefined8 *)((long)pvVar2 + 0x2b0));
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetLabelBackgroundColorAll
// il2cpp: void UI_InGameMenu__SetLabelBackgroundColorAll (UI_InGameMenu_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5d2cca0
// eh: try 0x5d2cd73..0x5d2cdd3 -> pad 0x5d2cdda (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d2cdf4..0x5d2cdf9 -> pad 0x5d2ce18 cleanup
// eh: try 0x5d2ce1b..0x5d2ce25 -> pad 0x5d2ce2d catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d2cdd8: jmp 0x5d2cddc
// asm:   0x5d2cdda: jmp 0x5d2cddc
// asm:   0x5d2cddc: mov rbx, rax
// asm:   0x5d2cddf: cmp edx, 1
// asm:   0x5d2cde2: jne 0x5d2ce1b
// asm:   0x5d2cde4: mov rdi, rbx
// asm:   0x5d2cde7: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d2cdec: mov rbx, qword ptr [rax]
// asm:   0x5d2cdef: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d2cdf4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d2cdf9: lea rax, [rip + 0x15631c8]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_Dispose
// asm:   0x5d2ce00: mov rsi, qword ptr [rax]
// asm:   0x5d2ce03: mov rdi, rsp
// asm:   0x5d2ce06: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5d2ce0b: test rbx, rbx
// asm:   0x5d2ce0e: je 0x5d2cdc6
// asm:   0x5d2ce10: mov rdi, rbx
// asm:   0x5d2ce13: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d2ce18: mov rbx, rax
// asm:   0x5d2ce1b: lea rdi, [rsp + 0x20]
// asm:   0x5d2ce20: call 0x2fdc160  ; il2cpp_runtime_helper_02fdc160()
// asm:   0x5d2ce25: mov rdi, rbx
// asm:   0x5d2ce28: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d2ce2d: mov rdi, rax
// asm:   0x5d2ce30: call 0x2ab61e0  ; __clang_call_terminate()

void UI_InGameMenu__SetLabelBackgroundColorAll
               (UI_InGameMenu_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *pIVar1;
  void *pvVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_68;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  auStack_28._8_4_ = in_XMM1_Dc;
  auStack_28._0_8_ = color.fields._8_8_;
  auStack_28._12_4_ = in_XMM1_Dd;
  auStack_38._8_4_ = in_XMM0_Dc;
  auStack_38._0_8_ = color.fields._0_8_;
  auStack_38._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_07547e10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_InGameLabel_GetEnumerator
              );
    Il2CppMethodInitialized_07547e10 = '\x01';
  }
  SStack_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_68.fields._index = 0;
  SStack_68.fields._version = 0;
  SStack_68.fields._currentValue = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._labels;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Values
                          (__this_00,
                           (MethodInfo_4AAD2A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_get_Values);
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                (&SStack_68,__this_01,
                 (MethodInfo_43F93D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_InGameLabel_GetEnumerator
                );
      uStack_48 = 0;
      puStack_40 = (undefined1 *)&SStack_68;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                            (&SStack_68,
                             (MethodInfo_4CE7200 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_MoveNext
                            );
          if (!bVar3) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                      (&SStack_68,
                       (MethodInfo_4CE71F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_Dispose
                      );
            return;
          }
          if (SStack_68.fields._currentValue == (Il2CppObject *)0x0) goto label_05d2cdce;
        } while (*(char *)&SStack_68.fields._currentValue[5].monitor != '\0');
        pIVar1 = SStack_68.fields._currentValue[5].klass;
        if (pIVar1 == (Il2CppClass *)0x0) break;
        pvVar2 = (pIVar1->_1).image;
        (**(code **)((long)pvVar2 + 0x2a8))
                  (auStack_38._0_4_,auStack_28._0_4_,pIVar1,*(undefined8 *)((long)pvVar2 + 0x2b0));
      }
label_05d2cdce:
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetKDRPanelActive
// il2cpp: void UI_InGameMenu__SetKDRPanelActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x5d2ce40

void UI_InGameMenu__SetKDRPanelActive(UI_InGameMenu_o *__this,bool active,MethodInfo *method)

{
  UI_KDRPanel_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields).KDRPanel;
  if (__this_00 != (UI_KDRPanel_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,active,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetMinimapActive
// il2cpp: void UI_InGameMenu__SetMinimapActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x5d2ce70

void UI_InGameMenu__SetMinimapActive(UI_InGameMenu_o *__this,bool active,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  undefined7 in_register_00000031;
  
  bVar1 = UI_InGameMenu__AllowMap(__this,(MethodInfo *)CONCAT71(in_register_00000031,active));
  if (!bVar1) {
    return;
  }
  __this_00 = (__this->fields)._minimapPanel;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__SetActive(__this_00,active,(MethodInfo *)0x0);
  return;
}


// UI.InGameMenu$$SetChatPanelActive
// il2cpp: void UI_InGameMenu__SetChatPanelActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x5d2ceb0

void UI_InGameMenu__SetChatPanelActive(UI_InGameMenu_o *__this,bool active,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields).ChatPanel;
  if (__this_00 != (UI_ChatPanel_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,active,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetFeedPanelActive
// il2cpp: void UI_InGameMenu__SetFeedPanelActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x5d2cee0

void UI_InGameMenu__SetFeedPanelActive(UI_InGameMenu_o *__this,bool active,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  UI_FeedPanel_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  if (Il2CppMethodInitialized_07547e11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547e11 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).FeedConsole, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar2->fields)._value == false) {
      return;
    }
    __this_00 = (__this->fields).FeedPanel;
    if (__this_00 != (UI_FeedPanel_o *)0x0) {
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,active,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetBottomHUDActive
// il2cpp: void UI_InGameMenu__SetBottomHUDActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x5d2cf80

void UI_InGameMenu__SetBottomHUDActive(UI_InGameMenu_o *__this,bool active,MethodInfo *method)

{
  UI_HUDBottomHandler_o *pUVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  
  pUVar1 = (__this->fields).HUDBottomHandler;
  if (pUVar1 != (UI_HUDBottomHandler_o *)0x0) {
    if (Il2CppMethodInitialized_07547ddc == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547ddc = '\x01';
    }
    x = (UnityEngine_Object_o *)(pUVar1->fields)._hudBottom;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    __this_00 = (pUVar1->fields)._hudBottom;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,active,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetLabel
// il2cpp: void UI_InGameMenu__SetLabel (UI_InGameMenu_o* __this, System_String_o* label, System_String_o* message, float time, const MethodInfo* method);
// 0x5d2d010

void UI_InGameMenu__SetLabel
               (UI_InGameMenu_o *__this,System_String_o *label,System_String_o *message,float time,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__bool__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  
  if (Il2CppMethodInitialized_07547e12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_bool_set_Item);
    Il2CppMethodInitialized_07547e12 = '\x01';
  }
  UI_InGameMenu__SetLabelText(__this,label,message,method);
  __this_00 = (__this->fields)._labelHasTimeLeft;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
    System_Collections_Generic_Dictionary_object__bool___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)label,
               (bool)(-(time != 0.0) & 1),
               (MethodInfo_4A755F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_bool_set_Item);
    __this_01 = (__this->fields)._labelTimeLeft;
    if (__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)label,time
                 ,(MethodInfo_4AB5450 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item
                );
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetLabelText
// il2cpp: void UI_InGameMenu__SetLabelText (UI_InGameMenu_o* __this, System_String_o* label, System_String_o* message, const MethodInfo* method);
// 0x5d2d0d0

void UI_InGameMenu__SetLabelText
               (UI_InGameMenu_o *__this,System_String_o *label,System_String_o *message,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  UI_InGameLabel_o *__this_00;
  System_String_o **targetAddress;
  
  if (Il2CppMethodInitialized_07547e13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TopRight");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleRight");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TopLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TopCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomRight");
    Il2CppMethodInitialized_07547e13 = '\x01';
  }
  bVar1 = System_String__op_Equality(label,"TopCenter",(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._topCenterLabel;
    method_00 = extraout_RDX;
  }
  else {
    bVar1 = System_String__op_Equality(label,"TopLeft",(MethodInfo *)0x0);
    if (bVar1) {
      (__this->fields)._topLeftText = message;
      targetAddress = &(__this->fields)._topLeftText;
label_05d2d1b5:
      Il2CppCodeGenWriteBarrier(targetAddress);
      return;
    }
    bVar1 = System_String__op_Equality(label,"TopRight",(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (__this->fields)._topRightLabel;
      method_00 = extraout_RDX_00;
    }
    else {
      bVar1 = System_String__op_Equality(label,"MiddleCenter",(MethodInfo *)0x0);
      if (bVar1) {
        (__this->fields)._middleCenterText = message;
        targetAddress = &(__this->fields)._middleCenterText;
        goto label_05d2d1b5;
      }
      bVar1 = System_String__op_Equality(label,"MiddleLeft",(MethodInfo *)0x0);
      if (bVar1) {
        __this_00 = (__this->fields)._middleLeftLabel;
        method_00 = extraout_RDX_01;
      }
      else {
        bVar1 = System_String__op_Equality(label,"MiddleRight",(MethodInfo *)0x0);
        if (bVar1) {
          __this_00 = (__this->fields)._middleRightLabel;
          method_00 = extraout_RDX_02;
        }
        else {
          bVar1 = System_String__op_Equality(label,"BottomLeft",(MethodInfo *)0x0);
          if (!bVar1) {
            bVar1 = System_String__op_Equality(label,"BottomRight",(MethodInfo *)0x0);
            if (bVar1) {
              (__this->fields)._bottomRightText = message;
              targetAddress = &(__this->fields)._bottomRightText;
            }
            else {
              bVar1 = System_String__op_Equality(label,"BottomCenter",(MethodInfo *)0x0);
              if (!bVar1) {
                return;
              }
              (__this->fields)._bottomCenterText = message;
              targetAddress = &(__this->fields)._bottomCenterText;
            }
            goto label_05d2d1b5;
          }
          __this_00 = (__this->fields)._bottomLeftLabel;
          method_00 = extraout_RDX_03;
        }
      }
    }
  }
  if (__this_00 == (UI_InGameLabel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_InGameLabel__set_Text(__this_00,message,method_00);
  return;
}


// UI.InGameMenu$$WaitAndShowBlood
// il2cpp: System_Collections_IEnumerator_o* UI_InGameMenu__WaitAndShowBlood (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2c700

System_Collections_IEnumerator_o * UI_InGameMenu__WaitAndShowBlood(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_InGameMenu__WaitAndShowBlood_d__118_o *__this_00;
  
  if (Il2CppMethodInitialized_07547e14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu_WaitAndShowBlood_d__118);
    Il2CppMethodInitialized_07547e14 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_InGameMenu_WaitAndShowBlood_d__118);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.InGameMenu$$Update
// il2cpp: void UI_InGameMenu__Update (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2d300
// eh: try 0x5d2d668..0x5d2e2fb -> pad 0x5d2e30d (+16 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d2e352..0x5d2e357 -> pad 0x5d2e381 cleanup
// eh: try 0x5d2e384..0x5d2e38e -> pad 0x5d2e43f catch (...) [compiler noexcept guard]
// eh: try 0x5d2e3ab..0x5d2e3b0 -> pad 0x5d2e3d4 cleanup
// eh: try 0x5d2e3d7..0x5d2e3e1 -> pad 0x5d2e43f catch (...) [compiler noexcept guard]
// eh: try 0x5d2e3fb..0x5d2e400 -> pad 0x5d2e42a cleanup
// eh: try 0x5d2e42d..0x5d2e437 -> pad 0x5d2e43f catch (...) [compiler noexcept guard]
// asm: 84 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d2d5a0: jmp 0x5d2e2dd
// asm:   0x5d2d7df: nop 
// asm:   0x5d2d91c: mov rdi, r12
// asm:   0x5d2d91f: mov rsi, rbx
// asm:   0x5d2df33: jmp 0x5d2ddd2
// asm:   0x5d2df67: mov rdi, r14
// asm:   0x5d2df6a: mov rsi, rbp
// asm:   0x5d2e308: jmp 0x5d2e3e3
// asm:   0x5d2e30d: jmp 0x5d2e3e3
// asm:   0x5d2e312: jmp 0x5d2e33a
// asm:   0x5d2e314: jmp 0x5d2e3e3
// asm:   0x5d2e319: jmp 0x5d2e3e3
// asm:   0x5d2e31e: jmp 0x5d2e3e3
// asm:   0x5d2e323: jmp 0x5d2e3e3
// asm:   0x5d2e328: jmp 0x5d2e3e3
// asm:   0x5d2e32d: jmp 0x5d2e33a
// asm:   0x5d2e32f: jmp 0x5d2e33a
// asm:   0x5d2e331: jmp 0x5d2e393
// asm:   0x5d2e333: jmp 0x5d2e393
// asm:   0x5d2e335: jmp 0x5d2e3e3
// asm:   0x5d2e33a: mov r14, rax
// asm:   0x5d2e33d: cmp edx, 1
// asm:   0x5d2e340: jne 0x5d2e384
// asm:   0x5d2e342: mov rdi, r14
// asm:   0x5d2e345: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d2e34a: mov rbx, qword ptr [rax]
// asm:   0x5d2e34d: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d2e352: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d2e357: lea rax, [rip + 0x155ff5a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KillFeedSmallPopup_Dispose
// asm:   0x5d2e35e: mov rsi, qword ptr [rax]
// asm:   0x5d2e361: lea rdi, [rsp + 0x90]
// asm:   0x5d2e369: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d2e36e: test rbx, rbx
// asm:   0x5d2e371: mov r15, qword ptr [rsp + 0x10]
// asm:   0x5d2e376: je 0x5d2e275
// asm:   0x5d2e37c: jmp 0x5d2e422
// asm:   0x5d2e381: mov r14, rax
// asm:   0x5d2e384: lea rdi, [rsp + 0x18]
// asm:   0x5d2e389: call 0x2fdc1f0  ; il2cpp_runtime_helper_02fdc1f0()
// asm:   0x5d2e38e: jmp 0x5d2e437
// asm:   0x5d2e393: mov r14, rax
// asm:   0x5d2e396: cmp edx, 1
// asm:   0x5d2e399: jne 0x5d2e3d7
// asm:   0x5d2e39b: mov rdi, r14
// asm:   0x5d2e39e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d2e3a3: mov rbx, qword ptr [rax]
// asm:   0x5d2e3a6: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d2e3ab: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d2e3b0: lea rax, [rip + 0x1560741]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d2e3b7: mov rsi, qword ptr [rax]
// asm:   0x5d2e3ba: lea rdi, [rsp + 0x40]
// asm:   0x5d2e3bf: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d2e3c4: test rbx, rbx
// asm:   0x5d2e3c7: mov r15, qword ptr [rsp + 0x10]
// asm:   0x5d2e3cc: je 0x5d2d825
// asm:   0x5d2e3d2: jmp 0x5d2e422
// asm:   0x5d2e3d4: mov r14, rax
// asm:   0x5d2e3d7: lea rdi, [rsp + 0x18]
// asm:   0x5d2e3dc: call 0x2fdc1c0  ; il2cpp_runtime_helper_02fdc1c0()
// asm:   0x5d2e3e1: jmp 0x5d2e437
// asm:   0x5d2e3e3: mov r14, rax
// asm:   0x5d2e3e6: cmp edx, 1
// asm:   0x5d2e3e9: jne 0x5d2e42d
// asm:   0x5d2e3eb: mov rdi, r14
// asm:   0x5d2e3ee: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d2e3f3: mov rbx, qword ptr [rax]
// asm:   0x5d2e3f6: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d2e3fb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d2e400: lea rax, [rip + 0x1561a41]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_bool_Dispose
// asm:   0x5d2e407: mov rsi, qword ptr [rax]
// asm:   0x5d2e40a: lea rdi, [rsp + 0x60]
// asm:   0x5d2e40f: call 0x4de0b00  ; System_Collections_Generic_Dictionary_Enumerator_object__bool___Dispose()
// asm:   0x5d2e414: test rbx, rbx
// asm:   0x5d2e417: mov r15, qword ptr [rsp + 0x10]
// asm:   0x5d2e41c: je 0x5d2d786
// asm:   0x5d2e422: mov rdi, rbx
// asm:   0x5d2e425: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d2e42a: mov r14, rax
// asm:   0x5d2e42d: lea rdi, [rsp + 0x18]
// asm:   0x5d2e432: call 0x2fdc190  ; il2cpp_runtime_helper_02fdc190()
// asm:   0x5d2e437: mov rdi, r14
// asm:   0x5d2e43a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d2e43f: mov rdi, rax
// asm:   0x5d2e442: call 0x2ab61e0  ; __clang_call_terminate()

void UI_InGameMenu__Update(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint32_t uVar5;
  GameManagers_InGameManager_o *pGVar6;
  UI_GlobalPauseGamePopup_o *pUVar7;
  System_Collections_Generic_List_string__o *pSVar8;
  System_Collections_Generic_Dictionary_string__bool__o *pSVar9;
  System_Collections_Generic_Dictionary_string__float__o *pSVar10;
  System_String_array *pSVar11;
  UI_InGameMenu_HudText_o *pUVar12;
  Cameras_BaseCamera_o *pCVar13;
  Cameras_BaseCamera_c *pCVar14;
  void *pvVar15;
  long lVar16;
  Photon_Realtime_Player_o *player;
  Settings_InGameCharacterSettings_o *pSVar17;
  Settings_IntSetting_o *pSVar18;
  Characters_BaseCharacter_o *pCVar19;
  Settings_InputSettings_o *pSVar20;
  Settings_GeneralInputSettings_o *pSVar21;
  Settings_KeybindSetting_o *pSVar22;
  Il2CppClass *arg0;
  Settings_InGameSet_o *pSVar23;
  Settings_BoolSetting_o *pSVar24;
  UI_KillFeedBigPopup_o *pUVar25;
  UI_KillScorePopup_o *pUVar26;
  System_Collections_Generic_List_KillFeedSmallPopup__o *__this_00;
  UI_SnapshotPopup_o *pUVar27;
  bool bVar28;
  int32_t iVar29;
  Il2CppObject *pIVar30;
  System_String_o *pSVar31;
  Photon_Realtime_Player_array *pPVar32;
  ulong uVar33;
  System_String_o *pSVar34;
  System_String_o *pSVar35;
  MethodInfo *method_00;
  MethodInfo *pMVar36;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *method_02;
  int iVar37;
  UI_InGameLabel_o *pUVar38;
  ulong uVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_c0 [16];
  System_String_o *pSStack_b0;
  Il2CppObject *pIStack_a8;
  int32_t iStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [8];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *pSStack_90;
  System_String_o *pSStack_88;
  undefined1 auStack_78 [8];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *pSStack_70;
  System_String_o *pSStack_68;
  Il2CppObject *pIStack_60;
  undefined8 uStack_58;
  System_Collections_Generic_List_Enumerator_object__o SStack_48;
  
  if (Il2CppMethodInitialized_07547e15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_bool_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_bool_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KillFeedSmallPopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_bool_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_bool_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KillFeedSmallPopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KillFeedSmallPopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_bool_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_bool_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera_SpecateMode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"{0}: ");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e15 = '\x01';
  }
  pSStack_68 = (System_String_o *)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  auStack_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)0x0;
  uStack_58._0_4_ = 0;
  uStack_58._4_4_ = 0;
  auStack_98 = (undefined1  [8])0x0;
  pSStack_90 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)0x0;
  pSStack_88 = (System_String_o *)0x0;
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  pGVar6 = (__this->fields)._gameManager;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar28 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar28) {
    return;
  }
  pGVar6 = (__this->fields)._gameManager;
  if (pGVar6 == (GameManagers_InGameManager_o *)0x0) goto label_05d2e2dd;
  pUVar7 = (__this->fields)._globalPauseGamePopup;
  if ((pGVar6->fields).GlobalPause == false) {
    if (pUVar7 == (UI_GlobalPauseGamePopup_o *)0x0) goto label_05d2e2dd;
    (*(pUVar7->klass->vtable)._22_Hide.methodPtr)(pUVar7,(pUVar7->klass->vtable)._22_Hide.method);
    pSVar8 = (__this->fields).labelsToDeactivate;
  }
  else {
    if (pUVar7 == (UI_GlobalPauseGamePopup_o *)0x0) goto label_05d2e2dd;
    pMVar36 = (pUVar7->klass->vtable)._21_Show.method;
    (*(pUVar7->klass->vtable)._21_Show.methodPtr)(pUVar7,pMVar36);
    pGVar6 = (__this->fields)._gameManager;
    if ((pGVar6 == (GameManagers_InGameManager_o *)0x0) ||
       (pUVar7 = (__this->fields)._globalPauseGamePopup, pUVar7 == (UI_GlobalPauseGamePopup_o *)0x0))
    goto label_05d2e2dd;
    UI_GlobalPauseGamePopup__SetTimeLeft(pUVar7,(pGVar6->fields).PauseTimeLeft,pMVar36);
    pSVar8 = (__this->fields).labelsToDeactivate;
  }
  if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d2e2dd;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar29 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar29) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar29,(MethodInfo *)0x0);
  }
  pSVar9 = (__this->fields)._labelHasTimeLeft;
  if (pSVar9 == (System_Collections_Generic_Dictionary_string__bool__o *)0x0) goto label_05d2e2dd;
  System_Collections_Generic_Dictionary_object__bool___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_c0,
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9,
             (MethodInfo_4A75A40 *)MethodInfo_System_Collections_Generic_Dictionary_string_bool_GetEnumerator)
  ;
  uStack_58._0_4_ = iStack_a0;
  uStack_58._4_4_ = uStack_9c;
  pSStack_68 = pSStack_b0;
  pIStack_60 = pIStack_a8;
  auStack_78 = (undefined1  [8])auStack_c0._0_8_;
  pSStack_70 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_c0._8_8_;
  auStack_c0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_c0._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_78;
label_05d2d685:
  bVar28 = System_Collections_Generic_Dictionary_Enumerator_object__bool___MoveNext
                     ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_78,
                      (MethodInfo_4CE09D0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_bool_MoveNext);
  pSVar31 = pSStack_68;
  if (bVar28) {
    if ((char)pIStack_60 != '\0') {
      pSVar10 = (__this->fields)._labelTimeLeft;
      if (pSVar10 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar40 = System_Collections_Generic_Dictionary_object__float___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
                          (Il2CppObject *)pSStack_68,
                          (MethodInfo_4AB53E0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      fVar41 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,(Il2CppObject *)pSVar31,
                 fVar40 - fVar41,
                 (MethodInfo_4AB5450 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item)
      ;
      pSVar10 = (__this->fields)._labelTimeLeft;
      if (pSVar10 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar40 = System_Collections_Generic_Dictionary_object__float___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
                          (Il2CppObject *)pSVar31,
                          (MethodInfo_4AB53E0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      pMVar36 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (fVar40 <= 0.0) {
        pSVar8 = (__this->fields).labelsToDeactivate;
        if (pSVar8 != (System_Collections_Generic_List_string__o *)0x0) {
          piVar1 = &(pSVar8->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar11 = (pSVar8->fields)._items;
          if (pSVar11 != (System_String_array *)0x0) {
            uVar3 = (pSVar8->fields)._size;
            if (uVar3 < (uint)pSVar11->max_length) {
              pMVar36 = (MethodInfo *)(ulong)(uVar3 + 1);
              (pSVar8->fields)._size = uVar3 + 1;
              pSVar11->m_Items[(int)uVar3] = pSVar31;
              Il2CppCodeGenWriteBarrier(pSVar11->m_Items + (int)uVar3);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar31,
                         (MethodInfo_395D230 *)pMVar36->klass->rgctx_data[0xe].method);
            }
            UI_InGameMenu__SetLabelText(__this,pSVar31,"",pMVar36);
            goto label_05d2d685;
          }
        }
        ThrowNullReferenceException();
      }
    }
    goto label_05d2d685;
  }
  System_Collections_Generic_Dictionary_Enumerator_object__bool___Dispose
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_78,
             (MethodInfo_4CE0B00 *)
             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_bool_Dispose);
  pSVar8 = (__this->fields).labelsToDeactivate;
  if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d2e2dd;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c0,
             (System_Collections_Generic_List_object__o *)pSVar8,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
  pSStack_88 = pSStack_b0;
  auStack_98 = (undefined1  [8])auStack_c0._0_8_;
  pSStack_90 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_c0._8_8_;
  auStack_c0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_c0._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_98;
  while (bVar28 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)auStack_98,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext), bVar28) {
    pSVar9 = (__this->fields)._labelHasTimeLeft;
    if (pSVar9 == (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__bool___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9,(Il2CppObject *)pSStack_88,
               false,(MethodInfo_4A755F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_bool_set_Item);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)auStack_98,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  pGVar6 = (__this->fields)._gameManager;
  if (pGVar6 == (GameManagers_InGameManager_o *)0x0) goto label_05d2e2dd;
  pUVar38 = (__this->fields)._middleCenterLabel;
  if ((pGVar6->fields).IsEnding == false) {
    if (pUVar38 == (UI_InGameLabel_o *)0x0) goto label_05d2e2dd;
    pSVar31 = (__this->fields)._middleCenterText;
    pMVar36 = extraout_RDX;
  }
  else {
    pUVar12 = (__this->fields)._hudText;
    if (pUVar12 == (UI_InGameMenu_HudText_o *)0x0) goto label_05d2e2dd;
    pSVar34 = (__this->fields)._middleCenterText;
    pSVar31 = (pUVar12->fields).RestartingIn;
    auStack_c0._0_4_ = (int)(pGVar6->fields).EndTimeLeft;
    pIVar30 = il2cpp_vm_Object_Box(g_data_07556710,auStack_c0);
    pSVar31 = System_String__Format(pSVar31,pIVar30,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07547e16 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"\n");
      Il2CppMethodInitialized_07547e16 = '\x01';
    }
    if ((__this->fields)._legacyLabels == false) {
      bVar28 = System_String__IsNullOrEmpty(pSVar34,(MethodInfo *)0x0);
      pMVar36 = extraout_RDX_01;
      if (!bVar28) {
        bVar28 = System_String__IsNullOrEmpty(pSVar31,(MethodInfo *)0x0);
        if (!bVar28) goto label_05d2d8bc;
        pMVar36 = extraout_RDX_02;
        pSVar31 = pSVar34;
      }
    }
    else {
label_05d2d8bc:
      pSVar31 = System_String__Concat_5301f10(pSVar34,"\n",pSVar31,(MethodInfo *)0x0);
      pMVar36 = extraout_RDX_00;
    }
    if (pUVar38 == (UI_InGameLabel_o *)0x0) goto label_05d2e2dd;
  }
  UI_InGameLabel__set_Text(pUVar38,pSVar31,pMVar36);
  pCVar13 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar13 != (Cameras_BaseCamera_o *)0x0) {
    bVar2 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar13->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pCVar13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar13);
    }
  }
  fVar40 = (__this->fields)._spectateUpdateTimeLeft;
  fVar41 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar40 = fVar40 - fVar41;
  (__this->fields)._spectateUpdateTimeLeft = fVar40;
  if (fVar40 <= 0.0) {
    (__this->fields)._spectateUpdateTimeLeft = 1.0;
    if (pCVar13 == (Cameras_BaseCamera_o *)0x0) goto label_05d2e2dd;
    pCVar14 = (*(uint64_t *)((char *)pCVar13 + 0x38));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    iVar37 = 0;
    bVar28 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar28) {
      if (((((*(uint64_t *)((char *)pCVar13 + 0x38)) == (Cameras_BaseCamera_c *)0x0) ||
           (pvVar15 = (((*(Il2CppClass **)((char *)pCVar13 + 0x38)))->_1).fields, pvVar15 == (void *)0x0)) ||
          (lVar16 = *(long *)((long)pvVar15 + 0x20), lVar16 == 0)) ||
         (lVar16 = *(long *)(lVar16 + 0x80), lVar16 == 0)) goto label_05d2e2dd;
      iVar4 = *(int *)(lVar16 + 0x18);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      iVar37 = 0;
      pPVar32 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
      if (pPVar32 == (Photon_Realtime_Player_array *)0x0) goto label_05d2e2dd;
      if (0 < (int)pPVar32->max_length) {
        uVar33 = pPVar32->max_length & 0xffffffff;
        uVar39 = 0;
        iVar37 = 0;
        do {
          if (uVar33 <= uVar39) {
            ThrowIndexOutOfRangeException();
          }
          player = pPVar32->m_Items[uVar39];
          if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
          }
          iVar29 = PhotonExtensions__GetIntProperty
                             (player,TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID,-1,
                              (MethodInfo *)0x0);
          iVar37 = iVar37 + (uint)(iVar29 == iVar4);
          uVar39 = uVar39 + 1;
          uVar3 = (uint)pPVar32->max_length;
          uVar33 = (ulong)uVar3;
        } while ((long)uVar39 < (long)(int)uVar3);
      }
    }
    (__this->fields)._spectateCount = iVar37;
  }
  pSVar17 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
  if ((pSVar17 == (Settings_InGameCharacterSettings_o *)0x0) ||
     (pSVar18 = (pSVar17->fields).ChooseStatus, pSVar18 == (Settings_IntSetting_o *)0x0)) goto label_05d2e2dd;
  if ((pSVar18->fields)._value == 1) {
label_05d2db99:
    pSVar20 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if ((pSVar20 == (Settings_InputSettings_o *)0x0) ||
       (pSVar18 = (pSVar17->fields).ChooseStatus, pSVar18 == (Settings_IntSetting_o *)0x0)) goto label_05d2e2dd;
    if ((pSVar18->fields)._value == 0) {
      if (pCVar13 == (Cameras_BaseCamera_o *)0x0) goto label_05d2e2dd;
      pCVar14 = (*(uint64_t *)((char *)pCVar13 + 0x38));
      uVar5 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      pSVar31 = "";
    }
    else {
      pUVar12 = (__this->fields)._hudText;
      if (((pUVar12 == (UI_InGameMenu_HudText_o *)0x0) ||
          (pSVar21 = (pSVar20->fields).General, pSVar21 == (Settings_GeneralInputSettings_o *)0x0)) ||
         (pSVar22 = (pSVar21->fields).SpectatePreviousPlayer, pSVar22 == (Settings_KeybindSetting_o *)0x0))
      goto label_05d2e2dd;
      pSVar31 = (pUVar12->fields).SpectatePrevious;
      pSVar34 = (*(pSVar22->klass->vtable)._3_ToString.methodPtr)
                          (pSVar22,(pSVar22->klass->vtable)._3_ToString.method);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar34 = GameManagers_ChatManager__GetColorString(pSVar34,3,false,(MethodInfo *)0x0);
      pSVar31 = System_String__Format(pSVar31,(Il2CppObject *)pSVar34,(MethodInfo *)0x0);
      pSVar31 = System_String__Concat_52f0320(pSVar31,", ",(MethodInfo *)0x0);
      pUVar12 = (__this->fields)._hudText;
      if ((pUVar12 == (UI_InGameMenu_HudText_o *)0x0) ||
         (pSVar22 = (pSVar21->fields).SpectateNextPlayer, pSVar22 == (Settings_KeybindSetting_o *)0x0))
      goto label_05d2e2dd;
      pSVar34 = (pUVar12->fields).SpectateNext;
      pSVar35 = (*(pSVar22->klass->vtable)._3_ToString.methodPtr)
                          (pSVar22,(pSVar22->klass->vtable)._3_ToString.method);
      pSVar35 = GameManagers_ChatManager__GetColorString(pSVar35,3,false,(MethodInfo *)0x0);
      pSVar34 = System_String__Format(pSVar34,(Il2CppObject *)pSVar35,(MethodInfo *)0x0);
      pSVar31 = System_String__Concat_5301f10(pSVar31,pSVar34,", ",(MethodInfo *)0x0);
      pUVar12 = (__this->fields)._hudText;
      if ((pUVar12 == (UI_InGameMenu_HudText_o *)0x0) ||
         (pSVar22 = (pSVar21->fields).ChangeCharacter, pSVar22 == (Settings_KeybindSetting_o *)0x0))
      goto label_05d2e2dd;
      pSVar34 = (pUVar12->fields).SpectateJoin;
      pSVar35 = (*(pSVar22->klass->vtable)._3_ToString.methodPtr)
                          (pSVar22,(pSVar22->klass->vtable)._3_ToString.method);
      pSVar35 = GameManagers_ChatManager__GetColorString(pSVar35,3,false,(MethodInfo *)0x0);
      pSVar34 = System_String__Format(pSVar34,(Il2CppObject *)pSVar35,(MethodInfo *)0x0);
      pSVar31 = System_String__Concat_5301f10(pSVar31,pSVar34,", ",(MethodInfo *)0x0);
      if ((pCVar13 == (Cameras_BaseCamera_o *)0x0) || ((*(uint64_t *)((char *)pCVar13 + 0x40)) == (Utility_Cycle_T__o *)0x0))
      goto label_05d2e2dd;
      iVar29 = Utility_Cycle_Int32Enum___Current
                         ((*(uint64_t *)((char *)pCVar13 + 0x40)),
                          (MethodInfo_494C4B0 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Current);
      auStack_c0._0_4_ = iVar29;
      pIVar30 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_Cameras_InGameCamera_SpecateMode,auStack_c0);
      pSVar34 = System_String__Format("{0}: ",pIVar30,(MethodInfo *)0x0);
      pSVar22 = (pSVar21->fields).ChangeCamera;
      if (pSVar22 == (Settings_KeybindSetting_o *)0x0) goto label_05d2e2dd;
      pSVar35 = (*(pSVar22->klass->vtable)._3_ToString.methodPtr)
                          (pSVar22,(pSVar22->klass->vtable)._3_ToString.method);
      pSVar35 = GameManagers_ChatManager__GetColorString(pSVar35,3,false,(MethodInfo *)0x0);
      pSVar31 = System_String__Concat_5301f10(pSVar31,pSVar34,pSVar35,(MethodInfo *)0x0);
      pCVar14 = (*(uint64_t *)((char *)pCVar13 + 0x38));
      uVar5 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    }
    if (uVar5 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar28 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar28) {
      pGVar6 = (__this->fields)._gameManager;
      if (pGVar6 == (GameManagers_InGameManager_o *)0x0) goto label_05d2e2dd;
      pCVar14 = (*(uint64_t *)((char *)pCVar13 + 0x38));
      pCVar19 = (pGVar6->fields).CurrentCharacter;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar28 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)pCVar19,(MethodInfo *)0x0);
      if (!bVar28) goto label_05d2de91;
      pUVar12 = (__this->fields)._hudText;
      if ((pUVar12 == (UI_InGameMenu_HudText_o *)0x0) || ((*(uint64_t *)((char *)pCVar13 + 0x38)) == (Cameras_BaseCamera_c *)0x0))
      goto label_05d2e2dd;
      pSVar34 = (pUVar12->fields).SpectatingPlayer;
      arg0 = (((*(Il2CppClass **)((char *)pCVar13 + 0x38)))->_1).castClass;
      auStack_c0._0_4_ = (__this->fields)._spectateCount;
      pIVar30 = il2cpp_vm_Object_Box(g_data_07556710,auStack_c0);
      pSVar34 = System_String__Format_5302c50(pSVar34,(Il2CppObject *)arg0,pIVar30,(MethodInfo *)0x0);
    }
    else {
label_05d2de91:
      pUVar12 = (__this->fields)._hudText;
      if (pUVar12 == (UI_InGameMenu_HudText_o *)0x0) goto label_05d2e2dd;
      pSVar34 = (pUVar12->fields).Spectating;
    }
    method_00 = (MethodInfo *)
                System_String__Concat_5301f10(pSVar34," ",pSVar31,(MethodInfo *)0x0);
    pUVar38 = (__this->fields)._bottomCenterLabel;
    pMVar36 = (MethodInfo *)(__this->fields)._bottomCenterText;
    if (Il2CppMethodInitialized_07547e16 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"\n");
      Il2CppMethodInitialized_07547e16 = '\x01';
    }
    if ((__this->fields)._legacyLabels == false) {
      bVar28 = System_String__IsNullOrEmpty((System_String_o *)pMVar36,(MethodInfo *)0x0);
      method_01 = extraout_RDX_05;
      if (!bVar28) {
        bVar28 = System_String__IsNullOrEmpty((System_String_o *)method_00,(MethodInfo *)0x0);
        if (!bVar28) goto label_05d2def0;
        method_01 = extraout_RDX_06;
        method_00 = pMVar36;
      }
    }
    else {
label_05d2def0:
      method_00 = (MethodInfo *)
                  System_String__Concat_5301f10
                            ((System_String_o *)pMVar36,"\n",(System_String_o *)method_00,
                             (MethodInfo *)0x0);
      method_01 = extraout_RDX_04;
    }
    if (pUVar38 == (UI_InGameLabel_o *)0x0) goto label_05d2e2dd;
  }
  else {
    pGVar6 = (__this->fields)._gameManager;
    if (pGVar6 == (GameManagers_InGameManager_o *)0x0) goto label_05d2e2dd;
    pCVar19 = (pGVar6->fields).CurrentCharacter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar28 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pCVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar28) goto label_05d2db99;
    pGVar6 = (__this->fields)._gameManager;
    if ((pGVar6 == (GameManagers_InGameManager_o *)0x0) ||
       (pCVar19 = (pGVar6->fields).CurrentCharacter, pCVar19 == (Characters_BaseCharacter_o *)0x0))
    goto label_05d2e2dd;
    if ((pCVar19->fields).Dead != false) goto label_05d2db99;
    pUVar38 = (__this->fields)._bottomCenterLabel;
    if (pUVar38 == (UI_InGameLabel_o *)0x0) goto label_05d2e2dd;
    method_00 = (MethodInfo *)(__this->fields)._bottomCenterText;
    method_01 = extraout_RDX_03;
  }
  UI_InGameLabel__set_Text(pUVar38,(System_String_o *)method_00,method_01);
  pSVar31 = UI_InGameMenu__GetKeybindStrings(__this,method_00);
  pSVar23 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if ((pSVar23 == (Settings_InGameSet_o *)0x0) ||
     (pSVar24 = (pSVar23->fields).Sandbox, pSVar24 == (Settings_BoolSetting_o *)0x0)) goto label_05d2e2dd;
  if ((pSVar24->fields)._value == false) goto label_05d2e01f;
  pUVar12 = (__this->fields)._hudText;
  if (pUVar12 == (UI_InGameMenu_HudText_o *)0x0) goto label_05d2e2dd;
  pSVar34 = (pUVar12->fields).Sandbox;
  if (Il2CppMethodInitialized_07547e16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_07547e16 = '\x01';
  }
  if ((__this->fields)._legacyLabels == false) {
    bVar28 = System_String__IsNullOrEmpty(pSVar34,(MethodInfo *)0x0);
    if (!bVar28) {
      bVar28 = System_String__IsNullOrEmpty(pSVar31,(MethodInfo *)0x0);
      if (!bVar28) goto label_05d2dfe4;
      pSVar31 = pSVar34;
    }
  }
  else {
label_05d2dfe4:
    pSVar31 = System_String__Concat_5301f10(pSVar34,"\n",pSVar31,(MethodInfo *)0x0);
  }
label_05d2e01f:
  pUVar38 = (__this->fields)._bottomRightLabel;
  bVar28 = System_String__IsNullOrEmpty(pSVar31,(MethodInfo *)0x0);
  pSVar34 = (__this->fields)._bottomRightText;
  pMVar36 = extraout_RDX_07;
  if (!bVar28) {
    if (Il2CppMethodInitialized_07547e16 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"\n");
      Il2CppMethodInitialized_07547e16 = '\x01';
    }
    if ((__this->fields)._legacyLabels == false) {
      bVar28 = System_String__IsNullOrEmpty(pSVar34,(MethodInfo *)0x0);
      if (bVar28) {
        pMVar36 = extraout_RDX_09;
        pSVar34 = pSVar31;
      }
      else {
        bVar28 = System_String__IsNullOrEmpty(pSVar31,(MethodInfo *)0x0);
        pMVar36 = extraout_RDX_10;
        if (!bVar28) goto label_05d2e061;
      }
    }
    else {
label_05d2e061:
      pSVar34 = System_String__Concat_5301f10(pSVar34,"\n",pSVar31,(MethodInfo *)0x0);
      pMVar36 = extraout_RDX_08;
    }
  }
  if (pUVar38 != (UI_InGameLabel_o *)0x0) {
    UI_InGameLabel__set_Text(pUVar38,pSVar34,pMVar36);
    pUVar38 = (__this->fields)._topLeftLabel;
    if (pUVar38 != (UI_InGameLabel_o *)0x0) {
      UI_InGameLabel__set_Text(pUVar38,(__this->fields)._topLeftText,method_02);
      pUVar25 = (__this->fields)._killFeedBigPopup;
      if (pUVar25 != (UI_KillFeedBigPopup_o *)0x0) {
        fVar40 = (pUVar25->fields).TimeLeft;
        fVar41 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        (pUVar25->fields).TimeLeft = fVar40 - fVar41;
        pUVar25 = (__this->fields)._killFeedBigPopup;
        if (pUVar25 != (UI_KillFeedBigPopup_o *)0x0) {
          if (((pUVar25->fields).IsActive != false) && ((pUVar25->fields).TimeLeft <= 0.0)) {
            (*(pUVar25->klass->vtable)._22_Hide.methodPtr)(pUVar25,(pUVar25->klass->vtable)._22_Hide.method);
          }
          fVar40 = (__this->fields)._killScoreTimeLeft;
          fVar41 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          fVar40 = fVar40 - fVar41;
          (__this->fields)._killScoreTimeLeft = fVar40;
          if (fVar40 <= 0.0) {
            pUVar26 = (__this->fields)._killScorePopup;
            if (pUVar26 == (UI_KillScorePopup_o *)0x0) goto label_05d2e2dd;
            (*(pUVar26->klass->vtable)._22_Hide.methodPtr)(pUVar26,(pUVar26->klass->vtable)._22_Hide.method);
          }
          __this_00 = (__this->fields)._killFeedSmallPopups;
          if (__this_00 != (System_Collections_Generic_List_KillFeedSmallPopup__o *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&SStack_48,
                       (System_Collections_Generic_List_object__o *)__this_00,
                       (MethodInfo_395E050 *)
                       MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_GetEnumerator);
            auStack_c0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            auStack_c0._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&SStack_48;
            while( true ) {
              bVar28 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&SStack_48,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_KillFeedSmallPopup_MoveNext
                                 );
              pIVar30 = SStack_48.fields._current;
              if (!bVar28) break;
              if (SStack_48.fields._current == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              fVar40 = *(float *)&SStack_48.fields._current[0xd].monitor;
              fVar41 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              fVar40 = fVar40 - fVar41;
              *(float *)&pIVar30[0xd].monitor = fVar40;
              if ((*(char *)&pIVar30[9].klass != '\0') && (fVar40 <= 0.0)) {
                (*pIVar30->klass->vtable[0x16].methodPtr)(pIVar30,pIVar30->klass->vtable[0x16].method);
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (&SStack_48,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_KillFeedSmallPopup_Dispose);
            fVar40 = (__this->fields)._snapshotTimeLeft;
            fVar41 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            fVar40 = fVar40 - fVar41;
            (__this->fields)._snapshotTimeLeft = fVar40;
            pUVar27 = (__this->fields)._snapshotPopup;
            if (pUVar27 != (UI_SnapshotPopup_o *)0x0) {
              if (((pUVar27->fields).IsActive != false) && (fVar40 <= 0.0)) {
                (*(pUVar27->klass->vtable)._22_Hide.methodPtr)
                          (pUVar27,(pUVar27->klass->vtable)._22_Hide.method);
              }
              return;
            }
          }
        }
      }
    }
  }
label_05d2e2dd:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$CombineLines
// il2cpp: System_String_o* UI_InGameMenu__CombineLines (UI_InGameMenu_o* __this, System_String_o* first, System_String_o* second, const MethodInfo* method);
// 0x5d2e450

System_String_o *
UI_InGameMenu__CombineLines
          (UI_InGameMenu_o *__this,System_String_o *first,System_String_o *second,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547e16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_07547e16 = '\x01';
  }
  if ((__this->fields)._legacyLabels != false) {
label_05d2e483:
    pSVar2 = System_String__Concat_5301f10(first,"\n",second,(MethodInfo *)0x0);
    return pSVar2;
  }
  bVar1 = System_String__IsNullOrEmpty(first,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__IsNullOrEmpty(second,(MethodInfo *)0x0);
    if (!bVar1) goto label_05d2e483;
    second = first;
  }
  return second;
}


// UI.InGameMenu$$GetKeybindStrings
// il2cpp: System_String_o* UI_InGameMenu__GetKeybindStrings (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2e4d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d2e76e: lea rdx, [rip + 0x154e4db]  ; TypeInfo_Settings_SettingsManager

System_String_o * UI_InGameMenu__GetKeybindStrings(UI_InGameMenu_o *__this,MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Settings_UISettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  GameManagers_BaseGameManager_o *pGVar5;
  UnityEngine_Object_o *x;
  long *plVar6;
  UnityEngine_Rigidbody_o *__this_00;
  UI_InGameMenu_HudText_o *pUVar7;
  Settings_IntSetting_o *pSVar8;
  Utility_BaseComponentCache_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  Cameras_BaseCamera_c *pCVar11;
  void *pvVar12;
  bool bVar13;
  int32_t iVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  System_String_o *arg1;
  System_String_o *arg2;
  Il2CppObject *arg0;
  UnityEngine_Vector3_o local_50;
  int32_t local_44;
  System_String_o *local_40;
  UI_InGameMenu_o *local_38;
  
  if (Il2CppMethodInitialized_07547e17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"F0");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e17 = '\x01';
  }
  pSVar16 = "";
  local_50.fields = (UnityEngine_Vector3_Fields)ZEXT812(0);
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar2);
    }
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar3 != (Settings_UISettings_o *)0x0) &&
     (pSVar4 = (pSVar3->fields).ShowInterpolation, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar4->fields)._value != false) {
      pGVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (pGVar5 == (GameManagers_BaseGameManager_o *)0x0) goto label_05d2e9eb;
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((pGVar5->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar5);
      }
      x = (*(uint64_t *)((char *)pGVar5 + 0x80));
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar13 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar13) && (plVar6 = (*(uint64_t *)((char *)pGVar5 + 0x80)), plVar6 != (long *)0x0)) {
        bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
           (*(Characters_Human_c **)(*(long *)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) ==
            TypeInfo_Characters_Human)) {
          if ((plVar6[0x10] == 0) ||
             (__this_00 = *(UnityEngine_Rigidbody_o **)(plVar6[0x10] + 0x18),
             __this_00 == (UnityEngine_Rigidbody_o *)0x0)) goto label_05d2e9eb;
          iVar14 = UnityEngine_Rigidbody__get_interpolation(__this_00,(MethodInfo *)0x0);
          pUVar7 = (__this->fields)._hudText;
          if (iVar14 == 1) {
            if (pUVar7 == (UI_InGameMenu_HudText_o *)0x0) goto label_05d2e9eb;
            pSVar16 = (pUVar7->fields).Interpolation;
            pSVar15 = (pUVar7->fields).On;
          }
          else {
            if (pUVar7 == (UI_InGameMenu_HudText_o *)0x0) goto label_05d2e9eb;
            pSVar16 = (pUVar7->fields).Interpolation;
            pSVar15 = (pUVar7->fields).Off;
          }
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar15 = GameManagers_ChatManager__GetColorString(pSVar15,3,false,(MethodInfo *)0x0);
          pSVar16 = System_String__Format(pSVar16,(Il2CppObject *)pSVar15,(MethodInfo *)0x0);
        }
      }
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar3 != (Settings_UISettings_o *)0x0) &&
       (pSVar8 = (pSVar3->fields).Coordinates, pSVar8 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar8->fields)._value == 2) {
        if (((pCVar2 == (Cameras_BaseCamera_o *)0x0) ||
            (pUVar9 = (pCVar2->fields).Cache, pUVar9 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pUVar10 = (pUVar9->fields).Transform, pUVar10 == (UnityEngine_Transform_o *)0x0))
        goto label_05d2e9eb;
        local_50 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
        pCVar11 = (*(uint64_t *)((char *)pCVar2 + 0x38));
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar13 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pCVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar13) {
          if ((((*(uint64_t *)((char *)pCVar2 + 0x38)) == (Cameras_BaseCamera_c *)0x0) ||
              (pvVar12 = (((*(Il2CppClass **)((char *)pCVar2 + 0x38)))->_1).fields, pvVar12 == (void *)0x0)) ||
             (pUVar10 = *(UnityEngine_Transform_o **)((long)pvVar12 + 0x10),
             pUVar10 == (UnityEngine_Transform_o *)0x0)) goto label_05d2e9eb;
          local_50 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
        }
        pUVar7 = (__this->fields)._hudText;
        local_40 = pSVar16;
        local_38 = __this;
        if (pUVar7 == (UI_InGameMenu_HudText_o *)0x0) goto label_05d2e9eb;
        pSVar16 = (pUVar7->fields).Position;
        pSVar15 = System_Single__ToString_54d0a60((float *)&local_50,"F0",(MethodInfo *)0x0);
        arg1 = System_Single__ToString_54d0a60(&local_50.fields.y,"F0",(MethodInfo *)0x0);
        arg2 = System_Single__ToString_54d0a60(&local_50.fields.z,"F0",(MethodInfo *)0x0);
        pSVar15 = System_String__Format_5302ca0
                            (pSVar16,(Il2CppObject *)pSVar15,(Il2CppObject *)arg1,(Il2CppObject *)arg2,
                             (MethodInfo *)0x0);
        pSVar16 = local_40;
        bVar13 = System_String__op_Inequality(local_40,"",(MethodInfo *)0x0);
        if (bVar13) {
          pSVar15 = System_String__Concat_52f0320(pSVar15,"\n",(MethodInfo *)0x0);
        }
        pSVar16 = System_String__Concat_52f0320(pSVar15,pSVar16,(MethodInfo *)0x0);
        __this = local_38;
      }
      else if (pCVar2 == (Cameras_BaseCamera_o *)0x0) goto label_05d2e9eb;
      pCVar11 = (*(uint64_t *)((char *)pCVar2 + 0x38));
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar13 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar13) && (0 < (__this->fields)._spectateCount)) {
        if ((*(uint64_t *)((char *)pCVar2 + 0x38)) == (Cameras_BaseCamera_c *)0x0) goto label_05d2e9eb;
        bVar13 = Characters_BaseCharacter__IsMainCharacter
                           ((Characters_BaseCharacter_o *)(*(uint64_t *)((char *)pCVar2 + 0x38)),(MethodInfo *)0x0);
        if (bVar13) {
          pUVar7 = (__this->fields)._hudText;
          if (pUVar7 == (UI_InGameMenu_HudText_o *)0x0) goto label_05d2e9eb;
          pSVar15 = (pUVar7->fields).SpectatorCount;
          local_44 = (__this->fields)._spectateCount;
          arg0 = il2cpp_vm_Object_Box(g_data_07556710,&local_44);
          pSVar15 = System_String__Format(pSVar15,arg0,(MethodInfo *)0x0);
          bVar13 = System_String__op_Inequality(pSVar16,"",(MethodInfo *)0x0);
          if (bVar13) {
            pSVar15 = System_String__Concat_52f0320(pSVar15,"\n",(MethodInfo *)0x0);
          }
          pSVar16 = System_String__Concat_52f0320(pSVar15,pSVar16,(MethodInfo *)0x0);
        }
      }
      return pSVar16;
    }
  }
label_05d2e9eb:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$GetPlayerListEntry
// il2cpp: System_String_o* UI_InGameMenu__GetPlayerListEntry (UI_InGameMenu_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5d2ea00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d2ebbb: jmp 0x5d2ebe2
// asm:   0x5d2f1dd: jmp 0x5d2f2a3

System_String_o *
UI_InGameMenu__GetPlayerListEntry(UI_InGameMenu_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  int32_t id;
  uint uVar3;
  Settings_InGameSet_o *pSVar4;
  Settings_InGameMiscSettings_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  bool bVar7;
  bool includeMC;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_String_o **ppSVar12;
  System_String_array *pSVar13;
  CustomLogic_CustomLogicEvaluator_o *pCVar14;
  Il2CppObject *pIVar15;
  ulong uVar16;
  
  if (Il2CppMethodInitialized_07547e18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&" B ");
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&" R ");
    il2cpp_codegen_initialize_runtime_metadata(&" H ");
    il2cpp_codegen_initialize_runtime_metadata(&" / ");
    il2cpp_codegen_initialize_runtime_metadata(&" APG ");
    il2cpp_codegen_initialize_runtime_metadata(&" T ");
    il2cpp_codegen_initialize_runtime_metadata(&" <color=red>*dead*</color> ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&" AHSS ");
    il2cpp_codegen_initialize_runtime_metadata(&" TS ");
    Il2CppMethodInitialized_07547e18 = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar8 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Status,""
                      ,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
  }
  bVar7 = System_String__op_Inequality
                    (pSVar8,TypeInfo_GameManagers_PlayerStatus->static_fields->Alive,(MethodInfo *)0x0);
  if (bVar7) {
    uVar1 = (TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor;
    pSVar8 = " <color=red>*dead*</color> ";
  }
  else {
    uVar1 = (TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor;
    pSVar8 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar9 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,"",
                      (MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  pSVar10 = GameManagers_TeamInfo__GetTeamColor(pSVar9,(MethodInfo *)0x0);
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar4 == (Settings_InGameSet_o *)0x0) ||
      (pSVar5 = (pSVar4->fields).Misc, pSVar5 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar6 = (pSVar5->fields).PVP, pSVar6 == (Settings_IntSetting_o *)0x0)) goto label_05d2f3de;
  iVar2 = (pSVar6->fields)._value;
  pSVar11 = PhotonExtensions__GetStringProperty
                      (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Character,
                       "",(MethodInfo *)0x0);
  bVar7 = System_String__op_Equality
                    (pSVar9,TypeInfo_GameManagers_TeamInfo->static_fields->None,(MethodInfo *)0x0);
  if (bVar7) {
    pSVar9 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  if (iVar2 == 2) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar7 = System_String__op_Equality
                      (pSVar9,TypeInfo_GameManagers_TeamInfo->static_fields->Blue,(MethodInfo *)0x0);
    if (bVar7) {
      ppSVar12 = &" B ";
    }
    else {
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar7 = System_String__op_Equality
                        (pSVar9,TypeInfo_GameManagers_TeamInfo->static_fields->Red,(MethodInfo *)0x0);
      if (bVar7) {
        ppSVar12 = &" R ";
      }
      else {
label_05d2ee47:
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        bVar7 = System_String__op_Equality
                          (pSVar9,TypeInfo_GameManagers_TeamInfo->static_fields->Titan,(MethodInfo *)0x0);
        if (bVar7) {
          ppSVar12 = &" T ";
        }
        else {
          if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
          }
          bVar7 = System_String__op_Equality
                            (pSVar9,TypeInfo_GameManagers_TeamInfo->static_fields->Human,(MethodInfo *)0x0);
          if (bVar7) {
            ppSVar12 = &" H ";
          }
          else {
            ppSVar12 = *(System_String_o ***)(g_data_07556758 + 0xb8);
          }
        }
      }
    }
    pSVar9 = *ppSVar12;
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar7 = System_String__op_Equality
                      (pSVar9,TypeInfo_GameManagers_TeamInfo->static_fields->Blue,(MethodInfo *)0x0);
    if (!bVar7) {
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar7 = System_String__op_Equality
                        (pSVar9,TypeInfo_GameManagers_TeamInfo->static_fields->Red,(MethodInfo *)0x0);
      if (!bVar7) goto label_05d2ee47;
    }
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    bVar7 = System_String__op_Equality
                      (pSVar11,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,(MethodInfo *)0x0);
    if (bVar7) {
label_05d2edd6:
      pSVar11 = " H ";
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      pSVar9 = TypeInfo_GameManagers_TeamInfo->static_fields->Human;
    }
    else {
      if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
      }
      bVar7 = System_String__op_Equality
                        (pSVar11,TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter,
                         (MethodInfo *)0x0);
      if (bVar7) goto label_05d2edd6;
      if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
      }
      bVar7 = System_String__op_Equality
                        (pSVar11,TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,(MethodInfo *)0x0
                        );
      pSVar11 = " T ";
      if (!bVar7) goto label_05d2ef2b;
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      pSVar9 = TypeInfo_GameManagers_TeamInfo->static_fields->Titan;
    }
    pSVar10 = GameManagers_TeamInfo__GetTeamColor(pSVar9,(MethodInfo *)0x0);
    pSVar9 = pSVar11;
  }
label_05d2ef2b:
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar9 = Utility_Util__ColorText(pSVar9,pSVar10,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar10 = PhotonExtensions__GetStringProperty
                      (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Loadout,
                       "",(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  bVar7 = System_String__op_Equality
                    (pSVar10,TypeInfo_GameManagers_HumanLoadout->static_fields->APG,(MethodInfo *)0x0);
  if (bVar7) {
    ppSVar12 = &" APG ";
  }
  else {
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar7 = System_String__op_Equality
                      (pSVar10,TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS,(MethodInfo *)0x0);
    if (bVar7) {
      ppSVar12 = &" AHSS ";
    }
    else {
      if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
      }
      bVar7 = System_String__op_Equality
                        (pSVar10,TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear,
                         (MethodInfo *)0x0);
      if (bVar7) {
        ppSVar12 = &" TS ";
      }
      else {
        ppSVar12 = *(System_String_o ***)(g_data_07556758 + 0xb8);
      }
    }
  }
  pSVar10 = *ppSVar12;
  pSVar13 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    id = (player->fields).actorNumber;
    includeMC = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
    bVar7 = (player->fields).IsLocal;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar11 = GameManagers_ChatManager__GetIDString(id,includeMC,bVar7,(MethodInfo *)0x0);
    if (pSVar13 != (System_String_array *)0x0) {
      if ((int)pSVar13->max_length != 0) {
        pSVar13->m_Items[0] = pSVar11;
        Il2CppCodeGenWriteBarrier(pSVar13->m_Items);
        if ((pSVar13->max_length & 0xfffffffe) != 0) {
          pSVar13->m_Items[1] = pSVar8;
          Il2CppCodeGenWriteBarrier(pSVar13->m_Items + 1);
          if (2 < (uint)pSVar13->max_length) {
            pSVar13->m_Items[2] = pSVar9;
            Il2CppCodeGenWriteBarrier(pSVar13->m_Items + 2);
            if ((pSVar13->max_length & 0xfffffffc) != 0) {
              pSVar13->m_Items[3] = pSVar10;
              Il2CppCodeGenWriteBarrier(pSVar13->m_Items + 3);
              if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
              }
              pSVar8 = PhotonExtensions__GetStringProperty
                                 (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                                  "",(MethodInfo *)0x0);
              if (4 < (uint)pSVar13->max_length) {
                pSVar13->m_Items[4] = pSVar8;
                Il2CppCodeGenWriteBarrier(pSVar13->m_Items + 4);
                pSVar9 = System_String__Concat_5302910(pSVar13,(MethodInfo *)0x0);
                pSVar8 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                  pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
                }
                else {
                  pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
                }
                if (pCVar14 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                  if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                    pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
                    if (pCVar14 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05d2f3de;
                  }
                  bVar7 = System_String__op_Inequality
                                    ((pCVar14->fields).ScoreboardProperty,
                                     (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                                     (MethodInfo *)0x0);
                  if (bVar7) {
                    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                    }
                    pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
                    if (pCVar14 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                      pIVar15 = PhotonExtensions__GetCustomProperty
                                          (player,(pCVar14->fields).ScoreboardProperty,(MethodInfo *)0x0);
                      if (pIVar15 == (Il2CppObject *)0x0) {
                        pSVar8 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
                      }
                      else {
                        pSVar8 = (System_String_o *)
                                 (*pIVar15->klass->vtable[3].methodPtr)
                                           (pIVar15,pIVar15->klass->vtable[3].method);
                      }
label_05d2f38f:
                      pSVar8 = System_String__Concat_5301f10
                                         (pSVar9,": ",pSVar8,(MethodInfo *)0x0);
                      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                      }
                      pSVar8 = Utility_Util__SizeText(pSVar8,0x13,(MethodInfo *)0x0);
                      return pSVar8;
                    }
                    goto label_05d2f3de;
                  }
                }
                pSVar13 = (__this->fields).trackedProperties;
                if (pSVar13 != (System_String_array *)0x0) {
                  uVar16 = 0;
                  do {
                    uVar3 = (uint)pSVar13->max_length;
                    if ((long)(int)uVar3 <= (long)uVar16) goto label_05d2f38f;
                    if (uVar3 <= uVar16) goto label_05d2f3e3;
                    pIVar15 = PhotonExtensions__GetCustomProperty
                                        (player,pSVar13->m_Items[uVar16],(MethodInfo *)0x0);
                    if (pIVar15 == (Il2CppObject *)0x0) {
                      pSVar10 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
                    }
                    else {
                      pSVar10 = (System_String_o *)
                                (*pIVar15->klass->vtable[3].methodPtr)
                                          (pIVar15,pIVar15->klass->vtable[3].method);
                    }
                    pSVar8 = System_String__Concat_52f0320(pSVar8,pSVar10,(MethodInfo *)0x0);
                    pSVar13 = (__this->fields).trackedProperties;
                    if (pSVar13 == (System_String_array *)0x0) break;
                    if ((long)uVar16 < (long)((int)pSVar13->max_length + -1)) {
                      pSVar8 = System_String__Concat_52f0320(pSVar8," / ",(MethodInfo *)0x0);
                      pSVar13 = (__this->fields).trackedProperties;
                    }
                    uVar16 = uVar16 + 1;
                  } while (pSVar13 != (System_String_array *)0x0);
                }
                goto label_05d2f3de;
              }
            }
          }
        }
      }
label_05d2f3e3:
      ThrowIndexOutOfRangeException();
    }
  }
label_05d2f3de:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$GetAggregateStats
// il2cpp: System_String_o* UI_InGameMenu__GetAggregateStats (UI_InGameMenu_o* __this, System_Linq_IGrouping_string__Player__o* group, const MethodInfo* method);
// 0x5d2f3f0
// eh: try 0x5d2f59f..0x5d2fa6a -> pad 0x5d2facd (+8 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5d2faea..0x5d2faef -> pad 0x5d2faf4 cleanup
// eh: try 0x5d2faf7..0x5d2fb01 -> pad 0x5d2fb09 catch (...) [compiler noexcept guard]
// asm: 43 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d2f7cd: nop dword ptr [rax]
// asm:   0x5d2f82d: nop dword ptr [rax]
// asm:   0x5d2fa83: xor ebp, ebp
// asm:   0x5d2fa85: xor r15d, r15d
// asm:   0x5d2fa88: xor ebx, ebx
// asm:   0x5d2fa8a: xor r13d, r13d
// asm:   0x5d2fa8d: jmp 0x5d2f704
// asm:   0x5d2fa92: mov rdi, r14
// asm:   0x5d2fa95: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d2fa9a: jmp 0x5d2facd
// asm:   0x5d2fa9c: jmp 0x5d2facd
// asm:   0x5d2fa9e: jmp 0x5d2facd
// asm:   0x5d2faa0: mov r12, rax
// asm:   0x5d2faa3: jmp 0x5d2fac0
// asm:   0x5d2faa5: mov r12, rax
// asm:   0x5d2faa8: jmp 0x5d2fabb
// asm:   0x5d2faaa: mov r12, rax
// asm:   0x5d2faad: mov dword ptr [rsp + 4], r13d
// asm:   0x5d2fab2: jmp 0x5d2fad0
// asm:   0x5d2fab4: mov r12, rax
// asm:   0x5d2fab7: mov dword ptr [rsp + 0x1c], ebp
// asm:   0x5d2fabb: mov dword ptr [rsp + 0xc], r15d
// asm:   0x5d2fac0: mov dword ptr [rsp + 8], ebx
// asm:   0x5d2fac4: mov dword ptr [rsp + 4], r13d
// asm:   0x5d2fac9: jmp 0x5d2fad0
// asm:   0x5d2facb: jmp 0x5d2facd
// asm:   0x5d2facd: mov r12, rax
// asm:   0x5d2fad0: mov rbp, qword ptr [rsp + 0x10]
// asm:   0x5d2fad5: cmp edx, 1
// asm:   0x5d2fad8: jne 0x5d2faf7
// asm:   0x5d2fada: mov rdi, r12
// asm:   0x5d2fadd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d2fae2: mov r14, qword ptr [rax]
// asm:   0x5d2fae5: mov qword ptr [rsp + 0x38], r14
// asm:   0x5d2faea: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d2faef: jmp 0x5d2f711
// asm:   0x5d2faf4: mov r12, rax
// asm:   0x5d2faf7: lea rdi, [rsp + 0x38]
// asm:   0x5d2fafc: call 0x2fdc220  ; il2cpp_runtime_helper_02fdc220()
// asm:   0x5d2fb01: mov rdi, r12
// asm:   0x5d2fb04: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d2fb09: mov rdi, rax
// asm:   0x5d2fb0c: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
UI_InGameMenu__GetAggregateStats
          (UI_InGameMenu_o *__this,System_Linq_IGrouping_string__Player__o *group,MethodInfo *method)

{
  System_Linq_IGrouping_string__Player__c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppClass *pIVar3;
  bool bVar4;
  int32_t iVar5;
  VirtualInvokeData *pVVar6;
  Photon_Realtime_Player_o *player;
  System_Object_array *args;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  ulong uVar11;
  long lVar12;
  int local_74;
  int local_70;
  int local_6c;
  int local_5c;
  Il2CppObject *local_58;
  int local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_07547e19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_Player);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_Player);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Linq_IGrouping_string_Player);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"{0}: {1}/{2}/{3}/{4}\n");
    Il2CppMethodInitialized_07547e19 = '\x01';
  }
  local_58 = (Il2CppObject *)0x0;
  if (group != (System_Linq_IGrouping_string__Player__o *)0x0) {
    pSVar1 = group->klass;
    uVar11 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_Player__c **)((long)&pIVar2->interfaceType + lVar12) ==
            TypeInfo_System_Collections_Generic_IEnumerable_Player) {
          pVVar6 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
          goto label_05d2f501;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)group,
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_Player,0);
label_05d2f501:
    local_58 = (*pVVar6->methodPtr)((Il2CppObject *)group,pVVar6->method);
    local_40 = 0;
    local_38 = &local_58;
    if (local_58 != (Il2CppObject *)0x0) {
      local_74 = 0;
      local_70 = 0;
      local_6c = 0;
      local_5c = 0;
      do {
        pIVar9 = local_58;
        pIVar3 = local_58->klass;
        uVar11 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar11 != 0) {
          pIVar2 = (pIVar3->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar12) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar12);
              goto label_05d2f5c3;
            }
            lVar12 = lVar12 + 0x10;
          } while (uVar11 * 0x10 != lVar12);
        }
        pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05d2f5c3:
        bVar4 = (*pVVar6->methodPtr)(pIVar9,pVVar6->method);
        pIVar9 = local_58;
        if (!bVar4) {
          if (local_58 == (Il2CppObject *)0x0) goto label_05d2f786;
          pIVar3 = local_58->klass;
          uVar11 = (ulong)(pIVar3->_2).interface_offsets_count;
          if (uVar11 == 0) goto label_05d2f75f;
          pIVar2 = (pIVar3->_1).interfaceOffsets;
          lVar12 = 0;
          goto label_05d2f750;
        }
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = local_58->klass;
        uVar11 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar11 != 0) {
          pIVar2 = (pIVar3->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_Player__c **)((long)&pIVar2->interfaceType + lVar12)
                == TypeInfo_System_Collections_Generic_IEnumerator_Player) {
              pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar12);
              goto label_05d2f643;
            }
            lVar12 = lVar12 + 0x10;
          } while (uVar11 * 0x10 != lVar12);
        }
        pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_58,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_Player,0);
label_05d2f643:
        player = (Photon_Realtime_Player_o *)(*pVVar6->methodPtr)(pIVar9,pVVar6->method);
        if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
        }
        iVar5 = PhotonExtensions__GetIntProperty
                          (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Kills,0,
                           (MethodInfo *)0x0);
        local_74 = iVar5 + local_74;
        iVar5 = PhotonExtensions__GetIntProperty
                          (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths,0,
                           (MethodInfo *)0x0);
        local_70 = iVar5 + local_70;
        iVar5 = PhotonExtensions__GetIntProperty
                          (player,TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage,0,
                           (MethodInfo *)0x0);
        local_6c = iVar5 + local_6c;
        iVar5 = PhotonExtensions__GetIntProperty
                          (player,TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage,0,
                           (MethodInfo *)0x0);
        local_5c = iVar5 + local_5c;
      } while (local_58 != (Il2CppObject *)0x0);
    }
    ThrowNullReferenceException();
  }
  goto label_05d2fa7e;
  while (lVar12 = lVar12 + 0x10, uVar11 * 0x10 != lVar12) {
label_05d2f750:
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar12) == TypeInfo_System_IDisposable) {
      pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar12);
      goto label_05d2f77d;
    }
  }
label_05d2f75f:
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(local_58,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05d2f77d:
  (*pVVar6->methodPtr)(pIVar9,pVVar6->method);
label_05d2f786:
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
  pSVar1 = group->klass;
  uVar11 = (ulong)(pSVar1->_2).interface_offsets_count;
  if (uVar11 != 0) {
    pIVar2 = (pSVar1->_1).interfaceOffsets;
    lVar12 = 0;
    do {
      if (*(System_Linq_IGrouping_string__Player__c **)((long)&pIVar2->interfaceType + lVar12) ==
          TypeInfo_System_Linq_IGrouping_string_Player) {
        pVVar6 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
        goto label_05d2f801;
      }
      lVar12 = lVar12 + 0x10;
    } while (uVar11 * 0x10 != lVar12);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)group,(Il2CppClass *)TypeInfo_System_Linq_IGrouping_string_Player,0);
label_05d2f801:
  pSVar7 = (*pVVar6->methodPtr)((Il2CppObject *)group,pVVar6->method);
  pSVar1 = group->klass;
  uVar11 = (ulong)(pSVar1->_2).interface_offsets_count;
  if (uVar11 != 0) {
    pIVar2 = (pSVar1->_1).interfaceOffsets;
    lVar12 = 0;
    do {
      if (*(System_Linq_IGrouping_string__Player__c **)((long)&pIVar2->interfaceType + lVar12) ==
          TypeInfo_System_Linq_IGrouping_string_Player) {
        pVVar6 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar12);
        goto label_05d2f861;
      }
      lVar12 = lVar12 + 0x10;
    } while (uVar11 * 0x10 != lVar12);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)group,(Il2CppClass *)TypeInfo_System_Linq_IGrouping_string_Player,0);
label_05d2f861:
  pSVar8 = (*pVVar6->methodPtr)((Il2CppObject *)group,pVVar6->method);
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  pSVar8 = GameManagers_TeamInfo__GetTeamColor(pSVar8,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar7 = Utility_Util__ColorText(pSVar7,pSVar8,(MethodInfo *)0x0);
  if (args != (System_Object_array *)0x0) {
    if ((pSVar7 != (System_String_o *)0x0) &&
       (pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar7,(((args->obj).klass)->_1).element_class),
       pIVar9 == (Il2CppObject *)0x0)) {
label_05d2fa6f:
      pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
    }
    if ((int)args->max_length != 0) {
      args->m_Items[0] = (Il2CppObject *)pSVar7;
      Il2CppCodeGenWriteBarrier(args->m_Items);
      local_40 = CONCAT44(local_40._4_4_,local_74);
      pIVar9 = il2cpp_vm_Object_Box(g_data_07556710,&local_40);
      if ((pIVar9 != (Il2CppObject *)0x0) &&
         (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((args->obj).klass)->_1).element_class),
         pIVar10 == (Il2CppObject *)0x0)) goto label_05d2fa6f;
      if ((args->max_length & 0xfffffffe) != 0) {
        args->m_Items[1] = pIVar9;
        Il2CppCodeGenWriteBarrier(args->m_Items + 1);
        local_44 = local_70;
        pIVar9 = il2cpp_vm_Object_Box(g_data_07556710,&local_44);
        if ((pIVar9 != (Il2CppObject *)0x0) &&
           (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((args->obj).klass)->_1).element_class),
           pIVar10 == (Il2CppObject *)0x0)) goto label_05d2fa6f;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar9;
          Il2CppCodeGenWriteBarrier(args->m_Items + 2);
          local_48 = local_6c;
          pIVar9 = il2cpp_vm_Object_Box(g_data_07556710,&local_48);
          if ((pIVar9 != (Il2CppObject *)0x0) &&
             (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((args->obj).klass)->_1).element_class),
             pIVar10 == (Il2CppObject *)0x0)) goto label_05d2fa6f;
          if ((args->max_length & 0xfffffffc) != 0) {
            args->m_Items[3] = pIVar9;
            Il2CppCodeGenWriteBarrier(args->m_Items + 3);
            local_4c = local_5c;
            pIVar9 = il2cpp_vm_Object_Box(g_data_07556710,&local_4c);
            if ((pIVar9 != (Il2CppObject *)0x0) &&
               (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((args->obj).klass)->_1).element_class),
               pIVar10 == (Il2CppObject *)0x0)) goto label_05d2fa6f;
            if (4 < (uint)args->max_length) {
              args->m_Items[4] = pIVar9;
              Il2CppCodeGenWriteBarrier(args->m_Items + 4);
              pSVar7 = System_String__Format_5302cf0("{0}: {1}/{2}/{3}/{4}\n",args,(MethodInfo *)0x0);
              return pSVar7;
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_05d2fa7e:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$GetPlayerList
// il2cpp: System_String_o* UI_InGameMenu__GetPlayerList (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2fb20

System_String_o * UI_InGameMenu__GetPlayerList(UI_InGameMenu_o *__this,MethodInfo *method)

{
  uint uVar1;
  Photon_Realtime_Player_array *pPVar2;
  ulong uVar3;
  System_String_o *str1;
  System_String_o *str0;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  ulong uVar4;
  
  if (Il2CppMethodInitialized_07547e1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_07547e1a = '\x01';
  }
  str0 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (pPVar2 == (Photon_Realtime_Player_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (0 < (int)pPVar2->max_length) {
    uVar3 = pPVar2->max_length & 0xffffffff;
    uVar4 = 0;
    method_00 = extraout_RDX;
    do {
      if (uVar3 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      str1 = UI_InGameMenu__GetPlayerListEntry(__this,pPVar2->m_Items[uVar4],method_00);
      str0 = System_String__Concat_5301f10(str0,str1,"\n",(MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
      uVar1 = (uint)pPVar2->max_length;
      uVar3 = (ulong)uVar1;
      method_00 = extraout_RDX_00;
    } while ((long)uVar4 < (long)(int)uVar1);
  }
  return str0;
}


// UI.InGameMenu$$GetPlayerListTeams
// il2cpp: System_String_o* UI_InGameMenu__GetPlayerListTeams (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d2fc00
// eh: try 0x5d3006f..0x5d301ac -> pad 0x5d307c4 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5d3020f..0x5d302f4 -> pad 0x5d303ab (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d3034f..0x5d30376 -> pad 0x5d3076a catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5d30397..0x5d3039c -> pad 0x5d303a3 catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d303ce..0x5d3070e -> pad 0x5d30723 (+12 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5d30729..0x5d30733 -> pad 0x5d3080b catch (...) [compiler noexcept guard]
// eh: try 0x5d307a6..0x5d307ab -> pad 0x5d307b5 cleanup
// eh: try 0x5d307b8..0x5d307c2 -> pad 0x5d3080b catch (...) [compiler noexcept guard]
// eh: try 0x5d307ec..0x5d307f1 -> pad 0x5d307f6 cleanup
// eh: try 0x5d307f9..0x5d30803 -> pad 0x5d3080b catch (...) [compiler noexcept guard]
// asm: 126 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d2fd74: jmp 0x5d2fd8e
// asm:   0x5d2fe3e: jmp 0x5d2fe58
// asm:   0x5d2fee4: jmp 0x5d2fefe
// asm:   0x5d3000e: lea r12, [rip + 0x15493e3]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5d30015: lea r15, [rip + 0x159db34]  ; "\t"
// asm:   0x5d3001c: lea r13, [rip + 0x159db5d]  ; "\n"
// asm:   0x5d30023: jmp 0x5d3003e
// asm:   0x5d30030: mov rbx, qword ptr [rsp + 0x18]
// asm:   0x5d30035: test rbx, rbx
// asm:   0x5d30038: je 0x5d306ed
// asm:   0x5d3005e: nop 
// asm:   0x5d3016c: nop dword ptr [rax]
// asm:   0x5d30279: nop dword ptr [rax]
// asm:   0x5d3033d: nop dword ptr [rax]
// asm:   0x5d30376: test rbp, rbp
// asm:   0x5d30379: jne 0x5d30701
// asm:   0x5d3037f: cmp r14d, 5
// asm:   0x5d30383: je 0x5d30030
// asm:   0x5d30389: mov eax, r14d
// asm:   0x5d3038c: test r14d, r14d
// asm:   0x5d3038f: je 0x5d30030
// asm:   0x5d30395: jmp 0x5d303ee
// asm:   0x5d303a1: jmp 0x5d303ab
// asm:   0x5d303a3: jmp 0x5d303ab
// asm:   0x5d303a5: jmp 0x5d303ab
// asm:   0x5d303a7: jmp 0x5d303ab
// asm:   0x5d303a9: jmp 0x5d303ab
// asm:   0x5d303ab: mov r14, rdx
// asm:   0x5d303ae: mov rbp, rax
// asm:   0x5d303b1: cmp r14d, 1
// asm:   0x5d303b5: jne 0x5d30729
// asm:   0x5d303bb: mov rdi, rbp
// asm:   0x5d303be: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d303c3: mov rbp, qword ptr [rax]
// asm:   0x5d303c6: mov qword ptr [rsp + 0x38], rbp
// asm:   0x5d303cb: xor r14d, r14d
// asm:   0x5d303ce: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d303d3: mov qword ptr [rsp + 8], rbx
// asm:   0x5d303d8: mov rbx, qword ptr [rsp + 0x10]
// asm:   0x5d303dd: test rbx, rbx
// asm:   0x5d303e0: jne 0x5d30317
// asm:   0x5d303e6: jmp 0x5d30376
// asm:   0x5d30429: nop dword ptr [rax]
// asm:   0x5d304ad: nop dword ptr [rax]
// asm:   0x5d3051d: nop dword ptr [rax]
// asm:   0x5d3054f: nop 
// asm:   0x5d305c9: nop dword ptr [rax]
// asm:   0x5d3069d: nop dword ptr [rax]
// asm:   0x5d30701: mov rdi, rbp
// asm:   0x5d30704: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d30713: mov rdi, rbp
// asm:   0x5d30716: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d3071b: mov rdi, rbx
// asm:   0x5d3071e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d30723: mov r14, rdx
// asm:   0x5d30726: mov rbp, rax
// asm:   0x5d30729: lea rdi, [rsp + 0x38]
// asm:   0x5d3072e: call 0x2fdc2b0  ; il2cpp_runtime_helper_02fdc2b0()
// asm:   0x5d30733: mov r15, qword ptr [rsp]
// asm:   0x5d30737: mov r12, rbx
// asm:   0x5d3073a: jmp 0x5d307d3
// asm:   0x5d3073f: jmp 0x5d3078e
// asm:   0x5d30741: jmp 0x5d30747
// asm:   0x5d30743: jmp 0x5d3078e
// asm:   0x5d30745: jmp 0x5d3078e
// asm:   0x5d30747: mov r12, rbp
// asm:   0x5d3074a: mov rdi, rax
// asm:   0x5d3074d: jmp 0x5d30794
// asm:   0x5d3074f: jmp 0x5d3076a
// asm:   0x5d30751: jmp 0x5d3077f
// asm:   0x5d30753: jmp 0x5d307c4
// asm:   0x5d30755: jmp 0x5d307c4
// asm:   0x5d30757: mov rbp, rax
// asm:   0x5d3075a: mov r15, qword ptr [rsp]
// asm:   0x5d3075e: mov r12, r14
// asm:   0x5d30761: mov r14, rdx
// asm:   0x5d30764: jmp 0x5d307d3
// asm:   0x5d30766: jmp 0x5d3078e
// asm:   0x5d30768: jmp 0x5d307c4
// asm:   0x5d3076a: mov r14, rdx
// asm:   0x5d3076d: mov rbp, rax
// asm:   0x5d30770: mov r12, qword ptr [rsp + 8]
// asm:   0x5d30775: mov r15, qword ptr [rsp]
// asm:   0x5d30779: jmp 0x5d307d3
// asm:   0x5d3077b: jmp 0x5d3078e
// asm:   0x5d3077d: jmp 0x5d307c4
// asm:   0x5d3077f: mov r14, rdx
// asm:   0x5d30782: mov rbp, rax
// asm:   0x5d30785: mov r12, rbx
// asm:   0x5d30788: mov r15, qword ptr [rsp]
// asm:   0x5d3078c: jmp 0x5d307d3
// asm:   0x5d3078e: mov rdi, rax
// asm:   0x5d30791: mov r12, r14
// asm:   0x5d30794: cmp edx, 1
// asm:   0x5d30797: jne 0x5d307b0
// asm:   0x5d30799: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d3079e: mov rbx, qword ptr [rax]
// asm:   0x5d307a1: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d307a6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d307ab: jmp 0x5d3066c
// asm:   0x5d307b0: mov rbp, rdi
// asm:   0x5d307b3: jmp 0x5d307b8
// asm:   0x5d307b5: mov rbp, rax
// asm:   0x5d307b8: lea rdi, [rsp + 0x20]
// asm:   0x5d307bd: call 0x2fdc3d0  ; il2cpp_runtime_helper_02fdc3d0()
// asm:   0x5d307c2: jmp 0x5d30803
// asm:   0x5d307c4: mov r14, rdx
// asm:   0x5d307c7: mov rbp, rax
// asm:   0x5d307ca: mov r15, qword ptr [rsp]
// asm:   0x5d307ce: mov r12, qword ptr [rsp + 8]
// asm:   0x5d307d3: cmp r14d, 1
// asm:   0x5d307d7: jne 0x5d307f9
// asm:   0x5d307d9: mov rdi, rbp
// asm:   0x5d307dc: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d307e1: mov rbp, qword ptr [rax]
// asm:   0x5d307e4: mov qword ptr [rsp + 0x20], rbp
// asm:   0x5d307e9: xor r14d, r14d
// asm:   0x5d307ec: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d307f1: jmp 0x5d303f9
// asm:   0x5d307f6: mov rbp, rax
// asm:   0x5d307f9: lea rdi, [rsp + 0x20]
// asm:   0x5d307fe: call 0x2fdc340  ; il2cpp_runtime_helper_02fdc340()
// asm:   0x5d30803: mov rdi, rbp
// asm:   0x5d30806: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d3080b: mov rdi, rax
// asm:   0x5d3080e: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o * UI_InGameMenu__GetPlayerListTeams(UI_InGameMenu_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  UI_InGameMenu_c *pUVar3;
  char cVar4;
  bool bVar5;
  Photon_Realtime_Player_array *pPVar6;
  System_Func_Player__bool__o *pSVar7;
  Il2CppObject *pIVar8;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  UI_InGameMenu___c_StaticFields *pUVar9;
  System_Func_Player__string__o *__this_00;
  Il2CppObject *pIVar10;
  VirtualInvokeData *pVVar11;
  UI_InGameMenu_o *pUVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  Photon_Realtime_Player_o *pPVar15;
  ulong uVar16;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  long lVar17;
  Il2CppObject *pIStack_68;
  UI_InGameMenu_o *pUStack_60;
  undefined8 uStack_58;
  UI_InGameMenu_o **ppUStack_50;
  UI_InGameMenu_o *pUStack_48;
  undefined8 uStack_40;
  Il2CppObject **ppIStack_38;
  
  pUStack_48 = __this;
  if (Il2CppMethodInitialized_07547e1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_GroupBy_Player_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_Player);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Player_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Player_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_Player);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_IGrouping_string_Player);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_IGrouping_string_Player);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_Player);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_InGameMenu_c_GetPlayerListTeams_b__125_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_InGameMenu_c_GetPlayerListTeams_b__125_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_InGameMenu_c_GetPlayerListTeams_b__125_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu_c);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"\t");
    il2cpp_codegen_initialize_runtime_metadata(&":\n");
    Il2CppMethodInitialized_07547e1b = '\x01';
  }
  pUStack_60 = (UI_InGameMenu_o *)0x0;
  pIStack_68 = (Il2CppObject *)0x0;
  pSVar14 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar6 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if ((TypeInfo_UI_InGameMenu_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_InGameMenu_c);
    pUVar9 = TypeInfo_UI_InGameMenu_c->static_fields;
    pSVar7 = pUVar9->__9__125_0;
  }
  else {
    pUVar9 = TypeInfo_UI_InGameMenu_c->static_fields;
    pSVar7 = pUVar9->__9__125_0;
  }
  if (pSVar7 == (System_Func_Player__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_InGameMenu_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_InGameMenu_c);
      pUVar9 = TypeInfo_UI_InGameMenu_c->static_fields;
    }
    pIVar8 = (Il2CppObject *)pUVar9->__9;
    pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Player_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar7,pIVar8,
               (intptr_t)MethodInfo_UI_InGameMenu_c_GetPlayerListTeams_b__125_0,(MethodInfo_4F19300 *)0x0);
    pUVar9 = TypeInfo_UI_InGameMenu_c->static_fields;
    pUVar9->__9__125_0 = pSVar7;
    Il2CppCodeGenWriteBarrier(&pUVar9->__9__125_0);
  }
  pIVar8 = (Il2CppObject *)
           System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pPVar6,
                      (System_Func_TSource__bool__o *)pSVar7,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_Player);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar6 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if ((TypeInfo_UI_InGameMenu_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_InGameMenu_c);
    pUVar9 = TypeInfo_UI_InGameMenu_c->static_fields;
    pSVar7 = pUVar9->__9__125_1;
  }
  else {
    pUVar9 = TypeInfo_UI_InGameMenu_c->static_fields;
    pSVar7 = pUVar9->__9__125_1;
  }
  if (pSVar7 == (System_Func_Player__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_InGameMenu_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_InGameMenu_c);
      pUVar9 = TypeInfo_UI_InGameMenu_c->static_fields;
    }
    pIVar10 = (Il2CppObject *)pUVar9->__9;
    pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Player_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar7,pIVar10,
               (intptr_t)MethodInfo_UI_InGameMenu_c_GetPlayerListTeams_b__125_1,(MethodInfo_4F19300 *)0x0);
    pUVar9 = TypeInfo_UI_InGameMenu_c->static_fields;
    pUVar9->__9__125_1 = pSVar7;
    Il2CppCodeGenWriteBarrier(&pUVar9->__9__125_1);
  }
  source = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pPVar6,
                      (System_Func_TSource__bool__o *)pSVar7,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_Player);
  if ((TypeInfo_UI_InGameMenu_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_InGameMenu_c);
    pUVar9 = TypeInfo_UI_InGameMenu_c->static_fields;
    __this_00 = pUVar9->__9__125_2;
  }
  else {
    pUVar9 = TypeInfo_UI_InGameMenu_c->static_fields;
    __this_00 = pUVar9->__9__125_2;
  }
  if (__this_00 == (System_Func_Player__string__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_InGameMenu_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_InGameMenu_c);
      pUVar9 = TypeInfo_UI_InGameMenu_c->static_fields;
    }
    pIVar10 = (Il2CppObject *)pUVar9->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Player_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this_00,pIVar10,
               (intptr_t)MethodInfo_UI_InGameMenu_c_GetPlayerListTeams_b__125_2,(MethodInfo_4F19B50 *)0x0);
    pUVar9 = TypeInfo_UI_InGameMenu_c->static_fields;
    pUVar9->__9__125_2 = __this_00;
    Il2CppCodeGenWriteBarrier(&pUVar9->__9__125_2);
  }
  pIVar10 = (Il2CppObject *)
            System_Linq_Enumerable__GroupBy_object__object_
                      (source,(System_Func_TSource__TKey__o *)__this_00,
                       (MethodInfo_34EE580 *)MethodInfo_System_Linq_Enumerable_GroupBy_Player_string);
  if (pIVar10 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar10->klass;
    uVar16 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar16 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_IGrouping_string__Player___c **)
             ((long)&pIVar2->interfaceType + lVar17) ==
            TypeInfo_System_Collections_Generic_IEnumerable_IGrouping_string_Player) {
          pVVar11 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar17);
          goto label_05d2ffe1;
        }
        lVar17 = lVar17 + 0x10;
      } while (uVar16 * 0x10 != lVar17);
    }
    pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar10,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IEnumerable_IGrouping_string_Player,0);
label_05d2ffe1:
    pUVar12 = (UI_InGameMenu_o *)(*pVVar11->methodPtr)(pIVar10,pVVar11->method);
    uStack_58 = 0;
    ppUStack_50 = &pUStack_60;
joined_r0x05d30008:
    pUStack_60 = pUVar12;
    if (pUVar12 == (UI_InGameMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = (Il2CppClass *)pUVar12->klass;
    uVar16 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar16 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar17) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar11 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar17);
          goto label_05d30093;
        }
        lVar17 = lVar17 + 0x10;
      } while (uVar16 * 0x10 != lVar17);
    }
    pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)pUVar12,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05d30093:
    cVar4 = (*pVVar11->methodPtr)(pUVar12,pVVar11->method);
    pUVar12 = pUStack_60;
    if (cVar4 != '\0') {
      if (pUStack_60 == (UI_InGameMenu_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar3 = pUStack_60->klass;
      uVar16 = (ulong)(pUVar3->_2).interface_offsets_count;
      if (uVar16 != 0) {
        pIVar2 = (pUVar3->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerator_IGrouping_string__Player___c **)
               ((long)&pIVar2->interfaceType + lVar17) ==
              TypeInfo_System_Collections_Generic_IEnumerator_IGrouping_string_Player) {
            pVVar11 = (VirtualInvokeData *)
                      (&(pUVar3->vtable)._0_Equals + *(int *)((long)&pIVar2->offset + lVar17));
            goto label_05d30113;
          }
          lVar17 = lVar17 + 0x10;
        } while (uVar16 * 0x10 != lVar17);
      }
      pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                          ((Il2CppObject *)pUStack_60,
                           (Il2CppClass *)
                           TypeInfo_System_Collections_Generic_IEnumerator_IGrouping_string_Player,0);
label_05d30113:
      pIVar10 = (*pVVar11->methodPtr)((Il2CppObject *)pUVar12,pVVar11->method);
      pSVar13 = UI_InGameMenu__GetAggregateStats
                          (pUVar12,(System_Linq_IGrouping_string__Player__o *)pIVar10,method_00);
      pSVar14 = System_String__Concat_52f0320(pSVar14,pSVar13,(MethodInfo *)0x0);
      if (pIVar10 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar1 = pIVar10->klass;
      uVar16 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar16 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_Player__c **)((long)&pIVar2->interfaceType + lVar17) ==
              TypeInfo_System_Collections_Generic_IEnumerable_Player) {
            pVVar11 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar17);
            goto label_05d301a3;
          }
          lVar17 = lVar17 + 0x10;
        } while (uVar16 * 0x10 != lVar17);
      }
      pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar10,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_Player,0);
label_05d301a3:
      pIVar10 = (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
      uStack_40 = 0;
      ppIStack_38 = &pIStack_68;
      do {
        pIStack_68 = pIVar10;
        if (pIVar10 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar1 = pIVar10->klass;
        uVar16 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar16 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar17 = 0;
          do {
            if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar17) ==
                (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar11 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar17);
              goto label_05d30233;
            }
            lVar17 = lVar17 + 0x10;
          } while (uVar16 * 0x10 != lVar17);
        }
        pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                            (pIVar10,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05d30233:
        cVar4 = (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
        pIVar10 = pIStack_68;
        if (cVar4 == '\0') goto label_05d30300;
        if (pIStack_68 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar1 = pIStack_68->klass;
        uVar16 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar16 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar17 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_Player__c **)((long)&pIVar2->interfaceType + lVar17)
                == TypeInfo_System_Collections_Generic_IEnumerator_Player) {
              pVVar11 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar17);
              goto label_05d302b3;
            }
            lVar17 = lVar17 + 0x10;
          } while (uVar16 * 0x10 != lVar17);
        }
        pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                            (pIStack_68,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_Player,
                             0);
label_05d302b3:
        pPVar15 = (Photon_Realtime_Player_o *)(*pVVar11->methodPtr)(pIVar10,pVVar11->method);
        pSVar13 = UI_InGameMenu__GetPlayerListEntry(pUStack_48,pPVar15,method_01);
        pSVar14 = System_String__Concat_5302810
                            (pSVar14,"\t",pSVar13,"\n",(MethodInfo *)0x0);
        pIVar10 = pIStack_68;
      } while( true );
    }
    if (pUStack_60 == (UI_InGameMenu_o *)0x0) goto label_05d30466;
    pUVar3 = pUStack_60->klass;
    uVar16 = (ulong)(pUVar3->_2).interface_offsets_count;
    if (uVar16 == 0) goto label_05d3043f;
    pIVar2 = (pUVar3->_1).interfaceOffsets;
    lVar17 = 0;
    goto label_05d30430;
  }
  goto label_05d3070e;
label_05d30300:
  pUVar12 = pUStack_60;
  if (pIStack_68 != (Il2CppObject *)0x0) {
    pIVar1 = pIStack_68->klass;
    uVar16 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar16 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar17) == TypeInfo_System_IDisposable)
        {
          pVVar11 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar17);
          goto label_05d3036d;
        }
        lVar17 = lVar17 + 0x10;
      } while (uVar16 * 0x10 != lVar17);
    }
    pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIStack_68,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05d3036d:
    (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
    pUVar12 = pUStack_60;
  }
  goto joined_r0x05d30008;
  while (lVar17 = lVar17 + 0x10, uVar16 * 0x10 != lVar17) {
label_05d306a0:
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar17) == TypeInfo_System_IDisposable) {
      pVVar11 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar17);
      goto label_05d306cd;
    }
  }
label_05d306af:
  pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath(pIStack_68,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05d306cd:
  (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
  return pSVar14;
  while (lVar17 = lVar17 + 0x10, uVar16 * 0x10 != lVar17) {
label_05d30430:
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar17) == TypeInfo_System_IDisposable) {
      pVVar11 = (VirtualInvokeData *)(&(pUVar3->vtable)._0_Equals + *(int *)((long)&pIVar2->offset + lVar17));
      goto label_05d3045d;
    }
  }
label_05d3043f:
  pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                      ((Il2CppObject *)pUStack_60,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05d3045d:
  (*pVVar11->methodPtr)((Il2CppObject *)pUVar12,pVVar11->method);
label_05d30466:
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar8->klass;
    uVar16 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar16 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_Player__c **)((long)&pIVar2->interfaceType + lVar17) ==
            TypeInfo_System_Collections_Generic_IEnumerable_Player) {
          pVVar11 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar17);
          goto label_05d304e7;
        }
        lVar17 = lVar17 + 0x10;
      } while (uVar16 * 0x10 != lVar17);
    }
    pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_Player,0);
label_05d304e7:
    pIStack_68 = (*pVVar11->methodPtr)(pIVar8,pVVar11->method);
    uStack_58 = 0;
    ppUStack_50 = (UI_InGameMenu_o **)&pIStack_68;
    do {
      pIVar10 = pIStack_68;
      if (pIStack_68 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar1 = pIStack_68->klass;
      uVar16 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar16 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar17) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar11 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar17);
            goto label_05d30583;
          }
          lVar17 = lVar17 + 0x10;
        } while (uVar16 * 0x10 != lVar17);
      }
      pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIStack_68,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05d30583:
      bVar5 = (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
      pIVar10 = pIStack_68;
      if (!bVar5) {
        if (pIStack_68 == (Il2CppObject *)0x0) {
          return pSVar14;
        }
        pIVar1 = pIStack_68->klass;
        uVar16 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar16 == 0) goto label_05d306af;
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar17 = 0;
        goto label_05d306a0;
      }
      if (pIStack_68 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar1 = pIStack_68->klass;
      uVar16 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar16 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerator_Player__c **)((long)&pIVar2->interfaceType + lVar17) ==
              TypeInfo_System_Collections_Generic_IEnumerator_Player) {
            pVVar11 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar17);
            goto label_05d30603;
          }
          lVar17 = lVar17 + 0x10;
        } while (uVar16 * 0x10 != lVar17);
      }
      pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIStack_68,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_Player,0)
      ;
label_05d30603:
      pPVar15 = (Photon_Realtime_Player_o *)(*pVVar11->methodPtr)(pIVar10,pVVar11->method);
      pSVar13 = (System_String_o *)
                (*pIVar8->klass->vtable[3].methodPtr)(pIVar8,pIVar8->klass->vtable[3].method);
      pSVar14 = System_String__Concat_5301f10(pSVar14,pSVar13,":\n",(MethodInfo *)0x0);
      pSVar13 = UI_InGameMenu__GetPlayerListEntry(pUStack_48,pPVar15,method_02);
      pSVar14 = System_String__Concat_5302810
                          (pSVar14,"\t",pSVar13,"\n",(MethodInfo *)0x0);
    } while( true );
  }
label_05d3070e:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$HideAllMenus
// il2cpp: void UI_InGameMenu__HideAllMenus (UI_InGameMenu_o* __this, UI_BasePopup_o* keep, const MethodInfo* method);
// 0x5d2ac20
// eh: try 0x5d2ace4..0x5d2adf3 -> pad 0x5d2ae00 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d2ae18..0x5d2ae1d -> pad 0x5d2ae42 cleanup
// eh: try 0x5d2ae45..0x5d2ae4f -> pad 0x5d2ae57 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d2adf8: jmp 0x5d2ae00
// asm:   0x5d2adfa: jmp 0x5d2ae00
// asm:   0x5d2adfc: jmp 0x5d2ae00
// asm:   0x5d2adfe: jmp 0x5d2ae00
// asm:   0x5d2ae00: mov rbx, rax
// asm:   0x5d2ae03: cmp edx, 1
// asm:   0x5d2ae06: jne 0x5d2ae45
// asm:   0x5d2ae08: mov rdi, rbx
// asm:   0x5d2ae0b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d2ae10: mov rbx, qword ptr [rax]
// asm:   0x5d2ae13: mov qword ptr [rsp + 8], rbx
// asm:   0x5d2ae18: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d2ae1d: lea rax, [rip + 0x156293c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x5d2ae24: mov rsi, qword ptr [rax]
// asm:   0x5d2ae27: lea rdi, [rsp + 0x20]
// asm:   0x5d2ae2c: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d2ae31: test rbx, rbx
// asm:   0x5d2ae34: je 0x5d2ad4a
// asm:   0x5d2ae3a: mov rdi, rbx
// asm:   0x5d2ae3d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d2ae42: mov rbx, rax
// asm:   0x5d2ae45: lea rdi, [rsp + 8]
// asm:   0x5d2ae4a: call 0x2fdc460  ; il2cpp_runtime_helper_02fdc460()
// asm:   0x5d2ae4f: mov rdi, rbx
// asm:   0x5d2ae52: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d2ae57: mov rdi, rax
// asm:   0x5d2ae5a: call 0x2ab61e0  ; __clang_call_terminate()

void UI_InGameMenu__HideAllMenus(UI_InGameMenu_o *__this,UI_BasePopup_o *keep,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  UnityEngine_Object_c *pUVar1;
  undefined8 uVar2;
  UI_EmoteHandler_o *pUVar3;
  UI_BasePopup_o *pUVar4;
  UI_ItemHandler_o *__this_01;
  UI_ActionHandler_o *__this_02;
  UnityEngine_Object_o *x;
  bool bVar5;
  MethodInfo *method_00;
  undefined1 local_60 [16];
  UnityEngine_Object_o *local_50;
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  if (Il2CppMethodInitialized_07547e1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e1c = '\x01';
  }
  __this_00 = (__this->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    local_38 = local_50;
    local_48._0_8_ = local_60._0_8_;
    local_48._8_8_ = local_60._8_8_;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_48;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
      x = local_38;
      if (!bVar5) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)keep,(MethodInfo *)0x0);
      if (bVar5) {
        if (x == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar1 = x->klass;
        uVar2._0_2_ = ((Il2CppClass *)pUVar1)->vtable[22].method;
        uVar2._2_2_ = pUVar1[1]._2.vtable_count;
        uVar2._4_2_ = pUVar1[1]._2.interfaces_count;
        uVar2._6_2_ = pUVar1[1]._2.interface_offsets_count;
        (**(code **)&((Il2CppClass *)pUVar1)->vtable[22].methodPtr)(x,uVar2);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    pUVar3 = (__this->fields).EmoteHandler;
    if (pUVar3 != (UI_EmoteHandler_o *)0x0) {
      if (Il2CppMethodInitialized_07547dc0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_EmoteHandler_SetEmoteWheel_b__25_0);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
        Il2CppMethodInitialized_07547dc0 = '\x01';
      }
      pUVar4 = (pUVar3->fields)._emoteWheelPopup;
      if (pUVar4 != (UI_BasePopup_o *)0x0) {
        (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
        (pUVar3->fields).IsActive = false;
        __this_01 = (__this->fields).ItemHandler;
        if (__this_01 != (UI_ItemHandler_o *)0x0) {
          UI_ItemHandler__SetItemWheel(__this_01,false,method_00);
          __this_02 = (__this->fields).ActionHandler;
          if (__this_02 != (UI_ActionHandler_o *)0x0) {
            UI_ActionHandler__SetActionWheel(__this_02,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetupPopups
// il2cpp: void UI_InGameMenu__SetupPopups (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d309e0

void UI_InGameMenu__SetupPopups(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_Transform_o *pUVar6;
  UI_CustomAssetUrlPopup_o *pUVar7;
  UI_CustomAssetVideoUrlPopup_o *pUVar8;
  
  if (Il2CppMethodInitialized_07547e1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_CustomAssetUrlPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_CustomAssetVideoUrlPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_CustomAssetUrlPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_CustomAssetVideoUrlPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    Il2CppMethodInitialized_07547e1d = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar7 = UI_ElementFactory__CreateDefaultPopup_object_
                     (pUVar6,false,
                      (MethodInfo_34D7290 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_CustomAssetUrlPopup);
  if (pUVar7 != (UI_CustomAssetUrlPopup_o *)0x0) {
    pUVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar7,
                        (MethodInfo_34B0830 *)
                        MethodInfo_UnityEngine_Component_GetComponent_CustomAssetUrlPopup);
    (__this->fields)._customAssetUrlPopup = pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._customAssetUrlPopup);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = UI_ElementFactory__CreateDefaultPopup_object_
                       (pUVar6,false,
                        (MethodInfo_34D7290 *)
                        MethodInfo_UI_ElementFactory_CreateDefaultPopup_CustomAssetVideoUrlPopup);
    if (pUVar8 != (UI_CustomAssetVideoUrlPopup_o *)0x0) {
      pUVar8 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar8,
                          (MethodInfo_34B0830 *)
                          MethodInfo_UnityEngine_Component_GetComponent_CustomAssetVideoUrlPopup);
      (__this->fields)._customAssetVideoUrlPopup = pUVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._customAssetVideoUrlPopup);
      pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
      pSVar3 = (__this->fields)._popups;
      if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        pUVar7 = (__this->fields)._customAssetUrlPopup;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (pSVar3->fields)._items;
        if (pUVar4 != (UI_BasePopup_array *)0x0) {
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pUVar4->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar7;
            Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          }
          pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
          pSVar3 = (__this->fields)._popups;
          if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            pUVar8 = (__this->fields)._customAssetVideoUrlPopup;
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar4 = (pSVar3->fields)._items;
            if (pUVar4 != (UI_BasePopup_array *)0x0) {
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pUVar4->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar8;
                Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                           (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
              }
              pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
              pSVar3 = (__this->fields)._allPausePopups;
              if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                pUVar7 = (__this->fields)._customAssetUrlPopup;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar4 = (pSVar3->fields)._items;
                if (pUVar4 != (UI_BasePopup_array *)0x0) {
                  uVar2 = (pSVar3->fields)._size;
                  if (uVar2 < (uint)pUVar4->max_length) {
                    (pSVar3->fields)._size = uVar2 + 1;
                    pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar7;
                    Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                               (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                  }
                  pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                  pSVar3 = (__this->fields)._allPausePopups;
                  if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                    pUVar8 = (__this->fields)._customAssetVideoUrlPopup;
                    piVar1 = &(pSVar3->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar4 = (pSVar3->fields)._items;
                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                      uVar2 = (pSVar3->fields)._size;
                      if (uVar2 < (uint)pUVar4->max_length) {
                        (pSVar3->fields)._size = uVar2 + 1;
                        pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar8;
                        Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                        return;
                      }
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                                 (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
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
  ThrowNullReferenceException();
}


// UI.InGameMenu$$.ctor
// il2cpp: void UI_InGameMenu___ctor (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x5d30c70

void UI_InGameMenu___ctor(UI_InGameMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KillFeedSmallPopup__o *__this_00;
  System_Collections_Generic_List_BasePopup__o *__this_01;
  System_Collections_Generic_Dictionary_string__InGameLabel__o *__this_02;
  System_Collections_Generic_Dictionary_string__float__o *__this_03;
  System_Collections_Generic_Dictionary_string__bool__o *__this_04;
  System_Collections_Generic_List_string__o *__this_05;
  System_Collections_Generic_Dictionary_string__BasePopup__o *__this_06;
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_07547e1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_InGameLabel);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_KillFeedSmallPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_07547e1e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_KillFeedSmallPopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_ctor);
  (__this->fields)._killFeedSmallPopups = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._killFeedSmallPopups);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_BasePopup_ctor);
  (__this->fields)._allPausePopups = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._allPausePopups);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_InGameLabel);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_ctor);
  (__this->fields)._labels = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labels);
  (__this->fields)._legacyLabels = true;
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  (__this->fields)._labelTimeLeft = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelTimeLeft);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_bool);
  System_Collections_Generic_Dictionary_object__bool____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
             (MethodInfo_4A749F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_bool_ctor);
  (__this->fields)._labelHasTimeLeft = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelHasTimeLeft);
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_05,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields).labelsToDeactivate = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields).labelsToDeactivate);
  __this_06 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BasePopup);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_ctor);
  (__this->fields)._customPopups = __this_06;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._customPopups);
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  if (pSVar1 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = "Kills";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = "Deaths";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = "HighestDamage";
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
        if ((pSVar1->max_length & 0xfffffffc) != 0) {
          pSVar1->m_Items[3] = "TotalDamage";
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 3);
          (__this->fields).trackedProperties = pSVar1;
          Il2CppCodeGenWriteBarrier(&(__this->fields).trackedProperties);
          (__this->fields)._lastDismissedMenuFrame = -1;
          UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


