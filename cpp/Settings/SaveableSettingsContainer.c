// Type: Settings.SaveableSettingsContainer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/SaveableSettingsContainer.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SaveableSettingsContainer.cs
// --------------------------------

// Settings.SaveableSettingsContainer$$get_FolderPath
// il2cpp: System_String_o* Settings_SaveableSettingsContainer__get_FolderPath (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x181f25ad0

System_String_o *
Settings_SaveableSettingsContainer__get_FolderPath
          (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843454b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    Il2CppMethodInitialized_1843454b3 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  return TypeInfo_Utility_FolderPaths->static_fields->Settings;
}


// Settings.SaveableSettingsContainer$$get_Encrypted
// il2cpp: bool Settings_SaveableSettingsContainer__get_Encrypted (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x180668280

bool
Settings_SaveableSettingsContainer__get_Encrypted(Settings_SaveableSettingsContainer_o* __this, MethodInfo* method)

{
  return false;
}


// Settings.SaveableSettingsContainer$$get_CurrentVersion
// il2cpp: int32_t Settings_SaveableSettingsContainer__get_CurrentVersion (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
Settings_SaveableSettingsContainer__get_CurrentVersion(Settings_SaveableSettingsContainer_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// Settings.SaveableSettingsContainer$$Setup
// il2cpp: void Settings_SaveableSettingsContainer__Setup (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x181f25a90

void Settings_SaveableSettingsContainer__Setup
               (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  Settings_BaseSettingsContainer__RegisterSettings
            ((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._19_Load.methodPtr)(__this,(__this->klass->vtable)._19_Load.method);
  (*(__this->klass->vtable)._12_Apply.methodPtr)
            (__this,(System_Type_o *)(__this->klass->vtable)._12_Apply.method,in_R8);
  return;
}


// Settings.SaveableSettingsContainer$$Save
// il2cpp: void Settings_SaveableSettingsContainer__Save (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x181f25870
// eh: try 0x181f258b0..0x181f259b7 -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f25944: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181f25949: mov rax, qword ptr [rcx]
// asm:   0x181f2594c: mov rdx, qword ptr [rax + 0x230]
// asm:   0x181f25953: call qword ptr [rax + 0x228]  ; vtable slot 15
// asm:   0x181f25959: mov rbx, rax
// asm:   0x181f2595c: lea rcx, [rip + 0x21c080d]  ; "Failed to save container: "
// asm:   0x181f25963: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181f25968: mov rcx, rax
// asm:   0x181f2596b: xor r8d, r8d
// asm:   0x181f2596e: mov rdx, rbx
// asm:   0x181f25971: call 0x181969e50  ; System_String__Concat()
// asm:   0x181f25976: mov rbx, rax
// asm:   0x181f25979: lea rcx, [rip + 0x21d5ab8]  ; TypeInfo_UnityEngine_Debug
// asm:   0x181f25980: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181f25985: cmp dword ptr [rax + 0xe4], 0
// asm:   0x181f2598c: jne 0x181f25996
// asm:   0x181f2598e: mov rcx, rax
// asm:   0x181f25991: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181f25996: xor edx, edx
// asm:   0x181f25998: mov rcx, rbx
// asm:   0x181f2599b: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

void Settings_SaveableSettingsContainer__Save(Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  SimpleAES_o *__this_00;
  System_String_o *path;
  
  if (Il2CppMethodInitialized_1843454b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleAES);
    Il2CppMethodInitialized_1843454b4 = '\x01';
  }
  pSVar2 = (*(__this->klass->vtable)._14_get_FolderPath.methodPtr)
                     (__this,(__this->klass->vtable)._14_get_FolderPath.method);
  System_IO_Directory__CreateDirectory(pSVar2,(MethodInfo *)0x0);
  pSVar2 = (*(__this->klass->vtable)._8_SerializeToJsonString.methodPtr)
                     (__this,(__this->klass->vtable)._8_SerializeToJsonString.method);
  bVar1 = (*(__this->klass->vtable)._16_get_Encrypted.methodPtr)
                    (__this,(__this->klass->vtable)._16_get_Encrypted.method);
  if (bVar1) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleAES);
    SimpleAES___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (SimpleAES_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar2 = SimpleAES__Encrypt(__this_00,pSVar2,(MethodInfo *)0x0);
  }
  path = (*(__this->klass->vtable)._22_GetFilePath.methodPtr)
                   (__this,(__this->klass->vtable)._22_GetFilePath.method);
  System_IO_File__WriteAllText(path,pSVar2,(MethodInfo *)0x0);
  return;
}


