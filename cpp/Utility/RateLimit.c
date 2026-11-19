// Type: Utility.RateLimit
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Utility/RateLimit.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/RateLimit.cs
// --------------------------------

// Utility.RateLimit$$Copy
// il2cpp: Utility_RateLimit_o* Utility_RateLimit__Copy (Utility_RateLimit_o* __this, const MethodInfo* method);
// 0x5df0450

Utility_RateLimit_o * Utility_RateLimit__Copy(Utility_RateLimit_o *__this,MethodInfo *method)

{
  float fVar1;
  int32_t iVar2;
  Utility_RateLimit_o *__this_00;
  float fVar3;
  
  if (Il2CppMethodInitialized_075482ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_RateLimit);
    Il2CppMethodInitialized_075482ec = '\x01';
  }
  iVar2 = (__this->fields)._maxUsage;
  fVar1 = (__this->fields)._resetDelay;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_RateLimit);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._currentUsage = 0;
  fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  (__this_00->fields)._lastResetTime = fVar3;
  (__this_00->fields)._maxUsage = iVar2;
  (__this_00->fields)._resetDelay = fVar1;
  return __this_00;
}


// Utility.RateLimit$$.ctor
// il2cpp: void Utility_RateLimit___ctor (Utility_RateLimit_o* __this, int32_t maxUsage, float resetDelay, const MethodInfo* method);
// 0x5df04d0

void Utility_RateLimit___ctor
               (Utility_RateLimit_o *__this,int32_t maxUsage,float resetDelay,MethodInfo *method)

{
  float fVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._currentUsage = 0;
  fVar1 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  (__this->fields)._lastResetTime = fVar1;
  (__this->fields)._maxUsage = maxUsage;
  (__this->fields)._resetDelay = resetDelay;
  return;
}


// Utility.RateLimit$$Peek
// il2cpp: bool Utility_RateLimit__Peek (Utility_RateLimit_o* __this, int32_t usage, const MethodInfo* method);
// 0x5df0510

bool Utility_RateLimit__Peek(Utility_RateLimit_o *__this,int32_t usage,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  if ((__this->fields)._lastResetTime + (__this->fields)._resetDelay <= fVar1) {
    (__this->fields)._currentUsage = 0;
    fVar1 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    (__this->fields)._lastResetTime = fVar1;
  }
  return usage + (__this->fields)._currentUsage <= (__this->fields)._maxUsage;
}


// Utility.RateLimit$$Use
// il2cpp: bool Utility_RateLimit__Use (Utility_RateLimit_o* __this, int32_t usage, const MethodInfo* method);
// 0x5df0590

bool Utility_RateLimit__Use(Utility_RateLimit_o *__this,int32_t usage,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  if ((__this->fields)._lastResetTime + (__this->fields)._resetDelay <= fVar3) {
    (__this->fields)._currentUsage = 0;
    fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    (__this->fields)._lastResetTime = fVar3;
  }
  iVar1 = (__this->fields)._maxUsage;
  iVar2 = usage + (__this->fields)._currentUsage;
  if (iVar2 <= iVar1) {
    (__this->fields)._currentUsage = iVar2;
  }
  return iVar2 <= iVar1;
}


// Utility.RateLimit$$TryReset
// il2cpp: void Utility_RateLimit__TryReset (Utility_RateLimit_o* __this, const MethodInfo* method);
// 0x5df0560

void Utility_RateLimit__TryReset(Utility_RateLimit_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  if ((__this->fields)._lastResetTime + (__this->fields)._resetDelay <= fVar1) {
    (__this->fields)._currentUsage = 0;
    fVar1 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    (__this->fields)._lastResetTime = fVar1;
  }
  return;
}


