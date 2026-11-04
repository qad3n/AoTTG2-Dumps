// Type: Characters.HumanSetupPrefabs
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanSetupPrefabs.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetupPrefabs.cs
// --------------------------------

// Characters.HumanSetupPrefabs$$GetBackPrefab
// il2cpp: System_String_o* Characters_HumanSetupPrefabs__GetBackPrefab (System_String_o* back, const MethodInfo* method);
// 0x182170be0

System_String_o * Characters_HumanSetupPrefabs__GetBackPrefab(System_String_o *back,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346ccb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&"Back/Back");
    Il2CppMethodInitialized_184346ccb = '\x01';
  }
  if ((TypeInfo_Characters_HumanSetupPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupPrefabs);
  }
  pSVar1 = System_String__Concat_1969b70
                     (TypeInfo_Characters_HumanSetupPrefabs->static_fields->AccessoriesPath,
                      "Back/Back",back,(MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupPrefabs$$GetHatPrefab
// il2cpp: System_String_o* Characters_HumanSetupPrefabs__GetHatPrefab (System_String_o* hat, const MethodInfo* method);
// 0x182170c50

System_String_o * Characters_HumanSetupPrefabs__GetHatPrefab(System_String_o *hat,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346ccc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&"Hat/Hat");
    Il2CppMethodInitialized_184346ccc = '\x01';
  }
  if ((TypeInfo_Characters_HumanSetupPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupPrefabs);
  }
  pSVar1 = System_String__Concat_1969b70
                     (TypeInfo_Characters_HumanSetupPrefabs->static_fields->AccessoriesPath,
                      "Hat/Hat",hat,(MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupPrefabs$$GetHeadPrefab
// il2cpp: System_String_o* Characters_HumanSetupPrefabs__GetHeadPrefab (System_String_o* head, const MethodInfo* method);
// 0x182170cc0

System_String_o * Characters_HumanSetupPrefabs__GetHeadPrefab(System_String_o *head,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346ccd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&"Head/Head");
    Il2CppMethodInitialized_184346ccd = '\x01';
  }
  if ((TypeInfo_Characters_HumanSetupPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupPrefabs);
  }
  pSVar1 = System_String__Concat_1969b70
                     (TypeInfo_Characters_HumanSetupPrefabs->static_fields->AccessoriesPath,
                      "Head/Head",head,(MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupPrefabs$$.ctor
// il2cpp: void Characters_HumanSetupPrefabs___ctor (Characters_HumanSetupPrefabs_o* __this, const MethodInfo* method);
// 0x18054c890

void
Characters_HumanSetupPrefabs___ctor(Characters_HumanSetupPrefabs_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSetupPrefabs$$.cctor
// il2cpp: void Characters_HumanSetupPrefabs___cctor (const MethodInfo* method);
// 0x182170d30

void Characters_HumanSetupPrefabs___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346cce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Accessories/Prefabs/");
    Il2CppMethodInitialized_184346cce = '\x01';
  }
  TypeInfo_Characters_HumanSetupPrefabs->static_fields->AccessoriesPath = "Human/Parts/Accessories/Prefabs/";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSetupPrefabs->static_fields->AccessoriesPath,"Human/Parts/Accessories/Prefabs/");
  return;
}


