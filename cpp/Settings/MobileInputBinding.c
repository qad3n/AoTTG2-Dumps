// Type: Settings.MobileInputBinding
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Settings/MobileInputBinding.cs
// Prior real C# source: none
// --------------------------------

// Settings.MobileInputBinding$$get_Id
// il2cpp: System_String_o* Settings_MobileInputBinding__get_Id (Settings_MobileInputBinding_o* __this, const MethodInfo* method);
// 0x59cce00

System_String_o *
Settings_MobileInputBinding__get_Id(Settings_MobileInputBinding_o *__this,MethodInfo *method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Settings.MobileInputBinding$$get_Group
// il2cpp: System_String_o* Settings_MobileInputBinding__get_Group (Settings_MobileInputBinding_o* __this, const MethodInfo* method);
// 0x59cce10

System_String_o *
Settings_MobileInputBinding__get_Group(Settings_MobileInputBinding_o *__this,MethodInfo *method)

{
  return (__this->fields)._Group_k__BackingField;
}


// Settings.MobileInputBinding$$get_Name
// il2cpp: System_String_o* Settings_MobileInputBinding__get_Name (Settings_MobileInputBinding_o* __this, const MethodInfo* method);
// 0x59cce20

System_String_o *
Settings_MobileInputBinding__get_Name(Settings_MobileInputBinding_o *__this,MethodInfo *method)

{
  return (__this->fields)._Name_k__BackingField;
}


// Settings.MobileInputBinding$$get_Keybind
// il2cpp: Settings_KeybindSetting_o* Settings_MobileInputBinding__get_Keybind (Settings_MobileInputBinding_o* __this, const MethodInfo* method);
// 0x59cce30

Settings_KeybindSetting_o *
Settings_MobileInputBinding__get_Keybind(Settings_MobileInputBinding_o *__this,MethodInfo *method)

{
  return (__this->fields)._Keybind_k__BackingField;
}


// Settings.MobileInputBinding$$.ctor
// il2cpp: void Settings_MobileInputBinding___ctor (Settings_MobileInputBinding_o* __this, System_String_o* id, System_String_o* group, System_String_o* name, Settings_KeybindSetting_o* keybind, const MethodInfo* method);
// 0x59cce40

void Settings_MobileInputBinding___ctor
               (Settings_MobileInputBinding_o *__this,System_String_o *id,System_String_o *group,
               System_String_o *name,Settings_KeybindSetting_o *keybind,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Id_k__BackingField = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Id_k__BackingField);
  (__this->fields)._Group_k__BackingField = group;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Group_k__BackingField);
  (__this->fields)._Name_k__BackingField = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField);
  (__this->fields)._Keybind_k__BackingField = keybind;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Keybind_k__BackingField);
  return;
}


