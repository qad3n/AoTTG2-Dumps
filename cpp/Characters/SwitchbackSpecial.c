// Type: Characters.SwitchbackSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/SwitchbackSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SwitchbackSpecial.cs
// --------------------------------

// Characters.SwitchbackSpecial$$get_ActiveTime
// il2cpp: float Characters_SwitchbackSpecial__get_ActiveTime (Characters_SwitchbackSpecial_o* __this, const MethodInfo* method);
// 0x42f9440

float Characters_SwitchbackSpecial__get_ActiveTime(Characters_SwitchbackSpecial_o *__this,MethodInfo *method)

{
  return 0.3;
}


// Characters.SwitchbackSpecial$$.ctor
// il2cpp: void Characters_SwitchbackSpecial___ctor (Characters_SwitchbackSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42f9450

void Characters_SwitchbackSpecial___ctor
               (Characters_SwitchbackSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 2.0;
  return;
}


// Characters.SwitchbackSpecial$$RegisterCollision
// il2cpp: bool Characters_SwitchbackSpecial__RegisterCollision (Characters_SwitchbackSpecial_o* __this, Characters_Human_o* human, UnityEngine_Collision_o* collision, float speed, const MethodInfo* method);
// 0x42f9470

bool_conflict
Characters_SwitchbackSpecial__RegisterCollision
          (Characters_SwitchbackSpecial_o *__this,Characters_Human_o *human,UnityEngine_Collision_o *collision
          ,float speed,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  UnityEngine_Rigidbody_o *__this_00;
  undefined1 auVar3 [16];
  UnityEngine_ContactPoint_o __this_01;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  UnityEngine_ContactPoint_array *pUVar5;
  undefined8 uVar6;
  uint uVar7;
  int extraout_EDX;
  undefined8 extraout_RDX;
  int iVar8;
  char cVar9;
  Characters_Human_o *pCVar10;
  Il2CppClass *vtableDispatch;
  long *plVar11;
  float fVar12;
  int32_t iVar13;
  undefined4 uVar14;
  undefined4 in_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  undefined1 in_stack_ffffffffffffffa8 [12];
  undefined4 in_stack_ffffffffffffffb4;
  undefined1 in_stack_ffffffffffffffb8 [16];
  
  uVar7 = (uint)method;
  pCVar10 = human;
  plVar11 = (long *)__this;
  if (g_data_057adef4 == '\0') {
    plVar11 = &TypeInfo_HumanSounds;
    il2cpp_runtime_helper_023445d0();
    g_data_057adef4 = '\x01';
  }
  cVar9 = (char)pCVar10;
  if ((char)(__this->fields).IsActive == '\0') {
    return 0;
  }
  if (((human != (Characters_Human_o *)0x0) && (lVar2 = *(long *)&(human->fields).Dead, lVar2 != 0)) &&
     (collision != (UnityEngine_Collision_o *)0x0)) {
    __this_00 = *(UnityEngine_Rigidbody_o **)(lVar2 + 0x18);
    cVar9 = '\0';
    pUVar5 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0);
    plVar11 = (long *)collision;
    if (pUVar5 != (UnityEngine_ContactPoint_array *)0x0) {
      if ((int)pUVar5->max_length == 0) goto label_042f96b1;
      cVar9 = '\0';
      __this_01.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffffb4;
      __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffffa8._0_4_;
      __this_01.fields.m_Point.fields.y = (float)in_stack_ffffffffffffffa8._4_4_;
      __this_01.fields.m_Point.fields.z = (float)in_stack_ffffffffffffffa8._8_4_;
      __this_01.fields.m_Normal.fields.y = (float)in_stack_ffffffffffffffb8._0_4_;
      __this_01.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffffb8._4_4_;
      __this_01.fields.m_Impulse.fields.x = (float)in_stack_ffffffffffffffb8._8_4_;
      __this_01.fields.m_Impulse.fields.y = (float)in_stack_ffffffffffffffb8._12_4_;
      __this_01.fields.m_Impulse.fields.z = speed;
      __this_01.fields.m_ThisColliderInstanceID = in_XMM0_Db;
      __this_01.fields.m_OtherColliderInstanceID = in_XMM0_Dc;
      __this_01.fields.m_Separation = in_XMM0_Dd;
      UVar18 = UnityEngine_ContactPoint__get_normal(__this_01,(MethodInfo *)pUVar5->m_Items);
      fVar17 = UVar18.fields.z;
      auVar15._0_8_ = UVar18.fields._0_8_;
      auVar15._8_4_ = extraout_XMM0_Dc;
      auVar15._12_4_ = extraout_XMM0_Dd;
      auVar16._8_4_ = extraout_XMM0_Dc;
      auVar16._0_8_ = auVar15._0_8_;
      auVar16._12_4_ = extraout_XMM0_Dd;
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        g_data_057a6845 = '\x01';
        iVar8 = *(int *)((long)&TypeInfo_Math[2].klass + 4);
        plVar11 = (long *)TypeInfo_Math;
        auVar15 = auVar16;
      }
      else {
        iVar8 = *(int *)((long)&TypeInfo_Math[2].klass + 4);
        plVar11 = (long *)TypeInfo_Math;
      }
      TypeInfo_Math = (UnityEngine_Collision_o *)plVar11;
      if (iVar8 == 0) {
        auVar15 = auVar16;
        il2cpp_runtime_helper_02337ed0();
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        auVar16 = auVar15;
      }
      fVar12 = fVar17 * fVar17 + auVar15._4_4_ * auVar15._4_4_ + auVar15._0_4_ * auVar15._0_4_;
      if (fVar12 < 0.0) {
        auVar15 = auVar16;
        fVar12 = sqrtf(fVar12);
        in_XMM1_Dc = extraout_XMM0_Dc_00;
        in_XMM1_Dd = extraout_XMM0_Dd_00;
        if (1e-05 < fVar12) goto label_042f95c5;
label_042f9565:
        if (g_data_057a65d5 == '\0') {
          plVar11 = &TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        uVar6 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar17 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar12 = SQRT(fVar12);
        if (fVar12 <= 1e-05) goto label_042f9565;
label_042f95c5:
        fVar17 = fVar17 / fVar12;
        auVar3._4_4_ = fVar12;
        auVar3._0_4_ = fVar12;
        auVar3._8_4_ = in_XMM1_Dc;
        auVar3._12_4_ = in_XMM1_Dd;
        auVar16 = divps(auVar15,auVar3);
        uVar6 = auVar16._0_8_;
      }
      if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
        if (speed <= 20.0) {
          speed = 20.0;
        }
        UVar18.fields.x = speed * (float)uVar6;
        UVar18.fields.y = speed * (float)((ulong)uVar6 >> 0x20);
        UVar18.fields.z = speed * fVar17;
        UnityEngine_Rigidbody__set_velocity(__this_00,UVar18,(MethodInfo *)0x0);
        (__this->fields)._activeTimeLeft = 0.0;
        *(undefined1 *)&(__this->fields).IsActive = 0;
        if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)human,
                   *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x170),(MethodInfo *)0x0);
        uVar6 = (*(__this->klass->vtable)._10_Deactivate.methodPtr)
                          (__this,(__this->klass->vtable)._10_Deactivate.method);
        return (bool_conflict)CONCAT71((int7)((ulong)uVar6 >> 8),1);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_042f96b1:
  bVar4 = il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adef5 == '\0') {
    bVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adef5 = '\x01';
  }
  if (cVar9 != '\0') {
    vtableDispatch = *(Il2CppClass **)&((UnityEngine_Collision_o *)plVar11)->klass[1]._1.byval_arg.bits
    ;
    bVar4 = (*((UnityEngine_Collision_o *)plVar11)->klass[1]._1.byval_arg.data)(plVar11);
    if (((char)bVar4 != '\0') &&
       (*(char *)((long)&(((UnityEngine_Collision_o *)plVar11)->fields).m_Header.fields.m_StartPtr + 4) ==
        '\0')) {
      pCVar10 = *(Characters_Human_o **)
                 &(((UnityEngine_Collision_o *)plVar11)->fields).m_Header.fields.m_RelativeVelocity.fields.z;
      if (pCVar10 != (Characters_Human_o *)0x0) {
        bVar1 = (TypeInfo_Human->_2).naturalAligment;
        uVar7 = (uint)bVar1;
        if ((bVar1 <= (pCVar10->klass->_2).naturalAligment) &&
           ((pCVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
          if (*(int *)&(pCVar10->fields).Weapon != 0) {
            Characters_Human__Unmount(pCVar10,0,(MethodInfo *)0x0);
          }
          *(undefined1 *)
           ((long)&(((UnityEngine_Collision_o *)plVar11)->fields).m_Header.fields.m_StartPtr + 4) = 1;
          iVar13 = (*(code *)((UnityEngine_Collision_o *)plVar11)->klass[1]._1.interfaceOffsets)
                             (plVar11,((UnityEngine_Collision_o *)plVar11)->klass[1].static_fields);
          (((UnityEngine_Collision_o *)plVar11)->fields).m_Pair.fields.m_ColliderID = iVar13;
          (*(code *)((UnityEngine_Collision_o *)plVar11)->klass[1]._1.declaringType)
                    (plVar11,((UnityEngine_Collision_o *)plVar11)->klass[1]._1.parent);
          vtableDispatch = ((UnityEngine_Collision_o *)plVar11)->klass[1]._1.element_class;
          bVar4 = (*(code *)vtableDispatch)
                            (plVar11,((UnityEngine_Collision_o *)plVar11)->klass[1]._1.castClass,extraout_RDX,
                             vtableDispatch);
          return bVar4;
        }
        vtableDispatch = TypeInfo_Human;
        il2cpp_runtime_helper_022b2fd0();
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057adef6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
        g_data_057adef6 = '\x01';
      }
      plVar11 = *(long **)&(pCVar10->fields).MaxFootstepDistance;
      if (plVar11 != (long *)0x0) {
        bVar1 = (TypeInfo_Human->_2).naturalAligment;
        uVar7 = (uint)bVar1;
        if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
           (lVar2 = *(long *)(*plVar11 + 200),
           *(Il2CppClass **)(lVar2 + -8 + (ulong)bVar1 * 8) == TypeInfo_Human)) {
          *(undefined4 *)((long)plVar11 + 0x1fc) = 0x3f000000;
          return (bool_conflict)lVar2;
        }
        vtableDispatch = TypeInfo_Human;
        il2cpp_runtime_helper_022b2fd0();
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057adef7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
        g_data_057adef7 = '\x01';
      }
      pCVar10 = (Characters_Human_o *)plVar11[6];
      if (pCVar10 != (Characters_Human_o *)0x0) {
        bVar1 = (TypeInfo_Human->_2).naturalAligment;
        uVar7 = (uint)bVar1;
        if ((bVar1 <= (pCVar10->klass->_2).naturalAligment) &&
           ((pCVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
          Characters_Human__DodgeWall(pCVar10,(MethodInfo *)0x0);
          return extraout_EAX;
        }
        vtableDispatch = TypeInfo_Human;
        il2cpp_runtime_helper_022b2fd0();
      }
      uVar14 = il2cpp_runtime_helper_022b2c90();
      iVar8 = 0;
      Characters_ExtendedUseable___ctor
                ((Characters_ExtendedUseable_o *)pCVar10,(Characters_BaseCharacter_o *)vtableDispatch,
                 (MethodInfo *)0x0);
      *(int *)&(pCVar10->fields).RichTextName = extraout_EDX;
      *(int *)&(pCVar10->fields).field_0x2c = extraout_EDX;
      *(uint *)&(pCVar10->fields).VisibleName = uVar7;
      *(uint *)((long)&(pCVar10->fields).RichTextName + 4) = uVar7;
      *(undefined4 *)&(pCVar10->fields).m_CachedPtr = uVar14;
      if (uVar7 == 0xffffffff) {
        *(int *)&(pCVar10->fields).VisibleName = extraout_EDX;
      }
      else {
        iVar8 = extraout_EDX - uVar7;
      }
      *(int *)&(pCVar10->fields).RichTextName = iVar8;
      return extraout_EAX_00;
    }
  }
  return bVar4;
}


// Characters.SwitchbackSpecial$$SetInput
// il2cpp: void Characters_SwitchbackSpecial__SetInput (Characters_SwitchbackSpecial_o* __this, bool key, const MethodInfo* method);
// 0x42f96c0

void Characters_SwitchbackSpecial__SetInput
               (Characters_SwitchbackSpecial_o *__this,bool_conflict key,MethodInfo *method)

{
  byte bVar1;
  Il2CppMethodPointer vtableDispatch;
  char cVar2;
  uint in_ECX;
  int extraout_EDX;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar3;
  Il2CppClass *owner;
  Characters_Human_o *pCVar4;
  long *plVar5;
  float fVar6;
  undefined4 uVar7;
  
  if (g_data_057adef5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adef5 = '\x01';
    method = extraout_RDX;
  }
  if ((char)key != '\0') {
    owner = (Il2CppClass *)(__this->klass->vtable)._6_CanUse.method;
    cVar2 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,owner,method);
    if ((cVar2 != '\0') && ((char)(__this->fields).IsActive == '\0')) {
      pCVar4 = (Characters_Human_o *)(__this->fields)._owner;
      if (pCVar4 != (Characters_Human_o *)0x0) {
        bVar1 = (TypeInfo_Human->_2).naturalAligment;
        in_ECX = (uint)bVar1;
        if ((bVar1 <= (pCVar4->klass->_2).naturalAligment) &&
           ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
          if (*(int *)&(pCVar4->fields).Weapon != 0) {
            Characters_Human__Unmount(pCVar4,0,(MethodInfo *)0x0);
          }
          *(undefined1 *)&(__this->fields).IsActive = 1;
          fVar6 = (float)(*(__this->klass->vtable)._15_GetActiveTime.methodPtr)
                                   (__this,(__this->klass->vtable)._15_GetActiveTime.method);
          (__this->fields)._activeTimeLeft = fVar6;
          (*(__this->klass->vtable)._9_Activate.methodPtr)(__this,(__this->klass->vtable)._9_Activate.method);
          vtableDispatch = (__this->klass->vtable)._8_OnUse.methodPtr;
          (*vtableDispatch)
                    (__this,(__this->klass->vtable)._8_OnUse.method,extraout_RDX_00,vtableDispatch);
          return;
        }
        owner = TypeInfo_Human;
        il2cpp_runtime_helper_022b2fd0();
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057adef6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
        g_data_057adef6 = '\x01';
      }
      plVar5 = *(long **)&(pCVar4->fields).MaxFootstepDistance;
      if (plVar5 != (long *)0x0) {
        bVar1 = (TypeInfo_Human->_2).naturalAligment;
        in_ECX = (uint)bVar1;
        if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
           (*(Il2CppClass **)(*(long *)(*plVar5 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_Human)) {
          *(undefined4 *)((long)plVar5 + 0x1fc) = 0x3f000000;
          return;
        }
        owner = TypeInfo_Human;
        il2cpp_runtime_helper_022b2fd0();
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057adef7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
        g_data_057adef7 = '\x01';
      }
      pCVar4 = (Characters_Human_o *)plVar5[6];
      if (pCVar4 != (Characters_Human_o *)0x0) {
        bVar1 = (TypeInfo_Human->_2).naturalAligment;
        in_ECX = (uint)bVar1;
        if ((bVar1 <= (pCVar4->klass->_2).naturalAligment) &&
           ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
          Characters_Human__DodgeWall(pCVar4,(MethodInfo *)0x0);
          return;
        }
        owner = TypeInfo_Human;
        il2cpp_runtime_helper_022b2fd0();
      }
      uVar7 = il2cpp_runtime_helper_022b2c90();
      iVar3 = 0;
      Characters_ExtendedUseable___ctor
                ((Characters_ExtendedUseable_o *)pCVar4,(Characters_BaseCharacter_o *)owner,(MethodInfo *)0x0)
      ;
      *(int *)&(pCVar4->fields).RichTextName = extraout_EDX;
      *(int *)&(pCVar4->fields).field_0x2c = extraout_EDX;
      *(uint *)&(pCVar4->fields).VisibleName = in_ECX;
      *(uint *)((long)&(pCVar4->fields).RichTextName + 4) = in_ECX;
      *(undefined4 *)&(pCVar4->fields).m_CachedPtr = uVar7;
      if (in_ECX == 0xffffffff) {
        *(int *)&(pCVar4->fields).VisibleName = extraout_EDX;
      }
      else {
        iVar3 = extraout_EDX - in_ECX;
      }
      *(int *)&(pCVar4->fields).RichTextName = iVar3;
      return;
    }
  }
  return;
}


// Characters.SwitchbackSpecial$$Activate
// il2cpp: void Characters_SwitchbackSpecial__Activate (Characters_SwitchbackSpecial_o* __this, const MethodInfo* method);
// 0x42f97b0

void Characters_SwitchbackSpecial__Activate(Characters_SwitchbackSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint in_ECX;
  int extraout_EDX;
  int iVar2;
  Characters_BaseCharacter_o *pCVar3;
  Characters_Human_o *__this_00;
  undefined4 uVar4;
  
  if (g_data_057adef6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adef6 = '\x01';
  }
  pCVar3 = (__this->fields)._owner;
  if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    in_ECX = (uint)bVar1;
    if ((bVar1 <= (pCVar3->klass->_2).naturalAligment) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      *(undefined4 *)((long)&pCVar3[1].fields.OutlineComponent + 4) = 0x3f000000;
      return;
    }
    method = (MethodInfo *)TypeInfo_Human;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adef7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adef7 = '\x01';
  }
  __this_00 = *(Characters_Human_o **)&(pCVar3->fields).MaxFootstepDistance;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    in_ECX = (uint)bVar1;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      Characters_Human__DodgeWall(__this_00,(MethodInfo *)0x0);
      return;
    }
    method = (MethodInfo *)TypeInfo_Human;
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  iVar2 = 0;
  Characters_ExtendedUseable___ctor
            ((Characters_ExtendedUseable_o *)__this_00,(Characters_BaseCharacter_o *)method,(MethodInfo *)0x0)
  ;
  *(int *)&(__this_00->fields).RichTextName = extraout_EDX;
  *(int *)&(__this_00->fields).field_0x2c = extraout_EDX;
  *(uint *)&(__this_00->fields).VisibleName = in_ECX;
  *(uint *)((long)&(__this_00->fields).RichTextName + 4) = in_ECX;
  *(undefined4 *)&(__this_00->fields).m_CachedPtr = uVar4;
  if (in_ECX == 0xffffffff) {
    *(int *)&(__this_00->fields).VisibleName = extraout_EDX;
  }
  else {
    iVar2 = extraout_EDX - in_ECX;
  }
  *(int *)&(__this_00->fields).RichTextName = iVar2;
  return;
}


