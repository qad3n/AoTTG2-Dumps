// Type: Utility.RateLimit
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/RateLimit.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/RateLimit.cs
// --------------------------------

// Utility.RateLimit$$Copy
// il2cpp: Utility_RateLimit_o* Utility_RateLimit__Copy (Utility_RateLimit_o* __this, const MethodInfo* method);
// 0x4493c60

Utility_RateLimit_o * Utility_RateLimit__Copy(Utility_RateLimit_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  float fVar2;
  Utility_RateLimit_o *__this_00;
  float fVar3;
  
  if (g_data_057ae91b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RateLimit);
    g_data_057ae91b = '\x01';
  }
  iVar1 = (__this->fields)._maxUsage;
  fVar2 = (__this->fields)._resetDelay;
  __this_00 = (Utility_RateLimit_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RateLimit);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._currentUsage = 0;
  fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  (__this_00->fields)._lastResetTime = fVar3;
  (__this_00->fields)._maxUsage = iVar1;
  (__this_00->fields)._resetDelay = fVar2;
  return __this_00;
}


// Utility.RateLimit$$.ctor
// il2cpp: void Utility_RateLimit___ctor (Utility_RateLimit_o* __this, int32_t maxUsage, float resetDelay, const MethodInfo* method);
// 0x4493cd0

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
// 0x4493d10

bool_conflict Utility_RateLimit__Peek(Utility_RateLimit_o *__this,int32_t usage,MethodInfo *method)

{
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  uVar1 = extraout_EAX;
  if ((__this->fields)._lastResetTime + (__this->fields)._resetDelay <= fVar2) {
    (__this->fields)._currentUsage = 0;
    fVar2 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    (__this->fields)._lastResetTime = fVar2;
    uVar1 = extraout_EAX_00;
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),
                  usage + (__this->fields)._currentUsage <= (__this->fields)._maxUsage);
}


// Utility.RateLimit$$Use
// il2cpp: bool Utility_RateLimit__Use (Utility_RateLimit_o* __this, int32_t usage, const MethodInfo* method);
// 0x4493d90

bool_conflict Utility_RateLimit__Use(Utility_RateLimit_o *__this,int32_t usage,MethodInfo *method)

{
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  uVar1 = extraout_RAX;
  if ((__this->fields)._lastResetTime + (__this->fields)._resetDelay <= fVar3) {
    (__this->fields)._currentUsage = 0;
    fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    (__this->fields)._lastResetTime = fVar3;
    uVar1 = extraout_RAX_00;
  }
  iVar2 = usage + (__this->fields)._currentUsage;
  if ((__this->fields)._maxUsage < iVar2) {
    return 0;
  }
  (__this->fields)._currentUsage = iVar2;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar1 >> 8),1);
}


// Utility.RateLimit$$TryReset
// il2cpp: void Utility_RateLimit__TryReset (Utility_RateLimit_o* __this, const MethodInfo* method);
// 0x4493d60

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


