// Type: UI.CharacterEditorTitanCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorTitanCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanCategoryPanel.cs
// --------------------------------

// UI.CharacterEditorTitanCategoryPanel$$get_Height
// il2cpp: float UI_CharacterEditorTitanCategoryPanel__get_Height (UI_CharacterEditorTitanCategoryPanel_o* __this, const MethodInfo* method);
// 0x4365c60

float UI_CharacterEditorTitanCategoryPanel__get_Height
                (UI_CharacterEditorTitanCategoryPanel_o *__this,MethodInfo *method)

{
  return 280.0;
}


// UI.CharacterEditorTitanCategoryPanel$$Setup
// il2cpp: void UI_CharacterEditorTitanCategoryPanel__Setup (UI_CharacterEditorTitanCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4365c70

void UI_CharacterEditorTitanCategoryPanel__Setup
               (UI_CharacterEditorTitanCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  UnityEngine_MonoBehaviour_c *__this_00;
  UnityEngine_Transform_o *parent_00;
  Settings_StringSetting_o *setting;
  GameManagers_CharacterEditorGameManager_o *pGVar2;
  Characters_DummyCharacter_o *pCVar3;
  char *pcVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_01;
  System_String_array *options;
  UnityEngine_Events_UnityAction_o *onDropdownOptionSelect;
  UI_CharacterEditorCategoryPanel_c *__this_02;
  MethodInfo *method_00;
  UnityEngine_MonoBehaviour_o *__this_03;
  UI_CharacterEditorCategoryPanel_o *pUVar6;
  UI_CharacterEditorCategoryPanel_o *__this_04;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  if (g_data_057ae1c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Roar");
    il2cpp_runtime_helper_023445d0(&"Preview");
    il2cpp_runtime_helper_023445d0(&"Shake");
    il2cpp_runtime_helper_023445d0(&"Nod");
    il2cpp_runtime_helper_023445d0(&"CharacterEditor");
    il2cpp_runtime_helper_023445d0(&"Emote");
    il2cpp_runtime_helper_023445d0(&"Laugh");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae1c6 = '\x01';
  }
  UI_CharacterEditorCategoryPanel__Setup((UI_CharacterEditorCategoryPanel_o *)__this,parent,(MethodInfo *)0x0)
  ;
  pSVar5 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,95.0,20.0,pSVar5,(MethodInfo *)0x0);
  pUVar6 = TypeInfo_string;
  options = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (options != (System_String_array *)0x0) {
    if ((int)options->max_length != 0) {
      pUVar6 = (UI_CharacterEditorCategoryPanel_o *)options->m_Items;
      options->m_Items[0] = "Laugh";
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)options->max_length) {
        pUVar6 = (UI_CharacterEditorCategoryPanel_o *)(options->m_Items + 1);
        options->m_Items[1] = "Nod";
        il2cpp_runtime_helper_022b4080();
        if (2 < (uint)options->max_length) {
          pUVar6 = (UI_CharacterEditorCategoryPanel_o *)(options->m_Items + 2);
          options->m_Items[2] = "Shake";
          il2cpp_runtime_helper_022b4080();
          if (3 < (uint)options->max_length) {
            options->m_Items[3] = "Roar";
            il2cpp_runtime_helper_022b4080(options->m_Items + 3);
            parent_00 = (__this->fields).SinglePanel;
            setting = (__this->fields)._emote;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar5 = UI_UIManager__GetLocale
                               ("CharacterEditor","Preview","Emote","","",
                                (MethodInfo *)0x0);
            onDropdownOptionSelect = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            UI_ElementFactory__CreateDropdownSetting
                      (parent_00,__this_01,(Settings_BaseSetting_o *)setting,pSVar5,options,"",160.0
                       ,40.0,300.0,(System_Nullable_float__o)0x0,onDropdownOptionSelect,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  __this_04 = pUVar6;
  if (g_data_057ae1c7 == '\0') {
    __this_04 = (UI_CharacterEditorCategoryPanel_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1c7 = '\x01';
  }
  pGVar2 = (pUVar6->fields)._gameManager;
  if (((pGVar2 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
      (pUVar6[1].klass != (UI_CharacterEditorCategoryPanel_c *)0x0)) &&
     (pCVar3 = (pGVar2->fields).Character, __this_04 = (UI_CharacterEditorCategoryPanel_o *)0x0,
     pCVar3 != (Characters_DummyCharacter_o *)0x0)) {
    pcVar4 = ((pUVar6[1].klass)->_1).namespaze;
    (pCVar3->fields).State = 1;
    auVar9 = (*(pCVar3->klass->vtable)._6_GetEmoteAnimation.methodPtr)
                       (pCVar3,pcVar4,(pCVar3->klass->vtable)._6_GetEmoteAnimation.method);
    pCVar1 = (pCVar3->fields).Animation;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__CrossFade(pCVar1,auVar9._0_8_,0.1,0.0,auVar9._8_8_);
      pCVar1 = (pCVar3->fields).Animation;
      if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
        fVar7 = Characters_AnimationHandler__GetLength(pCVar1,auVar9._0_8_,method_00);
        (pCVar3->fields)._stateTimeLeft = fVar7;
        return;
      }
    }
    __this_03 = (UnityEngine_MonoBehaviour_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    if (*(int *)&__this_03[1].monitor != 0) {
      fVar7 = *(float *)((long)&__this_03[1].monitor + 4);
      fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar7 = fVar7 - fVar8;
      *(float *)((long)&__this_03[1].monitor + 4) = fVar7;
      if (fVar7 <= 0.0) {
        *(undefined4 *)&__this_03[1].monitor = 0;
        __this_00 = __this_03[1].klass;
        auVar9 = (*(code *)__this_03->klass[1]._1.name)();
        if (__this_00 != (UnityEngine_MonoBehaviour_c *)0x0) {
          Characters_AnimationHandler__CrossFade
                    ((Characters_AnimationHandler_o *)__this_00,auVar9._0_8_,0.1,0.0,auVar9._8_8_);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        UnityEngine_MonoBehaviour___ctor(__this_03,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"Laugh");
    g_data_057ae1c8 = '\x01';
  }
  __this_02 = (UI_CharacterEditorCategoryPanel_c *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)__this_02,"Laugh",0x7fffffff,(MethodInfo *)0x0);
  __this_04[1].klass = __this_02;
  il2cpp_runtime_helper_022b4080(__this_04 + 1);
  UI_CharacterEditorCategoryPanel___ctor(__this_04,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCategoryPanel$$OnEmote
// il2cpp: void UI_CharacterEditorTitanCategoryPanel__OnEmote (UI_CharacterEditorTitanCategoryPanel_o* __this, const MethodInfo* method);
// 0x4365f20

void UI_CharacterEditorTitanCategoryPanel__OnEmote
               (UI_CharacterEditorTitanCategoryPanel_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  UnityEngine_MonoBehaviour_c *__this_00;
  GameManagers_CharacterEditorGameManager_o *pGVar2;
  Characters_DummyCharacter_o *pCVar3;
  System_String_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  MethodInfo *method_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  UI_CharacterEditorTitanCategoryPanel_o *__this_02;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  __this_02 = __this;
  if (g_data_057ae1c7 == '\0') {
    __this_02 = (UI_CharacterEditorTitanCategoryPanel_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1c7 = '\x01';
  }
  pGVar2 = (__this->fields)._gameManager;
  if (((pGVar2 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
      (pSVar5 = (__this->fields)._emote, pSVar5 != (Settings_StringSetting_o *)0x0)) &&
     (pCVar3 = (pGVar2->fields).Character, __this_02 = (UI_CharacterEditorTitanCategoryPanel_o *)0x0,
     pCVar3 != (Characters_DummyCharacter_o *)0x0)) {
    pSVar4 = (pSVar5->fields)._value;
    (pCVar3->fields).State = 1;
    auVar8 = (*(pCVar3->klass->vtable)._6_GetEmoteAnimation.methodPtr)
                       (pCVar3,pSVar4,(pCVar3->klass->vtable)._6_GetEmoteAnimation.method);
    pCVar1 = (pCVar3->fields).Animation;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__CrossFade(pCVar1,auVar8._0_8_,0.1,0.0,auVar8._8_8_);
      pCVar1 = (pCVar3->fields).Animation;
      if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
        fVar6 = Characters_AnimationHandler__GetLength(pCVar1,auVar8._0_8_,method_00);
        (pCVar3->fields)._stateTimeLeft = fVar6;
        return;
      }
    }
    __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    if (*(int *)&__this_01[1].monitor != 0) {
      fVar6 = *(float *)((long)&__this_01[1].monitor + 4);
      fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar6 = fVar6 - fVar7;
      *(float *)((long)&__this_01[1].monitor + 4) = fVar6;
      if (fVar6 <= 0.0) {
        *(undefined4 *)&__this_01[1].monitor = 0;
        __this_00 = __this_01[1].klass;
        auVar8 = (*(code *)__this_01->klass[1]._1.name)();
        if (__this_00 != (UnityEngine_MonoBehaviour_c *)0x0) {
          Characters_AnimationHandler__CrossFade
                    ((Characters_AnimationHandler_o *)__this_00,auVar8._0_8_,0.1,0.0,auVar8._8_8_);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"Laugh");
    g_data_057ae1c8 = '\x01';
  }
  pSVar5 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar5,"Laugh",0x7fffffff,(MethodInfo *)0x0);
  (__this_02->fields)._emote = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._emote);
  UI_CharacterEditorCategoryPanel___ctor((UI_CharacterEditorCategoryPanel_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCategoryPanel$$.ctor
// il2cpp: void UI_CharacterEditorTitanCategoryPanel___ctor (UI_CharacterEditorTitanCategoryPanel_o* __this, const MethodInfo* method);
// 0x4365f80

void UI_CharacterEditorTitanCategoryPanel___ctor
               (UI_CharacterEditorTitanCategoryPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  
  if (g_data_057ae1c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"Laugh");
    g_data_057ae1c8 = '\x01';
  }
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_00,"Laugh",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._emote = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._emote);
  UI_CharacterEditorCategoryPanel___ctor((UI_CharacterEditorCategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCategoryPanel$$<Setup>b__3_0
// il2cpp: void UI_CharacterEditorTitanCategoryPanel___Setup_b__3_0 (UI_CharacterEditorTitanCategoryPanel_o* __this, const MethodInfo* method);
// 0x4366010

void UI_CharacterEditorTitanCategoryPanel___Setup_b__3_0
               (UI_CharacterEditorTitanCategoryPanel_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  UnityEngine_MonoBehaviour_c *__this_00;
  GameManagers_CharacterEditorGameManager_o *pGVar2;
  Settings_StringSetting_o *pSVar3;
  Characters_DummyCharacter_o *pCVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  if (g_data_057ae1c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae1c7 = '\x01';
  }
  pGVar2 = (__this->fields)._gameManager;
  if (((pGVar2 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
      (pSVar3 = (__this->fields)._emote, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (pCVar4 = (pGVar2->fields).Character, pCVar4 != (Characters_DummyCharacter_o *)0x0)) {
    pSVar5 = (pSVar3->fields)._value;
    (pCVar4->fields).State = 1;
    auVar8 = (*(pCVar4->klass->vtable)._6_GetEmoteAnimation.methodPtr)
                       (pCVar4,pSVar5,(pCVar4->klass->vtable)._6_GetEmoteAnimation.method);
    pCVar1 = (pCVar4->fields).Animation;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__CrossFade(pCVar1,auVar8._0_8_,0.1,0.0,auVar8._8_8_);
      pCVar1 = (pCVar4->fields).Animation;
      if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
        fVar6 = Characters_AnimationHandler__GetLength(pCVar1,auVar8._0_8_,method_00);
        (pCVar4->fields)._stateTimeLeft = fVar6;
        return;
      }
    }
    __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    if (*(int *)&__this_01[1].monitor != 0) {
      fVar6 = *(float *)((long)&__this_01[1].monitor + 4);
      fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar6 = fVar6 - fVar7;
      *(float *)((long)&__this_01[1].monitor + 4) = fVar6;
      if (fVar6 <= 0.0) {
        *(undefined4 *)&__this_01[1].monitor = 0;
        __this_00 = __this_01[1].klass;
        auVar8 = (*(code *)__this_01->klass[1]._1.name)();
        if (__this_00 != (UnityEngine_MonoBehaviour_c *)0x0) {
          Characters_AnimationHandler__CrossFade
                    ((Characters_AnimationHandler_o *)__this_00,auVar8._0_8_,0.1,0.0,auVar8._8_8_);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"CharacterEditor");
    il2cpp_runtime_helper_023445d0(&"Costume");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae1c9 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UI_UIManager__GetLocale("CharacterEditor","Costume","Title","","",(MethodInfo *)0x0);
  return;
}


