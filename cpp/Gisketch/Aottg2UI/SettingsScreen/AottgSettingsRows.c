// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsRows.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows.<>c__DisplayClass18_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass18_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x5e4afc0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass18_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass18_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows.<>c__DisplayClass18_0$$<LabeledDescriptor>b__0
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass18_0___LabeledDescriptor_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x5e4b0d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4b11f: nop 

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass18_0___LabeledDescriptor_b__0
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass18_0_o *__this,
          MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  System_String_o *pSVar4;
  ulong uVar5;
  long lVar6;
  
  if (Il2CppMethodInitialized_0754862f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    Il2CppMethodInitialized_0754862f = '\x01';
  }
  obj = (Il2CppObject *)(__this->fields).adapter;
  if (obj == (Il2CppObject *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pIVar1 = obj->klass;
  uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar5 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar6 = 0;
    do {
      if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)((long)&pIVar2->interfaceType + lVar6)
          == TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
        pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar6);
        goto label_05e4b167;
      }
      lVar6 = lVar6 + 0x10;
    } while (uVar5 * 0x10 != lVar6);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                     (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0);
label_05e4b167:
  pSVar4 = (*pVVar3->methodPtr)(obj,pVVar3->method);
  return pSVar4;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Switch
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_BoolSetting_o* setting, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e3ab70

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_BoolSetting_o *setting,
          System_String_o *tooltipItem,System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_0754861a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
    Il2CppMethodInitialized_0754861a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor(__this,setting,(MethodInfo *)0x0);
  descriptor = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                         (id,sub,item,0,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                          tooltipItem,changed,in_stack_ffffffffffffffc0);
  if (Il2CppMethodInitialized_07548623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_07548623 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(__this_00,descriptor,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Input
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_IntSetting_o* setting, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e3ed70

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_IntSetting_o *setting,
          System_String_o *tooltipItem,System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_0754861b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    Il2CppMethodInitialized_0754861b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter___ctor(__this,setting,(MethodInfo *)0x0);
  descriptor = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                         (id,sub,item,4,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                          tooltipItem,changed,in_stack_ffffffffffffffc0);
  if (Il2CppMethodInitialized_07548623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_07548623 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(__this_00,descriptor,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Input
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_FloatSetting_o* setting, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e3eca0

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d3eca0
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_FloatSetting_o *setting,
          System_String_o *tooltipItem,System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_0754861c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
    Il2CppMethodInitialized_0754861c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter___ctor(__this,setting,(MethodInfo *)0x0);
  descriptor = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                         (id,sub,item,4,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                          tooltipItem,changed,in_stack_ffffffffffffffc0);
  if (Il2CppMethodInitialized_07548623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_07548623 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(__this_00,descriptor,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Input
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_StringSetting_o* setting, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e4a5e0

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d4a5e0
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_StringSetting_o *setting,
          System_String_o *tooltipItem,System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_0754861d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    Il2CppMethodInitialized_0754861d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor(__this,setting,(MethodInfo *)0x0);
  descriptor = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                         (id,sub,item,4,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                          tooltipItem,changed,in_stack_ffffffffffffffc0);
  if (Il2CppMethodInitialized_07548623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_07548623 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(__this_00,descriptor,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Slider
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_FloatSetting_o* setting, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e3ebc0

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_FloatSetting_o *setting,
          System_String_o *tooltipItem,System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_0754861e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
    Il2CppMethodInitialized_0754861e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter___ctor(__this,setting,(MethodInfo *)0x0);
  descriptor = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                         (id,sub,item,3,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                          tooltipItem,changed,in_stack_ffffffffffffffc0);
  if (descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  (descriptor->fields).ShowValue = true;
  if (Il2CppMethodInitialized_07548623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_07548623 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(__this_00,descriptor,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Slider
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_IntSetting_o* setting, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e40b40

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider_5d40b40
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_IntSetting_o *setting,
          System_String_o *tooltipItem,System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_0754861f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    Il2CppMethodInitialized_0754861f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter___ctor(__this,setting,(MethodInfo *)0x0);
  descriptor = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                         (id,sub,item,3,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                          tooltipItem,changed,in_stack_ffffffffffffffc0);
  if (descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  (descriptor->fields).ShowValue = true;
  if (Il2CppMethodInitialized_07548623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_07548623 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(__this_00,descriptor,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_IntSetting_o* setting, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e408c0

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_IntSetting_o *setting,
          System_String_o *tooltipItem,System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  System_String_o *item_00;
  System_String_array *labels;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_07548628 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    Il2CppMethodInitialized_07548628 = '\x01';
  }
  item_00 = System_String__Concat_52f0320(item,"Options",(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  labels = UI_UIManager__GetLocaleOptions_5caf470("SettingsPopup",sub,item_00,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__IndexedChoice
                     (id,sub,item,1,setting,labels,tooltipItem,changed,in_stack_ffffffffffffffb8);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_IntSetting_o* setting, System_String_array* labels, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e40a70

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown_5d40a70
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_IntSetting_o *setting,
          System_String_array *labels,System_String_o *tooltipItem,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  System_String_o *item_00;
  System_String_array *labels_00;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_07548629 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    Il2CppMethodInitialized_07548629 = '\x01';
  }
  item_00 = System_String__Concat_52f0320(item,"Options",(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  labels_00 = UI_UIManager__GetLocaleOptions_5caf530
                        ("SettingsPopup",sub,item_00,labels,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__IndexedChoice
                     (id,sub,item,1,setting,labels_00,tooltipItem,changed,in_stack_ffffffffffffffb8);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_StringSetting_o* setting, System_String_array* values, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e4a940

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown_5d4a940
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_StringSetting_o *setting,
          System_String_array *values,System_String_o *tooltipItem,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  System_String_o *item_00;
  System_String_array *labels;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548629 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    Il2CppMethodInitialized_07548629 = '\x01';
  }
  item_00 = System_String__Concat_52f0320(item,"Options",(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  method_00 = (MethodInfo *)0x5e4a9dc;
  labels = UI_UIManager__GetLocaleOptions_5caf530("SettingsPopup",sub,item_00,values,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__StringChoice
                     (id,sub,item,1,setting,values,labels,tooltipItem,changed,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_StringSetting_o* setting, System_String_array* values, System_String_array* labels, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e4ab20

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown_5d4ab20
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_StringSetting_o *setting,
          System_String_array *values,System_String_array *labels,System_String_o *tooltipItem,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar1;
  MethodInfo *in_stack_fffffffffffffff0;
  
  pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__StringChoice
                     (id,sub,item,1,setting,values,labels,tooltipItem,changed,in_stack_fffffffffffffff0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Select
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_IntSetting_o* setting, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e3eaf0

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_IntSetting_o *setting,
          System_String_o *tooltipItem,System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  System_String_o *item_00;
  System_String_array *labels;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_07548628 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    Il2CppMethodInitialized_07548628 = '\x01';
  }
  item_00 = System_String__Concat_52f0320(item,"Options",(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  labels = UI_UIManager__GetLocaleOptions_5caf470("SettingsPopup",sub,item_00,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__IndexedChoice
                     (id,sub,item,2,setting,labels,tooltipItem,changed,in_stack_ffffffffffffffb8);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Select
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_StringSetting_o* setting, System_String_array* values, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e4ab50

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select_5d4ab50
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_StringSetting_o *setting,
          System_String_array *values,System_String_o *tooltipItem,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  System_String_o *item_00;
  System_String_array *labels;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548629 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    Il2CppMethodInitialized_07548629 = '\x01';
  }
  item_00 = System_String__Concat_52f0320(item,"Options",(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  method_00 = (MethodInfo *)0x5e4abec;
  labels = UI_UIManager__GetLocaleOptions_5caf530("SettingsPopup",sub,item_00,values,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__StringChoice
                     (id,sub,item,2,setting,values,labels,tooltipItem,changed,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Color
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Color (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_ColorSetting_o* setting, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e3aab0

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Color
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_ColorSetting_o *setting,
          System_String_o *tooltipItem,System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor;
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_07548620 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow);
    Il2CppMethodInitialized_07548620 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter___ctor(__this,setting,(MethodInfo *)0x0);
  descriptor = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                         (id,sub,item,6,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                          tooltipItem,changed,in_stack_ffffffffffffffc0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___ctor(__this_00,descriptor,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$ToggleColor
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__ToggleColor (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_ToggleColorSetting_o* setting, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e4ac30

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__ToggleColor
          (System_String_o *id,System_String_o *sub,System_String_o *item,
          Settings_ToggleColorSetting_o *setting,System_String_o *tooltipItem,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this_01;
  Settings_ColorSetting_o *setting_00;
  Settings_BoolSetting_o *setting_01;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  if (Il2CppMethodInitialized_07548621 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow);
    Il2CppMethodInitialized_07548621 = '\x01';
  }
  if (setting == (Settings_ToggleColorSetting_o *)0x0) {
    setting_01 = (Settings_BoolSetting_o *)0x0;
  }
  else {
    setting_01 = (setting->fields).Enabled;
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
  setting_00 = (Settings_ColorSetting_o *)0x0;
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor(__this,setting_01,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                     (id,sub,item,6,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                      tooltipItem,changed,in_stack_ffffffffffffffb0);
  if (setting != (Settings_ToggleColorSetting_o *)0x0) {
    setting_00 = (setting->fields).Color;
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter___ctor(__this_00,setting_00,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar1->fields).SecondaryAdapter = (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this_00;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).SecondaryAdapter);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields)._descriptor = pGVar1;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._descriptor);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Dynamic
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dynamic (System_String_o* id, System_String_o* sub, System_String_o* item, System_Func_string__o* text, System_String_o* fallback, System_String_o* bindingKey, System_Func_string__o* dirtyValue, const MethodInfo* method);
// 0x5e3a900

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dynamic
          (System_String_o *id,System_String_o *sub,System_String_o *item,System_Func_string__o *text,
          System_String_o *fallback,System_String_o *bindingKey,System_Func_string__o *dirtyValue,
          MethodInfo *method)

{
  System_String_o *key;
  System_String_o *label;
  Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this;
  
  if (Il2CppMethodInitialized_07548622 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow)
    ;
    Il2CppMethodInitialized_07548622 = '\x01';
  }
  if (Il2CppMethodInitialized_0754862d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_0754862d = '\x01';
  }
  key = System_String__Concat_5302810("SettingsPopup.",sub,".",item,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  label = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow___ctor
            (__this,id,label,text,(System_String_o *)0x0,fallback,key,(System_String_o *)0x0,bindingKey,
             dirtyValue,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Row
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Row (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x5e3f020

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Row
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this;
  
  if (Il2CppMethodInitialized_07548623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_07548623 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow)
  ;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(__this,descriptor,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Descriptor
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor (System_String_o* id, System_String_o* sub, System_String_o* item, int32_t kind, Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e3ee40

Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
          (System_String_o *id,System_String_o *sub,System_String_o *item,int32_t kind,
          Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,System_String_o *tooltipItem,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  System_String_o *key;
  System_String_o *label;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_07548624 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_07548624 = '\x01';
  }
  if (Il2CppMethodInitialized_0754862d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_0754862d = '\x01';
  }
  key = System_String__Concat_5302810("SettingsPopup.",sub,".",item,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  label = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LabeledDescriptor
                     (id,sub,label,kind,adapter,tooltipItem,changed,in_stack_ffffffffffffffc0);
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar1->fields).LabelKey = key;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).LabelKey);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$LabeledDescriptor
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LabeledDescriptor (System_String_o* id, System_String_o* sub, System_String_o* label, int32_t kind, Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e4adb0

Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LabeledDescriptor
          (System_String_o *id,System_String_o *sub,System_String_o *label,int32_t kind,
          Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,System_String_o *tooltipItem,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter_00;
  bool bVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass18_0_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this_00;
  System_String_o *pSVar2;
  System_Func_string__o *__this_01;
  
  if (Il2CppMethodInitialized_07548625 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows_c__DisplayClass18_0_LabeledDescriptor_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows_c__DisplayClass18_0);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    Il2CppMethodInitialized_07548625 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows_c__DisplayClass18_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass18_0_o *)0x0) {
    (__this->fields).adapter = adapter;
    Il2CppCodeGenWriteBarrier(&(__this->fields).adapter);
    adapter_00 = (__this->fields).adapter;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
    pSVar2 = (System_String_o *)0x0;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor___ctor
              (__this_00,id,label,kind,adapter_00,(MethodInfo *)0x0);
    bVar1 = System_String__IsNullOrEmpty(tooltipItem,(MethodInfo *)0x0);
    if (!bVar1) {
      if (Il2CppMethodInitialized_0754862d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
        il2cpp_codegen_initialize_runtime_metadata(&".");
        Il2CppMethodInitialized_0754862d = '\x01';
      }
      pSVar2 = System_String__Concat_5302810
                         ("SettingsPopup.",sub,".",tooltipItem,(MethodInfo *)0x0);
    }
    if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      (__this_00->fields).TooltipKey = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).TooltipKey);
      (__this_00->fields).SearchTitle = label;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).SearchTitle);
      pSVar2 = System_String__Concat_5301f10(sub," ",label,(MethodInfo *)0x0);
      (__this_00->fields).SearchKeywords = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).SearchKeywords);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
      System_Func_object____ctor
                ((System_Func_object__o *)__this_01,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows_c__DisplayClass18_0_LabeledDescriptor_b__0
                 ,(MethodInfo_4F0C6A0 *)0x0);
      (__this_00->fields).DirtyValue = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).DirtyValue);
      (__this_00->fields).OnChanged = changed;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).OnChanged);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$SliderRow
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SliderRow (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x5e4a6b0

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SliderRow
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this;
  
  if (descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  (descriptor->fields).ShowValue = true;
  if (Il2CppMethodInitialized_07548623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_07548623 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow)
  ;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(__this,descriptor,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$IndexedChoice
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__IndexedChoice (System_String_o* id, System_String_o* sub, System_String_o* item, int32_t kind, Settings_IntSetting_o* setting, System_String_array* labels, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e4a7a0

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__IndexedChoice
          (System_String_o *id,System_String_o *sub,System_String_o *item,int32_t kind,
          Settings_IntSetting_o *setting,System_String_array *labels,System_String_o *tooltipItem,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_07548626 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    Il2CppMethodInitialized_07548626 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter___ctor(__this,setting,(MethodInfo *)0x0);
  descriptor = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                         (id,sub,item,kind,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                          tooltipItem,changed,in_stack_ffffffffffffffc0);
  pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__IndexedOptions(labels,(MethodInfo *)0x0);
  if (descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  (descriptor->fields).Options = pGVar1;
  Il2CppCodeGenWriteBarrier(&(descriptor->fields).Options);
  if (Il2CppMethodInitialized_07548623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_07548623 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(__this_00,descriptor,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$StringChoice
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__StringChoice (System_String_o* id, System_String_o* sub, System_String_o* item, int32_t kind, Settings_StringSetting_o* setting, System_String_array* values, System_String_array* labels, System_String_o* tooltipItem, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e4aa20

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__StringChoice
          (System_String_o *id,System_String_o *sub,System_String_o *item,int32_t kind,
          Settings_StringSetting_o *setting,System_String_array *values,System_String_array *labels,
          System_String_o *tooltipItem,System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_07548627 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    Il2CppMethodInitialized_07548627 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor(__this,setting,(MethodInfo *)0x0);
  descriptor = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                         (id,sub,item,kind,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                          tooltipItem,changed,in_stack_ffffffffffffffc0);
  pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedStringOptions
                     (values,labels,(MethodInfo *)0x0);
  if (descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  (descriptor->fields).Options = pGVar1;
  Il2CppCodeGenWriteBarrier(&(descriptor->fields).Options);
  if (Il2CppMethodInitialized_07548623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_07548623 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(__this_00,descriptor,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$LocalizedOptions
// il2cpp: System_String_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LocalizedOptions (System_String_o* sub, System_String_o* item, const MethodInfo* method);
// 0x5e4a710

System_String_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LocalizedOptions
          (System_String_o *sub,System_String_o *item,MethodInfo *method)

{
  System_String_o *item_00;
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_07548628 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    Il2CppMethodInitialized_07548628 = '\x01';
  }
  item_00 = System_String__Concat_52f0320(item,"Options",(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleOptions_5caf470("SettingsPopup",sub,item_00,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$DataOptions
// il2cpp: System_String_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__DataOptions (System_String_o* sub, System_String_o* item, System_String_array* values, const MethodInfo* method);
// 0x5e4a8a0

System_String_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__DataOptions
          (System_String_o *sub,System_String_o *item,System_String_array *values,MethodInfo *method)

{
  System_String_o *item_00;
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_07548629 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    Il2CppMethodInitialized_07548629 = '\x01';
  }
  item_00 = System_String__Concat_52f0320(item,"Options",(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleOptions_5caf530("SettingsPopup",sub,item_00,values,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$SafeLanguages
// il2cpp: System_String_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeLanguages (const MethodInfo* method);
// 0x5e3ef40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3ef69: jmp 0x5e3efc9

System_String_array * Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeLanguages(MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_0754862a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_0754862a = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pSVar2 = UI_UIManager__GetLanguages((MethodInfo *)0x0);
  }
  else {
    pSVar2 = UI_UIManager__GetLanguages((MethodInfo *)0x0);
  }
  if (pSVar2 != (System_String_array *)0x0) {
    if (pSVar2->max_length != 0) {
      return pSVar2;
    }
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
  if (pSVar2 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pSVar2->m_Items[0] = "English";
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$SafeThemes
// il2cpp: System_String_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeThemes (const MethodInfo* method);
// 0x5e4afd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4aff9: jmp 0x5e4b065

System_String_array * Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeThemes(MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_0754862b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Dark");
    il2cpp_codegen_initialize_runtime_metadata(&"Light");
    Il2CppMethodInitialized_0754862b = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pSVar2 = UI_UIManager__GetUIThemes((MethodInfo *)0x0);
  }
  else {
    pSVar2 = UI_UIManager__GetUIThemes((MethodInfo *)0x0);
  }
  if (pSVar2 != (System_String_array *)0x0) {
    if (pSVar2->max_length != 0) {
      return pSVar2;
    }
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if (pSVar2 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "Light";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = "Dark";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      return pSVar2;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$SafeResolutions
// il2cpp: System_String_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeResolutions (const MethodInfo* method);
// 0x5e40990
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e409b9: jmp 0x5e40a19

System_String_array * Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeResolutions(MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_0754862c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"800 x 600");
    Il2CppMethodInitialized_0754862c = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
    pSVar2 = ApplicationManagers_FullscreenHandler__GetResolutionOptions((MethodInfo *)0x0);
  }
  else {
    pSVar2 = ApplicationManagers_FullscreenHandler__GetResolutionOptions((MethodInfo *)0x0);
  }
  if (pSVar2 != (System_String_array *)0x0) {
    if (pSVar2->max_length != 0) {
      return pSVar2;
    }
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
  if (pSVar2 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pSVar2->m_Items[0] = "800 x 600";
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Key
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Key (System_String_o* sub, System_String_o* item, const MethodInfo* method);
// 0x5e45450

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Key
          (System_String_o *sub,System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754862d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_0754862d = '\x01';
  }
  pSVar1 = System_String__Concat_5302810
                     ("SettingsPopup.",sub,".",item,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$CommonKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__CommonKey (System_String_o* item, const MethodInfo* method);
// 0x5e459e0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__CommonKey(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754862e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Common.");
    Il2CppMethodInitialized_0754862e = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("Common.",item,(MethodInfo *)0x0);
  return pSVar1;
}


