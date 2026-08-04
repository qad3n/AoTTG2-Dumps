// Type: GameProgress.KillMethod
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/KillMethod.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressManager.cs
// --------------------------------

// GameProgress.KillMethod$$.ctor
// il2cpp: void GameProgress_KillMethod___ctor (GameProgress_KillMethod_o __this, int32_t weapon, System_String_o* special, const MethodInfo* method);
// 0x453f000

void GameProgress_KillMethod___ctor
               (GameProgress_KillMethod_o __this,int32_t weapon,System_String_o *special,MethodInfo *method)

{
  undefined4 in_register_00000014;
  undefined4 *puVar1;
  
  puVar1 = __this.fields._0_8_;
  *puVar1 = (int)__this.fields.Special;
  *(ulong *)(puVar1 + 2) = CONCAT44(in_register_00000014,weapon);
  il2cpp_runtime_helper_022b4080(puVar1 + 2,CONCAT44(in_register_00000014,weapon));
  return;
}


// GameProgress.KillMethod$$op_Implicit
// il2cpp: GameProgress_KillMethod_o GameProgress_KillMethod__op_Implicit (int32_t weapon, const MethodInfo* method);
// 0x453f020

GameProgress_KillMethod_o GameProgress_KillMethod__op_Implicit(int32_t weapon,MethodInfo *method)

{
  GameProgress_KillMethod_o GVar1;
  ulong local_18;
  System_String_o *local_10;
  
  if (g_data_057aef1f == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aef1f = '\x01';
  }
  local_18 = CONCAT44(0,weapon);
  local_10 = "";
  il2cpp_runtime_helper_022b4080(&local_10);
  GVar1.fields.Special = local_10;
  GVar1.fields._0_8_ = local_18;
  return (GameProgress_KillMethod_o)GVar1.fields;
}


// GameProgress.KillMethod$$get_WeaponKey
// il2cpp: System_String_o* GameProgress_KillMethod__get_WeaponKey (GameProgress_KillMethod_o __this, const MethodInfo* method);
// 0x453b070

System_String_o * GameProgress_KillMethod__get_WeaponKey(GameProgress_KillMethod_o __this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (g_data_057aef20 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KillWeapon);
    g_data_057aef20 = '\x01';
  }
  local_20.klass = TypeInfo_KillWeapon;
  local_20.monitor = (void *)0xffffffffffffffff;
  local_10 = *__this.fields._0_8_;
  pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  return pSVar1;
}


// GameProgress.KillMethod$$get_SpecialKey
// il2cpp: System_String_o* GameProgress_KillMethod__get_SpecialKey (GameProgress_KillMethod_o __this, const MethodInfo* method);
// 0x453b0d0