// Settings.SaveableSettingsContainer$$Load
// il2cpp: void Settings_SaveableSettingsContainer__Load (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x181f25700
// eh: try 0x181f25740..0x181f2586b -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 45 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f257f5: nop 
// asm:   0x181f257f8: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181f257fd: mov rax, qword ptr [rcx]
// asm:   0x181f25800: mov rdx, qword ptr [rax + 0x230]
// asm:   0x181f25807: call qword ptr [rax + 0x228]  ; vtable slot 15
// asm:   0x181f2580d: mov rbx, rax
// asm:   0x181f25810: lea rcx, [rip + 0x21bf3e1]  ; "Failed to load container: "
// asm:   0x181f25817: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181f2581c: mov rcx, rax
// asm:   0x181f2581f: xor r8d, r8d
// asm:   0x181f25822: mov rdx, rbx
// asm:   0x181f25825: call 0x181969e50  ; System_String__Concat()
// asm:   0x181f2582a: mov rbx, rax
// asm:   0x181f2582d: lea rcx, [rip + 0x21d5c04]  ; TypeInfo_UnityEngine_Debug
// asm:   0x181f25834: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181f25839: cmp dword ptr [rax + 0xe4], 0
// asm:   0x181f25840: jne 0x181f2584a
// asm:   0x181f25842: mov rcx, rax
// asm:   0x181f25845: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181f2584a: xor edx, edx
// asm:   0x181f2584c: mov rcx, rbx
// asm:   0x181f2584f: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

void Settings_SaveableSettingsContainer__Load(Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  SimpleAES_o *__this_00;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_1843454b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleAES);
    Il2CppMethodInitialized_1843454b5 = '\x01';
  }
  pSVar2 = (*(__this->klass->vtable)._22_GetFilePath.methodPtr)
                     (__this,(__this->klass->vtable)._22_GetFilePath.method);
  bVar1 = System_IO_File__Exists(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = System_IO_File__ReadAllText(pSVar2,(MethodInfo *)0x0);
    bVar1 = (*(__this->klass->vtable)._16_get_Encrypted.methodPtr)
                      (__this,(__this->klass->vtable)._16_get_Encrypted.method);
    if (bVar1) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleAES);
      SimpleAES___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (SimpleAES_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar2 = SimpleAES__Decrypt(__this_00,pSVar2,(MethodInfo *)0x0);
    }
    (*(__this->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
              (__this,pSVar2,(__this->klass->vtable)._9_DeserializeFromJsonString.method);
    if ((__this->fields)._migrationPending != false) {
      (*(__this->klass->vtable)._18_Save.methodPtr)(__this,(__this->klass->vtable)._18_Save.method);
    }
  }
  else {
    (*(__this->klass->vtable)._20_LoadLegacy.methodPtr)
              (__this,(System_Type_o *)(__this->klass->vtable)._20_LoadLegacy.method,in_R8);
  }
  return;
}


// Settings.SaveableSettingsContainer$$LoadLegacy
// il2cpp: void Settings_SaveableSettingsContainer__LoadLegacy (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x180547020

void
Settings_SaveableSettingsContainer__LoadLegacy(Settings_SaveableSettingsContainer_o* __this, MethodInfo* method)

{
  return;
}


// Settings.SaveableSettingsContainer$$Migrate
// il2cpp: bool Settings_SaveableSettingsContainer__Migrate (Settings_SaveableSettingsContainer_o* __this, int32_t fromVersion, const MethodInfo* method);
// 0x180668280

bool
Settings_SaveableSettingsContainer__Migrate(Settings_SaveableSettingsContainer_o* __this, int32_t fromVersion, MethodInfo* method)

{
  return false;
}


// Settings.SaveableSettingsContainer$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_SaveableSettingsContainer__SerializeToJsonObject (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x181f259c0

SimpleJSONFixed_JSONNode_o *
Settings_SaveableSettingsContainer__SerializeToJsonObject
          (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_1843454b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsVersion");
    Il2CppMethodInitialized_1843454b6 = '\x01';
  }
  pSVar1 = Settings_BaseSettingsContainer__SerializeToJsonObject
                     ((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  pSVar2 = (*(__this->klass->vtable)._17_get_CurrentVersion.methodPtr)
                     (__this,(__this->klass->vtable)._17_get_CurrentVersion.method);
  if (0 < (int)pSVar2) {
    pSVar2 = (*(__this->klass->vtable)._17_get_CurrentVersion.methodPtr)
                       (__this,(__this->klass->vtable)._17_get_CurrentVersion.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pMVar3 = (MethodInfo *)SimpleJSONFixed_JSONNode__op_Implicit_1dc41d0((int32_t)pSVar2,(MethodInfo *)0x0);
    if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pSVar1->klass->vtable)._20_Add.methodPtr)(pSVar1,(System_Type_o *)"SettingsVersion",pMVar3);
  }
  return pSVar1;
}


