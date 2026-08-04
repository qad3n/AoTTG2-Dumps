// Type: Spawnables.SupplySpawnable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Spawnables/SupplySpawnable.cs
// Prior real C# source (older reference): Assets/Scripts/Spawnables/SupplySpawnable.cs
// --------------------------------

// Spawnables.SupplySpawnable$$OnTriggerStay
// il2cpp: void Spawnables_SupplySpawnable__OnTriggerStay (Spawnables_SupplySpawnable_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x4084b20

void Spawnables_SupplySpawnable__OnTriggerStay
               (Spawnables_SupplySpawnable_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  bool_conflict *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  Characters_Horse_o *pCVar6;
  System_Action_Hashtable__o *pSVar7;
  Il2CppClass *pIVar8;
  bool_conflict bVar9;
  Characters_Human_o *pCVar10;
  Characters_Human_o *pCVar11;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  char cVar12;
  MethodInfo *pMVar14;
  MethodInfo *method_02;
  long *plVar15;
  Il2CppClass **__this_01;
  System_Object_array *pSVar16;
  Characters_AnimationHandler_o *__this_02;
  long lVar17;
  float fVar18;
  System_String_o *pSVar13;
  
  if (g_data_057ac3c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    plVar15 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac3c9 = '\x01';
    __this = (Spawnables_SupplySpawnable_o *)plVar15;
  }
  if ((((other == (UnityEngine_Collider_o *)0x0) ||
       (pCVar10 = (Characters_Human_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       __this = (Spawnables_SupplySpawnable_o *)other, pCVar10 == (Characters_Human_o *)0x0)) ||
      (pCVar11 = (Characters_Human_o *)
                 UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pCVar10,(MethodInfo *)0x0),
      __this = (Spawnables_SupplySpawnable_o *)pCVar10, pCVar11 == (Characters_Human_o *)0x0)) ||
     (__this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar11,(MethodInfo *)0x0),
     __this = (Spawnables_SupplySpawnable_o *)pCVar11, __this_00 == (UnityEngine_GameObject_o *)0x0)) {
label_04084bf3:
    il2cpp_runtime_helper_022b2c90();
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
  pCVar10 = (Characters_Human_o *)UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_Human_GetComponent_Human);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (Spawnables_SupplySpawnable_o *)pCVar10;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  if (pCVar10 == (Characters_Human_o *)0x0) goto label_04084bf3;
  bVar9 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar10,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  bVar9 = Characters_Human__NeedRefill(pCVar10,0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  pMVar14 = extraout_RDX;
  if (g_data_057addfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    g_data_057addfb = '\x01';
    pMVar14 = extraout_RDX_00;
  }
  if (*(char *)((long)&(pCVar10->fields)._mountedVelocity.fields.x + 3) == '\0') {
    return;
  }
  if (((pCVar10->fields).FinishSetup & 0xfffffffeU) == 2) {
    (pCVar10->fields).LateUpdateHeadRotation.fields.hasValue = 0;
  }
  (pCVar10->fields).FinishSetup = 5;
  Characters_Human__ToggleSparks(pCVar10,0,pMVar14);
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Characters_BaseCharacter__CrossFade
            ((Characters_BaseCharacter_o *)pCVar10,
             *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x98),0.1,0.0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x108);
  Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar10,pSVar13,(MethodInfo *)0x0);
  cVar12 = (char)pSVar13;
  pCVar11 = *(Characters_Human_o **)&(pCVar10->fields)._cameraFPS;
  if (pCVar11 != (Characters_Human_o *)0x0) {
    fVar18 = Characters_AnimationHandler__GetTotalTime
                       ((Characters_AnimationHandler_o *)pCVar11,
                        *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x98),(MethodInfo *)0x0);
    (pCVar10->fields).LastGoodHeadAngle.fields.y = fVar18;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (Il2CppClass **)pCVar11;
  if (g_data_057addfc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    __this_01 = &TypeInfo_SupplySpecial;
    il2cpp_runtime_helper_023445d0();
    g_data_057addfc = '\x01';
  }
  pCVar6 = (pCVar11->fields).Horse;
  if (pCVar6 != (Characters_Horse_o *)0x0) {
    fVar18 = (float)(pCVar6->fields).SoundsEnabled;
    pbVar1 = &(pCVar6->fields).FootstepsEnabled;
    if (fVar18 < (float)*pbVar1 || fVar18 == (float)*pbVar1) {
      if ((cVar12 != '\0') &&
         (pSVar7 = (pCVar11->fields).OnPlayerPropertiesChanged, pSVar7 != (System_Action_Hashtable__o *)0x0))
      {
        bVar2 = (TypeInfo_SupplySpecial->_2).naturalAligment;
        if ((bVar2 <= (pSVar7->klass->_2).naturalAligment) &&
           (((pSVar7->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_SupplySpecial &&
            (*(int *)((long)&(pSVar7->fields).method_ptr + 4) < 1)))) {
          return;
        }
      }
      pSVar16 = (pCVar11->fields).crossfadeCache;
      if (pSVar16 != (System_Object_array *)0x0) {
        pIVar8 = (pSVar16->obj).klass;
        bVar2 = (pIVar8->_2).naturalAligment;
        bVar3 = (TypeInfo_BladeWeapon->_2).naturalAligment;
        if ((bVar2 < bVar3) || ((pIVar8->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_BladeWeapon)) {
          bVar3 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
          if ((bVar3 <= bVar2) && ((pIVar8->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_AmmoWeapon)) {
            return;
          }
        }
        else if (*(int *)((long)pSVar16->m_Items + 0x24) <= *(int *)(pSVar16->m_Items + 5)) {
          return;
        }
      }
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057addfd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    g_data_057addfd = '\x01';
  }
  pSVar16 = (((Characters_Human_o *)__this_01)->fields).crossfadeCache;
  if ((pSVar16 == (System_Object_array *)0x0) ||
     (*(char *)&(((Characters_Human_o *)__this_01)->fields).FeedVictimName != '\0')) {
    return;
  }
  pIVar8 = (pSVar16->obj).klass;
  bVar2 = (TypeInfo_BladeWeapon->_2).naturalAligment;
  if (((pIVar8->_2).naturalAligment < bVar2) ||
     ((pIVar8->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar2)[-1].field_0x57] != TypeInfo_BladeWeapon)) {
label_042bf647:
    pIVar8 = (pSVar16->obj).klass;
    pMVar14 = pIVar8->vtable[5].method;
    (*pIVar8->vtable[5].methodPtr)();
    pCVar6 = (((Characters_Human_o *)__this_01)->fields).Horse;
    if (pCVar6 != (Characters_Horse_o *)0x0) {
      (pCVar6->fields).FootstepsEnabled = (pCVar6->fields).SoundsEnabled;
      return;
    }
  }
  else {
    pMVar14 = (MethodInfo *)0x1;
    Characters_Human__ToggleBlades((Characters_Human_o *)__this_01,1,(MethodInfo *)(ulong)bVar2);
    pSVar16 = (((Characters_Human_o *)__this_01)->fields).crossfadeCache;
    if (pSVar16 != (System_Object_array *)0x0) goto label_042bf647;
  }
  il2cpp_runtime_helper_022b2c90();
  method_02 = pMVar14;
  if (g_data_057addfe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&"Wave");
    il2cpp_runtime_helper_023445d0(&"Shake");
    il2cpp_runtime_helper_023445d0(&"Nod");
    il2cpp_runtime_helper_023445d0(&"Eat");
    il2cpp_runtime_helper_023445d0(&"Dance");
    il2cpp_runtime_helper_023445d0(&"Salute");
    il2cpp_runtime_helper_023445d0(&"Flip");
    g_data_057addfe = '\x01';
  }
  if ((((*(char *)(pSVar16->m_Items + 9) != '\0') || (uVar4 = *(uint *)(pSVar16->m_Items + 0x27), uVar4 == 7))
      || (*(int *)((long)pSVar16->m_Items + 0xfc) == 1)) ||
     (((uVar4 < 10 && ((0x308U >> (uVar4 & 0x1f) & 1) != 0)) ||
      ((uVar4 == 0xf || (*(char *)((long)pSVar16->m_Items + 0x1ce) == '\0')))))) {
    return;
  }
  if (uVar4 == 1) {
    Characters_Human__FalseAttack((Characters_Human_o *)pSVar16,method_02);
  }
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x228);
  bVar9 = System_String__op_Equality((System_String_o *)pMVar14,"Salute",(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    bVar9 = System_String__op_Equality((System_String_o *)pMVar14,"Dance",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      bVar9 = System_String__op_Equality((System_String_o *)pMVar14,"Flip",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        bVar9 = System_String__op_Equality((System_String_o *)pMVar14,"Wave",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          bVar9 = System_String__op_Equality((System_String_o *)pMVar14,"Nod",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            bVar9 = System_String__op_Equality((System_String_o *)pMVar14,"Shake",(MethodInfo *)0x0);
            if ((char)bVar9 == '\0') {
              bVar9 = System_String__op_Equality((System_String_o *)pMVar14,"Eat",(MethodInfo *)0x0);
              if ((char)bVar9 == '\0') goto label_042bf8d2;
              lVar17 = 0x1f0;
              iVar5 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
            }
            else {
              lVar17 = 0x230;
              iVar5 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
            }
          }
          else {
            lVar17 = 0x238;
            iVar5 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
          }
        }
        else {
          lVar17 = 0x240;
          iVar5 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
        }
      }
      else {
        lVar17 = 0x70;
        iVar5 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
      }
    }
    else {
      lVar17 = 0x1d8;
      iVar5 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
    }
  }
  else {
    lVar17 = 0x228;
    iVar5 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar5 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar17);
label_042bf8d2:
  if (((ulong)pSVar16->m_Items[0x27] & 0xfffffffe) == 2) {
    *(undefined4 *)(pSVar16->m_Items + 0x5b) = 0;
  }
  *(undefined4 *)(pSVar16->m_Items + 0x27) = 8;
  Characters_BaseCharacter__CrossFade((Characters_BaseCharacter_o *)pSVar16,pSVar13,0.1,0.0,(MethodInfo *)0x0)
  ;
  __this_02 = (Characters_AnimationHandler_o *)pSVar16->m_Items[0x12];
  if (__this_02 == (Characters_AnimationHandler_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (((*(char *)&__this_02[1].fields.Animator == '\0') &&
        (uVar4 = *(uint *)&__this_02[4].fields.Animator, uVar4 != 7)) &&
       ((*(int *)((long)&__this_02[3].fields._animationSpeed + 4) != 1 &&
        ((9 < uVar4 || ((0x308U >> (uVar4 & 0x1f) & 1) == 0)))))) {
      return;
    }
    return;
  }
  fVar18 = Characters_AnimationHandler__GetTotalTime(__this_02,pSVar13,(MethodInfo *)0x0);
  *(float *)((long)pSVar16->m_Items + 0x2d4) = fVar18;
  Characters_Human__ToggleSparks((Characters_Human_o *)pSVar16,0,method_00);
  Characters_Human__ToggleSparks((Characters_Human_o *)pSVar16,0,method_01);
  return;
}


// Spawnables.SupplySpawnable$$.ctor
// il2cpp: void Spawnables_SupplySpawnable___ctor (Spawnables_SupplySpawnable_o* __this, const MethodInfo* method);
// 0x4084c00

void Spawnables_SupplySpawnable___ctor(Spawnables_SupplySpawnable_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


