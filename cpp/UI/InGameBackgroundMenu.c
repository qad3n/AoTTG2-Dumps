// Type: UI.InGameBackgroundMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/InGameBackgroundMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/InGameBackgroundMenu.cs
// --------------------------------

// UI.InGameBackgroundMenu$$Setup
// il2cpp: void UI_InGameBackgroundMenu__Setup (UI_InGameBackgroundMenu_o* __this, const MethodInfo* method);
// 0x43c5d10

void UI_InGameBackgroundMenu__Setup(UI_InGameBackgroundMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  UI_BloodBackgroundPanel_o *pUVar1;
  
  if (g_data_057ae3e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BloodBackgroundPanel_CreateDefaultPopup_BloodBackgroundP);
    g_data_057ae3e6 = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (UI_BloodBackgroundPanel_o *)UI_ElementFactory__CreateDefaultPopup_object_(parent,0,MethodInfo_BloodBackgroundPanel_CreateDefaultPopup_BloodBackgroundP);
  (__this->fields)._bloodBackgroundPanel = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._bloodBackgroundPanel,pUVar1);
  return;
}


// UI.InGameBackgroundMenu$$ShowBlood
// il2cpp: void UI_InGameBackgroundMenu__ShowBlood (UI_InGameBackgroundMenu_o* __this, const MethodInfo* method);
// 0x43c5d70

void UI_InGameBackgroundMenu__ShowBlood(UI_InGameBackgroundMenu_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  UI_BloodBackgroundPanel_o *pUVar1;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *__this_01;
  
  pUVar1 = (__this->fields)._bloodBackgroundPanel;
  if (pUVar1 != (UI_BloodBackgroundPanel_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar1->klass->vtable)._21_Show.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (pUVar1,(pUVar1->klass->vtable)._21_Show.method,in_RDX,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (pUVar1->fields).killPopupKeyframesIn;
  if (__this_01 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (__this_01->klass->vtable)._22_Clear.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (__this_01,(__this_01->klass->vtable)._22_Clear.method,extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    g_data_057ae015 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this_01->fields)._syncRoot = (Il2CppObject *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._syncRoot);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.InGameBackgroundMenu$$HideBlood
// il2cpp: void UI_InGameBackgroundMenu__HideBlood (UI_InGameBackgroundMenu_o* __this, const MethodInfo* method);
// 0x43c5da0

void UI_InGameBackgroundMenu__HideBlood(UI_InGameBackgroundMenu_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 in_RDX;
  UI_BloodBackgroundPanel_o *__this_01;
  
  __this_01 = (__this->fields)._bloodBackgroundPanel;
  if (__this_01 != (UI_BloodBackgroundPanel_o *)0x0) {
    vtableDispatch = (__this_01->klass->vtable)._22_Hide.methodPtr;
    (*vtableDispatch)
              (__this_01,(__this_01->klass->vtable)._22_Hide.method,in_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    g_data_057ae015 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this_01->fields).SinglePanel = (UnityEngine_Transform_o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).SinglePanel);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.InGameBackgroundMenu$$.ctor
// il2cpp: void UI_InGameBackgroundMenu___ctor (UI_InGameBackgroundMenu_o* __this, const MethodInfo* method);
// 0x43c5dd0

void UI_InGameBackgroundMenu___ctor(UI_InGameBackgroundMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    g_data_057ae015 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