// Settings.SaveableSettingsContainer$$DeserializeFromJsonObject
// il2cpp: void Settings_SaveableSettingsContainer__DeserializeFromJsonObject (Settings_SaveableSettingsContainer_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x181f13900

void Settings_SaveableSettingsContainer__DeserializeFromJsonObject
               (Settings_SaveableSettingsContainer_o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo *method)

{
  byte bVar1;
  Settings_SaveableSettingsContainer_c *pSVar2;
  SimpleJSONFixed_JSONNode_c *pSVar3;
  System_Xml_Schema_XmlSchema_c *pSVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  System_Xml_Schema_XmlSchema_o *pSVar8;
  
  if (Il2CppMethodInitialized_1843454b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsVersion");
    Il2CppMethodInitialized_1843454b7 = '\x01';
  }
  Settings_BaseSettingsContainer__DeserializeFromJsonObject
            ((Settings_BaseSettingsContainer_o *)__this,json,(MethodInfo *)0x0);
  pSVar2 = __this->klass;
  (__this->fields)._migrationPending = false;
  pSVar8 = (*(pSVar2->vtable)._17_get_CurrentVersion.methodPtr)
                     (__this,(pSVar2->vtable)._17_get_CurrentVersion.method);
  if (((int)pSVar8 != 0) && (json != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar3 = json->klass;
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONObject->_2).typeHierarchyDepth;
    if ((bVar1 <= (pSVar3->_2).typeHierarchyDepth) &&
       ((pSVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject
       )) {
      pSVar8 = (*(pSVar3->vtable)._7_get_Item.methodPtr)(json,(MethodInfo *)"SettingsVersion");
      if (pSVar8 == (System_Xml_Schema_XmlSchema_o *)0x0) {
label_181f13a4f:
        ThrowNullReferenceException();
      }
      pSVar4 = pSVar8->klass;
      cVar5 = (*(pSVar4->vtable)._12_set_NameAttribute.methodPtr)
                        (pSVar8,(System_Type_o *)(pSVar4->vtable)._12_set_NameAttribute.method,
                         (MethodInfo *)pSVar4);
      if (cVar5 == '\0') {
        uVar7 = 0;
      }
      else {
        pSVar8 = (*(json->klass->vtable)._7_get_Item.methodPtr)(json,(MethodInfo *)"SettingsVersion");
        if (pSVar8 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181f13a4f;
        uVar7 = (*(code *)((Il2CppClass *)pSVar8->klass)->vtable[35].methodPtr)
                          (pSVar8,((Il2CppClass *)pSVar8->klass)->vtable[35].method);
      }
      pSVar8 = (*(__this->klass->vtable)._17_get_CurrentVersion.methodPtr)
                         (__this,(__this->klass->vtable)._17_get_CurrentVersion.method);
      if ((int)uVar7 < (int)pSVar8) {
        bVar6 = (*(__this->klass->vtable)._21_Migrate.methodPtr)(__this,(MethodInfo *)(ulonglong)uVar7);
        (__this->fields)._migrationPending = bVar6;
      }
    }
  }
  return;
}


// Settings.SaveableSettingsContainer$$GetFilePath
// il2cpp: System_String_o* Settings_SaveableSettingsContainer__GetFilePath (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x181f25680

System_String_o *
Settings_SaveableSettingsContainer__GetFilePath
          (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  
  if (Il2CppMethodInitialized_1843454b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_1843454b8 = '\x01';
  }
  pSVar1 = (*(__this->klass->vtable)._14_get_FolderPath.methodPtr)
                     (__this,(__this->klass->vtable)._14_get_FolderPath.method);
  str2 = (System_String_o *)
         (*(__this->klass->vtable)._15_unknown.methodPtr)(__this,(__this->klass->vtable)._15_unknown.method);
  pSVar1 = System_String__Concat_1969b70(pSVar1,"/",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Settings.SaveableSettingsContainer$$.ctor
// il2cpp: void Settings_SaveableSettingsContainer___ctor (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x181f24550

void Settings_SaveableSettingsContainer___ctor
               (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


