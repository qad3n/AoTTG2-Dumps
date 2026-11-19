// Type: Characters.HorseAnimations
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/HorseAnimations.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/HorseAnimations.cs
// --------------------------------

// Characters.HorseAnimations$$.ctor
// il2cpp: void Characters_HorseAnimations___ctor (Characters_HorseAnimations_o* __this, const MethodInfo* method);
// 0x5bf3220

void Characters_HorseAnimations___ctor(Characters_HorseAnimations_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HorseAnimations$$.cctor
// il2cpp: void Characters_HorseAnimations___cctor (const MethodInfo* method);
// 0x5bf3230

void Characters_HorseAnimations___cctor(MethodInfo *method)

{
  Characters_HorseAnimations_StaticFields *pCVar1;
  
  if (Il2CppMethodInitialized_07547623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&"horse_crazy");
    il2cpp_codegen_initialize_runtime_metadata(&"horse_WALK");
    il2cpp_codegen_initialize_runtime_metadata(&"horse_Run");
    il2cpp_codegen_initialize_runtime_metadata(&"horse_idle1");
    il2cpp_codegen_initialize_runtime_metadata(&"horse_idle0");
    il2cpp_codegen_initialize_runtime_metadata(&"horse_idle2");
    il2cpp_codegen_initialize_runtime_metadata(&"horse_idle3");
    Il2CppMethodInitialized_07547623 = '\x01';
  }
  TypeInfo_Characters_HorseAnimations->static_fields->Idle0 = "horse_idle0";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HorseAnimations->static_fields->Idle0);
  pCVar1 = TypeInfo_Characters_HorseAnimations->static_fields;
  pCVar1->Idle1 = "horse_idle1";
  Il2CppCodeGenWriteBarrier(&pCVar1->Idle1);
  pCVar1 = TypeInfo_Characters_HorseAnimations->static_fields;
  pCVar1->Idle2 = "horse_idle2";
  Il2CppCodeGenWriteBarrier(&pCVar1->Idle2);
  pCVar1 = TypeInfo_Characters_HorseAnimations->static_fields;
  pCVar1->Idle3 = "horse_idle3";
  Il2CppCodeGenWriteBarrier(&pCVar1->Idle3);
  pCVar1 = TypeInfo_Characters_HorseAnimations->static_fields;
  pCVar1->Crazy = "horse_crazy";
  Il2CppCodeGenWriteBarrier(&pCVar1->Crazy);
  pCVar1 = TypeInfo_Characters_HorseAnimations->static_fields;
  pCVar1->Run = "horse_Run";
  Il2CppCodeGenWriteBarrier(&pCVar1->Run);
  pCVar1 = TypeInfo_Characters_HorseAnimations->static_fields;
  pCVar1->Walk = "horse_WALK";
  Il2CppCodeGenWriteBarrier(&pCVar1->Walk);
  return;
}


