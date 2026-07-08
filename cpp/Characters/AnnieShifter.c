// Type: Characters.AnnieShifter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/AnnieShifter.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Shifters/Annie/AnnieShifter.cs  [CHANGED since prior version]
// --------------------------------

// Characters.AnnieShifter$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_AnnieShifter__get_EmoteActions (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x3ff0e50

System_Collections_Generic_List_string__o *
Characters_AnnieShifter__get_EmoteActions(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  long lVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (DAT_057041a2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"Wave");
    il2cpp_init_method_metadata(&"Roar");
    il2cpp_init_method_metadata(&"Salute");
    il2cpp_init_method_metadata(&"Taunt");
    DAT_057041a2 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  pSVar5 = "Salute";
  lVar4 = MethodInfo_Void_Add;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pSVar5;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      pSVar5 = "Roar";
      lVar4 = MethodInfo_Void_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 != (System_String_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pSVar5;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        pSVar5 = "Taunt";
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_00->fields)._items;
        if (pSVar3 != (System_String_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pSVar5;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5
                       ,*(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          pSVar5 = "Wave";
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 != (System_String_array *)0x0) {
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pSVar5;
              il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (Il2CppObject *)pSVar5,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
            }
            return __this_00;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnnieShifter$$CreateCache
// il2cpp: void Characters_AnnieShifter__CreateCache (Characters_AnnieShifter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x3ff1060

void Characters_AnnieShifter__CreateCache
               (Characters_AnnieShifter_o *__this,Utility_BaseComponentCache_o *cache,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_AnnieComponentCache_o *__this_00;
  MethodInfo *method_00;
  undefined1 auVar1 [16];
  
  if (DAT_057041a3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnnieComponentCache);
    DAT_057041a3 = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  auVar1 = il2cpp_runtime_glue(TypeInfo_AnnieComponentCache);
  __this_00 = auVar1._0_8_;
  Characters_AnnieComponentCache___ctor(__this_00,owner,auVar1._8_8_);
  (__this->fields).AttackAnimations =
       (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields).AttackAnimations,__this_00);
  Characters_BaseTitan__CreateCache
            ((Characters_BaseTitan_o *)__this,
             (Utility_BaseComponentCache_o *)(__this->fields).AttackAnimations,method_00);
  return;
}


// Characters.AnnieShifter$$CreateAnimations
// il2cpp: void Characters_AnnieShifter__CreateAnimations (Characters_AnnieShifter_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x3ff1190

void Characters_AnnieShifter__CreateAnimations
               (Characters_AnnieShifter_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_AnnieAnimations_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_057041a4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnnieAnimations);
    DAT_057041a4 = '\x01';
  }
  __this_00 = (Characters_AnnieAnimations_o *)il2cpp_runtime_glue(TypeInfo_AnnieAnimations);
  Characters_AnnieAnimations___ctor(__this_00,(MethodInfo *)animations);
  *(Characters_AnnieAnimations_o **)&(__this->fields).EnableAI = __this_00;
  il2cpp_runtime_glue(&(__this->fields).EnableAI,__this_00);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,
             *(Characters_BaseTitanAnimations_o **)&(__this->fields).EnableAI,method_00);
  return;
}


// Characters.AnnieShifter$$Emote
// il2cpp: void Characters_AnnieShifter__Emote (Characters_AnnieShifter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x3ff1410

void Characters_AnnieShifter__Emote
               (Characters_AnnieShifter_o *__this,System_String_o *emote,MethodInfo *method)

