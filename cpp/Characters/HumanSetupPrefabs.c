// Type: Characters.HumanSetupPrefabs
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/HumanSetupPrefabs.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Setup/HumanSetupPrefabs.cs  [CHANGED since prior version]
// --------------------------------

// Characters.HumanSetupPrefabs$$GetBackPrefab
// il2cpp: System_String_o* Characters_HumanSetupPrefabs__GetBackPrefab (System_String_o* back, const MethodInfo* method);
// 0x3fe3b10

System_String_o *
Characters_HumanSetupPrefabs__GetBackPrefab(System_String_o *back,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704150 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupPrefabs);
    il2cpp_init_method_metadata(&"Back/Back");
    DAT_05704150 = '\x01';
  }
  if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Back/Back",back,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupPrefabs$$GetHatPrefab
// il2cpp: System_String_o* Characters_HumanSetupPrefabs__GetHatPrefab (System_String_o* hat, const MethodInfo* method);
// 0x3fe3bf0

System_String_o *
Characters_HumanSetupPrefabs__GetHatPrefab(System_String_o *hat,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704151 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupPrefabs);
    il2cpp_init_method_metadata(&"Hat/Hat");
    DAT_05704151 = '\x01';
  }
  if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Hat/Hat",hat,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupPrefabs$$GetHeadPrefab
// il2cpp: System_String_o* Characters_HumanSetupPrefabs__GetHeadPrefab (System_String_o* head, const MethodInfo* method);
// 0x3fe3b80

System_String_o *
Characters_HumanSetupPrefabs__GetHeadPrefab(System_String_o *head,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704152 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupPrefabs);
    il2cpp_init_method_metadata(&"Head/Head");
    DAT_05704152 = '\x01';
  }
  if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Head/Head",head,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupPrefabs$$.ctor
// il2cpp: void Characters_HumanSetupPrefabs___ctor (Characters_HumanSetupPrefabs_o* __this, const MethodInfo* method);
// 0x3fe5520

void Characters_HumanSetupPrefabs___ctor(Characters_HumanSetupPrefabs_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSetupPrefabs$$.cctor
// il2cpp: void Characters_HumanSetupPrefabs___cctor (const MethodInfo* method);
// 0x3fe5530

void Characters_HumanSetupPrefabs___cctor(MethodInfo *method)

{
  if (DAT_05704153 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupPrefabs);
    il2cpp_init_method_metadata(&"Human/Parts/Accessories/Prefabs/");
    DAT_05704153 = '\x01';
  }
  **(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8) = "Human/Parts/Accessories/Prefabs/";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_HumanSetupPrefabs + 0xb8),"Human/Parts/Accessories/Prefabs/");
  return;
}


