// Type: Settings.SaveableSettingsContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/SaveableSettingsContainer.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingTypes/SaveableSettingsContainer.cs  [CHANGED since prior version]
// --------------------------------

// Settings.SaveableSettingsContainer$$get_FolderPath
// il2cpp: System_String_o* Settings_SaveableSettingsContainer__get_FolderPath (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f11010

System_String_o *
Settings_SaveableSettingsContainer__get_FolderPath
          (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703c94 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    DAT_05703c94 = '\x01';
    iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30);
}


// Settings.SaveableSettingsContainer$$get_Encrypted
// il2cpp: bool Settings_SaveableSettingsContainer__get_Encrypted (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f11080

bool_conflict
Settings_SaveableSettingsContainer__get_Encrypted
          (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  return 0;
}


// Settings.SaveableSettingsContainer$$Setup
// il2cpp: void Settings_SaveableSettingsContainer__Setup (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f11090

void Settings_SaveableSettingsContainer__Setup
               (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  Settings_BaseSettingsContainer__RegisterSettings
            ((Settings_BaseSettingsContainer_o *)__this,method);
  (*(__this->klass->vtable)._17_Load.methodPtr)(__this,(__this->klass->vtable)._17_Load.method);
  vtable_dispatch = (__this->klass->vtable)._11_Apply.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._11_Apply.method,extraout_RDX,vtable_dispatch);
  return;
}


// Settings.SaveableSettingsContainer$$Save
// il2cpp: void Settings_SaveableSettingsContainer__Save (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f110d0

void Settings_SaveableSettingsContainer__Save
               (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  char cVar1;
  System_String_o *pSVar2;
  SimpleAES_o *__this_00;
  System_String_o *path;
  
  if (DAT_05703c95 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SimpleAES);
    DAT_05703c95 = '\x01';
  }
  pSVar2 = (System_String_o *)(*(__this->klass->vtable)._13_get_FolderPath.methodPtr)(__this);
  System_IO_Directory__CreateDirectory(pSVar2,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._7_SerializeToJsonString.methodPtr)
                     (__this,(__this->klass->vtable)._7_SerializeToJsonString.method);
  cVar1 = (*(__this->klass->vtable)._15_get_Encrypted.methodPtr)(__this);
  if (cVar1 != '\0') {
    __this_00 = (SimpleAES_o *)il2cpp_runtime_glue(TypeInfo_SimpleAES);
    SimpleAES___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (SimpleAES_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar2 = SimpleAES__Encrypt(__this_00,pSVar2,(MethodInfo *)0x0);
  }
  path = (System_String_o *)
         (*(__this->klass->vtable)._19_GetFilePath.methodPtr)
                   (__this,(__this->klass->vtable)._19_GetFilePath.method);
  System_IO_File__WriteAllText(path,pSVar2,(MethodInfo *)0x0);
  return;
}


// Settings.SaveableSettingsContainer$$Load
// il2cpp: void Settings_SaveableSettingsContainer__Load (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f10d80

void Settings_SaveableSettingsContainer__Load
               (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  SimpleAES_o *__this_00;
  
  if (DAT_05703c96 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SimpleAES);
    DAT_05703c96 = '\x01';
  }
  pSVar3 = (System_String_o *)(*(__this->klass->vtable)._19_GetFilePath.methodPtr)(__this);
  bVar2 = System_IO_File__Exists(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    (*(__this->klass->vtable)._18_LoadLegacy.methodPtr)
              (__this,(__this->klass->vtable)._18_LoadLegacy.method);
  }
  else {
    pSVar3 = System_IO_File__ReadAllText(pSVar3,(MethodInfo *)0x0);
    cVar1 = (*(__this->klass->vtable)._15_get_Encrypted.methodPtr)(__this);
    if (cVar1 != '\0') {
      __this_00 = (SimpleAES_o *)il2cpp_runtime_glue(TypeInfo_SimpleAES);
      SimpleAES___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (SimpleAES_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar3 = SimpleAES__Decrypt(__this_00,pSVar3,(MethodInfo *)0x0);
    }
    (*(__this->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
              (__this,pSVar3,(__this->klass->vtable)._8_DeserializeFromJsonString.method);
  }
  return;
}


// Settings.SaveableSettingsContainer$$LoadLegacy
// il2cpp: void Settings_SaveableSettingsContainer__LoadLegacy (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f112d0

void Settings_SaveableSettingsContainer__LoadLegacy
               (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  return;
}


// Settings.SaveableSettingsContainer$$GetFilePath
// il2cpp: System_String_o* Settings_SaveableSettingsContainer__GetFilePath (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f112e0

System_String_o *
Settings_SaveableSettingsContainer__GetFilePath
          (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  
  if (DAT_05703c97 == '\0') {
    il2cpp_init_method_metadata(&"/");
    DAT_05703c97 = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._13_get_FolderPath.methodPtr)
                     (__this,(__this->klass->vtable)._13_get_FolderPath.method);
  str2 = (System_String_o *)
         (*(__this->klass->vtable)._14_unknown.methodPtr)
                   (__this,(__this->klass->vtable)._14_unknown.method);
  pSVar1 = System_String__Concat(pSVar1,"/",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Settings.SaveableSettingsContainer$$.ctor
// il2cpp: void Settings_SaveableSettingsContainer___ctor (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x3f07df0

void Settings_SaveableSettingsContainer___ctor
               (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  Settings_BaseSettingsContainer___ctor(__this,method);
  return;
}


