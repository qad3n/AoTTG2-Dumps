// Type: Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgBoolSettingAdapter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, Settings_BoolSetting_o* setting, const MethodInfo* method);
// 0x445fef0

void Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this,
               Settings_BoolSetting_o *setting,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._setting = setting;
  il2cpp_runtime_helper_022b4080(&__this->fields,setting);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$get_TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, const MethodInfo* method);
// 0x445ff20

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this,MethodInfo *method)

{
  char cVar1;
  
  if (g_data_057ae77c == '\0') {
    il2cpp_runtime_helper_023445d0(&"false");
    il2cpp_runtime_helper_023445d0(&"true");
    g_data_057ae77c = '\x01';
  }
  cVar1 = (*(__this->klass->vtable)._18_get_BoolValue.methodPtr)
                    (__this,(__this->klass->vtable)._18_get_BoolValue.method);
  if (cVar1 != '\0') {
    return "true";
  }
  return "false";
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$get_BoolValue
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_BoolValue (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, const MethodInfo* method);
// 0x445ff80

bool_conflict
Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_BoolValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  
  if (g_data_057ae77d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae77d = '\x01';
  }
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pSVar1 >> 8),*(char *)((long)&(pSVar1->fields).DefaultValue + 1) != '\0');
  }
  return 0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$get_FloatValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_FloatValue (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, const MethodInfo* method);
// 0x445ffc0

float Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_FloatValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this,MethodInfo *method)

{
  char cVar1;
  
  cVar1 = (*(__this->klass->vtable)._18_get_BoolValue.methodPtr)
                    (__this,(__this->klass->vtable)._18_get_BoolValue.method);
  if (cVar1 == '\0') {
    return 0.0;
  }
  return 1.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$SetBool
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__SetBool (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, bool value, const MethodInfo* method);
// 0x445fff0

void Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__SetBool
               (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this,bool_conflict value,
               MethodInfo *method)

{
  Settings_BoolSetting_o *__this_00;
  
  if (g_data_057ae77e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae77e = '\x01';
  }
  __this_00 = (__this->fields)._setting;
  if (__this_00 != (Settings_BoolSetting_o *)0x0) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)__this_00,value & 0xff,MethodInfo_Void_set_Value);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$SetText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__SetText (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4460040

void Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__SetText
               (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_c *pGVar1;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  uint uVar3;
  System_String_Fields SVar4;
  System_String_o *__this_00;
  
  if (g_data_057ae77f == '\0') {
    il2cpp_runtime_helper_023445d0(&"true");
    il2cpp_runtime_helper_023445d0(&"1");
    g_data_057ae77f = '\x01';
  }
  SVar4 = "true";
  __this_00 = value;
  bVar2 = System_String__Equals_3af50f0(value,(System_String_o *)"true",5,(MethodInfo *)0x0);
  uVar3 = 1;
  if ((char)bVar2 == '\0') {
    SVar4 = "1";
    uVar3 = System_String__op_Equality(value,(System_String_o *)"1",(MethodInfo *)0x0);
    __this_00 = value;
  }
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *)0x0) {
    pGVar1 = __this->klass;
    vtableDispatch = (pGVar1->vtable)._24_SetBool.methodPtr;
    (*vtableDispatch)
              (__this,(ulong)(uVar3 & 0xff),(pGVar1->vtable)._24_SetBool.method,pGVar1,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  __this_00->fields = SVar4;
  il2cpp_runtime_helper_022b4080(&__this_00->fields,SVar4);
  return;
}


