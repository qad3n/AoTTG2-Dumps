// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsRows.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows.<>c__DisplayClass15_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass15_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass15_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass15_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows.<>c__DisplayClass15_0$$<Descriptor>b__0
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass15_0___Descriptor_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x1823a2570

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass15_0___Descriptor_b__0
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass15_0_o *__this,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347b0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    Il2CppMethodInitialized_184347b0f = '\x01';
  }
  if ((__this->fields).adapter != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
    pSVar1 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                        (Il2CppObject *)(__this->fields).adapter);
    return pSVar1;
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Switch
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_BoolSetting_o* setting, System_String_o* label, System_String_o* tooltipItem, System_String_o* tooltip, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x182392880

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_BoolSetting_o *setting,
          System_String_o *label,System_String_o *tooltipItem,System_String_o *tooltip,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  
  if (Il2CppMethodInitialized_184347af8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
    Il2CppMethodInitialized_184347af8 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,(System_Reflection_MethodInfo_o *)setting,
             (MethodInfo *)0x0);
  method_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                        (id,sub,item,label,0,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this
                         ,tooltipItem,tooltip,changed,true,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347b05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_184347b05 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
            ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)__this_00,(System_String_o *)method_00,
             (MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Input
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_IntSetting_o* setting, System_String_o* label, System_String_o* tooltipItem, System_String_o* tooltip, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x182391a80

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_IntSetting_o *setting,
          System_String_o *label,System_String_o *tooltipItem,System_String_o *tooltip,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  
  if (Il2CppMethodInitialized_184347af9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    Il2CppMethodInitialized_184347af9 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,(System_Reflection_MethodInfo_o *)setting,
             (MethodInfo *)0x0);
  method_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                        (id,sub,item,label,4,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this
                         ,tooltipItem,tooltip,changed,true,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347b05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_184347b05 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
            ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)__this_00,(System_String_o *)method_00,
             (MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Input
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_FloatSetting_o* setting, System_String_o* label, System_String_o* tooltipItem, System_String_o* tooltip, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x182391b80

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_2391b80
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_FloatSetting_o *setting,
          System_String_o *label,System_String_o *tooltipItem,System_String_o *tooltip,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  
  if (Il2CppMethodInitialized_184347afa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
    Il2CppMethodInitialized_184347afa = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,(System_Reflection_MethodInfo_o *)setting,
             (MethodInfo *)0x0);
  method_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                        (id,sub,item,label,4,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this
                         ,tooltipItem,tooltip,changed,true,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347b05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_184347b05 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
            ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)__this_00,(System_String_o *)method_00,
             (MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Input
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_StringSetting_o* setting, System_String_o* label, System_String_o* tooltipItem, System_String_o* tooltip, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x182391c80

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_2391c80
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_StringSetting_o *setting,
          System_String_o *label,System_String_o *tooltipItem,System_String_o *tooltip,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  
  if (Il2CppMethodInitialized_184347afb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    Il2CppMethodInitialized_184347afb = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,(System_Reflection_MethodInfo_o *)setting,
             (MethodInfo *)0x0);
  method_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                        (id,sub,item,label,4,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this
                         ,tooltipItem,tooltip,changed,true,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347b05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_184347b05 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
            ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)__this_00,(System_String_o *)method_00,
             (MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Slider
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_FloatSetting_o* setting, System_String_o* label, System_String_o* tooltipItem, System_String_o* tooltip, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x182392660

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_FloatSetting_o *setting,
          System_String_o *label,System_String_o *tooltipItem,System_String_o *tooltip,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347afc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
    Il2CppMethodInitialized_184347afc = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,(System_Reflection_MethodInfo_o *)setting,
             (MethodInfo *)0x0);
  method_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                        (id,sub,item,label,3,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this
                         ,tooltipItem,tooltip,changed,true,(MethodInfo *)0x0);
  if (method_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    bVar1 = Il2CppMethodInitialized_184347b05 == '\0';
    (method_00->fields).ShowValue = true;
    if (bVar1) {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
      Il2CppMethodInitialized_184347b05 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
              ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)__this_00,(System_String_o *)method_00,
               (MethodInfo *)0x0);
    return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Slider
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_IntSetting_o* setting, System_String_o* label, System_String_o* tooltipItem, System_String_o* tooltip, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x182392770

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider_2392770
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_IntSetting_o *setting,
          System_String_o *label,System_String_o *tooltipItem,System_String_o *tooltip,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347afd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    Il2CppMethodInitialized_184347afd = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,(System_Reflection_MethodInfo_o *)setting,
             (MethodInfo *)0x0);
  method_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                        (id,sub,item,label,3,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this
                         ,tooltipItem,tooltip,changed,true,(MethodInfo *)0x0);
  if (method_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    bVar1 = Il2CppMethodInitialized_184347b05 == '\0';
    (method_00->fields).ShowValue = true;
    if (bVar1) {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
      Il2CppMethodInitialized_184347b05 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
              ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)__this_00,(System_String_o *)method_00,
               (MethodInfo *)0x0);
    return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_IntSetting_o* setting, System_String_o* label, System_String_array* options, System_String_o* tooltipItem, System_String_o* tooltip, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x182391850

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_IntSetting_o *setting,
          System_String_o *label,System_String_array *options,System_String_o *tooltipItem,
          System_String_o *tooltip,System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *method_00;
  System_String_array *localizedText;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *value;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  
  if (Il2CppMethodInitialized_184347afe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    Il2CppMethodInitialized_184347afe = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,(System_Reflection_MethodInfo_o *)setting,
             (MethodInfo *)0x0);
  method_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                        (id,sub,item,label,1,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this
                         ,tooltipItem,tooltip,changed,true,(MethodInfo *)0x0);
  localizedText =
       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__OptionLabels(sub,item,options,(MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedIndexedOptions
                    (options,localizedText,(MethodInfo *)0x0);
  if (method_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    (method_00->fields).Options = value;
    Il2CppCodeGenWriteBarrier(&(method_00->fields).Options,value);
    if (Il2CppMethodInitialized_184347b05 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
      Il2CppMethodInitialized_184347b05 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
              ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)__this_00,(System_String_o *)method_00,
               (MethodInfo *)0x0);
    return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Dropdown
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_StringSetting_o* setting, System_String_o* label, System_String_array* options, System_String_o* tooltipItem, System_String_o* tooltip, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x182391710

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown_2391710
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_StringSetting_o *setting,
          System_String_o *label,System_String_array *options,System_String_o *tooltipItem,
          System_String_o *tooltip,System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *method_00;
  System_String_array *localizedText;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *value;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  
  if (Il2CppMethodInitialized_184347aff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    Il2CppMethodInitialized_184347aff = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,(System_Reflection_MethodInfo_o *)setting,
             (MethodInfo *)0x0);
  method_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                        (id,sub,item,label,1,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this
                         ,tooltipItem,tooltip,changed,true,(MethodInfo *)0x0);
  localizedText =
       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__OptionLabels(sub,item,options,(MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedStringOptions
                    (options,localizedText,(MethodInfo *)0x0);
  if (method_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    (method_00->fields).Options = value;
    Il2CppCodeGenWriteBarrier(&(method_00->fields).Options,value);
    if (Il2CppMethodInitialized_184347b05 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
      Il2CppMethodInitialized_184347b05 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
              ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)__this_00,(System_String_o *)method_00,
               (MethodInfo *)0x0);
    return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Select
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_IntSetting_o* setting, System_String_o* label, System_String_array* options, System_String_o* tooltipItem, System_String_o* tooltip, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x182392520

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_IntSetting_o *setting,
          System_String_o *label,System_String_array *options,System_String_o *tooltipItem,
          System_String_o *tooltip,System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *method_00;
  System_String_array *localizedText;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *value;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  
  if (Il2CppMethodInitialized_184347b00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    Il2CppMethodInitialized_184347b00 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,(System_Reflection_MethodInfo_o *)setting,
             (MethodInfo *)0x0);
  method_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                        (id,sub,item,label,2,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this
                         ,tooltipItem,tooltip,changed,true,(MethodInfo *)0x0);
  localizedText =
       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__OptionLabels(sub,item,options,(MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedIndexedOptions
                    (options,localizedText,(MethodInfo *)0x0);
  if (method_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    (method_00->fields).Options = value;
    Il2CppCodeGenWriteBarrier(&(method_00->fields).Options,value);
    if (Il2CppMethodInitialized_184347b05 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
      Il2CppMethodInitialized_184347b05 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
              ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)__this_00,(System_String_o *)method_00,
               (MethodInfo *)0x0);
    return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Select
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_StringSetting_o* setting, System_String_o* label, System_String_array* options, System_String_o* tooltipItem, System_String_o* tooltip, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x1823923e0

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select_23923e0
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_StringSetting_o *setting,
          System_String_o *label,System_String_array *options,System_String_o *tooltipItem,
          System_String_o *tooltip,System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *method_00;
  System_String_array *localizedText;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *value;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  
  if (Il2CppMethodInitialized_184347b01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    Il2CppMethodInitialized_184347b01 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,(System_Reflection_MethodInfo_o *)setting,
             (MethodInfo *)0x0);
  method_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                        (id,sub,item,label,2,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this
                         ,tooltipItem,tooltip,changed,true,(MethodInfo *)0x0);
  localizedText =
       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__OptionLabels(sub,item,options,(MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedStringOptions
                    (options,localizedText,(MethodInfo *)0x0);
  if (method_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    (method_00->fields).Options = value;
    Il2CppCodeGenWriteBarrier(&(method_00->fields).Options,value);
    if (Il2CppMethodInitialized_184347b05 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
      Il2CppMethodInitialized_184347b05 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
              ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)__this_00,(System_String_o *)method_00,
               (MethodInfo *)0x0);
    return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Color
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Color (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_ColorSetting_o* setting, System_String_o* label, System_String_o* tooltipItem, System_String_o* tooltip, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x182391330

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Color
          (System_String_o *id,System_String_o *sub,System_String_o *item,Settings_ColorSetting_o *setting,
          System_String_o *label,System_String_o *tooltipItem,System_String_o *tooltip,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o *__this_00;
  
  if (Il2CppMethodInitialized_184347b02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow);
    Il2CppMethodInitialized_184347b02 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,(System_Reflection_MethodInfo_o *)setting,
             (MethodInfo *)0x0);
  method_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                        (id,sub,item,label,6,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this
                         ,tooltipItem,tooltip,changed,true,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___ctor
            ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)__this_00,(System_String_o *)method_00,
             (MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$ToggleColor
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__ToggleColor (System_String_o* id, System_String_o* sub, System_String_o* item, Settings_ToggleColorSetting_o* setting, System_String_o* label, System_String_o* tooltipItem, System_String_o* tooltip, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x182392970

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__ToggleColor
          (System_String_o *id,System_String_o *sub,System_String_o *item,
          Settings_ToggleColorSetting_o *setting,System_String_o *label,System_String_o *tooltipItem,
          System_String_o *tooltip,System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *value;
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this_01;
  Settings_BoolSetting_o *method_00;
  Settings_ColorSetting_o *method_01;
  
  if (Il2CppMethodInitialized_184347b03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow);
    Il2CppMethodInitialized_184347b03 = '\x01';
  }
  if (setting == (Settings_ToggleColorSetting_o *)0x0) {
    method_00 = (Settings_BoolSetting_o *)0x0;
  }
  else {
    method_00 = (setting->fields).Enabled;
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,(System_Reflection_MethodInfo_o *)method_00,
             (MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                    (id,sub,item,label,6,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                     tooltipItem,tooltip,changed,true,(MethodInfo *)0x0);
  method_01 = (Settings_ColorSetting_o *)0x0;
  if (setting != (Settings_ToggleColorSetting_o *)0x0) {
    method_01 = (setting->fields).Color;
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this_00,(System_Reflection_MethodInfo_o *)method_01
             ,(MethodInfo *)0x0);
  if (value != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    (value->fields).SecondaryAdapter = (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(value->fields).SecondaryAdapter,__this_00);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow
                          );
    Gisketch_Aottg2UI_Code_AottgComponent___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
    (__this_01->fields)._descriptor = value;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields)._descriptor,value);
    return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Dynamic
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dynamic (System_String_o* id, System_String_o* sub, System_String_o* item, System_String_o* label, System_Func_string__o* text, System_String_o* fallback, System_String_o* bindingKey, System_Func_string__o* dirtyValue, const MethodInfo* method);
// 0x182391990

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dynamic
          (System_String_o *id,System_String_o *sub,System_String_o *item,System_String_o *label,
          System_Func_string__o *text,System_String_o *fallback,System_String_o *bindingKey,
          System_Func_string__o *dirtyValue,MethodInfo *method)

{
  System_String_o *labelKey;
  Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this;
  
  if (Il2CppMethodInitialized_184347b04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow)
    ;
    Il2CppMethodInitialized_184347b04 = '\x01';
  }
  if (Il2CppMethodInitialized_184347b0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184347b0d = '\x01';
  }
  labelKey = System_String__Concat_1969590
                       ("SettingsPopup.",sub,".",item,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow___ctor
            (__this,id,label,text,(System_String_o *)0x0,fallback,labelKey,(System_String_o *)0x0,bindingKey,
             dirtyValue,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Row
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Row (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x182392120

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Row
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this;
  
  if (Il2CppMethodInitialized_184347b05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_184347b05 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow)
  ;
  UnityEngine_Scripting_RequiredByNativeCodeAttribute___ctor_12b8cd0
            ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)__this,(System_String_o *)descriptor,
             (MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Descriptor
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor (System_String_o* id, System_String_o* sub, System_String_o* item, System_String_o* label, int32_t kind, Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, System_String_o* tooltipItem, System_String_o* tooltip, System_Action_GisketchActionContext__o* changed, bool bindLabelToLocale, const MethodInfo* method);
// 0x182391460

Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
          (System_String_o *id,System_String_o *sub,System_String_o *item,System_String_o *label,int32_t kind,
          Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,System_String_o *tooltipItem,
          System_String_o *tooltip,System_Action_GisketchActionContext__o *changed,bool bindLabelToLocale,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter_00;
  bool bVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass15_0_o *object;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this;
  DG_Tweening_Core_DOGetter_Vector2__o *__this_00;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347b06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows_c__DisplayClass15_0_Descriptor_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows_c__DisplayClass15_0);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    Il2CppMethodInitialized_184347b06 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows_c__DisplayClass15_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows___c__DisplayClass15_0_o *)0x0) {
    (object->fields).adapter = adapter;
    Il2CppCodeGenWriteBarrier(&(object->fields).adapter,adapter);
    if (Il2CppMethodInitialized_184347b0d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
      il2cpp_codegen_initialize_runtime_metadata(&".");
      Il2CppMethodInitialized_184347b0d = '\x01';
    }
    pSVar2 = System_String__Concat_1969590
                       ("SettingsPopup.",sub,".",item,(MethodInfo *)0x0);
    if (bindLabelToLocale) {
      label = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LocalizedLabel
                        (pSVar2,label,(MethodInfo *)0x0);
    }
    adapter_00 = (object->fields).adapter;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor___ctor
              (__this,id,label,kind,adapter_00,(MethodInfo *)0x0);
    value = (System_String_o *)0x0;
    if (bindLabelToLocale) {
      value = pSVar2;
    }
    if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      (__this->fields).LabelKey = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields).LabelKey,value);
      (__this->fields).Tooltip = tooltip;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Tooltip,tooltip);
      bVar1 = System_String__IsNullOrEmpty(tooltipItem,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar2 = (System_String_o *)0x0;
      }
      else {
        if (Il2CppMethodInitialized_184347b0d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
          il2cpp_codegen_initialize_runtime_metadata(&".");
          Il2CppMethodInitialized_184347b0d = '\x01';
        }
        pSVar2 = System_String__Concat_1969590
                           ("SettingsPopup.",sub,".",tooltipItem,(MethodInfo *)0x0);
      }
      (__this->fields).TooltipKey = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).TooltipKey,pSVar2);
      (__this->fields).SearchTitle = label;
      Il2CppCodeGenWriteBarrier(&(__this->fields).SearchTitle,label);
      pSVar2 = System_String__Concat_1969b70(sub," ",label,(MethodInfo *)0x0);
      (__this->fields).SearchKeywords = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).SearchKeywords,pSVar2);
      __this_00 = (DG_Tweening_Core_DOGetter_Vector2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
      System_Func_object____ctor
                (__this_00,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows_c__DisplayClass15_0_Descriptor_b__0
                 ,(MethodInfo_1387740 *)0x0);
      (__this->fields).DirtyValue = (System_Func_string__o *)__this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).DirtyValue,__this_00);
      (__this->fields).OnChanged = changed;
      Il2CppCodeGenWriteBarrier(&(__this->fields).OnChanged,changed);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$LocalizedLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LocalizedLabel (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x182391e90

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LocalizedLabel
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  System_String_o *subCategory;
  System_String_array *pSVar1;
  System_String_o *item;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347b07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347b07 = '\x01';
  }
  if (key != (System_String_o *)0x0) {
    pSVar1 = System_String__Split(key,0x2e,0,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length == 0) {
label_182391ffc:
        ThrowIndexOutOfRangeException();
      }
      pSVar2 = pSVar1->m_Items[0];
      pSVar1 = System_String__Split(key,0x2e,0,(MethodInfo *)0x0);
      if (pSVar1 != (System_String_array *)0x0) {
        if ((uint)pSVar1->max_length < 2) goto label_182391ffc;
        subCategory = pSVar1->m_Items[1];
        if (Il2CppMethodInitialized_184347b08 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&".");
          Il2CppMethodInitialized_184347b08 = '\x01';
        }
        pSVar1 = System_String__Split(key,0x2e,0,(MethodInfo *)0x0);
        if (pSVar1 != (System_String_array *)0x0) {
          if ((int)pSVar1->max_length < 3) {
            item = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
          }
          else {
            item = System_String__Join_196f060
                             (".",pSVar1,2,(int)pSVar1->max_length + -2,(MethodInfo *)0x0);
          }
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar2 = UI_UIManager__GetLocale
                             (pSVar2,subCategory,item,"",fallback,(MethodInfo *)0x0);
          return pSVar2;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$KeyItem
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__KeyItem (System_String_o* key, const MethodInfo* method);
// 0x182391d80

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__KeyItem(System_String_o *key,MethodInfo *method)

{
  System_String_array *value;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347b08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184347b08 = '\x01';
  }
  if (key != (System_String_o *)0x0) {
    value = System_String__Split(key,0x2e,0,(MethodInfo *)0x0);
    if (value != (System_String_array *)0x0) {
      if (2 < (int)value->max_length) {
        pSVar1 = System_String__Join_196f060
                           (".",value,2,(int)value->max_length + -2,(MethodInfo *)0x0);
        return pSVar1;
      }
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$OptionLabels
// il2cpp: System_String_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__OptionLabels (System_String_o* sub, System_String_o* item, System_String_array* fallback, const MethodInfo* method);
// 0x182392010

System_String_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__OptionLabels
          (System_String_o *sub,System_String_o *item,System_String_array *fallback,MethodInfo *method)

{
  bool bVar1;
  System_String_o *item_00;
  System_String_array *pSVar2;
  int iVar3;
  
  if (Il2CppMethodInitialized_184347b09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    Il2CppMethodInitialized_184347b09 = '\x01';
  }
  item_00 = System_String__Concat_1969e50(item,"Options",(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  bVar1 = UI_UIManager__HasLocale("SettingsPopup",sub,item_00,"",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar2 = UI_UIManager__GetLocaleArray
                       ("SettingsPopup",sub,item_00,"",(MethodInfo *)0x0);
    if (pSVar2 != (System_String_array *)0x0) {
      if (fallback == (System_String_array *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)fallback->max_length;
      }
      if ((int)pSVar2->max_length == iVar3) {
        return pSVar2;
      }
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$SafeLanguages
// il2cpp: System_String_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeLanguages (const MethodInfo* method);
// 0x182392180

System_String_array * Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeLanguages(MethodInfo *method)

{
  System_String_o *value;
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_184347b0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_184347b0a = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLanguages((MethodInfo *)0x0);
  if ((pSVar1 == (System_String_array *)0x0) || (pSVar1->max_length == 0)) {
    pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
    value = "English";
    if (pSVar1 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pSVar1->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar1->m_Items[0] = "English";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items,value);
  }
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$SafeThemes
// il2cpp: System_String_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeThemes (const MethodInfo* method);
// 0x182392300

System_String_array * Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeThemes(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_184347b0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Dark");
    il2cpp_codegen_initialize_runtime_metadata(&"Light");
    Il2CppMethodInitialized_184347b0b = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetUIThemes((MethodInfo *)0x0);
  if ((pSVar2 != (System_String_array *)0x0) && (pSVar2->max_length != 0)) {
    return pSVar2;
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  pSVar1 = "Light";
  if (pSVar2 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "Light";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
    pSVar1 = "Dark";
    if (1 < (uint)pSVar2->max_length) {
      pSVar2->m_Items[1] = "Dark";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
      return pSVar2;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$SafeResolutions
// il2cpp: System_String_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeResolutions (const MethodInfo* method);
// 0x182392240

System_String_array * Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeResolutions(MethodInfo *method)

{
  System_String_o *value;
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_184347b0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"800 x 600");
    Il2CppMethodInitialized_184347b0c = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  pSVar1 = ApplicationManagers_FullscreenHandler__GetResolutionOptions((MethodInfo *)0x0);
  if ((pSVar1 == (System_String_array *)0x0) || (pSVar1->max_length == 0)) {
    pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
    value = "800 x 600";
    if (pSVar1 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pSVar1->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar1->m_Items[0] = "800 x 600";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items,value);
  }
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$Key
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Key (System_String_o* sub, System_String_o* item, const MethodInfo* method);
// 0x182391e20

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Key
          (System_String_o *sub,System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347b0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184347b0d = '\x01';
  }
  pSVar1 = System_String__Concat_1969590
                     ("SettingsPopup.",sub,".",item,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRows$$CommonKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__CommonKey (System_String_o* item, const MethodInfo* method);
// 0x182391420

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__CommonKey(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347b0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Common.");
    Il2CppMethodInitialized_184347b0e = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50("Common.",item,(MethodInfo *)0x0);
  return pSVar1;
}


