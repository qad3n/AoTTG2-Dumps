// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingDescriptor
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingDescriptor.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingDescriptor$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* __this, System_String_o* id, System_String_o* label, int32_t kind, Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, const MethodInfo* method);
// 0x4460940

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this,System_String_o *id,
               System_String_o *label,int32_t kind,
               Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,MethodInfo *method)

{
  undefined8 uVar1;
  
  if (g_data_057ae78c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
    g_data_057ae78c = '\x01';
  }
  (__this->fields).ShowValue = 8;
  uVar1 = il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption,0);
  *(undefined8 *)&(__this->fields).MaxVisibleItems = uVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).MaxVisibleItems);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  (__this->fields).Label = label;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Label,label);
  (__this->fields).Kind = kind;
  (__this->fields).Adapter = adapter;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Adapter,adapter);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingDescriptor$$Changed
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x44609f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined8 in_RDX;
  
  pSVar1 = (__this->fields).ReadOnlyText;
  if (pSVar1 != (System_String_o *)0x0) {
    (*(code *)pSVar1[1].klass)(pSVar1[2].fields,pSVar1[1].fields,in_RDX,pSVar1[1].klass);
    return;
  }
  return;
}


