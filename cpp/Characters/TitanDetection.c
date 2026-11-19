// Type: Characters.TitanDetection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/TitanDetection.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/TitanDetection.cs
// --------------------------------

// Characters.TitanDetection$$.ctor
// il2cpp: void Characters_TitanDetection___ctor (Characters_TitanDetection_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5be6520

void Characters_TitanDetection___ctor
               (Characters_TitanDetection_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  Characters_BaseDetection___ctor((Characters_AIHumanDetection_o *)__this,owner,true,false,in_R8);
  return;
}


// Characters.TitanDetection$$OnRecalculate
// il2cpp: void Characters_TitanDetection__OnRecalculate (Characters_TitanDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x5be6530

void Characters_TitanDetection__OnRecalculate
               (Characters_TitanDetection_o *__this,Characters_BaseCharacter_o *character,float distance,
               MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_c *pCVar2;
  Characters_TitanColliderToggler_o *__this_00;
  float fVar3;
  
  if (Il2CppMethodInitialized_075475e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_075475e3 = '\x01';
  }
  if (character != (Characters_BaseCharacter_o *)0x0) {
    pCVar2 = character->klass;
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
       ((pCVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      fVar3 = (float)(*(code *)((Il2CppClass *)pCVar2)->vtable[203].methodPtr)
                               (character,((Il2CppClass *)pCVar2)->vtable[203].method);
      __this_00 = (Characters_TitanColliderToggler_o *)(*(uint64_t *)((char *)character + 0x110));
      if (__this_00 == (Characters_TitanColliderToggler_o *)0x0) {
        ThrowNullReferenceException();
      }
      Characters_TitanColliderToggler__SetNearby
                (__this_00,(__this->fields).Owner,distance < fVar3,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


