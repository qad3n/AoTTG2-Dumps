// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingSliderValueDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, const MethodInfo* method);
// 0x182312dd0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,MethodInfo *method)

{
  System_String_o *fallback;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434774e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"Edit Setting");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.EditSetting");
    Il2CppMethodInitialized_18434774e = '\x01';
  }
  fallback = "Edit Setting";
  pSVar1 = "SettingsPopup.EditSetting";
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->_descriptor !=
      (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    return (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->
            _descriptor->fields).Label;
  }
  if (Il2CppMethodInitialized_184347758 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347758 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,fallback,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_BodyScrollable (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, const MethodInfo* method);
// 0x180668280

bool
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_BodyScrollable(Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, MethodInfo* method)

{
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, const MethodInfo* method);
// 0x182312cd0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_18434774f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_18434774f = '\x01';
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
// 0x182312be0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_BodyLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347750 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347750 = '\x01';
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
// 0x1823125d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Open
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347751 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&"setting-slider-value");
    Il2CppMethodInitialized_184347751 = '\x01';
  }
  if (((descriptor != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) &&
      ((descriptor->fields).Adapter != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0)) &&
     ((descriptor->fields).Disabled == false)) {
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->_descriptor =
         descriptor;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->
                _descriptor,descriptor);
    __this = (context->fields).GameObject;
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pGVar1 = UnityEngine_GameObject__GetComponentInParent_object_
                         (__this,(MethodInfo_6F53B0 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
         (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
         __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (__this_00,"setting-slider-value",true,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__BuildBody (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x182311ff0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182312078: mov rbx, r14

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *pSVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *obj;
  
  if (Il2CppMethodInitialized_184347752 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"setting-slider-value-range");
    il2cpp_codegen_initialize_runtime_metadata(&"setting-slider-value-input");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    Il2CppMethodInitialized_184347752 = '\x01';
  }
  pIVar4 = (Il2CppObject *)0x0;
  obj = pIVar4;
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->_descriptor !=
      (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    obj = (Il2CppObject *)
          (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->_descriptor
          ->fields).Adapter;
  }
  pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  if (Il2CppMethodInitialized_184347756 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    Il2CppMethodInitialized_184347756 = '\x01';
  }
  if ((obj != (Il2CppObject *)0x0) &&
     (obj->klass == (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter)) {
    pIVar4 = obj;
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
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                       (body,"setting-slider-value-input",pSVar3,2 - (uint)(pIVar4 != (Il2CppObject *)0x0),
                        "inputField",layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0x20,
                        (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    if (obj == (Il2CppObject *)0x0) {
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      pSVar3 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,obj)
      ;
    }
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).value = pSVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value,pSVar3);
      pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__RangeCallout
                         ((Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)obj,(MethodInfo *)0x0);
      bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if (!bVar1) {
        Gisketch_Aottg2UI_Code_AottgUi__Callout(body,0,pSVar3,"setting-slider-value-range",(MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x182312260

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  
  if (Il2CppMethodInitialized_184347753 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_Save);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_184347753 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","Cancel","overlay.close",(MethodInfo *)0x0);
    __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_Save,
               (MethodInfo_1387DC0 *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey_18c3540
              (footer,"Common.Save","Save",
               (System_Action_GisketchActionContext__o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$Save
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Save (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x182312870

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Save
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_String_o *elementId;
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar6;
  System_String_o *value;
  VirtualInvokeData *pVVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  ushort uVar8;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_48;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347754 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"setting-slider-value-input");
    Il2CppMethodInitialized_184347754 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->_descriptor ==
       (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) ||
     ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->_descriptor->
      fields).Adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0)) {
    return;
  }
  value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__InputText
                    ((context->fields).GameObject,(MethodInfo *)0x0);
  if (value == (System_String_o *)0x0) {
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->
             _descriptor;
    if ((pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) ||
       (pIVar3 = (Il2CppObject *)(pGVar2->fields).Adapter, pIVar3 == (Il2CppObject *)0x0)) goto label_182312b67;
    value = InterfaceInvoker0_Invoke
                      (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,pIVar3)
    ;
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->_descriptor
  ;
  if ((pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) &&
     (pIVar3 = (Il2CppObject *)(pGVar2->fields).Adapter, pIVar3 != (Il2CppObject *)0x0)) {
    pIVar4 = pIVar3->klass;
    uVar1 = (pIVar4->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      uVar8 = 0;
      do {
        if (pIVar5[uVar8].interfaceType ==
            (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
          pVVar7 = pIVar4->vtable + (pIVar5[uVar8].offset + 10);
          goto label_1823129d9;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar1);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar3,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                        10);
label_1823129d9:
    (*pVVar7->methodPtr)(pIVar3,value,pVVar7->method);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields->
             _descriptor;
    if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      elementId = (pGVar2->fields).Id;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (__this_01->fields).id = "setting-slider-value-input";
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).id,"setting-slider-value-input");
        (__this_01->fields).value = value;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).value,value);
        local_48.fields.ElementId = (System_String_o *)0x0;
        local_48.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
        local_48.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        local_48.fields.InputSource = 0;
        local_48.fields._28_4_ = 0;
        Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                  (&local_48,elementId,(context->fields).GameObject,__this_01,(MethodInfo *)0x0);
        local_28.fields.ElementId = local_48.fields.ElementId;
        local_28.fields.GameObject = local_48.fields.GameObject;
        local_28.fields.Node = local_48.fields.Node;
        local_28.fields.InputSource = local_48.fields.InputSource;
        local_28.fields._28_4_ = local_48.fields._28_4_;
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed(pGVar2,&local_28,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar6) {
          __this = (context->fields).GameObject;
          if (__this == (UnityEngine_GameObject_o *)0x0) {
label_182312b67:
            ThrowNullReferenceException();
          }
          root = UnityEngine_GameObject__GetComponentInParent_object_
                           (__this,(MethodInfo_6F53B0 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
          if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
             (__this_00 = (root->fields)._Overlays_k__BackingField,
             __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,true,(MethodInfo *)0x0);
          }
        }
        else {
          root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
        }
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue
                  (root,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog->static_fields
                        ->_descriptor,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$InputText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__InputText (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x1823123d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823124be: nop 

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__InputText
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184347755 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"setting-slider-value-input");
    Il2CppMethodInitialized_184347755 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((source == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_182312569;
    pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
  }
  else {
    pUVar2 = (UnityEngine_Transform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)0x0;
  }
  if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
     (pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)pUVar2,true,
                          (MethodInfo_665440 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField),
     pSVar3 != (System_Object_array *)0x0)) {
    uVar4 = 0;
    do {
      if ((int)pSVar3->max_length <= (int)uVar4) {
        return (System_String_o *)0x0;
      }
      if ((uint)pSVar3->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      x = (UnityEngine_Object_o *)pSVar3->m_Items[(int)uVar4];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((x == (UnityEngine_Object_o *)0x0) ||
           (__this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
           __this == (UnityEngine_Object_o *)0x0)) break;
        a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,"setting-slider-value-input",(MethodInfo *)0x0);
        if (bVar1) {
          return (System_String_o *)x[0x16].klass;
        }
      }
      uVar4 = uVar4 + 1;
    } while( true );
  }
label_182312569:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$InputType
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__InputType (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, const MethodInfo* method);
// 0x182312570

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__InputType
                  (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347756 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    Il2CppMethodInitialized_184347756 = '\x01';
  }
  if (adapter != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
    pGVar1 = (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0;
    if (adapter->klass ==
        (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *)
        TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter) {
      pGVar1 = adapter;
    }
    return 2 - (uint)(pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0);
  }
  return 2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$RangeCallout
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__RangeCallout (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, const MethodInfo* method);
// 0x182312690

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__RangeCallout
          (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,MethodInfo *method)

{
  void *pvVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *arg1;
  uint16_t slot;
  float value;
  float value_00;
  float value_01;
  
  if (Il2CppMethodInitialized_184347757 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"Maximum value is {0}.");
    il2cpp_codegen_initialize_runtime_metadata(&"Minimum value is {0}.");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Range.Max");
    il2cpp_codegen_initialize_runtime_metadata(&"Minimum value is {0}. Maximum value is {1}.");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Range.Min");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Range.MinMax");
    Il2CppMethodInitialized_184347757 = '\x01';
  }
  if (adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
    return (System_String_o *)0x0;
  }
  pvVar1 = InterfaceInvoker0_Invoke
                     (5,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                      (Il2CppObject *)adapter);
  if (((char)pvVar1 == '\0') &&
     (pvVar1 = InterfaceInvoker0_Invoke
                         (6,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                          (Il2CppObject *)adapter), (char)pvVar1 == '\0')) {
    return (System_String_o *)0x0;
  }
  pvVar1 = InterfaceInvoker0_Invoke
                     (5,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                      (Il2CppObject *)adapter);
  if (((char)pvVar1 != '\0') &&
     (pvVar1 = InterfaceInvoker0_Invoke
                         (6,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                          (Il2CppObject *)adapter), (char)pvVar1 != '\0')) {
    pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Text
                       ("SettingsPopup.Range.MinMax","Minimum value is {0}. Maximum value is {1}.",(MethodInfo *)0x0);
    InterfaceInvoker0_Invoke
              (3,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
               (Il2CppObject *)adapter);
    pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Format(value,(MethodInfo *)0x0);
    InterfaceInvoker0_Invoke
              (4,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
               (Il2CppObject *)adapter);
    arg1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Format(value_00,(MethodInfo *)0x0);
    pSVar2 = System_String__Format_196d440
                       (pSVar2,(Il2CppObject *)pSVar3,(Il2CppObject *)arg1,(MethodInfo *)0x0);
    return pSVar2;
  }
  pvVar1 = InterfaceInvoker0_Invoke
                     (5,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                      (Il2CppObject *)adapter);
  if ((char)pvVar1 == '\0') {
    pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Text
                       ("SettingsPopup.Range.Max","Maximum value is {0}.",(MethodInfo *)0x0);
    slot = 4;
  }
  else {
    pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Text
                       ("SettingsPopup.Range.Min","Minimum value is {0}.",(MethodInfo *)0x0);
    slot = 3;
  }
  InterfaceInvoker0_Invoke
            (slot,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
             (Il2CppObject *)adapter);
  pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Format(value_01,(MethodInfo *)0x0);
  pSVar2 = System_String__Format(pSVar2,(Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Text (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x182312b80

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Text
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347758 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347758 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$Format
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Format (float value, const MethodInfo* method);
// 0x182312360

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Format(float value,MethodInfo *method)

{
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar1;
  float local_res8 [8];
  
  local_res8[0] = value;
  if (Il2CppMethodInitialized_184347759 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"0.##################");
    Il2CppMethodInitialized_184347759 = '\x01';
  }
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar1 = System_Single__ToString_1b4a0d0
                     (local_res8,"0.##################",(System_IFormatProvider_o *)provider,(MethodInfo *)0x0)
  ;
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


