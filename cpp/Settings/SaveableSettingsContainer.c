// Type: Settings.SaveableSettingsContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/SaveableSettingsContainer.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SaveableSettingsContainer.cs
// --------------------------------

// Settings.SaveableSettingsContainer$$get_FolderPath
// il2cpp: System_String_o* Settings_SaveableSettingsContainer__get_FolderPath (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x4203400

System_String_o *
Settings_SaveableSettingsContainer__get_FolderPath
          (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad8bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    g_data_057ad8bc = '\x01';
    iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30);
}


// Settings.SaveableSettingsContainer$$get_Encrypted
// il2cpp: bool Settings_SaveableSettingsContainer__get_Encrypted (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x4203470

bool_conflict
Settings_SaveableSettingsContainer__get_Encrypted
          (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  return 0;
}


// Settings.SaveableSettingsContainer$$Setup
// il2cpp: void Settings_SaveableSettingsContainer__Setup (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x4203480

void Settings_SaveableSettingsContainer__Setup
               (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  
  Settings_BaseSettingsContainer__RegisterSettings((Settings_BaseSettingsContainer_o *)__this,method);
  (*(__this->klass->vtable)._17_Load.methodPtr)(__this,(__this->klass->vtable)._17_Load.method);
  vtableDispatch = (__this->klass->vtable)._11_Apply.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._11_Apply.method,extraout_RDX,vtableDispatch)
  ;
  return;
}


// Settings.SaveableSettingsContainer$$Save
// il2cpp: void Settings_SaveableSettingsContainer__Save (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x42034c0

void Settings_SaveableSettingsContainer__Save(Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  char cVar1;
  System_String_o *pSVar2;
  SimpleAES_o *__this_00;
  System_String_o *pSVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [12];
  
  if (g_data_057ad8bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SimpleAES);
    g_data_057ad8bd = '\x01';
  }
  pSVar2 = (System_String_o *)(*(__this->klass->vtable)._13_get_FolderPath.methodPtr)(__this);
  System_IO_Directory__CreateDirectory(pSVar2,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._7_SerializeToJsonString.methodPtr)
                     (__this,(__this->klass->vtable)._7_SerializeToJsonString.method);
  cVar1 = (*(__this->klass->vtable)._15_get_Encrypted.methodPtr)(__this);
  if (cVar1 != '\0') {
    __this_00 = (SimpleAES_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SimpleAES);
    SimpleAES___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (SimpleAES_o *)0x0) {
      auVar7 = il2cpp_runtime_helper_022b2c90();
      if (auVar7._8_4_ != 1) {
        _Unwind_Resume(auVar7._0_8_);
      }
      puVar4 = (undefined8 *)__cxa_begin_catch(auVar7._0_8_);
      cVar1 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar4);
      if (cVar1 != '\0') {
        __cxa_end_catch();
        pSVar2 = (System_String_o *)
                 (*(__this->klass->vtable)._14_unknown.methodPtr)
                           (__this,(__this->klass->vtable)._14_unknown.method);
        pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Failed to save container: ");
        pSVar2 = System_String__Concat_3ae5ba0(pSVar3,pSVar2,(MethodInfo *)0x0);
        lVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
        if (*(int *)(lVar5 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0(lVar5);
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
        return;
      }
      puVar6 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar6 = *puVar4;
      __cxa_throw(puVar6,&PTR_PTR_05215060,0);
    }
    pSVar2 = SimpleAES__Encrypt(__this_00,pSVar2,(MethodInfo *)0x0);
  }
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._19_GetFilePath.methodPtr)
                     (__this,(__this->klass->vtable)._19_GetFilePath.method);
  System_IO_File__WriteAllText(pSVar3,pSVar2,(MethodInfo *)0x0);
  return;
}


// Settings.SaveableSettingsContainer$$Load
// il2cpp: void Settings_SaveableSettingsContainer__Load (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x4203170

void Settings_SaveableSettingsContainer__Load(Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  SimpleAES_o *__this_00;
  undefined8 *puVar4;
  System_String_o *str0;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [12];
  
  if (g_data_057ad8be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SimpleAES);
    g_data_057ad8be = '\x01';
  }
  pSVar3 = (System_String_o *)(*(__this->klass->vtable)._19_GetFilePath.methodPtr)(__this);
  bVar2 = System_IO_File__Exists(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    (*(__this->klass->vtable)._18_LoadLegacy.methodPtr)(__this,(__this->klass->vtable)._18_LoadLegacy.method);
  }
  else {
    pSVar3 = System_IO_File__ReadAllText(pSVar3,(MethodInfo *)0x0);
    cVar1 = (*(__this->klass->vtable)._15_get_Encrypted.methodPtr)(__this);
    if (cVar1 != '\0') {
      __this_00 = (SimpleAES_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SimpleAES);
      SimpleAES___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (SimpleAES_o *)0x0) {
        auVar7 = il2cpp_runtime_helper_022b2c90();
        if (auVar7._8_4_ != 1) {
          _Unwind_Resume(auVar7._0_8_);
        }
        puVar4 = (undefined8 *)__cxa_begin_catch(auVar7._0_8_);
        cVar1 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar4);
        if (cVar1 != '\0') {
          __cxa_end_catch();
          pSVar3 = (System_String_o *)
                   (*(__this->klass->vtable)._14_unknown.methodPtr)
                             (__this,(__this->klass->vtable)._14_unknown.method);
          str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Failed to load container: ");
          pSVar3 = System_String__Concat_3ae5ba0(str0,pSVar3,(MethodInfo *)0x0);
          lVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
          if (*(int *)(lVar5 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0(lVar5);
          }
          UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
          return;
        }
        puVar6 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar6 = *puVar4;
        __cxa_throw(puVar6,&PTR_PTR_05215060,0);
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
// 0x42036c0

void Settings_SaveableSettingsContainer__LoadLegacy
               (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  return;
}


// Settings.SaveableSettingsContainer$$GetFilePath
// il2cpp: System_String_o* Settings_SaveableSettingsContainer__GetFilePath (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x42036d0

System_String_o *
Settings_SaveableSettingsContainer__GetFilePath
          (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  
  if (g_data_057ad8bf == '\0') {
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ad8bf = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._13_get_FolderPath.methodPtr)
                     (__this,(__this->klass->vtable)._13_get_FolderPath.method);
  str2 = (System_String_o *)
         (*(__this->klass->vtable)._14_unknown.methodPtr)(__this,(__this->klass->vtable)._14_unknown.method);
  pSVar1 = System_String__Concat_3af7150(pSVar1,"/",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Settings.SaveableSettingsContainer$$.ctor
// il2cpp: void Settings_SaveableSettingsContainer___ctor (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x41f3ae0

void Settings_SaveableSettingsContainer___ctor
               (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  undefined8 extraout_RDX;
  
  if (g_data_057ad88d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OrderedDictionary);
    g_data_057ad88d = '\x01';
  }
  __this_00 = (System_Collections_Specialized_OrderedDictionary_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OrderedDictionary);
  System_Collections_Specialized_OrderedDictionary___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Settings = __this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
  (__this->fields).TypedSettings = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TypedSettings);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  vtableDispatch = (__this->klass->vtable)._10_Setup.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._10_Setup.method,extraout_RDX,vtableDispatch)
  ;
  return;
}


