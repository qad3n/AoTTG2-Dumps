// Type: GameProgress.KillMethod
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/KillMethod.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressManager.cs
// --------------------------------

// GameProgress.KillMethod$$.ctor
// il2cpp: void GameProgress_KillMethod___ctor (GameProgress_KillMethod_o __this, int32_t weapon, System_String_o* special, const MethodInfo* method);
// 0x181028b90

void
GameProgress_KillMethod___ctor(GameProgress_KillMethod_o __this, int32_t weapon, System_String_o* special, MethodInfo* method)

{
  (__this->fields)._nameId_k__BackingField = nameId;
  (__this->fields)._eventAttribute_k__BackingField = eventAttribute;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._eventAttribute_k__BackingField,eventAttribute);
  return;
}


// GameProgress.KillMethod$$op_Implicit
// il2cpp: GameProgress_KillMethod_o GameProgress_KillMethod__op_Implicit (int32_t weapon, const MethodInfo* method);
// 0x181e36e70

GameProgress_KillMethod_o *
GameProgress_KillMethod__op_Implicit
          (GameProgress_KillMethod_o *__return_storage_ptr__,int32_t weapon,MethodInfo *method)

{
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184344dc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344dc3 = '\x01';
  }
  *(undefined8 *)&__return_storage_ptr__->fields = 0;
  (__return_storage_ptr__->fields).Special = (System_String_o *)0x0;
  value = "";
  (__return_storage_ptr__->fields).Special = "";
  (__return_storage_ptr__->fields).Weapon = weapon;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).Special,value);
  return __return_storage_ptr__;
}


// GameProgress.KillMethod$$get_WeaponKey
// il2cpp: System_String_o* GameProgress_KillMethod__get_WeaponKey (GameProgress_KillMethod_o __this, const MethodInfo* method);
// 0x181e36e10

System_String_o * GameProgress_KillMethod__get_WeaponKey(GameProgress_KillMethod_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_184344dc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
    Il2CppMethodInitialized_184344dc4 = '\x01';
  }
  local_28.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
  local_18 = (__this->fields).Weapon;
  local_28.monitor = &g_data_ffffffffffffffff;
  pSVar1 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  return pSVar1;
}


// GameProgress.KillMethod$$get_SpecialKey
// il2cpp: System_String_o* GameProgress_KillMethod__get_SpecialKey (GameProgress_KillMethod_o __this, const MethodInfo* method);
// 0x181e36dc0

System_String_o *
GameProgress_KillMethod__get_SpecialKey(GameProgress_KillMethod_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344dc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184344dc5 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).Special,(MethodInfo *)0x0);
  pSVar2 = "None";
  if (!bVar1) {
    pSVar2 = (__this->fields).Special;
  }
  return pSVar2;
}


// GameProgress.KillMethod$$ToString
// il2cpp: System_String_o* GameProgress_KillMethod__ToString (GameProgress_KillMethod_o __this, const MethodInfo* method);
// 0x181e36c30

System_String_o * GameProgress_KillMethod__ToString(GameProgress_KillMethod_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_184344dc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"(");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    Il2CppMethodInitialized_184344dc6 = '\x01';
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  pSVar2 = "(";
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "(";
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar2);
      if (Il2CppMethodInitialized_184344dc4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_KillWeapon);
        Il2CppMethodInitialized_184344dc4 = '\x01';
      }
      local_28.klass = (System_Enum_c *)TypeInfo_GameProgress_KillWeapon;
      local_18 = (__this->fields).Weapon;
      local_28.monitor = &g_data_ffffffffffffffff;
      pSVar2 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar2;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar2);
        pSVar2 = ", ";
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ", ";
          Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar2);
          if (Il2CppMethodInitialized_184344dc5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"None");
            Il2CppMethodInitialized_184344dc5 = '\x01';
          }
          bVar1 = System_String__IsNullOrEmpty((__this->fields).Special,(MethodInfo *)0x0);
          pSVar2 = "None";
          if (!bVar1) {
            pSVar2 = (__this->fields).Special;
          }
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar2;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar2);
            pSVar2 = ")";
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = ")";
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar2);
              pSVar2 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
              return pSVar2;
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


