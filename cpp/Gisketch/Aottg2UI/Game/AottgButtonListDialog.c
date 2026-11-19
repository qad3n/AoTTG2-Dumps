// Type: Gisketch.Aottg2UI.Game.AottgButtonListDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgButtonListDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgButtonListDialog.Entry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry___ctor (Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_o __this, int32_t variant, System_String_o* key, System_String_o* icon, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x5e7d5d0

void Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry___ctor
               (Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_o *__this,int32_t variant,
               System_String_o *key,System_String_o *icon,System_Action_GisketchActionContext__o *action,
               MethodInfo *method)

{
  (__this->fields).Variant = variant;
  (__this->fields).Key = key;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Key);
  (__this->fields).Icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Icon);
  (__this->fields).Action = action;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Action);
  return;
}


// Gisketch.Aottg2UI.Game.AottgButtonListDialog.<>c__DisplayClass12_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgButtonListDialog___c__DisplayClass12_0___ctor (Gisketch_Aottg2UI_Game_AottgButtonListDialog___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x5e7d5b0

void Gisketch_Aottg2UI_Game_AottgButtonListDialog___c__DisplayClass12_0___ctor
               (Gisketch_Aottg2UI_Game_AottgButtonListDialog___c__DisplayClass12_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgButtonListDialog.<>c__DisplayClass12_0$$<CloseThen>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgButtonListDialog___c__DisplayClass12_0___CloseThen_b__0 (Gisketch_Aottg2UI_Game_AottgButtonListDialog___c__DisplayClass12_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x5e7d620

void Gisketch_Aottg2UI_Game_AottgButtonListDialog___c__DisplayClass12_0___CloseThen_b__0
               (Gisketch_Aottg2UI_Game_AottgButtonListDialog___c__DisplayClass12_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  System_Action_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *pGVar3;
  
  if (Il2CppMethodInitialized_07548790 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu");
    Il2CppMethodInitialized_07548790 = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__Ensure("main-menu",method);
  if ((pGVar3 != (Gisketch_Aottg2UI_Game_AottgGisketchUiHost_o *)0x0) &&
     (pGVar1 = (pGVar3->fields)._root, pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) {
    __this_00 = (pGVar1->fields)._Overlays_k__BackingField;
    if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,false,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).action;
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgButtonListDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgButtonListDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgButtonListDialog_o* __this, const MethodInfo* method);
// 0x5e7d1b0

bool Gisketch_Aottg2UI_Game_AottgButtonListDialog__get_BodyScrollable
               (Gisketch_Aottg2UI_Game_AottgButtonListDialog_o *__this,MethodInfo *method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgButtonListDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgButtonListDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgButtonListDialog_o* __this, const MethodInfo* method);
// 0x5e7d1c0

int32_t Gisketch_Aottg2UI_Game_AottgButtonListDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgButtonListDialog_o *__this,MethodInfo *method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgButtonListDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgButtonListDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgButtonListDialog_o* __this, const MethodInfo* method);
// 0x5e7d1d0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgButtonListDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgButtonListDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07548807 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07548807 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(94.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgButtonListDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgButtonListDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgButtonListDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5e7d2b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e7d458: jmp 0x5e7d45e

void Gisketch_Aottg2UI_Game_AottgButtonListDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgButtonListDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body,
               MethodInfo *method)

{
  int32_t variant;
  System_String_o *pSVar1;
  System_Action_GisketchActionContext__o *action;
  System_String_o *icon;
  uint uVar2;
  Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_array *pGVar3;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_07548808 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_07548808 = '\x01';
  }
  pGVar3 = (*(__this->klass->vtable)._22_get_Entries.methodPtr)
                     (__this,(__this->klass->vtable)._22_get_Entries.method);
  if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_array *)0x0) {
label_05e7d47b:
    ThrowNullReferenceException();
  }
  uVar2 = (uint)pGVar3->max_length;
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if (0 < (int)uVar2) {
      pSVar1 = pGVar3->m_Items[0].fields.Key;
      if (pSVar1 != (System_String_o *)0x0) {
        System_String__Replace(pSVar1,0x2e,0x2d,(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
      goto label_05e7d47b;
    }
  }
  else if (0 < (int)uVar2) {
    uVar6 = 0;
    do {
      if (uVar2 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      pSVar1 = pGVar3->m_Items[(int)uVar6].fields.Key;
      if (pSVar1 == (System_String_o *)0x0) goto label_05e7d47b;
      variant = pGVar3->m_Items[(int)uVar6].fields.Variant;
      action = pGVar3->m_Items[(int)uVar6].fields.Action;
      icon = pGVar3->m_Items[(int)uVar6].fields.Icon;
      id = System_String__Replace(pSVar1,0x2e,0x2d,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
                         (body,variant,pSVar1,action,id,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(80.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05e7d47b;
      (pGVar4->fields).layout = pGVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
      uVar6 = uVar6 + 1;
      uVar2 = (uint)pGVar3->max_length;
    } while ((int)uVar6 < (int)uVar2);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgButtonListDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgButtonListDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgButtonListDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x5e7d4a0

void Gisketch_Aottg2UI_Game_AottgButtonListDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgButtonListDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548809 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Close");
    Il2CppMethodInitialized_07548809 = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Close","overlay.close",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgButtonListDialog$$CloseThen
// il2cpp: System_Action_GisketchActionContext__o* Gisketch_Aottg2UI_Game_AottgButtonListDialog__CloseThen (System_Action_o* action, const MethodInfo* method);
// 0x5e7d500

System_Action_GisketchActionContext__o *
Gisketch_Aottg2UI_Game_AottgButtonListDialog__CloseThen(System_Action_o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgButtonListDialog___c__DisplayClass12_0_o *__this;
  System_Action_GisketchActionContext__o *__this_00;
  
  if (Il2CppMethodInitialized_0754880a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgButtonListDialog_c__DisplayClass12_0_CloseThen_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgButtonListDialog_c__DisplayClass12_0);
    Il2CppMethodInitialized_0754880a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgButtonListDialog_c__DisplayClass12_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgButtonListDialog___c__DisplayClass12_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).action = action;
  Il2CppCodeGenWriteBarrier(&(__this->fields).action);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgButtonListDialog_c__DisplayClass12_0_CloseThen_b__0,
             (MethodInfo_4A803E0 *)0x0);
  return __this_00;
}


// Gisketch.Aottg2UI.Game.AottgButtonListDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgButtonListDialog___ctor (Gisketch_Aottg2UI_Game_AottgButtonListDialog_o* __this, const MethodInfo* method);
// 0x5e7d5c0

void Gisketch_Aottg2UI_Game_AottgButtonListDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgButtonListDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


