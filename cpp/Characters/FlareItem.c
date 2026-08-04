// Type: Characters.FlareItem
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/FlareItem.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Items/FlareItem.cs
// --------------------------------

// Characters.FlareItem$$.ctor
// il2cpp: void Characters_FlareItem___ctor (Characters_FlareItem_o* __this, Characters_BaseCharacter_o* owner, System_String_o* name, UnityEngine_Color_o color, float cooldown, const MethodInfo* method);
// 0x42e6520

void Characters_FlareItem___ctor
               (Characters_FlareItem_o *__this,Characters_BaseCharacter_o *owner,System_String_o *name,
               UnityEngine_Color_o color,float cooldown,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  float local_38;
  float fStack_34;
  
  (__this->fields).Speed = 150.0;
  if (g_data_057ac31b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ac31b = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
  (__this->fields).Gravity.fields.x = (float)uVar2 * 15.0;
  (__this->fields).Gravity.fields.y = (float)((ulong)uVar2 >> 0x20) * 15.0;
  (__this->fields).Gravity.fields.z = fVar1 * 15.0;
  Characters_SimpleUseable___ctor((Characters_SimpleUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Name = name;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Name,name);
  local_38 = color.fields.r;
  fStack_34 = color.fields.g;
  (__this->fields)._color.fields.r = local_38;
  (__this->fields)._color.fields.g = fStack_34;
  (__this->fields)._color.fields.b = color.fields.b;
  (__this->fields)._color.fields.a = color.fields.a;
  (__this->fields).Cooldown = cooldown;
  return;
}


// Characters.FlareItem$$Activate
// il2cpp: void Characters_FlareItem__Activate (Characters_FlareItem_o* __this, const MethodInfo* method);
// 0x42e65e0

void Characters_FlareItem__Activate(Characters_FlareItem_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t charViewId;
  Characters_BaseCharacter_o *__this_00;
  Characters_BaseCharacter_c *pCVar2;
  UnityEngine_Transform_o *pUVar3;
  Characters_BaseCharacter_o *pCVar4;
  undefined1 auVar5 [16];
  UnityEngine_Quaternion_Fields rotation;
  UnityEngine_Vector3_Fields gravity;
  System_Object_array *settings;
  Il2CppObject *pIVar6;
  long lVar7;
  System_String_o *name;
  float fVar8;
  undefined8 uVar9;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Dd_02;
  float in_XMM1_Da;
  float fVar12;
  undefined1 auVar13 [16];
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  undefined8 uStack_a8;
  undefined8 uStack_88;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (g_data_057ade7b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ade7b = '\x01';
  }
  __this_00 = (__this->fields)._owner;
  if (__this_00 == (Characters_BaseCharacter_o *)0x0) goto label_042e6a3b;
  pCVar2 = __this_00->klass;
  bVar1 = (TypeInfo_Human->_2).naturalAligment;
  if (((pCVar2->_2).naturalAligment < bVar1) || ((pCVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)
     ) {
label_042e6a40:
    il2cpp_runtime_helper_022b2fd0(__this_00);
  }
  else {
    uVar9 = (*(pCVar2->vtable)._66_GetAimPoint.methodPtr)(__this_00);
    lVar7 = *(long *)&(__this_00->fields).Dead;
    if ((lVar7 == 0) ||
       (pUVar3 = *(UnityEngine_Transform_o **)(lVar7 + 0x10), pUVar3 == (UnityEngine_Transform_o *)0x0)) {
label_042e6a3b:
      il2cpp_runtime_helper_022b2c90();
      goto label_042e6a40;
    }
    UVar14 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
    lVar7 = *(long *)&(__this_00->fields).Dead;
    if ((lVar7 == 0) ||
       (pUVar3 = *(UnityEngine_Transform_o **)(lVar7 + 0x10), pUVar3 == (UnityEngine_Transform_o *)0x0))
    goto label_042e6a3b;
    UVar15 = UnityEngine_Transform__get_up(pUVar3,(MethodInfo *)0x0);
    uStack_88._0_4_ = UVar14.fields.x;
    uStack_88._4_4_ = UVar14.fields.y;
    uStack_88._0_4_ = (float)uStack_88 + UVar15.fields.x + UVar15.fields.x;
    uStack_88._4_4_ = uStack_88._4_4_ + UVar15.fields.y + UVar15.fields.y;
    fVar12 = UVar14.fields.z + UVar15.fields.z + UVar15.fields.z;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    auVar13._0_4_ = (float)uVar9 - (float)uStack_88;
    auVar13._4_4_ = (float)((ulong)uVar9 >> 0x20) - uStack_88._4_4_;
    auVar13._8_4_ = extraout_XMM0_Dc - (extraout_XMM0_Dc_00 + extraout_XMM0_Dc_01 + extraout_XMM0_Dc_01);
    auVar13._12_4_ = extraout_XMM0_Dd - (extraout_XMM0_Dd_00 + extraout_XMM0_Dd_01 + extraout_XMM0_Dd_01);
    in_XMM1_Da = in_XMM1_Da - fVar12;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar10 = 0;
    uVar11 = 0;
    fVar8 = in_XMM1_Da * in_XMM1_Da + auVar13._4_4_ * auVar13._4_4_ + auVar13._0_4_ * auVar13._0_4_;
    if (fVar8 < 0.0) {
      fVar8 = sqrtf(fVar8);
      uVar10 = extraout_XMM0_Dc_02;
      uVar11 = extraout_XMM0_Dd_02;
      if (fVar8 <= 1e-05) goto label_042e67b3;
label_042e680f:
      in_XMM1_Da = in_XMM1_Da / fVar8;
      auVar5._4_4_ = fVar8;
      auVar5._0_4_ = fVar8;
      auVar5._8_4_ = uVar10;
      auVar5._12_4_ = uVar11;
      auVar13 = divps(auVar13,auVar5);
      uVar9 = auVar13._0_8_;
    }
    else {
      fVar8 = SQRT(fVar8);
      if (1e-05 < fVar8) goto label_042e680f;
label_042e67b3:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar9 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    if (*(int *)(TypeInfo_ProjectilePrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      name = *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x10);
      if (g_data_057a6843 != '\0') goto label_042e6855;
label_042e6a1b:
      il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
      g_data_057a6843 = '\x01';
      pCVar4 = (__this->fields)._owner;
    }
    else {
      name = *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x10);
      if (g_data_057a6843 == '\0') goto label_042e6a1b;
label_042e6855:
      pCVar4 = (__this->fields)._owner;
    }
    if (((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
        (lVar7 = *(long *)&(pCVar4->fields).Dead, lVar7 == 0)) ||
       (lVar7 = *(long *)(lVar7 + 0x20), lVar7 == 0)) goto label_042e6a3b;
    rotation = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar8 = (__this->fields).Speed;
    gravity = (__this->fields).Gravity.fields;
    charViewId = *(int32_t *)(lVar7 + 0x94);
    settings = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
    fStack_38 = (__this->fields)._color.fields.r;
    fStack_34 = (__this->fields)._color.fields.g;
    fStack_30 = (__this->fields)._color.fields.b;
    fStack_2c = (__this->fields)._color.fields.a;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Color,&fStack_38);
    if (settings == (System_Object_array *)0x0) goto label_042e6a3b;
    if ((pIVar6 != (Il2CppObject *)0x0) &&
       (lVar7 = il2cpp_runtime_helper_023051f0(pIVar6,(((settings->obj).klass)->_1).element_class), lVar7 == 0))
    goto label_042e6a4d;
    if ((int)settings->max_length != 0) {
      uStack_a8._0_4_ = (float)uVar9;
      uStack_a8._4_4_ = (float)((ulong)uVar9 >> 0x20);
      settings->m_Items[0] = pIVar6;
      il2cpp_runtime_helper_022b4080(settings->m_Items,pIVar6);
      UVar14.fields.z = fVar12;
      UVar14.fields.x = (float)uStack_88;
      UVar14.fields.y = uStack_88._4_4_;
      UVar15.fields.z = in_XMM1_Da * fVar8;
      UVar15.fields.x = (float)uStack_a8 * fVar8;
      UVar15.fields.y = uStack_a8._4_4_ * fVar8;
      Projectiles_ProjectileSpawner__Spawn
                (name,UVar14,(UnityEngine_Quaternion_o)rotation,UVar15,(UnityEngine_Vector3_o)gravity,6.5,
                 charViewId,"",settings,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Characters_BaseCharacter__PlaySound
                (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x78),(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_042e6a4d:
  uVar9 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar9,0);
  if (g_data_057ade7c == '\0') {
    il2cpp_runtime_helper_023445d0(&"AdvancedAlloy");
    g_data_057ade7c = '\x01';
  }
  return;
}


