// Type: Characters.SmokeBombSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/SmokeBombSpecial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/SmokeBombSpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.SmokeBombSpecial$$.ctor
// il2cpp: void Characters_SmokeBombSpecial___ctor (Characters_SmokeBombSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fd7990

void Characters_SmokeBombSpecial___ctor
               (Characters_SmokeBombSpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  
  (__this->fields).Speed = 150.0;
  if (DAT_0570266b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_0570266b = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
  fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
  (__this->fields).Gravity.fields.x = (float)uVar2 * 15.0;
  (__this->fields).Gravity.fields.y = (float)((ulong)uVar2 >> 0x20) * 15.0;
  (__this->fields).Gravity.fields.z = fVar1 * 15.0;
  Characters_SimpleUseable___ctor((Characters_SimpleUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 15.0;
  return;
}


// Characters.SmokeBombSpecial$$Activate
// il2cpp: void Characters_SmokeBombSpecial__Activate (Characters_SmokeBombSpecial_o* __this, const MethodInfo* method);
// 0x3feb3b0

void Characters_SmokeBombSpecial__Activate(Characters_SmokeBombSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int32_t charViewId;
  Characters_BaseCharacter_o *__this_00;
  Characters_BaseCharacter_c *pCVar3;
  long lVar4;
  UnityEngine_Transform_o *pUVar5;
  System_String_o *name;
  Characters_BaseCharacter_o *pCVar6;
  undefined1 auVar7 [16];
  UnityEngine_Quaternion_Fields rotation;
  UnityEngine_Vector3_Fields gravity;
  System_Object_array *settings;
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
  undefined8 uStack_88;
  undefined8 uStack_68;
  
  if (DAT_0570417a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    il2cpp_init_method_metadata(&"");
    DAT_0570417a = '\x01';
  }
  __this_00 = (__this->fields)._owner;
  if (__this_00 == (Characters_BaseCharacter_o *)0x0) goto LAB_03feb786;
  pCVar3 = __this_00->klass;
  bVar1 = (TypeInfo_Human->_2).naturalAligment;
  if (((pCVar3->_2).naturalAligment < bVar1) ||
     ((pCVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(__this_00);
  }
  uVar9 = (*(pCVar3->vtable)._66_GetAimPoint.methodPtr)(__this_00);
  lVar4 = *(long *)&(__this_00->fields).Dead;
  if ((lVar4 == 0) ||
     (pUVar5 = *(UnityEngine_Transform_o **)(lVar4 + 0x10), pUVar5 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_03feb786;
  UVar14 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
  lVar4 = *(long *)&(__this_00->fields).Dead;
  if ((lVar4 == 0) ||
     (pUVar5 = *(UnityEngine_Transform_o **)(lVar4 + 0x10), pUVar5 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_03feb786;
  UVar15 = UnityEngine_Transform__get_up(pUVar5,(MethodInfo *)0x0);
  uStack_68._0_4_ = UVar14.fields.x;
  uStack_68._4_4_ = UVar14.fields.y;
  uStack_68._0_4_ = (float)uStack_68 + UVar15.fields.x + UVar15.fields.x;
  uStack_68._4_4_ = uStack_68._4_4_ + UVar15.fields.y + UVar15.fields.y;
  fVar12 = UVar14.fields.z + UVar15.fields.z + UVar15.fields.z;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar13._0_4_ = (float)uVar9 - (float)uStack_68;
  auVar13._4_4_ = (float)((ulong)uVar9 >> 0x20) - uStack_68._4_4_;
  auVar13._8_4_ =
       extraout_XMM0_Dc - (extraout_XMM0_Dc_00 + extraout_XMM0_Dc_01 + extraout_XMM0_Dc_01);
  auVar13._12_4_ =
       extraout_XMM0_Dd - (extraout_XMM0_Dd_00 + extraout_XMM0_Dd_01 + extraout_XMM0_Dd_01);
  in_XMM1_Da = in_XMM1_Da - fVar12;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar10 = 0;
  uVar11 = 0;
  fVar8 = in_XMM1_Da * in_XMM1_Da + auVar13._4_4_ * auVar13._4_4_ + auVar13._0_4_ * auVar13._0_4_;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
    uVar10 = extraout_XMM0_Dc_02;
    uVar11 = extraout_XMM0_Dd_02;
    if (fVar8 <= 1e-05) goto LAB_03feb572;
LAB_03feb5e1:
    in_XMM1_Da = in_XMM1_Da / fVar8;
    auVar7._4_4_ = fVar8;
    auVar7._0_4_ = fVar8;
    auVar7._8_4_ = uVar10;
    auVar7._12_4_ = uVar11;
    auVar13 = divps(auVar13,auVar7);
    uVar9 = auVar13._0_8_;
    iVar2 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  else {
    fVar8 = SQRT(fVar8);
    if (1e-05 < fVar8) goto LAB_03feb5e1;
LAB_03feb572:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar9 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    iVar2 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  name = *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x20);
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
    pCVar6 = (__this->fields)._owner;
  }
  else {
    pCVar6 = (__this->fields)._owner;
  }
  if (((pCVar6 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar4 = *(long *)&(pCVar6->fields).Dead, lVar4 != 0)) &&
     (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
    rotation = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar8 = (__this->fields).Speed;
    gravity = (__this->fields).Gravity.fields;
    charViewId = *(int32_t *)(lVar4 + 0x94);
    settings = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
    UVar14.fields.z = fVar12;
    UVar14.fields.x = (float)uStack_68;
    UVar14.fields.y = uStack_68._4_4_;
    UVar15.fields.z = in_XMM1_Da * fVar8;
    UVar15.fields.x = (float)uVar9 * fVar8;
    UVar15.fields.y = (float)((ulong)uVar9 >> 0x20) * fVar8;
    Projectiles_ProjectileSpawner__Spawn
              (name,UVar14,(UnityEngine_Quaternion_o)rotation,UVar15,(UnityEngine_Vector3_o)gravity,
               6.5,charViewId,"",settings,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Characters_BaseCharacter__PlaySound
              (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x78),
               (MethodInfo *)0x0);
    return;
  }
LAB_03feb786:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


