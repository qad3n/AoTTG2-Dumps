// Type: UI.QuestDailyPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/QuestDailyPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/QuestDailyPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.QuestDailyPanel$$Setup
// il2cpp: void UI_QuestDailyPanel__Setup (UI_QuestDailyPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40fddd0

void UI_QuestDailyPanel__Setup
               (UI_QuestDailyPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  long lVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar4;
  
  if (DAT_05704853 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&TypeInfo_QuestHandler);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_QuestItem__get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"ResetTextColor");
    il2cpp_init_method_metadata(&"QuestHeader");
    DAT_05704853 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  parent_00 = (__this->fields).SinglePanel;
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = GameProgress_QuestHandler__GetTimeToQuestReset(1,(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateDefaultLabel
                        (parent_00,__this_00,pSVar2,0,3,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_Text_GetComponent_Text);
    pSVar2 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar4 = UI_UIManager__GetThemeColor
                      (pSVar2,"QuestHeader","ResetTextColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar3 != (Il2CppObject *)0x0) {
      (*pIVar3->klass->vtable[0x17].methodPtr)
                (UVar4.fields._0_8_,UVar4.fields._8_8_,pIVar3,pIVar3->klass->vtable[0x17].method);
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
        il2cpp_init_class();
        method_00 = extraout_RDX_00;
      }
      lVar1 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
        UI_QuestCategoryPanel__CreateQuestItems
                  ((UI_QuestCategoryPanel_o *)__this,
                   *(System_Collections_Generic_List_QuestItem__o **)(lVar1 + 0x18),method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.QuestDailyPanel$$.ctor
// il2cpp: void UI_QuestDailyPanel___ctor (UI_QuestDailyPanel_o* __this, const MethodInfo* method);
// 0x40fdfe0

void UI_QuestDailyPanel___ctor(UI_QuestDailyPanel_o *__this,MethodInfo *method)

{
  (__this->fields).QuestItemWidth = 940.0;
  (__this->fields).QuestItemHeight = 100.0;
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