{
  long lVar1;
  Characters_AnimationHandler_o *pCVar2;
  char cVar3;
  bool_conflict bVar4;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *extraout_RDX;
  System_String_o *a;
  float fVar5;
  
  if (DAT_057041a5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    il2cpp_init_method_metadata(&"Wave");
    il2cpp_init_method_metadata(&"Roar");
    il2cpp_init_method_metadata(&"Salute");
    il2cpp_init_method_metadata(&"Taunt");
    il2cpp_init_method_metadata(&"");
    DAT_057041a5 = '\x01';
    method = extraout_RDX;
  }
  cVar3 = (*(__this->klass->vtable)._124_CanEmote.methodPtr)
                    (__this,(__this->klass->vtable)._124_CanEmote.method,method);
  if (cVar3 != '\0') {
    a = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    bVar4 = System_String__op_Equality(emote,"Salute",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      bVar4 = System_String__op_Equality(emote,"Roar",(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        bVar4 = System_String__op_Equality(emote,"Taunt",(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          bVar4 = System_String__op_Equality(emote,"Wave",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            lVar1 = *(long *)&(__this->fields).EnableAI;
            if (lVar1 == 0) goto LAB_03ff1682;
            a = *(System_String_o **)(lVar1 + 0xb8);
          }
        }
        else {
          lVar1 = *(long *)&(__this->fields).EnableAI;
          if (lVar1 == 0) goto LAB_03ff1682;
          a = *(System_String_o **)(lVar1 + 0xb0);
        }
      }
      else {
        lVar1 = *(long *)&(__this->fields).EnableAI;
        if (lVar1 == 0) goto LAB_03ff1682;
        a = *(System_String_o **)(lVar1 + 0xc0);
        if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
          il2cpp_init_class();
        }
        routine = Characters_BaseCharacter__WaitAndPlaySound
                            ((Characters_BaseCharacter_o *)__this,
                             *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x10),0.1,
                             (MethodInfo *)0x0);
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      }
    }
    else {
      lVar1 = *(long *)&(__this->fields).EnableAI;
      if (lVar1 == 0) goto LAB_03ff1682;
      a = *(System_String_o **)(lVar1 + 0xa8);
    }
    bVar4 = System_String__op_Inequality(a,"",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        fVar5 = Characters_AnimationHandler__GetLength(pCVar2,a,(MethodInfo *)0x0);
        *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
        pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                    (__this,(__this->klass->vtable)._148_Ungrab.method);
          (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                    (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,a,0.1,0.0,(MethodInfo *)0x0);
          *(undefined4 *)&(__this->fields).OutlineComponent = 8;
          *(System_String_o **)&(__this->fields)._climbCooldownLeft = a;
          il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,a);
          (__this->fields)._currentCrippleTime = fVar5;
          return;
        }
      }
LAB_03ff1682:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Characters.AnnieShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_AnnieShifter__CreateCustomSkinLoader (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x3ff16f0

CustomSkins_BaseCustomSkinLoader_o *
Characters_AnnieShifter__CreateCustomSkinLoader
          (Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_BaseCustomSkinLoader_o *pCVar1;
  
  if (DAT_057041a6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AnnieCustomSkinLoader_AddComponent_AnnieCustomSk);
    DAT_057041a6 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pCVar1 = (CustomSkins_BaseCustomSkinLoader_o *)
             UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_AnnieCustomSkinLoader_AddComponent_AnnieCustomSk);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnnieShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_AnnieShifter__GetSkinURL (Characters_AnnieShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x3ff1740

System_String_o *
Characters_AnnieShifter__GetSkinURL
          (Characters_AnnieShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method
          )

{
  Settings_StringSetting_o *pSVar1;
  
  if (DAT_057041a7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057041a7 = '\x01';
  }
  if ((set != (Settings_ShifterCustomSkinSet_o *)0x0) &&
     (pSVar1 = (set->fields).Annie, pSVar1 != (Settings_StringSetting_o *)0x0)) {
    return (pSVar1->fields)._value;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnnieShifter$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_AnnieShifter__GetRootMotionAnimations (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x3ff1780

System_Collections_Generic_Dictionary_string__float__o *
Characters_AnnieShifter__GetRootMotionAnimations
          (Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (DAT_057041a8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__float);
    DAT_057041a8 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_string__float__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__float);
  System_Collections_Generic_Dictionary<object__float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Dictionary_2_System_String_System_Single);
  lVar1 = *(long *)&(__this->fields).EnableAI;
  if ((lVar1 != 0) && (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0))
  {
    System_Collections_Generic_Dictionary<object__float>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               *(Il2CppObject **)(lVar1 + 0x10),0.95,MethodInfo_Void_Add);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnnieShifter$$UpdateAttack
// il2cpp: void Characters_AnnieShifter__UpdateAttack (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x3ff1820

void Characters_AnnieShifter__UpdateAttack(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_string__string__o *pSVar2;
  System_Action_Hashtable__o *pSVar3;
  UnityEngine_Component_o *__this_00;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  System_Collections_Generic_Dictionary_string__string__c *pSVar6;
  Characters_BaseHitbox_o *pCVar7;
  System_String_o *pSVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Quaternion_o rotation;
  undefined8 uStack_58;
  float fStack_38;
  
  if (DAT_057041a9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_057041a9 = '\x01';
  }
  fVar9 = (float)(*(__this->klass->vtable)._166_GetAnimationTime.methodPtr)
                           (__this,(__this->klass->vtable)._166_GetAnimationTime.method);
  lVar1 = *(long *)&(__this->fields).EnableAI;
  if (lVar1 == 0) goto LAB_03ff2559;
  bVar4 = System_String__op_Equality
                    (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                     *(System_String_o **)(lVar1 + 0x10),(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    lVar1 = *(long *)&(__this->fields).EnableAI;
    if (lVar1 == 0) goto LAB_03ff2559;
    bVar4 = System_String__op_Equality
                      (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                       *(System_String_o **)(lVar1 + 0x18),(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      lVar1 = *(long *)&(__this->fields).EnableAI;
      if (lVar1 == 0) goto LAB_03ff2559;
      bVar4 = System_String__op_Equality
                        (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                         *(System_String_o **)(lVar1 + 0x88),(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        lVar1 = *(long *)&(__this->fields).EnableAI;
        if (lVar1 == 0) goto LAB_03ff2559;
        bVar4 = System_String__op_Equality
                          (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                           *(System_String_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          lVar1 = *(long *)&(__this->fields).EnableAI;
          if (lVar1 == 0) goto LAB_03ff2559;
          bVar4 = System_String__op_Equality
                            (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                             *(System_String_o **)(lVar1 + 0x90),(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            fVar10 = (__this->fields)._startPosition.fields.z;
            if ((0.24 < fVar9) && (fVar10 == 0.0)) {
              (__this->fields)._startPosition.fields.z = 1.4013e-45;
              pSVar2 = (__this->fields).AttackAnimations;
              if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
              goto LAB_03ff2559;
              pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._syncRoot;
              fVar9 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                       (0x3db851ec,__this);
              if (pCVar7 == (Characters_BaseHitbox_o *)0x0) goto LAB_03ff2559;
              goto LAB_03ff1d81;
            }
            if (fVar9 <= 0.33) {
              return;
            }
            if (fVar10 != 1.4013e-45) {
              return;
            }
            pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
            if (((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
                (__this_00 = (UnityEngine_Component_o *)pSVar3[1].fields.invoke_impl,
                __this_00 != (UnityEngine_Component_o *)0x0)) &&
               (pUVar5 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0),
               pUVar5 != (UnityEngine_Transform_o *)0x0)) {
              UVar11 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
              pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
              if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
                 (pUVar5 = (UnityEngine_Transform_o *)(pSVar3->fields).method_ptr,
                 pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                UVar12 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                  il2cpp_init_class(UVar12.fields.x,UVar12.fields.z);
                }
                pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
                if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
                   (pUVar5 = (UnityEngine_Transform_o *)(pSVar3->fields).method_ptr,
                   pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                  fStack_38 = UVar11.fields.x;
                  pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x78);
                  rotation = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
                  fVar9 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
                  fVar10 = (float)(*(__this->klass->vtable)._117_get_SizeMultiplier.methodPtr)
                                            (__this,(__this->klass->vtable)._117_get_SizeMultiplier.
                                                    method);
                  UVar11.fields.x = fStack_38;
                  UVar11.fields.y = UVar12.fields.y;
                  Effects_EffectSpawner__Spawn
                            (pSVar8,UVar11,rotation,fVar9 * fVar10,1,(System_Object_array *)0x0,
                             (MethodInfo *)0x0);
                  (*(__this->klass->vtable)._173_SpawnShatter.methodPtr)
                            (fStack_38,UVar11.fields.z,__this,
                             (__this->klass->vtable)._173_SpawnShatter.method);
                  (__this->fields)._startPosition.fields.z = 2.8026e-45;
                  return;
                }
              }
            }
            goto LAB_03ff2559;
          }
          lVar1 = *(long *)&(__this->fields).EnableAI;
          if (lVar1 == 0) goto LAB_03ff2559;
          bVar4 = System_String__op_Equality
                            (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                             *(System_String_o **)(lVar1 + 0x98),(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (fVar9 <= 0.26) {
              return;
            }
            if ((__this->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (__this->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (__this->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
            goto LAB_03ff2559;
            pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
            fVar9 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                     (0x3da3d70a,__this);
            if (pCVar7 == (Characters_BaseHitbox_o *)0x0) goto LAB_03ff2559;
            Characters_BaseHitbox__Activate(pCVar7,0.0,fVar9,(MethodInfo *)0x0);
            pSVar2 = (__this->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
            goto LAB_03ff2559;
            pSVar6 = (System_Collections_Generic_Dictionary_string__string__c *)
                     pSVar2[1].fields._values;
            fVar9 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                     (0x3da3d70a,__this);
            goto joined_r0x03ff213e;
          }
          lVar1 = *(long *)&(__this->fields).EnableAI;
          if (lVar1 == 0) goto LAB_03ff2559;
          bVar4 = System_String__op_Equality
                            (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                             *(System_String_o **)(lVar1 + 0xa0),(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (fVar9 <= 0.27) {
              return;
            }
            if ((__this->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (__this->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (__this->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
            goto LAB_03ff2559;
            pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._comparer;
            fVar9 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                     (0x3df5c28f,__this);
joined_r0x03ff24dc:
            if (pCVar7 != (Characters_BaseHitbox_o *)0x0) {
LAB_03ff1d81:
              Characters_BaseHitbox__Activate(pCVar7,0.0,fVar9,(MethodInfo *)0x0);
              return;
            }
            goto LAB_03ff2559;
          }
          lVar1 = *(long *)&(__this->fields).EnableAI;
          if (lVar1 == 0) goto LAB_03ff2559;
          bVar4 = System_String__op_Equality
                            (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                             *(System_String_o **)(lVar1 + 0x28),(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            lVar1 = *(long *)&(__this->fields).EnableAI;
            if (lVar1 == 0) goto LAB_03ff2559;
            bVar4 = System_String__op_Equality
                              (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                               *(System_String_o **)(lVar1 + 0x30),(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (fVar9 <= 0.45) {
                return;
              }
              goto LAB_03ff20f0;
            }
            lVar1 = *(long *)&(__this->fields).EnableAI;
            if (lVar1 == 0) goto LAB_03ff2559;
            bVar4 = System_String__op_Equality
                              (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                               *(System_String_o **)(lVar1 + 0x38),(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              lVar1 = *(long *)&(__this->fields).EnableAI;
              if (lVar1 == 0) goto LAB_03ff2559;
              bVar4 = System_String__op_Equality
                                (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                                 *(System_String_o **)(lVar1 + 0x40),(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                if (fVar9 <= 0.42) {
                  return;
                }
                if ((__this->fields)._startPosition.fields.z != 0.0) {
                  return;
                }
                (__this->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar2 = (__this->fields).AttackAnimations;
                if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto LAB_03ff2559;
                pSVar6 = (System_Collections_Generic_Dictionary_string__string__c *)
                         pSVar2[1].fields._keys;
                goto LAB_03ff1bef;
              }
              lVar1 = *(long *)&(__this->fields).EnableAI;
              if (lVar1 == 0) goto LAB_03ff2559;
              bVar4 = System_String__op_Equality
                                (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                                 *(System_String_o **)(lVar1 + 0x48),(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                if (fVar9 <= 0.42) {
                  return;
                }
                goto LAB_03ff1bbf;
              }
              lVar1 = *(long *)&(__this->fields).EnableAI;
              if (lVar1 == 0) goto LAB_03ff2559;
              bVar4 = System_String__op_Equality
                                (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                                 *(System_String_o **)(lVar1 + 0x50),(MethodInfo *)0x0);
              if ((char)bVar4 == '\0') {
                lVar1 = *(long *)&(__this->fields).EnableAI;
                if (lVar1 == 0) goto LAB_03ff2559;
                bVar4 = System_String__op_Equality
                                  (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                                   *(System_String_o **)(lVar1 + 0x58),(MethodInfo *)0x0);
                if ((char)bVar4 == '\0') {
                  lVar1 = *(long *)&(__this->fields).EnableAI;
                  if (lVar1 == 0) goto LAB_03ff2559;
                  bVar4 = System_String__op_Equality
                                    (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                                     *(System_String_o **)(lVar1 + 0x60),(MethodInfo *)0x0);
                  if ((char)bVar4 == '\0') {
                    lVar1 = *(long *)&(__this->fields).EnableAI;
                    if (lVar1 == 0) goto LAB_03ff2559;
                    bVar4 = System_String__op_Equality
                                      (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                                       *(System_String_o **)(lVar1 + 0x68),(MethodInfo *)0x0);
                    if ((char)bVar4 == '\0') {
                      lVar1 = *(long *)&(__this->fields).EnableAI;
                      if (lVar1 == 0) goto LAB_03ff2559;
                      bVar4 = System_String__op_Equality
                                        (*(System_String_o **)
                                          &(__this->fields)._currentFallTotalTime,
                                         *(System_String_o **)(lVar1 + 0x70),(MethodInfo *)0x0);
                      if ((char)bVar4 != '\0') {
                        if (fVar9 <= 0.27) {
                          return;
                        }
                        if ((__this->fields)._startPosition.fields.z != 0.0) {
                          return;
                        }
                        (__this->fields)._startPosition.fields.z = 1.4013e-45;
                        pSVar2 = (__this->fields).AttackAnimations;
                        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0
                           ) goto LAB_03ff2559;
                        pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
                        fVar9 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                                 (0x3dcccccd,__this);
                        goto joined_r0x03ff24dc;
                      }
                      lVar1 = *(long *)&(__this->fields).EnableAI;
                      if (lVar1 == 0) goto LAB_03ff2559;
                      bVar4 = System_String__op_Equality
                                        (*(System_String_o **)
                                          &(__this->fields)._currentFallTotalTime,
                                         *(System_String_o **)(lVar1 + 0x78),(MethodInfo *)0x0);
                      if ((char)bVar4 == '\0') {
                        lVar1 = *(long *)&(__this->fields).EnableAI;
                        if (lVar1 == 0) goto LAB_03ff2559;
                        bVar4 = System_String__op_Equality
                                          (*(System_String_o **)
                                            &(__this->fields)._currentFallTotalTime,
                                           *(System_String_o **)(lVar1 + 0x80),(MethodInfo *)0x0);
                        if ((char)bVar4 == '\0') {
                          return;
                        }
                        if (fVar9 <= 0.28) {
                          return;
                        }
                        goto LAB_03ff2393;
                      }
                      if (fVar9 <= 0.28) {
                        return;
                      }
                    }
                    else if (fVar9 <= 0.31) {
                      return;
                    }
                    if ((__this->fields)._startPosition.fields.z != 0.0) {
                      return;
                    }
                    (__this->fields)._startPosition.fields.z = 1.4013e-45;
                    pSVar2 = (__this->fields).AttackAnimations;
                    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto LAB_03ff2559;
                    pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
                  }
                  else {
                    if (fVar9 <= 0.31) {
                      return;
                    }
LAB_03ff2393:
                    if ((__this->fields)._startPosition.fields.z != 0.0) {
                      return;
                    }
                    (__this->fields)._startPosition.fields.z = 1.4013e-45;
                    pSVar2 = (__this->fields).AttackAnimations;
                    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto LAB_03ff2559;
                    pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
                  }
                  fVar9 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                           (0x3d4ccccd,__this);
                  goto joined_r0x03ff24dc;
                }
                if (fVar9 <= 0.31) {
                  return;
                }
                if ((__this->fields)._startPosition.fields.z != 0.0) {
                  return;
                }
                (__this->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar2 = (__this->fields).AttackAnimations;
                if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto LAB_03ff2559;
                pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
              }
              else {
                if (fVar9 <= 0.31) {
                  return;
                }
                if ((__this->fields)._startPosition.fields.z != 0.0) {
                  return;
                }
                (__this->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar2 = (__this->fields).AttackAnimations;
                if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto LAB_03ff2559;
                pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
              }
              fVar9 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                       (0x3d23d70a,__this);
              goto joined_r0x03ff24dc;
            }
            if (fVar9 <= 0.45) {
              return;
            }
            if ((__this->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (__this->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (__this->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
            goto LAB_03ff2559;
            pSVar6 = (System_Collections_Generic_Dictionary_string__string__c *)
                     pSVar2[1].fields._keys;
          }
          else {
            if (fVar9 <= 0.41) {
              return;
            }
LAB_03ff20f0:
            if ((__this->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (__this->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (__this->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
            goto LAB_03ff2559;
            pSVar6 = (System_Collections_Generic_Dictionary_string__string__c *)
                     pSVar2[1].fields._values;
          }
          fVar9 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3e3851ec,__this);
        }
        else {
          if (fVar9 <= 0.47) {
            return;
          }
LAB_03ff1bbf:
          if ((__this->fields)._startPosition.fields.z != 0.0) {
            return;
          }
          (__this->fields)._startPosition.fields.z = 1.4013e-45;
          pSVar2 = (__this->fields).AttackAnimations;
          if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
          goto LAB_03ff2559;
          pSVar6 = (System_Collections_Generic_Dictionary_string__string__c *)
                   pSVar2[1].fields._values;
LAB_03ff1bef:
          fVar9 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3db851ec,__this);
        }
      }
      else {
        if (fVar9 <= 0.395) {
          return;
        }
        if ((__this->fields)._startPosition.fields.z != 0.0) {
          return;
        }
        (__this->fields)._startPosition.fields.z = 1.4013e-45;
        pSVar2 = (__this->fields).AttackAnimations;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
        goto LAB_03ff2559;
        pSVar6 = pSVar2[2].klass;
        fVar9 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3df5c28f,__this);
      }
    }
    else {
      fVar10 = (__this->fields)._startPosition.fields.z;
      if ((fVar9 <= 0.222) || (fVar10 != 0.0)) {
        if ((fVar9 <= 0.386) || (fVar10 != 1.4013e-45)) {
          if (fVar9 <= 0.612) {
            return;
          }
          if (fVar10 != 2.8026e-45) {
            return;
          }
          (__this->fields)._startPosition.fields.z = 4.2039e-45;
          pSVar2 = (__this->fields).AttackAnimations;
          if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
          goto LAB_03ff2559;
          pSVar6 = pSVar2[2].klass;
          fVar9 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a,__this);
          goto joined_r0x03ff1cb0;
        }
        (__this->fields)._startPosition.fields.z = 2.8026e-45;
        pSVar2 = (__this->fields).AttackAnimations;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
        goto LAB_03ff2559;
        pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
        fVar9 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d8f5c29,__this);
        goto joined_r0x03ff1b42;
      }
      (__this->fields)._startPosition.fields.z = 1.4013e-45;
      pSVar2 = (__this->fields).AttackAnimations;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
      goto LAB_03ff2559;
      pSVar6 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
      fVar9 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a,__this);
    }
  }
  else {
    fVar10 = (__this->fields)._startPosition.fields.z;
    if ((fVar9 <= 0.155) || (fVar10 != 0.0)) {
      if ((fVar9 <= 0.32) || (fVar10 != 1.4013e-45)) {
        if (fVar9 <= 0.59) {
          return;
        }
        if (fVar10 != 2.8026e-45) {
          return;
        }
        (__this->fields)._startPosition.fields.z = 4.2039e-45;
        pSVar2 = (__this->fields).AttackAnimations;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
        goto LAB_03ff2559;
        pSVar6 = pSVar2[2].klass;
        fVar9 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d4ccccd,__this);
joined_r0x03ff1cb0:
        if (pSVar6 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
          Characters_BaseHitbox__Activate
                    ((Characters_BaseHitbox_o *)pSVar6,0.0,fVar9,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
          goto LAB_03ff1c49;
        }
        goto LAB_03ff2559;
      }
      (__this->fields)._startPosition.fields.z = 2.8026e-45;
      pSVar2 = (__this->fields).AttackAnimations;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
      goto LAB_03ff2559;
      pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._syncRoot;
      fVar9 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d75c28f,__this);
joined_r0x03ff1b42:
      if (pCVar7 != (Characters_BaseHitbox_o *)0x0) {
        Characters_BaseHitbox__Activate(pCVar7,0.0,fVar9,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
        goto LAB_03ff1c49;
      }
      goto LAB_03ff2559;
    }
    (__this->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar2 = (__this->fields).AttackAnimations;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto LAB_03ff2559;
    pSVar6 = pSVar2[2].klass;
    fVar9 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d8f5c29,__this);
  }
joined_r0x03ff213e:
  if (pSVar6 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
    Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pSVar6,0.0,fVar9,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
LAB_03ff1c49:
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,pSVar8,(MethodInfo *)0x0);
    return;
  }
LAB_03ff2559:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnnieShifter$$DamagedGrunt
// il2cpp: void Characters_AnnieShifter__DamagedGrunt (Characters_AnnieShifter_o* __this, float chance, const MethodInfo* method);
// 0x3ff2560

void Characters_AnnieShifter__DamagedGrunt
               (Characters_AnnieShifter_o *__this,float chance,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  
  if (DAT_057041aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    il2cpp_init_method_metadata();
    DAT_057041aa = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x11) != '\0') {
      bVar2 = Utility_RandomGen__Roll(chance,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)__this,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18),(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnnieShifter$$Blind
// il2cpp: void Characters_AnnieShifter__Blind (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x3ff2630

void Characters_AnnieShifter__Blind(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_057041ab == '\0') {
    il2cpp_init_method_metadata(&"AttackComboBlind");
    DAT_057041ab = '\x01';
  }
  lVar1 = *(long *)&(__this->fields).EnableAI;
  if (lVar1 != 0) {
    bVar2 = System_String__op_Inequality
                      (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                       *(System_String_o **)(lVar1 + 0x18),(MethodInfo *)0x0);
    if (((char)bVar2 != '\0') && ((__this->fields)._jumpDirection.fields.x <= 0.0)) {
      (*(__this->klass->vtable)._168_DamagedGrunt.methodPtr)
                (0x3f800000,__this,(__this->klass->vtable)._168_DamagedGrunt.method);
      (*(__this->klass->vtable)._128_Attack.methodPtr)
                (__this,"AttackComboBlind",(__this->klass->vtable)._128_Attack.method);
      fVar3 = (float)(*(__this->klass->vtable)._118_get_DisableCooldown.methodPtr)
                               (__this,(__this->klass->vtable)._118_get_DisableCooldown.method);
      (__this->fields)._jumpDirection.fields.x = fVar3 + 2.0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnnieShifter$$.ctor
// il2cpp: void Characters_AnnieShifter___ctor (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x3ff26e0

void Characters_AnnieShifter___ctor(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (__this->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,method);
  return;
}


