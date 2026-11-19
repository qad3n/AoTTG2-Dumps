// Type: Settings.UnsavedProfileSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Settings/UnsavedProfileSettings.cs
// Prior real C# source: none
// --------------------------------

// Settings.UnsavedProfileSettings$$Setup
// il2cpp: void Settings_UnsavedProfileSettings__Setup (Settings_UnsavedProfileSettings_o* __this, const MethodInfo* method);
// 0x5b549b0

void Settings_UnsavedProfileSettings__Setup(Settings_UnsavedProfileSettings_o *__this,MethodInfo *method)

{
  Settings_BaseSettingsContainer__RegisterSettings((Settings_BaseSettingsContainer_o *)__this,method);
  (*(__this->klass->vtable)._12_Apply.methodPtr)(__this,(__this->klass->vtable)._12_Apply.method);
  return;
}


// Settings.UnsavedProfileSettings$$.ctor
// il2cpp: void Settings_UnsavedProfileSettings___ctor (Settings_UnsavedProfileSettings_o* __this, const MethodInfo* method);
// 0x5b54ed0

void Settings_UnsavedProfileSettings___ctor(Settings_UnsavedProfileSettings_o *__this,MethodInfo *method)

{
  Settings_ProfileSettings___ctor(__this,method);
  return;
}