System_String_o * GameProgress_KillMethod__get_SpecialKey(GameProgress_KillMethod_o __this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057aef21 == '\0') {
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057aef21 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(*(System_String_o **)(__this.fields._0_8_ + 8),(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "None";
  }
  return *(System_String_o **)(__this.fields._0_8_ + 8);
}


// GameProgress.KillMethod$$ToString
// il2cpp: System_String_o* GameProgress_KillMethod__ToString (GameProgress_KillMethod_o __this, const MethodInfo* method);
// 0x453f080

System_String_o * GameProgress_KillMethod__ToString(GameProgress_KillMethod_o __this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  Settings_TypedSetting_int__o *pSVar3;
  System_String_c *pSVar4;
  Settings_TypedSetting_float__o *__this_00;
  bool_conflict bVar5;
  int32_t iVar6;
  System_String_array *values;
  System_String_o *pSVar7;
  undefined8 uVar8;
  System_String_o *extraout_RAX;
  undefined4 extraout_var;
  System_String_o *extraout_RAX_00;
  undefined8 extraout_RAX_01;
  undefined8 extraout_RAX_02;
  System_String_o *extraout_RAX_03;
  System_String_o *extraout_RAX_04;
  MethodInfo *extraout_RDX;
  System_String_array *unaff_RBX;
  System_Enum_o *pSVar9;
  undefined8 *unaff_RBP;
  undefined4 *puVar10;
  System_String_Fields SVar11;
  System_String_Fields value;
  System_String_Fields __this_01;
  undefined8 *puVar12;
  float fVar13;
  float value_00;
  undefined1 auVar14 [16];
  System_Enum_o SStack_28;
  undefined4 uStack_18;
  
  puVar10 = __this.fields._0_8_;
  SVar11 = (System_String_Fields)&SStack_28;
  if (g_data_057aef22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string,__this.fields.Special);
    il2cpp_runtime_helper_023445d0(&", ");
    il2cpp_runtime_helper_023445d0(&"(");
    il2cpp_runtime_helper_023445d0(&")");
    g_data_057aef22 = '\x01';
    method = extraout_RDX;
  }
  value = TypeInfo_string;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5,method);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "(";
      il2cpp_runtime_helper_022b4080(values->m_Items);
      if (g_data_057aef20 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_KillWeapon);
        g_data_057aef20 = '\x01';
      }
      SStack_28.klass = TypeInfo_KillWeapon;
      SStack_28.monitor = (void *)0xffffffffffffffff;
      uStack_18 = *puVar10;
      pSVar7 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
      value = SVar11;
      if (1 < (uint)values->max_length) {
        value = (System_String_Fields)(values->m_Items + 1);
        values->m_Items[1] = pSVar7;
        il2cpp_runtime_helper_022b4080(value,pSVar7);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ", ";
          il2cpp_runtime_helper_022b4080(values->m_Items + 2);
          if (g_data_057aef21 == '\0') {
            il2cpp_runtime_helper_023445d0(&"None");
            g_data_057aef21 = '\x01';
          }
          value = *(System_String_Fields *)(puVar10 + 2);
          bVar5 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            puVar12 = (undefined8 *)(puVar10 + 2);
            uVar1 = (uint)values->max_length;
          }
          else {
            puVar12 = &"None";
            uVar1 = (uint)values->max_length;
          }
          if (3 < uVar1) {
            value = (System_String_Fields)(values->m_Items + 3);
            values->m_Items[3] = (System_String_o *)*puVar12;
            il2cpp_runtime_helper_022b4080();
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = ")";
              il2cpp_runtime_helper_022b4080(values->m_Items + 4);
              pSVar7 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
              return pSVar7;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    unaff_RBX = values;
  }
  uVar8 = il2cpp_runtime_helper_022b2c90();
  pSVar9 = &SStack_28;
