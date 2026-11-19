// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingSliderValueDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, const MethodInfo* method);
// 0x5e38c60

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07548592 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.EditSetting");
    Il2CppMethodInitialized_07548592 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->_descriptor
  ;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    return (pGVar1->fields).Label;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("SettingsPopup.EditSetting",(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_BodyScrollable (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, const MethodInfo* method);
// 0x5e38ce0

bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_BodyScrollable
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,MethodInfo *method)

{
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, const MethodInfo* method);
// 0x5e38cf0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07548593 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07548593 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(420.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_BodyLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, const MethodInfo* method);
// 0x5e38db0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_BodyLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07548594 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07548594 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$Open
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Open (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x5e38e60

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Open
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  if (Il2CppMethodInitialized_07548595 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&"setting-slider-value");
    Il2CppMethodInitialized_07548595 = '\x01';
  }
  if (((descriptor != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) &&
      ((descriptor->fields).Adapter != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0)) &&
     ((descriptor->fields).Disabled == false)) {
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->_descriptor =
         descriptor;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->
                _descriptor);
    if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
      pGVar1 = UnityEngine_GameObject__GetComponentInParent_object_
                         (context.fields.GameObject,
                          (MethodInfo_353BB40 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
         (__this = (pGVar1->fields)._Overlays_k__BackingField,
         __this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (__this,"setting-slider-value",true,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__BuildBody (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5e38f30
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e39119: nop dword ptr [rax]
// asm:   0x5e3913e: mov rcx, qword ptr [r13 + 0x90]
// asm:   0x5e39145: mov rcx, qword ptr [rcx + 0xb8]
// asm:   0x5e3914c: mov rsi, qword ptr [rcx]
// asm:   0x5e3914f: mov rbx, rax
// asm:   0x5e39152: jmp 0x5e39173

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *method_00;
  System_String_o *pSVar7;
  ulong uVar8;
  int32_t type;
  long lVar9;
  Il2CppObject *obj;
  
  if (Il2CppMethodInitialized_07548596 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"setting-slider-value-range");
    il2cpp_codegen_initialize_runtime_metadata(&"setting-slider-value-input");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    Il2CppMethodInitialized_07548596 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->_descriptor
  ;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    obj = (Il2CppObject *)0x0;
  }
  else {
    obj = (Il2CppObject *)(pGVar1->fields).Adapter;
  }
  pSVar7 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  if (Il2CppMethodInitialized_0754859a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    Il2CppMethodInitialized_0754859a = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    type = 2;
  }
  else {
    type = 2 - (uint)(obj->klass ==
                     (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                       (body,"setting-slider-value-input",pSVar7,type,"inputField",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0x20,
                        (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    if (obj == (Il2CppObject *)0x0) {
      method_00 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      pIVar2 = obj->klass;
      uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
               ((long)&pIVar3->interfaceType + lVar9) ==
              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
            goto label_05e39167;
          }
          lVar9 = lVar9 + 0x10;
        } while (uVar8 * 0x10 != lVar9);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0)
      ;
label_05e39167:
      method_00 = (MethodInfo *)(*pVVar6->methodPtr)(obj,pVVar6->method);
    }
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).value = (System_String_o *)method_00;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).value);
      pSVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__RangeCallout
                         ((Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)obj,method_00);
      bVar4 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
      if (bVar4) {
        return;
      }
      Gisketch_Aottg2UI_Code_AottgUi__Callout(body,0,pSVar7,"setting-slider-value-range",(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x5e39840

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *__this_00;
  
  if (Il2CppMethodInitialized_07548597 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_Save);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_07548597 = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Cancel","overlay.close",(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_Save,
             (MethodInfo_4A803E0 *)0x0);
  Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey_52658f0
            (footer,"Common.Save",__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$Save
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Save (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e39910
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e39a09: nop dword ptr [rax]

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Save
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_String_o *elementId;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context_00;
  bool bVar5;
  System_String_o *value;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  ulong uVar7;
  MethodInfo *in_RSI;
  long lVar8;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o GStack_58;
  
  if (Il2CppMethodInitialized_07548598 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"setting-slider-value-input");
    Il2CppMethodInitialized_07548598 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->_descriptor
  ;
  if ((pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) ||
     ((pGVar1->fields).Adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0)) {
    return;
  }
  value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__InputText
                    (context.fields.GameObject,in_RSI);
  if (value == (System_String_o *)0x0) {
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->
             _descriptor;
    if ((pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) ||
       (pIVar2 = (Il2CppObject *)(pGVar1->fields).Adapter, pIVar2 == (Il2CppObject *)0x0)) goto label_05e39c17;
    pIVar3 = pIVar2->klass;
    uVar7 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
             ((long)&pIVar4->interfaceType + lVar8) ==
            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
          pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar8);
          goto label_05e39a41;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar2,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0
                       );
label_05e39a41:
    value = (*pVVar6->methodPtr)(pIVar2,pVVar6->method);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->_descriptor
  ;
  if ((pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) &&
     (pIVar2 = (Il2CppObject *)(pGVar1->fields).Adapter, pIVar2 != (Il2CppObject *)0x0)) {
    pIVar3 = pIVar2->klass;
    uVar7 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
             ((long)&pIVar4->interfaceType + lVar8) ==
            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
          pVVar6 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar8) + 10);
          goto label_05e39ad5;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar2,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                        10);
label_05e39ad5:
    (*pVVar6->methodPtr)(pIVar2,value,pVVar6->method);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->
             _descriptor;
    if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      elementId = (pGVar1->fields).Id;
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (__this_00->fields).id = "setting-slider-value-input";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
        (__this_00->fields).value = value;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
        GStack_58.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        GStack_58.fields.InputSource = 0;
        GStack_58.fields._28_4_ = 0;
        GStack_58.fields.ElementId = (System_String_o *)0x0;
        GStack_58.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
        Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                  (&GStack_58,elementId,context.fields.GameObject,__this_00,(MethodInfo *)0x0);
        context_00.fields.GameObject = GStack_58.fields.GameObject;
        context_00.fields.ElementId = GStack_58.fields.ElementId;
        context_00.fields.Node = GStack_58.fields.Node;
        context_00.fields.InputSource = GStack_58.fields.InputSource;
        context_00.fields._28_4_ = GStack_58.fields._28_4_;
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed(pGVar1,context_00,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar5) {
          if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_05e39c17;
          root = UnityEngine_GameObject__GetComponentInParent_object_
                           (context.fields.GameObject,
                            (MethodInfo_353BB40 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
          if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
            root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
          }
          else {
            __this = (root->fields)._Overlays_k__BackingField;
            if (__this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
              Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this,true,(MethodInfo *)0x0);
            }
          }
        }
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncSliderValue
                  (root,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields
                        ->_descriptor,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05e39c17:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$InputText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__InputText (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x5e39c20

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__InputText
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Object_array *pSVar4;
  ulong uVar5;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_07548599 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"setting-slider-value-input");
    Il2CppMethodInitialized_07548599 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar3 = (UnityEngine_Transform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((source == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_Transform_o *)0x0)) goto label_05e39dbb;
    pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (System_String_o *)0x0;
  }
  if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
     (pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)pUVar3,true,
                          (MethodInfo_34B1260 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField),
     pSVar4 != (System_Object_array *)0x0)) {
    if ((int)pSVar4->max_length < 1) {
      return (System_String_o *)0x0;
    }
    uVar5 = pSVar4->max_length & 0xffffffff;
    uVar6 = 0;
    do {
      if (uVar5 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      x = (UnityEngine_Object_o *)pSVar4->m_Items[uVar6];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if ((x == (UnityEngine_Object_o *)0x0) ||
           (__this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
           __this == (UnityEngine_Object_o *)0x0)) break;
        a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
        bVar2 = System_String__op_Equality(a,"setting-slider-value-input",(MethodInfo *)0x0);
        if (bVar2) {
          return (System_String_o *)x[0x16].klass;
        }
      }
      uVar6 = uVar6 + 1;
      uVar1 = (uint)pSVar4->max_length;
      uVar5 = (ulong)uVar1;
      if ((long)(int)uVar1 <= (long)uVar6) {
        return (System_String_o *)0x0;
      }
    } while( true );
  }
label_05e39dbb:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$InputType
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__InputType (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, const MethodInfo* method);
// 0x5e391e0

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__InputType
                  (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754859a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    Il2CppMethodInitialized_0754859a = '\x01';
  }
  if (adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
    return 2;
  }
  return 2 - (uint)(adapter->klass ==
                   (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *)
                   TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$RangeCallout
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__RangeCallout (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, const MethodInfo* method);
// 0x5e39230

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__RangeCallout
          (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *pGVar6;
  System_Globalization_CultureInfo_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *arg1;
  int iVar9;
  ulong uVar10;
  uint16_t slot;
  long lVar11;
  float local_34;
  
  if (Il2CppMethodInitialized_0754859b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Range.Max");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Range.Min");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Range.MinMax");
    Il2CppMethodInitialized_0754859b = '\x01';
  }
  if (adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
label_05e393c1:
    pSVar5 = (System_String_o *)0x0;
  }
  else {
    pGVar6 = adapter->klass;
    uVar10 = (ulong)(pGVar6->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar2 = (pGVar6->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
             ((long)&pIVar2->interfaceType + lVar11) ==
            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
          pVVar4 = pGVar6->vtable + (*(int *)((long)&pIVar2->offset + lVar11) + 5);
          goto label_05e392f9;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)adapter,
                        (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,5);
label_05e392f9:
    bVar3 = (*pVVar4->methodPtr)((Il2CppObject *)adapter,pVVar4->method);
    if (!bVar3) {
      pGVar6 = adapter->klass;
      uVar10 = (ulong)(pGVar6->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar2 = (pGVar6->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
               ((long)&pIVar2->interfaceType + lVar11) ==
              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar4 = pGVar6->vtable + (*(int *)((long)&pIVar2->offset + lVar11) + 6);
            goto label_05e39369;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)adapter,
                          (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,6);
label_05e39369:
      bVar3 = (*pVVar4->methodPtr)((Il2CppObject *)adapter,pVVar4->method);
      if (!bVar3) goto label_05e393c1;
    }
    pGVar6 = adapter->klass;
    uVar10 = (ulong)(pGVar6->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar2 = (pGVar6->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
             ((long)&pIVar2->interfaceType + lVar11) ==
            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
          pVVar4 = pGVar6->vtable + (*(int *)((long)&pIVar2->offset + lVar11) + 5);
          goto label_05e393e0;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)adapter,
                        (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,5);
label_05e393e0:
    bVar3 = (*pVVar4->methodPtr)((Il2CppObject *)adapter,pVVar4->method);
    if (bVar3) {
      pGVar6 = adapter->klass;
      uVar10 = (ulong)(pGVar6->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar2 = (pGVar6->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
               ((long)&pIVar2->interfaceType + lVar11) ==
              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar4 = pGVar6->vtable + (*(int *)((long)&pIVar2->offset + lVar11) + 6);
            goto label_05e39459;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)adapter,
                          (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,6);
label_05e39459:
      bVar3 = (*pVVar4->methodPtr)((Il2CppObject *)adapter,pVVar4->method);
      if (bVar3) {
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar5 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                           ("SettingsPopup.Range.MinMax",(MethodInfo *)0x0);
        pGVar6 = adapter->klass;
        uVar10 = (ulong)(pGVar6->_2).interface_offsets_count;
        if (uVar10 != 0) {
          pIVar2 = (pGVar6->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
                 ((long)&pIVar2->interfaceType + lVar11) ==
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
              pVVar4 = pGVar6->vtable + (*(int *)((long)&pIVar2->offset + lVar11) + 3);
              goto label_05e396e6;
            }
            lVar11 = lVar11 + 0x10;
          } while (uVar10 * 0x10 != lVar11);
        }
        pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                           ((Il2CppObject *)adapter,
                            (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,3);
label_05e396e6:
        (*pVVar4->methodPtr)((Il2CppObject *)adapter,pVVar4->method);
        if (Il2CppMethodInitialized_0754859c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
          il2cpp_codegen_initialize_runtime_metadata(&"0.##################");
          Il2CppMethodInitialized_0754859c = '\x01';
        }
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        pSVar8 = System_Single__ToString_54d0ad0
                           (&local_34,"0.##################",(System_IFormatProvider_o *)pSVar7,
                            (MethodInfo *)0x0);
        pGVar6 = adapter->klass;
        uVar10 = (ulong)(pGVar6->_2).interface_offsets_count;
        if (uVar10 != 0) {
          pIVar2 = (pGVar6->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
                 ((long)&pIVar2->interfaceType + lVar11) ==
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
              pVVar4 = pGVar6->vtable + (*(int *)((long)&pIVar2->offset + lVar11) + 4);
              goto label_05e397b5;
            }
            lVar11 = lVar11 + 0x10;
          } while (uVar10 * 0x10 != lVar11);
        }
        pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                           ((Il2CppObject *)adapter,
                            (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,4);
label_05e397b5:
        (*pVVar4->methodPtr)((Il2CppObject *)adapter,pVVar4->method);
        if (Il2CppMethodInitialized_0754859c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
          il2cpp_codegen_initialize_runtime_metadata(&"0.##################");
          Il2CppMethodInitialized_0754859c = '\x01';
        }
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        arg1 = System_Single__ToString_54d0ad0
                         (&local_34,"0.##################",(System_IFormatProvider_o *)pSVar7,(MethodInfo *)0x0
                         );
        pSVar5 = System_String__Format_5302c50
                           (pSVar5,(Il2CppObject *)pSVar8,(Il2CppObject *)arg1,(MethodInfo *)0x0);
        return pSVar5;
      }
    }
    pGVar6 = adapter->klass;
    uVar10 = (ulong)(pGVar6->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar2 = (pGVar6->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
             ((long)&pIVar2->interfaceType + lVar11) ==
            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
          pVVar4 = pGVar6->vtable + (*(int *)((long)&pIVar2->offset + lVar11) + 5);
          goto label_05e39549;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)adapter,
                        (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,5);
label_05e39549:
    bVar3 = (*pVVar4->methodPtr)((Il2CppObject *)adapter,pVVar4->method);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
    if (bVar3) {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar5 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("SettingsPopup.Range.Min",(MethodInfo *)0x0);
      pGVar6 = adapter->klass;
      uVar10 = (ulong)(pGVar6->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar2 = (pGVar6->_1).interfaceOffsets;
        lVar11 = 0;
label_05e395b0:
        if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
             ((long)&pIVar2->interfaceType + lVar11) !=
            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) goto code_r0x05e395b6;
        iVar9 = *(int *)((long)&pIVar2->offset + lVar11) + 3;
label_05e3963e:
        pVVar4 = pGVar6->vtable + iVar9;
        goto label_05e3964e;
      }
label_05e395bf:
      slot = 3;
    }
    else {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar5 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("SettingsPopup.Range.Max",(MethodInfo *)0x0);
      pGVar6 = adapter->klass;
      uVar10 = (ulong)(pGVar6->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar2 = (pGVar6->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
               ((long)&pIVar2->interfaceType + lVar11) ==
              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            iVar9 = *(int *)((long)&pIVar2->offset + lVar11) + 4;
            goto label_05e3963e;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      slot = 4;
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)adapter,
                        (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,slot);
label_05e3964e:
    (*pVVar4->methodPtr)(adapter,pVVar4->method);
    if (Il2CppMethodInitialized_0754859c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
      il2cpp_codegen_initialize_runtime_metadata(&"0.##################");
      Il2CppMethodInitialized_0754859c = '\x01';
    }
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar8 = System_Single__ToString_54d0ad0
                       (&local_34,"0.##################",(System_IFormatProvider_o *)pSVar7,(MethodInfo *)0x0);
    pSVar5 = System_String__Format(pSVar5,(Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  }
  return pSVar5;
code_r0x05e395b6:
  lVar11 = lVar11 + 0x10;
  if (uVar10 * 0x10 == lVar11) goto label_05e395bf;
  goto label_05e395b0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$Format
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Format (float value, const MethodInfo* method);
// 0x5e39dd0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Format(float value,MethodInfo *method)

{
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar1;
  float fStack_4;
  
  if (Il2CppMethodInitialized_0754859c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"0.##################");
    Il2CppMethodInitialized_0754859c = '\x01';
  }
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar1 = System_Single__ToString_54d0ad0
                     (&fStack_4,"0.##################",(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, const MethodInfo* method);
// 0x5e39e40

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


