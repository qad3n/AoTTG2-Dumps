// Type: UI.QuestDailyPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/QuestDailyPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestDailyPanel.cs
// --------------------------------

// UI.QuestDailyPanel$$Setup
// il2cpp: void UI_QuestDailyPanel__Setup (UI_QuestDailyPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182299420

void UI_QuestDailyPanel__Setup(UI_QuestDailyPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  GameProgress_GameProgressContainer_o *pGVar1;
  GameProgress_QuestContainer_o *pGVar2;
  Settings_ListSetting_QuestItem__o *pSVar3;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_Color_o *pUVar6;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_18434747c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_QuestHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_QuestItem_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetTextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"QuestHeader");
    Il2CppMethodInitialized_18434747c = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  parent_00 = (__this->fields).SinglePanel;
  pSVar4 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar4,(MethodInfo *)0x0);
  if ((TypeInfo_GameProgress_QuestHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_QuestHandler);
  }
  pSVar4 = GameProgress_QuestHandler__GetTimeToQuestReset(true,(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateDefaultLabel(parent_00,__this_00,pSVar4,0,3,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (__this_01,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    pSVar4 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar6 = UI_UIManager__GetThemeColor
                       ((UnityEngine_Color_o *)&local_38,pSVar4,"QuestHeader","ResetTextColor",
                        "DefaultPanel",(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
      local_38.r = (pUVar6->fields).r;
      local_38.g = (pUVar6->fields).g;
      local_38.b = (pUVar6->fields).b;
      local_38.a = (pUVar6->fields).a;
      (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                (pUVar5,(UnityEngine_Color_o *)&local_38,(pUVar5->klass->vtable)._23_set_color.method);
      if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
      }
      pGVar1 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
      if (((pGVar1 != (GameProgress_GameProgressContainer_o *)0x0) &&
          (pGVar2 = (pGVar1->fields).Quest, pGVar2 != (GameProgress_QuestContainer_o *)0x0)) &&
         (pSVar3 = (pGVar2->fields).DailyQuestItems, pSVar3 != (Settings_ListSetting_QuestItem__o *)0x0)) {
        UI_QuestCategoryPanel__CreateQuestItems
                  ((UI_QuestCategoryPanel_o *)__this,
                   (System_Collections_Generic_List_QuestItem__o *)(pSVar3->fields)._value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.QuestDailyPanel$$.ctor
// il2cpp: void UI_QuestDailyPanel___ctor (UI_QuestDailyPanel_o* __this, const MethodInfo* method);
// 0x182297a80

void
UI_QuestDailyPanel___ctor(UI_QuestDailyPanel_o* __this, MethodInfo* method)

{
  (__this->fields).QuestItemWidth = 940.0;
  (__this->fields).QuestItemHeight = 100.0;
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