GameProgress_GameStatHandler__CheckLevelUp:
  *(undefined8 **)((long)pSVar9 + -8) = unaff_RBP;
  *(System_String_array **)((long)pSVar9 + -0x10) = unaff_RBX;
  *(undefined8 *)((long)pSVar9 + -0x18) = uVar8;
  SVar11 = value;
  if (g_data_057aef27 == '\0') {
    *(undefined8 *)((long)pSVar9 + -0x20) = 0x453f23b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    *(undefined8 *)((long)pSVar9 + -0x20) = 0x453f247;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    SVar11 = (System_String_Fields)&MethodInfo_Void_set_Value;
    *(undefined8 *)((long)pSVar9 + -0x20) = 0x453f253;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef27 = '\x01';
  }
  pSVar7 = *(System_String_o **)((long)value + 0x18);
  if (((pSVar7 != (System_String_o *)0x0) && (pSVar7[1].monitor != (void *)0x0)) &&
     (SVar11 = pSVar7[1].fields, SVar11 != (System_String_Fields)0x0)) {
    iVar6 = *(int32_t *)((long)pSVar7[1].monitor + 0x14);
    if (iVar6 < 0x32) {
      uVar1 = *(uint *)((long)SVar11 + 0x14);
      unaff_RBP = (undefined8 *)(ulong)uVar1;
      if ((int)uVar1 < 1) {
        return pSVar7;
      }
      SVar11 = *(System_String_Fields *)((long)value + 0x10);
      if (SVar11 != (System_String_Fields)0x0) {
        *(undefined8 *)((long)pSVar9 + -0x20) = 0x453f2e8;
        iVar6 = System_Collections_Generic_List_int___get_Item
                          ((System_Collections_Generic_List_int__o *)SVar11,iVar6,MethodInfo_Int32_get_Item);
        if ((int)uVar1 < iVar6) {
          return (System_String_o *)CONCAT44(extraout_var,iVar6);
        }
        if ((*(char **)((long)value + 0x18) != (char *)0x0) &&
           (SVar11 = *(System_String_Fields *)(*(char **)((long)value + 0x18) + 0x20),
           SVar11 != (System_String_Fields)0x0)) {
          iVar2 = *(int *)((long)SVar11 + 0x14);
          unaff_RBP = &MethodInfo_Void_set_Value;
          *(undefined8 *)((long)pSVar9 + -0x20) = 0x453f31b;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)SVar11,iVar2 + 1,MethodInfo_Void_set_Value)
          ;
          if (*(char **)((long)value + 0x18) != (char *)0x0) {
            pSVar3 = *(Settings_TypedSetting_int__o **)(*(char **)((long)value + 0x18) + 0x28);
            SVar11._stringLength = 0;
            SVar11._firstChar = 0;
            SVar11._6_2_ = 0;
            if (pSVar3 != (Settings_TypedSetting_int__o *)0x0) {
              Settings_TypedSetting_int___set_Value(pSVar3,0,MethodInfo_Void_set_Value);
              return extraout_RAX_00;
            }
          }
        }
      }
    }
    else {
      unaff_RBP = &MethodInfo_Void_set_Value;
      *(undefined8 *)((long)pSVar9 + -0x20) = 0x453f29b;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)SVar11,0,MethodInfo_Void_set_Value);
      if (*(char **)((long)value + 0x18) != (char *)0x0) {
        pSVar3 = *(Settings_TypedSetting_int__o **)(*(char **)((long)value + 0x18) + 0x20);
        SVar11._stringLength = 0;
        SVar11._firstChar = 0;
        SVar11._6_2_ = 0;
        if (pSVar3 != (Settings_TypedSetting_int__o *)0x0) {
          Settings_TypedSetting_int___set_Value(pSVar3,0x32,MethodInfo_Void_set_Value);
          return extraout_RAX;
        }
      }
    }
  }
  *(undefined8 *)((long)pSVar9 + -0x20) = 0x453f343;
  auVar14 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 **)((long)pSVar9 + -0x20) = unaff_RBP;
  *(System_String_Fields *)((long)pSVar9 + -0x28) = value;
  *(long *)((long)pSVar9 + -0x30) = auVar14._0_8_;
  puVar12 = (undefined8 *)(auVar14._8_8_ & 0xffffffff);
  value = SVar11;
  if (g_data_057aef28 == '\0') {
    *(undefined8 *)((long)pSVar9 + -0x38) = 0x453f36d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    value = (System_String_Fields)&MethodInfo_Void_set_Value;
    *(undefined8 *)((long)pSVar9 + -0x38) = 0x453f379;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef28 = '\x01';
  }
  switch(auVar14._8_8_ & 0xffffffff) {
  case 0:
    if (*(char **)((long)SVar11 + 0x18) == (char *)0x0) break;
    value = *(System_String_Fields *)(*(char **)((long)SVar11 + 0x18) + 0x48);
joined_r0x0453f417:
    if (value == (System_String_Fields)0x0) break;
    iVar2 = *(int *)((long)value + 0x14);
    puVar12 = &MethodInfo_Void_set_Value;
    *(undefined8 *)((long)pSVar9 + -0x38) = 0x453f433;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)value,iVar2 + 1,MethodInfo_Void_set_Value);
    if ((*(char **)((long)SVar11 + 0x18) == (char *)0x0) ||
       (value = *(System_String_Fields *)(*(char **)((long)SVar11 + 0x18) + 0x40),
       value == (System_String_Fields)0x0)) break;
    iVar2 = *(int *)((long)value + 0x14);
    *(undefined8 *)((long)pSVar9 + -0x38) = 0x453f454;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)value,iVar2 + 1,MethodInfo_Void_set_Value);
    if (g_data_057aef26 == '\0') {
      *(undefined8 *)((long)pSVar9 + -0x38) = 0x453f469;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      value = (System_String_Fields)&MethodInfo_Void_set_Value;
      *(undefined8 *)((long)pSVar9 + -0x38) = 0x453f475;
      il2cpp_runtime_helper_023445d0();
      g_data_057aef26 = '\x01';
    }
    if (*(char **)((long)SVar11 + 0x18) == (char *)0x0) break;
    pSVar3 = *(Settings_TypedSetting_int__o **)(*(char **)((long)SVar11 + 0x18) + 0x28);
    value._stringLength = 0;
    value._firstChar = 0;
    value._6_2_ = 0;
    if (pSVar3 == (Settings_TypedSetting_int__o *)0x0) break;
    iVar2 = (pSVar3->fields)._value;
    *(undefined8 *)((long)pSVar9 + -0x38) = 0x453f49d;
    Settings_TypedSetting_int___set_Value(pSVar3,iVar2 + 10,MethodInfo_Void_set_Value);
    unaff_RBX = *(System_String_array **)((long)pSVar9 + -0x28);
    unaff_RBP = *(undefined8 **)((long)pSVar9 + -0x20);
    uVar8 = extraout_RAX_01;
    pSVar9 = (System_Enum_o *)((long)pSVar9 + -0x18);
    value = SVar11;
    goto GameProgress_GameStatHandler__CheckLevelUp;
  case 1:
    if (*(char **)((long)SVar11 + 0x18) != (char *)0x0) {
      value = *(System_String_Fields *)(*(char **)((long)SVar11 + 0x18) + 0x50);
      goto joined_r0x0453f417;
    }
    break;
  case 2:
    if (*(char **)((long)SVar11 + 0x18) != (char *)0x0) {
      value = *(System_String_Fields *)(*(char **)((long)SVar11 + 0x18) + 0x58);
      goto joined_r0x0453f417;
    }
    break;
  case 3:
    if (*(char **)((long)SVar11 + 0x18) != (char *)0x0) {
      value = *(System_String_Fields *)(*(char **)((long)SVar11 + 0x18) + 0x60);
      goto joined_r0x0453f417;
    }
    break;
  default:
    if (*(char **)((long)SVar11 + 0x18) != (char *)0x0) {
      value = *(System_String_Fields *)(*(char **)((long)SVar11 + 0x18) + 0x68);
      goto joined_r0x0453f417;
    }
  }
  *(code **)((long)pSVar9 + -0x38) = GameProgress_GameStatHandler__RegisterHumanKill;
  auVar14 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 **)((long)pSVar9 + -0x38) = puVar12;
  *(System_String_Fields *)((long)pSVar9 + -0x40) = SVar11;
  *(long *)((long)pSVar9 + -0x48) = auVar14._0_8_;
  __this_01 = value;
  if (g_data_057aef29 == '\0') {
    *(undefined8 *)((long)pSVar9 + -0x50) = 0x453f4cd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    __this_01 = (System_String_Fields)&MethodInfo_Void_set_Value;
    *(undefined8 *)((long)pSVar9 + -0x50) = 0x453f4d9;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef29 = '\x01';
  }
  switch(auVar14._8_8_ & 0xffffffff) {
  case 0:
    pSVar4 = ((System_String_o *)((long)value + 0x18))->klass;
    if (pSVar4 != (System_String_c *)0x0) {
      __this_01 = (System_String_Fields)(pSVar4->_1).klass;
      goto joined_r0x0453f569;
    }
label_0453f639:
    *(undefined8 *)((long)pSVar9 + -0x50) = 0x453f63e;
    uVar8 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)pSVar9 + -0x50) = uVar8;
    pSVar4 = ((System_String_o *)((long)__this_01 + 0x18))->klass;
    if ((pSVar4 != (System_String_c *)0x0) &&
       (__this_01._stringLength = 0, __this_01._firstChar = 0, __this_01._6_2_ = 0,
       (pSVar4->_1).implementedInterfaces != (Il2CppClass **)0x0)) {
      GameProgress_DamageSetting__Register();
      return extraout_RAX_03;
    }
    *(undefined8 *)((long)pSVar9 + -0x58) = 0x453f66c;
    fVar13 = (float)il2cpp_runtime_helper_022b2c90();
    *(System_String_Fields *)((long)pSVar9 + -0x58) = value;
    if (g_data_057aef2a == '\0') {
      *(float *)((long)pSVar9 + -0x5c) = fVar13;
      *(undefined8 *)((long)pSVar9 + -0x70) = 0x453f696;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
      *(undefined8 *)((long)pSVar9 + -0x70) = 0x453f6a2;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      fVar13 = *(float *)((long)pSVar9 + -0x5c);
      g_data_057aef2a = '\x01';
    }
    pSVar4 = ((System_String_o *)((long)__this_01 + 0x18))->klass;
    if ((pSVar4 != (System_String_c *)0x0) &&
       (__this_00 = *(Settings_TypedSetting_float__o **)&(pSVar4->_1).this_arg.bits,
       __this_00 != (Settings_TypedSetting_float__o *)0x0)) {
      value_00 = (__this_00->fields)._value;
      if (value_00 <= fVar13) {
        value_00 = fVar13;
      }
      Settings_TypedSetting_float___set_Value(__this_00,value_00,MethodInfo_Void_set_Value);
      return extraout_RAX_04;
    }
    *(undefined8 *)((long)pSVar9 + -0x70) = 0x453f6e3;
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
    return pSVar7;
  case 1:
    if (*(char **)((long)value + 0x18) != (char *)0x0) {
      __this_01 = *(System_String_Fields *)(*(char **)((long)value + 0x18) + 0x80);
joined_r0x0453f569:
      if (__this_01 != (System_String_Fields)0x0) goto label_0453f5ab;
    }
    goto label_0453f639;
  case 2:
    if (*(char **)((long)value + 0x18) == (char *)0x0) goto label_0453f639;
    __this_01 = *(System_String_Fields *)(*(char **)((long)value + 0x18) + 0x88);
    break;
  case 3:
    if (*(char **)((long)value + 0x18) == (char *)0x0) goto label_0453f639;
    __this_01 = *(System_String_Fields *)(*(char **)((long)value + 0x18) + 0x90);
    break;
  default:
    if (*(char **)((long)value + 0x18) == (char *)0x0) goto label_0453f639;
    __this_01 = *(System_String_Fields *)(*(char **)((long)value + 0x18) + 0xa0);
    break;
  case 6:
    if (*(char **)((long)value + 0x18) == (char *)0x0) goto label_0453f639;
    __this_01 = *(System_String_Fields *)(*(char **)((long)value + 0x18) + 0x98);
  }
  if (__this_01 == (System_String_Fields)0x0) goto label_0453f639;
