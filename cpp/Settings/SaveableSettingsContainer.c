// Type: Settings.SaveableSettingsContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/SaveableSettingsContainer.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SaveableSettingsContainer.cs
// --------------------------------

// Settings.SaveableSettingsContainer$$get_FolderPath
// il2cpp: System_String_o* Settings_SaveableSettingsContainer__get_FolderPath (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x5c7c450

System_String_o *
Settings_SaveableSettingsContainer__get_FolderPath
          (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547980 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    Il2CppMethodInitialized_07547980 = '\x01';
    uVar1 = (TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    return TypeInfo_Utility_FolderPaths->static_fields->Settings;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Utility_FolderPaths)->static_fields + 0x28);
}


// Settings.SaveableSettingsContainer$$get_Encrypted
// il2cpp: bool Settings_SaveableSettingsContainer__get_Encrypted (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x5c7c4c0

bool Settings_SaveableSettingsContainer__get_Encrypted
               (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  return false;
}


// Settings.SaveableSettingsContainer$$get_CurrentVersion
// il2cpp: int32_t Settings_SaveableSettingsContainer__get_CurrentVersion (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x5c7c4d0

int32_t Settings_SaveableSettingsContainer__get_CurrentVersion
                  (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  return 0;
}


// Settings.SaveableSettingsContainer$$Setup
// il2cpp: void Settings_SaveableSettingsContainer__Setup (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x5c7c4e0

