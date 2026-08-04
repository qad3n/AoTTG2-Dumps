// Type: Characters.BaseTitanComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseTitanComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BaseTitanComponentCache.cs
// --------------------------------

// Characters.BaseTitanComponentCache$$.ctor
// il2cpp: void Characters_BaseTitanComponentCache___ctor (Characters_BaseTitanComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x4311520

void Characters_BaseTitanComponentCache___ctor
               (Characters_BaseTitanComponentCache_o *__this,UnityEngine_GameObject_o *owner,
               MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_Collider__o **ppSVar2;
  System_Collections_Generic_List_BaseHitbox__o **ppSVar3;
  System_Collections_Generic_List_Collider__o **ppSVar4;
  int iVar5;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Collider_array *pUVar6;
  Characters_BaseHitbox_o *item;
  Characters_BaseHitbox_array *pCVar7;
  long lVar8;
  int32_t iVar9;
  bool_conflict bVar10;
  System_Collections_Generic_List_Collider__o *pSVar11;
  System_Collections_Generic_List_BaseHitbox__o *pSVar12;
  Characters_BaseCharacter_o *owner_00;
  UnityEngine_Collider_o *pUVar13;
  System_Object_array *pSVar14;
  UnityEngine_Object_o *__this_01;
  System_String_o *a;
  Characters_ContinuousDamageHitbox_o *pCVar15;
  uint uVar16;
  ulong uVar17;
  UnityEngine_Collider_o **ppUVar18;
  Characters_BaseHitbox_o **ppCVar19;
  uint uVar20;
  
  if (g_data_057adfb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseHitbox_GetComponentsInChildren_BaseHitbox);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Characters_BaseHitbox);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseHitbox);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&"EyesHurtbox");
    il2cpp_runtime_helper_023445d0(&"HandRHitbox");
    il2cpp_runtime_helper_023445d0(&"SitPushbox");
    il2cpp_runtime_helper_023445d0(&"ForearmRHitbox");
    il2cpp_runtime_helper_023445d0(&"HandRHurtbox");
    il2cpp_runtime_helper_023445d0(&"LegLHurtbox");
    il2cpp_runtime_helper_023445d0(&"FootLHitbox");
    il2cpp_runtime_helper_023445d0(&"HandLHitbox");
    il2cpp_runtime_helper_023445d0(&"ForearmLHitbox");
    il2cpp_runtime_helper_023445d0(&"FootRHitbox");
    il2cpp_runtime_helper_023445d0(&"MouthHitbox");
    il2cpp_runtime_helper_023445d0(&"LegRHurtbox");
    il2cpp_runtime_helper_023445d0(&"NapeHurtbox");
    il2cpp_runtime_helper_023445d0(&"HandLHurtbox");
    il2cpp_runtime_helper_023445d0(&"SteamHitbox");
    g_data_057adfb0 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_UnityEngine_Collider);
  ppSVar2 = &(__this->fields).ToggleColliders;
  (__this->fields).ToggleColliders = pSVar11;
  il2cpp_runtime_helper_022b4080(ppSVar2,pSVar11);
  pSVar12 = (System_Collections_Generic_List_BaseHitbox__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseHitbox);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar12,MethodInfo_List_1_Characters_BaseHitbox);
  ppSVar3 = &(__this->fields).Hitboxes;
  (__this->fields).Hitboxes = pSVar12;
  il2cpp_runtime_helper_022b4080(ppSVar3,pSVar12);
  pSVar11 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_UnityEngine_Collider);
  ppSVar4 = &(__this->fields).Hurtboxes;
  (__this->fields).Hurtboxes = pSVar11;
  il2cpp_runtime_helper_022b4080(ppSVar4,pSVar11);
  Utility_BaseComponentCache___ctor((Utility_BaseComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  if (owner != (UnityEngine_GameObject_o *)0x0) {
    owner_00 = (Characters_BaseCharacter_o *)UnityEngine_GameObject__GetComponent_object_(owner,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    pUVar13 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_object_(owner,MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider);
    (__this->fields).Movebox = pUVar13;
    il2cpp_runtime_helper_022b4080(&(__this->fields).Movebox,pUVar13);
    pSVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(owner,MethodInfo_Collider_GetComponentsInChildren_Collider);
    if (pSVar14 != (System_Object_array *)0x0) {
      uVar16 = (uint)pSVar14->max_length;
      if (0 < (int)uVar16) {
        uVar20 = 0;
        do {
          if (uVar16 <= uVar20) goto label_04311ed1;
          __this_00 = (UnityEngine_Component_o *)pSVar14->m_Items[(int)uVar20];
          if ((__this_00 == (UnityEngine_Component_o *)0x0) ||
             (__this_01 = (UnityEngine_Object_o *)
                          UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0),
             __this_01 == (UnityEngine_Object_o *)0x0)) goto label_04311ecc;
          a = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
          iVar9 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            if (iVar9 != *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x14)) goto label_04311908;
label_04311960:
            bVar10 = System_String__op_Inequality(a,"SitPushbox",(MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if ((char)bVar10 != '\0') {
              pSVar11 = *ppSVar2;
              if (pSVar11 == (System_Collections_Generic_List_Collider__o *)0x0) goto label_04311ecc;
              piVar1 = &(pSVar11->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar6 = (pSVar11->fields)._items;
              if (pUVar6 == (UnityEngine_Collider_array *)0x0) goto label_04311ecc;
              uVar16 = (pSVar11->fields)._size;
              if (uVar16 < (uint)pUVar6->max_length) {
                (pSVar11->fields)._size = uVar16 + 1;
                pUVar6->m_Items[(int)uVar16] = (UnityEngine_Collider_o *)__this_00;
                il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar16);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)__this_00,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          else {
            if (iVar9 == *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x14)) goto label_04311960;
label_04311908:
            iVar9 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0)
            ;
            if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              iVar5 = *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x18);
            }
            else {
              iVar5 = *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x18);
            }
            if (iVar9 == iVar5) goto label_04311960;
          }
          iVar9 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            if (iVar9 == *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x18)) goto label_04311a23;
label_04311aac:
            iVar9 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0)
            ;
            if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              iVar5 = *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 8);
            }
            else {
              iVar5 = *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 8);
            }
            if (iVar9 == iVar5) {
              UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)__this_00,0,(MethodInfo *)0x0);
              UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)__this_00,1,(MethodInfo *)0x0);
            }
          }
          else {
            if (iVar9 != *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x18)) goto label_04311aac;
