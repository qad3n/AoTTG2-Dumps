// Type: Characters.HumanSetupPrefabs
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanSetupPrefabs.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetupPrefabs.cs
// --------------------------------

// Characters.HumanSetupPrefabs$$GetBackPrefab
// il2cpp: System_String_o* Characters_HumanSetupPrefabs__GetBackPrefab (System_String_o* back, const MethodInfo* method);
// 0x42f03d0

System_String_o * Characters_HumanSetupPrefabs__GetBackPrefab(System_String_o *back,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057adebe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
    il2cpp_runtime_helper_023445d0(&"Back/Back");
    g_data_057adebe = '\x01';
  }
  if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = System_String__Concat_3af7150
                     ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Back/Back",back,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupPrefabs$$GetHatPrefab
// il2cpp: System_String_o* Characters_HumanSetupPrefabs__GetHatPrefab (System_String_o* hat, const MethodInfo* method);
// 0x42f04b0

System_String_o * Characters_HumanSetupPrefabs__GetHatPrefab(System_String_o *hat,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057adebf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
    il2cpp_runtime_helper_023445d0(&"Hat/Hat");
    g_data_057adebf = '\x01';
  }
  if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = System_String__Concat_3af7150
                     ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Hat/Hat",hat,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupPrefabs$$GetHeadPrefab
// il2cpp: System_String_o* Characters_HumanSetupPrefabs__GetHeadPrefab (System_String_o* head, const MethodInfo* method);
// 0x42f0440

System_String_o * Characters_HumanSetupPrefabs__GetHeadPrefab(System_String_o *head,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057adec0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
    il2cpp_runtime_helper_023445d0(&"Head/Head");
    g_data_057adec0 = '\x01';
  }
  if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = System_String__Concat_3af7150
                     ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Head/Head",head,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupPrefabs$$.ctor
// il2cpp: void Characters_HumanSetupPrefabs___ctor (Characters_HumanSetupPrefabs_o* __this, const MethodInfo* method);
// 0x42f1de0

void Characters_HumanSetupPrefabs___ctor(Characters_HumanSetupPrefabs_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSetupPrefabs$$.cctor
// il2cpp: void Characters_HumanSetupPrefabs___cctor (const MethodInfo* method);
// 0x42f1df0

void Characters_HumanSetupPrefabs___cctor(MethodInfo *method)

{
  if (g_data_057adec1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Accessories/Prefabs/");
    g_data_057adec1 = '\x01';
  }
  **(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8) = "Human/Parts/Accessories/Prefabs/";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_HumanSetupPrefabs + 0xb8),"Human/Parts/Accessories/Prefabs/");
  return;
}


