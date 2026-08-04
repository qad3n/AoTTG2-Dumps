// Type: UI.QuestDailyPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/QuestDailyPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestDailyPanel.cs
// --------------------------------

// UI.QuestDailyPanel$$Setup
// il2cpp: void UI_QuestDailyPanel__Setup (UI_QuestDailyPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4412110

void UI_QuestDailyPanel__Setup(UI_QuestDailyPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  void *pvVar1;
  long lVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar4;
  UI_CategoryPanel_o *__this_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar5;
  
  if (g_data_057ae5ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"ResetTextColor");
    il2cpp_runtime_helper_023445d0(&"QuestHeader");
    g_data_057ae5ee = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  __this_02 = (UI_CategoryPanel_o *)(__this->fields).SinglePanel;
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = GameProgress_QuestHandler__GetTimeToQuestReset(1,(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateDefaultLabel
                        ((UnityEngine_Transform_o *)__this_02,__this_00,pSVar3,0,3,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pIVar4 = UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_Text_GetComponent_Text);
    __this_02 = (UI_CategoryPanel_o *)
                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar5 = UI_UIManager__GetThemeColor
                      ((System_String_o *)__this_02,"QuestHeader","ResetTextColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar4 != (Il2CppObject *)0x0) {
      (*pIVar4->klass->vtable[0x17].methodPtr)(UVar5.fields._0_8_,UVar5.fields._8_8_,pIVar4);
      method_00 = extraout_RDX;
      if (*(int *)((long)&TypeInfo_GameProgressManager[2].fields.m_CachedPtr + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      pvVar1 = (TypeInfo_GameProgressManager[1].fields._categoryPanelTypes)->monitor;
      __this_02 = TypeInfo_GameProgressManager;
      if (((pvVar1 != (void *)0x0) && (lVar2 = *(long *)((long)pvVar1 + 0x28), lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
        UI_QuestCategoryPanel__CreateQuestItems
                  ((UI_QuestCategoryPanel_o *)__this,
                   *(System_Collections_Generic_List_QuestItem__o **)(lVar2 + 0x18),method_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02[1].klass = (UI_CategoryPanel_c *)0x42c80000446b0000;
  UI_CategoryPanel___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.QuestDailyPanel$$.ctor
// il2cpp: void UI_QuestDailyPanel___ctor (UI_QuestDailyPanel_o* __this, const MethodInfo* method);
// 0x4412320

void UI_QuestDailyPanel___ctor(UI_QuestDailyPanel_o *__this,MethodInfo *method)

{
  (__this->fields).QuestItemWidth = 940.0;
  (__this->fields).QuestItemHeight = 100.0;
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