label_0453f5ab:
  iVar2 = *(int *)((long)__this_01 + 0x14);
  *(undefined8 *)((long)pSVar9 + -0x50) = 0x453f5c1;
  Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_01,iVar2 + 1,MethodInfo_Void_set_Value);
  if ((*(char **)((long)value + 0x18) == (char *)0x0) ||
     (__this_01 = *(System_String_Fields *)(*(char **)((long)value + 0x18) + 0x70),
     __this_01 == (System_String_Fields)0x0)) goto label_0453f639;
  iVar2 = *(int *)((long)__this_01 + 0x14);
  *(undefined8 *)((long)pSVar9 + -0x50) = 0x453f5e2;
  Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_01,iVar2 + 1,MethodInfo_Void_set_Value);
  if (g_data_057aef26 == '\0') {
    *(undefined8 *)((long)pSVar9 + -0x50) = 0x453f5f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    __this_01 = (System_String_Fields)&MethodInfo_Void_set_Value;
    *(undefined8 *)((long)pSVar9 + -0x50) = 0x453f603;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef26 = '\x01';
  }
  if (*(char **)((long)value + 0x18) == (char *)0x0) goto label_0453f639;
  pSVar3 = *(Settings_TypedSetting_int__o **)(*(char **)((long)value + 0x18) + 0x28);
  __this_01._stringLength = 0;
  __this_01._firstChar = 0;
  __this_01._6_2_ = 0;
  if (pSVar3 == (Settings_TypedSetting_int__o *)0x0) goto label_0453f639;
  iVar2 = (pSVar3->fields)._value;
  *(undefined8 *)((long)pSVar9 + -0x50) = 0x453f62b;
  Settings_TypedSetting_int___set_Value(pSVar3,iVar2 + 10,MethodInfo_Void_set_Value);
  unaff_RBX = *(System_String_array **)((long)pSVar9 + -0x40);
  unaff_RBP = *(undefined8 **)((long)pSVar9 + -0x38);
  uVar8 = extraout_RAX_02;
  pSVar9 = (System_Enum_o *)((long)pSVar9 + -0x30);
  goto GameProgress_GameStatHandler__CheckLevelUp;
}


