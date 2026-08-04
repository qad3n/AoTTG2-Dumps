// Type: UI.CategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/CategoryPanel.cs
// --------------------------------

// UI.CategoryPanel$$GetWidth
// il2cpp: float UI_CategoryPanel__GetWidth (UI_CategoryPanel_o* __this, const MethodInfo* method);
// 0x4346b30

float UI_CategoryPanel__GetWidth(UI_CategoryPanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  UI_BasePanel_o *pUVar1;
  float extraout_XMM0_Da;
  float fVar2;
  
  pUVar1 = (__this->fields).Parent;
  if (pUVar1 != (UI_BasePanel_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar1->klass->vtable)._30_GetPanelWidth.methodPtr;
    fVar2 = (float)(*UNRECOVERED_JUMPTABLE_00)
                             (pUVar1,(pUVar1->klass->vtable)._30_GetPanelWidth.method,in_RDX,
                              UNRECOVERED_JUMPTABLE_00);
    return fVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (pUVar1->fields).Parent;
  if (pUVar1 != (UI_BasePanel_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar1->klass->vtable)._31_GetPanelHeight.methodPtr;
    fVar2 = (float)(*UNRECOVERED_JUMPTABLE_00)
                             (pUVar1,(pUVar1->klass->vtable)._31_GetPanelHeight.method,extraout_RDX,
                              UNRECOVERED_JUMPTABLE_00);
    return fVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (pUVar1->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(pUVar1->fields)._popups,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (pUVar1->fields)._currentCategoryPanelName = __this_01;
  il2cpp_runtime_helper_022b4080(&(pUVar1->fields)._currentCategoryPanelName,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Type);
  (pUVar1->fields)._categoryPanelTypes = (System_Collections_Generic_Dictionary_string__Type__o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(pUVar1->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar1,(MethodInfo *)0x0);
  return extraout_XMM0_Da;
}


// UI.CategoryPanel$$GetHeight
// il2cpp: float UI_CategoryPanel__GetHeight (UI_CategoryPanel_o* __this, const MethodInfo* method);
// 0x4346b60

float UI_CategoryPanel__GetHeight(UI_CategoryPanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  undefined8 in_RDX;
  UI_BasePanel_o *__this_03;
  float extraout_XMM0_Da;
  float fVar1;
  
  __this_03 = (__this->fields).Parent;
  if (__this_03 != (UI_BasePanel_o *)0x0) {
    vtableDispatch = (__this_03->klass->vtable)._31_GetPanelHeight.methodPtr;
    fVar1 = (float)(*vtableDispatch)
                             (__this_03,(__this_03->klass->vtable)._31_GetPanelHeight.method,in_RDX,
                              vtableDispatch);
    return fVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this_03->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields)._popups,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this_03->fields)._currentCategoryPanelName = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields)._currentCategoryPanelName,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Type);
  (__this_03->fields)._categoryPanelTypes = (System_Collections_Generic_Dictionary_string__Type__o *)__this_02
  ;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_03,(MethodInfo *)0x0);
  return extraout_XMM0_Da;
}


// UI.CategoryPanel$$.ctor
// il2cpp: void UI_CategoryPanel___ctor (UI_CategoryPanel_o* __this, const MethodInfo* method);
// 0x4346b90

void UI_CategoryPanel___ctor(UI_CategoryPanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentCategoryPanelName = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentCategoryPanelName,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Type);
  (__this->fields)._categoryPanelTypes = (System_Collections_Generic_Dictionary_string__Type__o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


