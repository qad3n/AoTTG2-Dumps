// Type: UI.TipPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/TipPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/TipPanel.cs
// --------------------------------

// UI.TipPanel$$Setup
// il2cpp: void UI_TipPanel__Setup (UI_TipPanel_o* __this, const MethodInfo* method);
// 0x18229af40

void UI_TipPanel__Setup(UI_TipPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *value;
  
  if (Il2CppMethodInitialized_18434748b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    Il2CppMethodInitialized_18434748b = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Label",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar1,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      (__this->fields)._label = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._label,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.TipPanel$$SetRandomTip
// il2cpp: void UI_TipPanel__SetRandomTip (UI_TipPanel_o* __this, const MethodInfo* method);
// 0x18229ad60

void UI_TipPanel__SetRandomTip(UI_TipPanel_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  UnityEngine_UI_Text_o *pUVar2;
  int32_t iVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  System_String_o *pSVar6;
  longlong *plVar7;
  System_String_o *pSVar8;
  
  if (Il2CppMethodInitialized_18434748c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Notifications");
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Tips");
    Il2CppMethodInitialized_18434748c = '\x01';
  }
  pSVar1 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar4 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,(MethodInfo *)"Tips");
    do {
      if (pSVar4 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18229af30;
      pSVar5 = (*(pSVar4->klass->vtable)._11_get_NameAttribute.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._11_get_NameAttribute.method);
      iVar3 = UnityEngine_Random__RandomRangeInt(0,(int32_t)pSVar5,(MethodInfo *)0x0);
    } while (iVar3 == (__this->fields).currentTipIndex);
    (__this->fields).currentTipIndex = iVar3;
    pUVar2 = (__this->fields)._label;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar6 = UI_UIManager__GetLocale
                       ("Notifications","Tips","Title",
                        "","",(MethodInfo *)0x0);
    plVar7 = (longlong *)
             (*(pSVar4->klass->vtable)._5_OnRemove.methodPtr)
                       (pSVar4,(System_Type_o *)iVar3,(pSVar4->klass->vtable)._5_OnRemove.method);
    if (plVar7 != (longlong *)0x0) {
      pSVar8 = (System_String_o *)(**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      pSVar8 = UI_UIManager__GetLocale
                         ("Notifications","Tips",pSVar8,"",
                          "",(MethodInfo *)0x0);
      pSVar6 = System_String__Concat_1969b70(pSVar6,": ",pSVar8,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                  (pUVar2,pSVar6,(pUVar2->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
label_18229af30:
  ThrowNullReferenceException();
}


// UI.TipPanel$$SetPressAnyKey
// il2cpp: void UI_TipPanel__SetPressAnyKey (UI_TipPanel_o* __this, const MethodInfo* method);
// 0x18229ace0

void UI_TipPanel__SetPressAnyKey(UI_TipPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_18434748d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"PressAnyKey");
    Il2CppMethodInitialized_18434748d = '\x01';
  }
  pUVar1 = (__this->fields)._label;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("PressAnyKey",(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,pSVar2,(pUVar1->klass->vtable)._75_set_text.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.TipPanel$$.ctor
// il2cpp: void UI_TipPanel___ctor (UI_TipPanel_o* __this, const MethodInfo* method);
// 0x18229afd0

void
UI_TipPanel___ctor(UI_TipPanel_o* __this, MethodInfo* method)

{
  (__this->fields).currentTipIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


