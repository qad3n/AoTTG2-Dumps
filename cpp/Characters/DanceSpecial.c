// Type: Characters.DanceSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/DanceSpecial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/DanceSpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.DanceSpecial$$get_ActiveTime
// il2cpp: float Characters_DanceSpecial__get_ActiveTime (Characters_DanceSpecial_o* __this, const MethodInfo* method);
// 0x3fe8130

float Characters_DanceSpecial__get_ActiveTime(Characters_DanceSpecial_o *__this,MethodInfo *method)

{
  return 2.0;
}


// Characters.DanceSpecial$$get_GroundedOnly
// il2cpp: bool Characters_DanceSpecial__get_GroundedOnly (Characters_DanceSpecial_o* __this, const MethodInfo* method);
// 0x3fe8140

bool_conflict
Characters_DanceSpecial__get_GroundedOnly(Characters_DanceSpecial_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.DanceSpecial$$.ctor
// il2cpp: void Characters_DanceSpecial___ctor (Characters_DanceSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fd7840

void Characters_DanceSpecial___ctor
               (Characters_DanceSpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  (__this->fields).Range = 200.0;
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 20.0;
  return;
}


// Characters.DanceSpecial$$Activate
// il2cpp: void Characters_DanceSpecial__Activate (Characters_DanceSpecial_o* __this, const MethodInfo* method);
// 0x3fe8150

void Characters_DanceSpecial__Activate(Characters_DanceSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  if (DAT_0570416c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570416c = '\x01';
  }
  __this_00 = (__this->fields)._human;
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__EmoteAnimation
              (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1d8),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.DanceSpecial$$Deactivate
// il2cpp: void Characters_DanceSpecial__Deactivate (Characters_DanceSpecial_o* __this, const MethodInfo* method);
// 0x3fe81c0

void Characters_DanceSpecial__Deactivate(Characters_DanceSpecial_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_Human_o *pCVar2;
  long *plVar3;
  long lVar4;
  UnityEngine_Transform_o *pUVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  bool_conflict bVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  System_Collections_Generic_HashSet_T__o *pSVar10;
  Il2CppMethodPointer pIVar11;
  Characters_BasicTitan_o *__this_02;
  Characters_BasicTitan_o *pCVar12;
  float local_88;
  float fStack_84;
  _union_329995 local_68 [5];
  undefined1 local_40 [16];
  Characters_BasicTitan_o *local_30;
  
  if (DAT_0570416d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570416d = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    if ((pCVar2->fields).FinishSetup != 8) {
      return;
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar3 != (long *)0x0) {
      if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
         (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
          TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      if ((System_Collections_Generic_HashSet_object__o *)plVar3[9] !=
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,
                   (System_Collections_Generic_HashSet_object__o *)plVar3[9],MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
        pSVar10 = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
        pIVar11 = (Il2CppMethodPointer)local_40._8_8_;
LAB_03fe82f0:
        do {
          __this_02 = local_30;
          __this_00.fields._8_8_ = pIVar11;
          __this_00.fields._set = pSVar10;
          __this_00.fields._current = (Il2CppObject *)__this_02;
          bVar6 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffff58);
          if ((char)bVar6 == '\0') {
            __this_01.fields._8_8_ = pIVar11;
            __this_01.fields._set = pSVar10;
            __this_01.fields._current = (Il2CppObject *)__this_02;
            System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                      (__this_01,(MethodInfo_3185880 *)&stack0xffffffffffffff58);
            return;
          }
          pCVar2 = (__this->fields)._human;
          if (pCVar2 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          lVar4 = *(long *)&(pCVar2->fields).Dead;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar5 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
          if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pCVar12 = __this_02;
          UVar8 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
          if (__this_02 == (Characters_BasicTitan_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          lVar4 = *(long *)&(__this_02->fields).Dead;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar5 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
          if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UVar9 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
          if (DAT_056fdea6 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Math);
            DAT_056fdea6 = '\x01';
            iVar1 = *(int *)(TypeInfo_Math + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_Math + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
          }
          local_68[0]._0_4_ = UVar8.fields.x;
          local_68[0]._4_4_ = UVar8.fields.y;
          local_88 = UVar9.fields.x;
          fStack_84 = UVar9.fields.y;
          fVar7 = UVar8.fields.z - UVar9.fields.z;
          fVar7 = ((float)local_68[0]._0_4_ - local_88) * ((float)local_68[0]._0_4_ - local_88) +
                  ((float)local_68[0]._4_4_ - fStack_84) * ((float)local_68[0]._4_4_ - fStack_84) +
                  fVar7 * fVar7;
          if (fVar7 < 0.0) goto LAB_03fe8410;
          local_30 = pCVar12;
        } while ((__this->fields).Range <= SQRT(fVar7));
        goto LAB_03fe8425;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_03fe8410:
  fVar7 = sqrtf(fVar7);
  local_30 = pCVar12;
  if (fVar7 < (__this->fields).Range) {
LAB_03fe8425:
    Characters_BasicTitan__Laugh
              (__this_02,(Characters_BaseCharacter_o *)(__this->fields)._human,(MethodInfo *)0x0);
    local_30 = pCVar12;
  }
  goto LAB_03fe82f0;
}


