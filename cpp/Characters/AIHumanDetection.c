// Type: Characters.AIHumanDetection
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/AIHumanDetection.cs
// Prior real C# source: none
// --------------------------------

// Characters.AIHumanDetection$$.ctor
// il2cpp: void Characters_AIHumanDetection___ctor (Characters_AIHumanDetection_o* __this, Characters_BaseCharacter_o* owner, bool enemiesOnly, bool titansOnly, const MethodInfo* method);
// 0x182106840

void Characters_AIHumanDetection___ctor
               (Characters_AIHumanDetection_o *__this,Characters_BaseCharacter_o *owner,bool enemiesOnly,
               bool titansOnly,MethodInfo *method)

{
  Characters_BaseDetection___ctor
            ((Characters_BaseDetection_o *)__this,owner,enemiesOnly,titansOnly,(MethodInfo *)0x0);
  return;
}


// Characters.AIHumanDetection$$OnRecalculate
// il2cpp: void Characters_AIHumanDetection__OnRecalculate (Characters_AIHumanDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x182106790

void Characters_AIHumanDetection__OnRecalculate
               (Characters_AIHumanDetection_o *__this,Characters_BaseCharacter_o *character,float distance,
               MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_c *pCVar2;
  Characters_TitanColliderToggler_o *__this_00;
  float fVar3;
  
  if (Il2CppMethodInitialized_184346b81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_184346b81 = '\x01';
  }
  if (character != (Characters_BaseCharacter_o *)0x0) {
    pCVar2 = character->klass;
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
       ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      fVar3 = (float)(*(code *)((Il2CppClass *)pCVar2)->vtable[202].methodPtr)
                               (character,((Il2CppClass *)pCVar2)->vtable[202].method);
      __this_00 = (Characters_TitanColliderToggler_o *)(*(uint64_t *)((char *)character + 0x108));
      if (__this_00 == (Characters_TitanColliderToggler_o *)0x0) {
        ThrowNullReferenceException();
      }
      Characters_TitanColliderToggler__SetNearby
                (__this_00,(__this->fields).Owner,distance < fVar3,(MethodInfo *)0x0);
    }
  }
  return;
}


