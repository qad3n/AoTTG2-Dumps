// Type: Characters.HumanDetection
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanDetection.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/HumanDetection.cs
// --------------------------------

// Characters.HumanDetection$$.ctor
// il2cpp: void Characters_HumanDetection___ctor (Characters_HumanDetection_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x182117b10

void Characters_HumanDetection___ctor
               (Characters_HumanDetection_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseDetection___ctor((Characters_BaseDetection_o *)__this,owner,false,true,(MethodInfo *)0x0);
  return;
}


// Characters.HumanDetection$$OnRecalculate
// il2cpp: void Characters_HumanDetection__OnRecalculate (Characters_HumanDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x182117a50

void Characters_HumanDetection__OnRecalculate
               (Characters_HumanDetection_o *__this,Characters_BaseCharacter_o *character,float distance,
               MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_c *pCVar2;
  Characters_TitanColliderToggler_o *__this_00;
  float fVar3;
  
  if (Il2CppMethodInitialized_184346b80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_184346b80 = '\x01';
  }
  if (character != (Characters_BaseCharacter_o *)0x0) {
    pCVar2 = character->klass;
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      il2cpp_codegen_raise_invalid_cast_exception(character);
    }
    fVar3 = (float)(*(code *)((Il2CppClass *)pCVar2)->vtable[202].methodPtr)
                             (character,((Il2CppClass *)pCVar2)->vtable[202].method);
    __this_00 = (Characters_TitanColliderToggler_o *)(*(uint64_t *)((char *)character + 0x108));
    if (__this_00 != (Characters_TitanColliderToggler_o *)0x0) {
      Characters_TitanColliderToggler__SetNearby
                (__this_00,(__this->fields).Owner,distance < fVar3,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