label_04311a23:
            UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)__this_00,1,(MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            pSVar11 = *ppSVar4;
            if (pSVar11 == (System_Collections_Generic_List_Collider__o *)0x0) goto label_04311ecc;
            piVar1 = &(pSVar11->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar6 = (pSVar11->fields)._items;
            if (pUVar6 == (UnityEngine_Collider_array *)0x0) goto label_04311ecc;
            uVar16 = (pSVar11->fields)._size;
            if (uVar16 < (uint)pUVar6->max_length) {
              (pSVar11->fields)._size = uVar16 + 1;
              pUVar6->m_Items[(int)uVar16] = (UnityEngine_Collider_o *)__this_00;
              il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar16,__this_00);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)__this_00,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
          }
          bVar10 = System_String__op_Equality(a,"NapeHurtbox",(MethodInfo *)0x0);
          ppUVar18 = &(__this->fields).NapeHurtbox;
          if (((((char)bVar10 == '\0') &&
               (bVar10 = System_String__op_Equality(a,"EyesHurtbox",(MethodInfo *)0x0),
               ppUVar18 = &(__this->fields).EyesHurtbox, (char)bVar10 == '\0')) &&
              (bVar10 = System_String__op_Equality(a,"LegLHurtbox",(MethodInfo *)0x0),
              ppUVar18 = &(__this->fields).LegLHurtbox, (char)bVar10 == '\0')) &&
             (((bVar10 = System_String__op_Equality(a,"LegRHurtbox",(MethodInfo *)0x0),
               ppUVar18 = &(__this->fields).LegRHurtbox, (char)bVar10 == '\0' &&
               (bVar10 = System_String__op_Equality(a,"HandLHurtbox",(MethodInfo *)0x0),
               ppUVar18 = &(__this->fields).HandLHurtbox, (char)bVar10 == '\0')) &&
              (bVar10 = System_String__op_Equality(a,"HandRHurtbox",(MethodInfo *)0x0),
              ppUVar18 = &(__this->fields).HandRHurtbox, (char)bVar10 == '\0')))) {
            bVar10 = System_String__op_Equality(a,"MouthHitbox",(MethodInfo *)0x0);
            if ((char)bVar10 != '\0') {
              pCVar15 = (Characters_ContinuousDamageHitbox_o *)
                        Characters_BaseHitbox__Create
                                  (owner_00,(UnityEngine_GameObject_o *)__this_01,
                                   (UnityEngine_Collider_o *)__this_00,(MethodInfo *)0x0);
              ppCVar19 = &(__this->fields).MouthHitbox;
label_04311dd3:
              *ppCVar19 = (Characters_BaseHitbox_o *)pCVar15;
              goto label_04311c16;
            }
            bVar10 = System_String__op_Equality(a,"HandLHitbox",(MethodInfo *)0x0);
            if ((char)bVar10 != '\0') {
              pCVar15 = (Characters_ContinuousDamageHitbox_o *)
                        Characters_BaseHitbox__Create
                                  (owner_00,(UnityEngine_GameObject_o *)__this_01,
                                   (UnityEngine_Collider_o *)__this_00,(MethodInfo *)0x0);
              ppCVar19 = &(__this->fields).HandLHitbox;
              goto label_04311dd3;
            }
            bVar10 = System_String__op_Equality(a,"HandRHitbox",(MethodInfo *)0x0);
            if ((char)bVar10 != '\0') {
              pCVar15 = (Characters_ContinuousDamageHitbox_o *)
                        Characters_BaseHitbox__Create
                                  (owner_00,(UnityEngine_GameObject_o *)__this_01,
                                   (UnityEngine_Collider_o *)__this_00,(MethodInfo *)0x0);
              ppCVar19 = &(__this->fields).HandRHitbox;
              goto label_04311dd3;
            }
            bVar10 = System_String__op_Equality(a,"ForearmLHitbox",(MethodInfo *)0x0);
            if ((char)bVar10 != '\0') {
              pCVar15 = (Characters_ContinuousDamageHitbox_o *)
                        Characters_BaseHitbox__Create
                                  (owner_00,(UnityEngine_GameObject_o *)__this_01,
                                   (UnityEngine_Collider_o *)__this_00,(MethodInfo *)0x0);
              ppCVar19 = &(__this->fields).ForearmLHitbox;
              goto label_04311dd3;
            }
            bVar10 = System_String__op_Equality(a,"ForearmRHitbox",(MethodInfo *)0x0);
            if ((char)bVar10 != '\0') {
              pCVar15 = (Characters_ContinuousDamageHitbox_o *)
                        Characters_BaseHitbox__Create
                                  (owner_00,(UnityEngine_GameObject_o *)__this_01,
                                   (UnityEngine_Collider_o *)__this_00,(MethodInfo *)0x0);
              ppCVar19 = &(__this->fields).ForearmRHitbox;
              goto label_04311dd3;
            }
            bVar10 = System_String__op_Equality(a,"FootLHitbox",(MethodInfo *)0x0);
            if ((char)bVar10 != '\0') {
              pCVar15 = (Characters_ContinuousDamageHitbox_o *)
                        Characters_BaseHitbox__Create
                                  (owner_00,(UnityEngine_GameObject_o *)__this_01,
                                   (UnityEngine_Collider_o *)__this_00,(MethodInfo *)0x0);
              ppCVar19 = &(__this->fields).FootLHitbox;
              goto label_04311dd3;
            }
            bVar10 = System_String__op_Equality(a,"FootRHitbox",(MethodInfo *)0x0);
            if ((char)bVar10 != '\0') {
              pCVar15 = (Characters_ContinuousDamageHitbox_o *)
                        Characters_BaseHitbox__Create
                                  (owner_00,(UnityEngine_GameObject_o *)__this_01,
                                   (UnityEngine_Collider_o *)__this_00,(MethodInfo *)0x0);
              ppCVar19 = &(__this->fields).FootRHitbox;
              goto label_04311dd3;
            }
            bVar10 = System_String__op_Equality(a,"SteamHitbox",(MethodInfo *)0x0);
            if ((char)bVar10 != '\0') {
              pCVar15 = Characters_ContinuousDamageHitbox__CreateContinuous
                                  (owner_00,(UnityEngine_GameObject_o *)__this_01,
                                   (UnityEngine_Collider_o *)__this_00,2000,0.1,(MethodInfo *)0x0);
              ppCVar19 = &(__this->fields).SteamHitbox;
              goto label_04311dd3;
            }
            bVar10 = System_String__op_Equality(a,"SitPushbox",(MethodInfo *)0x0);
            ppUVar18 = &(__this->fields).SitPushbox;
            if ((char)bVar10 != '\0') goto label_04311c10;
          }
          else {
label_04311c10:
            *ppUVar18 = (UnityEngine_Collider_o *)__this_00;
label_04311c16:
            il2cpp_runtime_helper_022b4080();
          }
          uVar20 = uVar20 + 1;
          uVar16 = (uint)pSVar14->max_length;
        } while ((int)uVar20 < (int)uVar16);
      }
      pSVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(owner,MethodInfo_BaseHitbox_GetComponentsInChildren_BaseHitbox);
      if (pSVar14 != (System_Object_array *)0x0) {
        if ((int)pSVar14->max_length < 1) {
          return;
        }
        uVar17 = 0;
        if ((pSVar14->max_length & 0xffffffff) != 0) {
          do {
            lVar8 = MethodInfo_Void_Add;
            pSVar12 = *ppSVar3;
            if (pSVar12 == (System_Collections_Generic_List_BaseHitbox__o *)0x0) goto label_04311ecc;
            item = (Characters_BaseHitbox_o *)pSVar14->m_Items[uVar17];
            piVar1 = &(pSVar12->fields)._version;
            *piVar1 = *piVar1 + 1;
            pCVar7 = (pSVar12->fields)._items;
            if (pCVar7 == (Characters_BaseHitbox_array *)0x0) goto label_04311ecc;
            uVar16 = (pSVar12->fields)._size;
            if (uVar16 < (uint)pCVar7->max_length) {
              (pSVar12->fields)._size = uVar16 + 1;
              pCVar7->m_Items[(int)uVar16] = item;
              il2cpp_runtime_helper_022b4080(pCVar7->m_Items + (int)uVar16);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar12,(Il2CppObject *)item,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            uVar17 = uVar17 + 1;
            uVar16 = (uint)pSVar14->max_length;
            if ((long)(int)uVar16 <= (long)uVar17) {
              return;
            }
          } while (uVar17 < uVar16);
        }
        goto label_04311ed1;
      }
    }
  }
label_04311ecc:
  il2cpp_runtime_helper_022b2c90();
label_04311ed1:
  il2cpp_runtime_helper_022b2ca0();
  return;
}