void Settings_SaveableSettingsContainer__Setup
               (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  Settings_BaseSettingsContainer__RegisterSettings
            ((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._19_Load.methodPtr)(__this,(__this->klass->vtable)._19_Load.method);
  (*(__this->klass->vtable)._12_Apply.methodPtr)(__this,(__this->klass->vtable)._12_Apply.method);
  return;
}


// Settings.SaveableSettingsContainer$$Save
// il2cpp: void Settings_SaveableSettingsContainer__Save (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x5c7c520
// eh: try 0x5c7c54e..0x5c7c5ea -> pad 0x5c7c5fa (+8 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5c7c622..0x5c7c6af -> pad 0x5c7c6af (+1 call sites) cleanup
// eh: try 0x5c7c6b2..0x5c7c6b7 -> pad 0x5c7c6bf catch (...) [compiler noexcept guard]
// asm: 60 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c7c5ea: jmp 0x5c7c5fa
// asm:   0x5c7c5ec: jmp 0x5c7c5fa
// asm:   0x5c7c5ee: jmp 0x5c7c5fa
// asm:   0x5c7c5f0: jmp 0x5c7c5fa
// asm:   0x5c7c5f2: jmp 0x5c7c5fa
// asm:   0x5c7c5f4: jmp 0x5c7c5fa
// asm:   0x5c7c5f6: jmp 0x5c7c5fa
// asm:   0x5c7c5f8: jmp 0x5c7c5fa
// asm:   0x5c7c5fa: mov r14, rax
// asm:   0x5c7c5fd: cmp edx, 1
// asm:   0x5c7c600: jne 0x5c7c6b7
// asm:   0x5c7c606: mov rdi, r14
// asm:   0x5c7c609: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c7c60e: mov r14, rax
// asm:   0x5c7c611: lea rax, [rip + 0x18da0b0]
// asm:   0x5c7c618: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5c7c61c: mov rax, qword ptr [r14]
// asm:   0x5c7c61f: mov rsi, qword ptr [rax]
// asm:   0x5c7c622: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5c7c627: test al, al
// asm:   0x5c7c629: je 0x5c7c68e
// asm:   0x5c7c62b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c7c630: mov rax, qword ptr [r15]
// asm:   0x5c7c633: mov rsi, qword ptr [rax + 0x230]
// asm:   0x5c7c63a: mov rdi, r15
// asm:   0x5c7c63d: call qword ptr [rax + 0x228]  ; vtable slot 15
// asm:   0x5c7c643: mov rbx, rax
// asm:   0x5c7c646: lea rdi, [rip + 0x165f68b]  ; "Failed to save container: "
// asm:   0x5c7c64d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c7c652: mov rdi, rax
// asm:   0x5c7c655: mov rsi, rbx
// asm:   0x5c7c658: xor edx, edx
// asm:   0x5c7c65a: call 0x53f0320  ; System_String__Concat()
// asm:   0x5c7c65f: mov rbx, rax
// asm:   0x5c7c662: lea rdi, [rip + 0x15fafdf]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5c7c669: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c7c66e: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5c7c675: jne 0x5c7c67f
// asm:   0x5c7c677: mov rdi, rax
// asm:   0x5c7c67a: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5c7c67f: mov rdi, rbx
// asm:   0x5c7c682: xor esi, esi
// asm:   0x5c7c684: pop rbx
// asm:   0x5c7c685: pop r14
// asm:   0x5c7c687: pop r15
// asm:   0x5c7c689: jmp 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5c7c68e: mov edi, 8
// asm:   0x5c7c693: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5c7c698: mov rcx, qword ptr [r14]
// asm:   0x5c7c69b: mov qword ptr [rax], rcx
// asm:   0x5c7c69e: lea rsi, [rip + 0x11b0e5b]
// asm:   0x5c7c6a5: mov rdi, rax
// asm:   0x5c7c6a8: xor edx, edx
// asm:   0x5c7c6aa: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5c7c6af: mov r14, rax
// asm:   0x5c7c6b2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c7c6b7: mov rdi, r14
// asm:   0x5c7c6ba: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c7c6bf: mov rdi, rax
// asm:   0x5c7c6c2: call 0x2ab61e0  ; __clang_call_terminate()

void Settings_SaveableSettingsContainer__Save(Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  SimpleAES_o *__this_00;
  System_String_o *path;
  
  if (Il2CppMethodInitialized_07547981 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleAES);
    Il2CppMethodInitialized_07547981 = '\x01';
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
// 0x5c7c1e0
// eh: try 0x5c7c20e..0x5c7c2d5 -> pad 0x5c7c2e5 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5c7c30d..0x5c7c39a -> pad 0x5c7c39a (+1 call sites) cleanup
// eh: try 0x5c7c39d..0x5c7c3a2 -> pad 0x5c7c3aa catch (...) [compiler noexcept guard]
// asm: 60 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c7c2d5: jmp 0x5c7c2e5
// asm:   0x5c7c2d7: jmp 0x5c7c2e5
// asm:   0x5c7c2d9: jmp 0x5c7c2e5
// asm:   0x5c7c2db: jmp 0x5c7c2e5
// asm:   0x5c7c2dd: jmp 0x5c7c2e5
// asm:   0x5c7c2df: jmp 0x5c7c2e5
// asm:   0x5c7c2e1: jmp 0x5c7c2e5
// asm:   0x5c7c2e3: jmp 0x5c7c2e5
// asm:   0x5c7c2e5: mov r14, rax
// asm:   0x5c7c2e8: cmp edx, 1
// asm:   0x5c7c2eb: jne 0x5c7c3a2
// asm:   0x5c7c2f1: mov rdi, r14
// asm:   0x5c7c2f4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c7c2f9: mov r14, rax
// asm:   0x5c7c2fc: lea rax, [rip + 0x18da3c5]
// asm:   0x5c7c303: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5c7c307: mov rax, qword ptr [r14]
// asm:   0x5c7c30a: mov rsi, qword ptr [rax]
// asm:   0x5c7c30d: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5c7c312: test al, al
// asm:   0x5c7c314: je 0x5c7c379
// asm:   0x5c7c316: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c7c31b: mov rax, qword ptr [r15]
// asm:   0x5c7c31e: mov rsi, qword ptr [rax + 0x230]
// asm:   0x5c7c325: mov rdi, r15
// asm:   0x5c7c328: call qword ptr [rax + 0x228]  ; vtable slot 15
// asm:   0x5c7c32e: mov rbx, rax
// asm:   0x5c7c331: lea rdi, [rip + 0x165f8b8]  ; "Failed to load container: "
// asm:   0x5c7c338: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c7c33d: mov rdi, rax
// asm:   0x5c7c340: mov rsi, rbx
// asm:   0x5c7c343: xor edx, edx
// asm:   0x5c7c345: call 0x53f0320  ; System_String__Concat()
// asm:   0x5c7c34a: mov rbx, rax
// asm:   0x5c7c34d: lea rdi, [rip + 0x15fb2f4]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5c7c354: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c7c359: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5c7c360: jne 0x5c7c36a
// asm:   0x5c7c362: mov rdi, rax
// asm:   0x5c7c365: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5c7c36a: mov rdi, rbx
// asm:   0x5c7c36d: xor esi, esi
// asm:   0x5c7c36f: pop rbx
// asm:   0x5c7c370: pop r14
// asm:   0x5c7c372: pop r15
// asm:   0x5c7c374: jmp 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5c7c379: mov edi, 8
// asm:   0x5c7c37e: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5c7c383: mov rcx, qword ptr [r14]
// asm:   0x5c7c386: mov qword ptr [rax], rcx
// asm:   0x5c7c389: lea rsi, [rip + 0x11b1170]
// asm:   0x5c7c390: mov rdi, rax
// asm:   0x5c7c393: xor edx, edx
// asm:   0x5c7c395: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5c7c39a: mov r14, rax
// asm:   0x5c7c39d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c7c3a2: mov rdi, r14
// asm:   0x5c7c3a5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c7c3aa: mov rdi, rax
// asm:   0x5c7c3ad: call 0x2ab61e0  ; __clang_call_terminate()

void Settings_SaveableSettingsContainer__Load(Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  VirtualInvokeData_6411beea80bb *pVVar1;
  bool bVar2;
  System_String_o *pSVar3;
  SimpleAES_o *__this_00;
  VirtualInvokeData_6411beea80bb *pVVar4;
  
  if (Il2CppMethodInitialized_07547982 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleAES);
    Il2CppMethodInitialized_07547982 = '\x01';
  }
  pSVar3 = (*(__this->klass->vtable)._22_GetFilePath.methodPtr)
                     (__this,(__this->klass->vtable)._22_GetFilePath.method);
  bVar2 = System_IO_File__Exists(pSVar3,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = System_IO_File__ReadAllText(pSVar3,(MethodInfo *)0x0);
    bVar2 = (*(__this->klass->vtable)._16_get_Encrypted.methodPtr)
                      (__this,(__this->klass->vtable)._16_get_Encrypted.method);
    if (bVar2) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleAES);
      SimpleAES___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (SimpleAES_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = SimpleAES__Decrypt(__this_00,pSVar3,(MethodInfo *)0x0);
    }
    (*(__this->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
              (__this,pSVar3,(__this->klass->vtable)._9_DeserializeFromJsonString.method);
    if ((__this->fields)._migrationPending == false) {
      return;
    }
    pVVar4 = &(__this->klass->vtable)._18_Save;
    pVVar1 = &(__this->klass->vtable)._18_Save;
  }
  else {
    pVVar4 = &(__this->klass->vtable)._20_LoadLegacy;
    pVVar1 = &(__this->klass->vtable)._20_LoadLegacy;
  }
  (*pVVar4->methodPtr)(__this,pVVar1->method);
  return;
}


// Settings.SaveableSettingsContainer$$LoadLegacy
// il2cpp: void Settings_SaveableSettingsContainer__LoadLegacy (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x5c7c6d0

void Settings_SaveableSettingsContainer__LoadLegacy
               (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  return;
}


// Settings.SaveableSettingsContainer$$Migrate
// il2cpp: bool Settings_SaveableSettingsContainer__Migrate (Settings_SaveableSettingsContainer_o* __this, int32_t fromVersion, const MethodInfo* method);
// 0x5c7c6e0

bool Settings_SaveableSettingsContainer__Migrate
               (Settings_SaveableSettingsContainer_o *__this,int32_t fromVersion,MethodInfo *method)

{
  return false;
}


// Settings.SaveableSettingsContainer$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_SaveableSettingsContainer__SerializeToJsonObject (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x5c7c6f0

SimpleJSONFixed_JSONNode_o *
Settings_SaveableSettingsContainer__SerializeToJsonObject
          (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547983 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsVersion");
    Il2CppMethodInitialized_07547983 = '\x01';
  }
  pSVar2 = Settings_BaseSettingsContainer__SerializeToJsonObject
                     ((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  iVar1 = (*(__this->klass->vtable)._17_get_CurrentVersion.methodPtr)
                    (__this,(__this->klass->vtable)._17_get_CurrentVersion.method);
  if (0 < iVar1) {
    iVar1 = (*(__this->klass->vtable)._17_get_CurrentVersion.methodPtr)
                      (__this,(__this->klass->vtable)._17_get_CurrentVersion.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_5763b60(iVar1,(MethodInfo *)0x0);
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pSVar2->klass->vtable)._20_Add.methodPtr)
              (pSVar2,"SettingsVersion",pSVar3,(pSVar2->klass->vtable)._20_Add.method);
  }
  return pSVar2;
}


// Settings.SaveableSettingsContainer$$DeserializeFromJsonObject
// il2cpp: void Settings_SaveableSettingsContainer__DeserializeFromJsonObject (Settings_SaveableSettingsContainer_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x5c7c7b0

void Settings_SaveableSettingsContainer__DeserializeFromJsonObject
               (Settings_SaveableSettingsContainer_o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_c *pSVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t iVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  
  if (Il2CppMethodInitialized_07547984 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsVersion");
    Il2CppMethodInitialized_07547984 = '\x01';
  }
  Settings_BaseSettingsContainer__DeserializeFromJsonObject
            ((Settings_BaseSettingsContainer_o *)__this,json,(MethodInfo *)0x0);
  (__this->fields)._migrationPending = false;
  iVar4 = (*(__this->klass->vtable)._17_get_CurrentVersion.methodPtr)
                    (__this,(__this->klass->vtable)._17_get_CurrentVersion.method);
  if ((iVar4 != 0) && (json != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar2 = json->klass;
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONObject->_2).typeHierarchyDepth;
    if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
       ((pSVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject)) {
      pSVar6 = (*(pSVar2->vtable)._7_get_Item.methodPtr)
                         (json,"SettingsVersion",(pSVar2->vtable)._7_get_Item.method);
      if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05c7c8f2:
        ThrowNullReferenceException();
      }
      bVar3 = (*(pSVar6->klass->vtable)._12_get_IsNumber.methodPtr)
                        (pSVar6,(pSVar6->klass->vtable)._12_get_IsNumber.method);
      iVar4 = 0;
      if (bVar3) {
        pSVar6 = (*(json->klass->vtable)._7_get_Item.methodPtr)
                           (json,"SettingsVersion",(json->klass->vtable)._7_get_Item.method);
        if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c7c8f2;
        iVar4 = (*(pSVar6->klass->vtable)._35_get_AsInt.methodPtr)
                          (pSVar6,(pSVar6->klass->vtable)._35_get_AsInt.method);
      }
      iVar5 = (*(__this->klass->vtable)._17_get_CurrentVersion.methodPtr)
                        (__this,(__this->klass->vtable)._17_get_CurrentVersion.method);
      if (iVar4 < iVar5) {
        bVar3 = (*(__this->klass->vtable)._21_Migrate.methodPtr)
                          (__this,iVar4,(__this->klass->vtable)._21_Migrate.method);
        (__this->fields)._migrationPending = bVar3;
      }
    }
  }
  return;
}


// Settings.SaveableSettingsContainer$$GetFilePath
// il2cpp: System_String_o* Settings_SaveableSettingsContainer__GetFilePath (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x5c7c900

System_String_o *
Settings_SaveableSettingsContainer__GetFilePath
          (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  
  if (Il2CppMethodInitialized_07547985 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07547985 = '\x01';
  }
  pSVar1 = (*(__this->klass->vtable)._14_get_FolderPath.methodPtr)
                     (__this,(__this->klass->vtable)._14_get_FolderPath.method);
  str2 = (System_String_o *)
         (*(__this->klass->vtable)._15_unknown.methodPtr)(__this,(__this->klass->vtable)._15_unknown.method);
  pSVar1 = System_String__Concat_5301f10(pSVar1,"/",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Settings.SaveableSettingsContainer$$.ctor
// il2cpp: void Settings_SaveableSettingsContainer___ctor (Settings_SaveableSettingsContainer_o* __this, const MethodInfo* method);
// 0x5c7c440

void Settings_SaveableSettingsContainer___ctor
               (Settings_SaveableSettingsContainer_o *__this,MethodInfo *method)

{
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


