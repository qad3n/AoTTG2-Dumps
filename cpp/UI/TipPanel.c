// Type: UI.TipPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/TipPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/TipPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.TipPanel$$Setup
// il2cpp: void UI_TipPanel__Setup (UI_TipPanel_o* __this, const MethodInfo* method);
// 0x40ff400

void UI_TipPanel__Setup(UI_TipPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  
  if (DAT_05704862 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&"Label");
    DAT_05704862 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Label",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = (UnityEngine_UI_Text_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar1,MethodInfo_Text_GetComponent_Text);
      (__this->fields)._label = pUVar2;
      il2cpp_runtime_glue(&(__this->fields)._label,pUVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.TipPanel$$SetRandomTip
// il2cpp: void UI_TipPanel__SetRandomTip (UI_TipPanel_o* __this, const MethodInfo* method);
// 0x40ff480

void UI_TipPanel__SetRandomTip(UI_TipPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_UI_Text_c *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar3;
  long *plVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  
  if (DAT_05704863 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MainMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Notifications");
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Tips");
    DAT_05704863 = '\x01';
  }
  plVar4 = (long *)**(long **)(TypeInfo_MainMenu + 0xb8);
  if ((plVar4 != (long *)0x0) &&
     (plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))
                                 (plVar4,"Tips",*(undefined8 *)(*plVar4 + 0x1b0)),
     plVar4 != (long *)0x0)) {
    do {
      iVar3 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
      iVar3 = UnityEngine_Random__Range(0,iVar3,(MethodInfo *)0x0);
    } while (iVar3 == (__this->fields).currentTipIndex);
    (__this->fields).currentTipIndex = iVar3;
    pUVar1 = (__this->fields)._label;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = UI_UIManager__GetLocale
                       ("Notifications","Tips","Title","","",
                        (MethodInfo *)0x0);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,iVar3,*(undefined8 *)(*plVar4 + 400));
    if (plVar4 != (long *)0x0) {
      pSVar6 = (System_String_o *)
               (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      pSVar6 = UI_UIManager__GetLocale
                         ("Notifications","Tips",pSVar6,"","",
                          (MethodInfo *)0x0);
      pSVar5 = System_String__Concat(pSVar5,": ",pSVar6,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar2 = pUVar1->klass;
        vtable_dispatch = (pUVar2->vtable)._75_set_text.methodPtr;
        (*vtable_dispatch)
                  (pUVar1,pSVar5,(pUVar2->vtable)._75_set_text.method,pUVar2,vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.TipPanel$$SetPressAnyKey
// il2cpp: void UI_TipPanel__SetPressAnyKey (UI_TipPanel_o* __this, const MethodInfo* method);
// 0x40ff650

void UI_TipPanel__SetPressAnyKey(UI_TipPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_UI_Text_c *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar3;
  
  if (DAT_05704864 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"PressAnyKey");
    DAT_05704864 = '\x01';
  }
  pUVar1 = (__this->fields)._label;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = UI_UIManager__GetLocaleCommon("PressAnyKey",(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    pUVar2 = pUVar1->klass;
    vtable_dispatch = (pUVar2->vtable)._75_set_text.methodPtr;
    (*vtable_dispatch)
              (pUVar1,pSVar3,(pUVar2->vtable)._75_set_text.method,pUVar2,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.TipPanel$$.ctor
// il2cpp: void UI_TipPanel___ctor (UI_TipPanel_o* __this, const MethodInfo* method);
// 0x40ff6d0

void UI_TipPanel___ctor(UI_TipPanel_o *__this,MethodInfo *method)

{
  (__this->fields).currentTipIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