// Characters.SwitchbackSpecial$$Deactivate
// il2cpp: void Characters_SwitchbackSpecial__Deactivate (Characters_SwitchbackSpecial_o* __this, const MethodInfo* method);
// 0x42f9830

void Characters_SwitchbackSpecial__Deactivate(Characters_SwitchbackSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint in_ECX;
  int extraout_EDX;
  int iVar2;
  Characters_Human_o *__this_00;
  undefined4 uVar3;
  
  if (g_data_057adef7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adef7 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    in_ECX = (uint)bVar1;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      Characters_Human__DodgeWall(__this_00,(MethodInfo *)0x0);
      return;
    }
    method = (MethodInfo *)TypeInfo_Human;
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  iVar2 = 0;
  Characters_ExtendedUseable___ctor
            ((Characters_ExtendedUseable_o *)__this_00,(Characters_BaseCharacter_o *)method,(MethodInfo *)0x0)
  ;
  *(int *)&(__this_00->fields).RichTextName = extraout_EDX;
  *(int *)&(__this_00->fields).field_0x2c = extraout_EDX;
  *(uint *)&(__this_00->fields).VisibleName = in_ECX;
  *(uint *)((long)&(__this_00->fields).RichTextName + 4) = in_ECX;
  *(undefined4 *)&(__this_00->fields).m_CachedPtr = uVar3;
  if (in_ECX == 0xffffffff) {
    *(int *)&(__this_00->fields).VisibleName = extraout_EDX;
  }
  else {
    iVar2 = extraout_EDX - in_ECX;
  }
  *(int *)&(__this_00->fields).RichTextName = iVar2;
  return;
}


