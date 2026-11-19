// Type: GameProgress.KillMethod
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/GameProgress/KillMethod.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressManager.cs
// --------------------------------

// GameProgress.KillMethod$$.ctor
// il2cpp: void GameProgress_KillMethod___ctor (GameProgress_KillMethod_o __this, int32_t weapon, System_String_o* special, const MethodInfo* method);
// 0x59218e0

void GameProgress_KillMethod___ctor
               (GameProgress_KillMethod_o *__this,int32_t weapon,System_String_o *special,MethodInfo *method)

{
  (__this->fields).Weapon = weapon;
  (__this->fields).Special = special;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Special);
  return;
}


// GameProgress.KillMethod$$op_Implicit
// il2cpp: GameProgress_KillMethod_o GameProgress_KillMethod__op_Implicit (int32_t weapon, const MethodInfo* method);
// 0x5921900

GameProgress_KillMethod_o GameProgress_KillMethod__op_Implicit(int32_t weapon,MethodInfo *method)

{
  GameProgress_KillMethod_o GVar1;
  ulong local_18;
  System_String_o *local_10;
  
  if (Il2CppMethodInitialized_07545757 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545757 = '\x01';
  }
  local_18 = CONCAT44(0,weapon);
  local_10 = "";
  Il2CppCodeGenWriteBarrier(&local_10);
  GVar1.fields.Special = local_10;
  GVar1.fields._0_8_ = local_18;
  return (GameProgress_KillMethod_o)GVar1.fields;
}


// GameProgress.KillMethod$$get_WeaponKey
// il2cpp: System_String_o* GameProgress_KillMethod__get_WeaponKey (GameProgress_KillMethod_o __this, const MethodInfo* method);
// 0x591ce00

System_String_o * GameProgress_KillMethod__get_WeaponKey(GameProgress_KillMethod_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (Il2CppMethodInitialized_07545758 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
    Il2CppMethodInitialized_07545758 = '\x01';
  }
  local_20.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
  local_20.monitor = (void *)0xffffffffffffffff;
  local_10 = (__this->fields).Weapon;
  pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  return pSVar1;
}


// GameProgress.KillMethod$$get_SpecialKey
// il2cpp: System_String_o* GameProgress_KillMethod__get_SpecialKey (GameProgress_KillMethod_o __this, const MethodInfo* method);
// 0x591ce60

System_String_o *
GameProgress_KillMethod__get_SpecialKey(GameProgress_KillMethod_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545759 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07545759 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).Special,(MethodInfo *)0x0);
  if (bVar1) {
    return "None";
  }
  return (__this->fields).Special;
}


// GameProgress.KillMethod$$ToString
// il2cpp: System_String_o* GameProgress_KillMethod__ToString (GameProgress_KillMethod_o __this, const MethodInfo* method);
// 0x5921960

System_String_o * GameProgress_KillMethod__ToString(GameProgress_KillMethod_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  System_String_o **ppSVar3;
  System_Enum_o SStack_28;
  int32_t iStack_18;
  
  if (Il2CppMethodInitialized_0754575a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"(");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    Il2CppMethodInitialized_0754575a = '\x01';
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (values == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = "(";
    Il2CppCodeGenWriteBarrier(values->m_Items);
    if (Il2CppMethodInitialized_07545758 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
      Il2CppMethodInitialized_07545758 = '\x01';
    }
    SStack_28.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
    SStack_28.monitor = (void *)0xffffffffffffffff;
    iStack_18 = (__this->fields).Weapon;
    pSVar2 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
    if ((values->max_length & 0xfffffffe) != 0) {
      values->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = ", ";
        Il2CppCodeGenWriteBarrier(values->m_Items + 2);
        if (Il2CppMethodInitialized_07545759 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"None");
          Il2CppMethodInitialized_07545759 = '\x01';
        }
        bVar1 = System_String__IsNullOrEmpty((__this->fields).Special,(MethodInfo *)0x0);
        if ((values->max_length & 0xfffffffc) != 0) {
          if (bVar1) {
            ppSVar3 = &"None";
          }
          else {
            ppSVar3 = &(__this->fields).Special;
          }
          values->m_Items[3] = *ppSVar3;
          Il2CppCodeGenWriteBarrier(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = ")";
            Il2CppCodeGenWriteBarrier(values->m_Items + 4);
            pSVar2 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
            return pSVar2;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


