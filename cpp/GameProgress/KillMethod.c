// Type: GameProgress.KillMethod
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameProgress/KillMethod.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameProgress/GameProgressManager.cs  [prior source available (delta unverified)]
// --------------------------------

// GameProgress.KillMethod$$.ctor
// il2cpp: void GameProgress_KillMethod___ctor (GameProgress_KillMethod_o __this, int32_t weapon, System_String_o* special, const MethodInfo* method);
// 0x420c8d0

void GameProgress_KillMethod___ctor
               (GameProgress_KillMethod_o __this,int32_t weapon,System_String_o *special,
               MethodInfo *method)

{
  undefined4 in_register_00000014;
  undefined4 *puVar1;
  
  puVar1 = __this.fields._0_8_;
  *puVar1 = (int)__this.fields.Special;
  *(ulong *)(puVar1 + 2) = CONCAT44(in_register_00000014,weapon);
  il2cpp_runtime_glue(puVar1 + 2,CONCAT44(in_register_00000014,weapon));
  return;
}


// GameProgress.KillMethod$$op_Implicit
// il2cpp: GameProgress_KillMethod_o GameProgress_KillMethod__op_Implicit (int32_t weapon, const MethodInfo* method);
// 0x420c8f0

GameProgress_KillMethod_o GameProgress_KillMethod__op_Implicit(int32_t weapon,MethodInfo *method)

{
  GameProgress_KillMethod_o GVar1;
  ulong local_18;
  System_String_o *local_10;
  
  if (DAT_05705044 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05705044 = '\x01';
  }
  local_18 = CONCAT44(0,weapon);
  local_10 = "";
  il2cpp_runtime_glue(&local_10);
  GVar1.fields.Special = local_10;
  GVar1.fields._0_8_ = local_18;
  return (GameProgress_KillMethod_o)GVar1.fields;
}


// GameProgress.KillMethod$$get_WeaponKey
// il2cpp: System_String_o* GameProgress_KillMethod__get_WeaponKey (GameProgress_KillMethod_o __this, const MethodInfo* method);
// 0x4208aa0

System_String_o *
GameProgress_KillMethod__get_WeaponKey(GameProgress_KillMethod_o __this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (DAT_05705045 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KillWeapon);
    DAT_05705045 = '\x01';
  }
  local_20.klass = TypeInfo_KillWeapon;
  local_20.monitor = (void *)0xffffffffffffffff;
  local_10 = *__this.fields._0_8_;
  pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  return pSVar1;
}


// GameProgress.KillMethod$$get_SpecialKey
// il2cpp: System_String_o* GameProgress_KillMethod__get_SpecialKey (GameProgress_KillMethod_o __this, const MethodInfo* method);
// 0x4208b00

System_String_o *
GameProgress_KillMethod__get_SpecialKey(GameProgress_KillMethod_o __this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05705046 == '\0') {
    il2cpp_init_method_metadata(&"None");
    DAT_05705046 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(__this.fields._0_8_ + 8),(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "None";
  }
  return *(System_String_o **)(__this.fields._0_8_ + 8);
}


// GameProgress.KillMethod$$ToString
// il2cpp: System_String_o* GameProgress_KillMethod__ToString (GameProgress_KillMethod_o __this, const MethodInfo* method);
// 0x420c950

System_String_o *
GameProgress_KillMethod__ToString(GameProgress_KillMethod_o __this,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  System_String_array *values;
  System_String_o *pSVar3;
  MethodInfo *extraout_RDX;
  undefined4 *puVar4;
  undefined8 *puVar5;
  System_Enum_o SStack_28;
  undefined4 uStack_18;
  
  puVar4 = __this.fields._0_8_;
  if (DAT_05705047 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string,__this.fields.Special);
    il2cpp_init_method_metadata(&", ");
    il2cpp_init_method_metadata(&"(");
    il2cpp_init_method_metadata(&")");
    DAT_05705047 = '\x01';
    method = extraout_RDX;
  }
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5,method);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "(";
      il2cpp_runtime_glue(values->m_Items);
      if (DAT_05705045 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_KillWeapon);
        DAT_05705045 = '\x01';
      }
      SStack_28.klass = TypeInfo_KillWeapon;
      SStack_28.monitor = (void *)0xffffffffffffffff;
      uStack_18 = *puVar4;
      pSVar3 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar3;
        il2cpp_runtime_glue(values->m_Items + 1,pSVar3);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ", ";
          il2cpp_runtime_glue(values->m_Items + 2);
          if (DAT_05705046 == '\0') {
            il2cpp_init_method_metadata(&"None");
            DAT_05705046 = '\x01';
          }
          bVar2 = System_String__IsNullOrEmpty(*(System_String_o **)(puVar4 + 2),(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            puVar5 = (undefined8 *)(puVar4 + 2);
            uVar1 = (uint)values->max_length;
          }
          else {
            puVar5 = &"None";
            uVar1 = (uint)values->max_length;
          }
          if (3 < uVar1) {
            values->m_Items[3] = (System_String_o *)*puVar5;
            il2cpp_runtime_glue(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = ")";
              il2cpp_runtime_glue(values->m_Items + 4);
              pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
              return pSVar3;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


