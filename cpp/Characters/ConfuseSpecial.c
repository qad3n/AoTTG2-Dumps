// Type: Characters.ConfuseSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/ConfuseSpecial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/ConfuseSpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.ConfuseSpecial$$get_ActiveTime
// il2cpp: float Characters_ConfuseSpecial__get_ActiveTime (Characters_ConfuseSpecial_o* __this, const MethodInfo* method);
// 0x3fe7d20

float Characters_ConfuseSpecial__get_ActiveTime
                (Characters_ConfuseSpecial_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Characters.ConfuseSpecial$$get_GroundedOnly
// il2cpp: bool Characters_ConfuseSpecial__get_GroundedOnly (Characters_ConfuseSpecial_o* __this, const MethodInfo* method);
// 0x3fe7d30

bool_conflict
Characters_ConfuseSpecial__get_GroundedOnly(Characters_ConfuseSpecial_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.ConfuseSpecial$$.ctor
// il2cpp: void Characters_ConfuseSpecial___ctor (Characters_ConfuseSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fd7ab0

void Characters_ConfuseSpecial___ctor
               (Characters_ConfuseSpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  (__this->fields).Range = 250.0;
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 30.0;
  return;
}


// Characters.ConfuseSpecial$$Activate
// il2cpp: void Characters_ConfuseSpecial__Activate (Characters_ConfuseSpecial_o* __this, const MethodInfo* method);
// 0x3fe7d40

void Characters_ConfuseSpecial__Activate(Characters_ConfuseSpecial_o *__this,MethodInfo *method)

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
  Il2CppObject *pIVar12;
  Il2CppObject *pIVar13;
  float local_88;
  float fStack_84;
  _union_329995 local_68 [5];
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  
  if (DAT_0570416b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570416b = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pCVar2 != (Characters_Human_o *)0x0) {
    Characters_Human__EmoteAnimation
              (pCVar2,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x70),(MethodInfo *)0x0
              );
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
LAB_03fe7ea0:
        do {
          pIVar12 = local_30;
          __this_00.fields._8_8_ = pIVar11;
          __this_00.fields._set = pSVar10;
          __this_00.fields._current = pIVar12;
          bVar6 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffff58);
          if ((char)bVar6 == '\0') {
            __this_01.fields._8_8_ = pIVar11;
            __this_01.fields._set = pSVar10;
            __this_01.fields._current = pIVar12;
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
          pIVar13 = pIVar12;
          UVar8 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
          if (pIVar12 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (pIVar12[7].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar5 = (UnityEngine_Transform_o *)((pIVar12[7].klass)->_1).name;
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
          if (fVar7 < 0.0) goto LAB_03fe7fe0;
          local_30 = pIVar13;
        } while ((__this->fields).Range <= SQRT(fVar7));
        goto LAB_03fe7fbc;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_03fe7fe0:
  fVar7 = sqrtf(fVar7);
  local_30 = pIVar13;
  if (fVar7 < (__this->fields).Range) {
LAB_03fe7fbc:
    local_30 = pIVar13;
    if (*(char *)&pIVar12[7].monitor != '\0') {
      (*pIVar12->klass->vtable[0x96].methodPtr)(pIVar12,pIVar12->klass->vtable[0x96].method);
      local_30 = pIVar13;
    }
  }
  goto LAB_03fe7ea0;
}


// Characters.ConfuseSpecial$$Deactivate
// il2cpp: void Characters_ConfuseSpecial__Deactivate (Characters_ConfuseSpecial_o* __this, const MethodInfo* method);
// 0x3fe8120

void Characters_ConfuseSpecial__Deactivate(Characters_ConfuseSpecial_o *__this,MethodInfo *method)

{
  return;
}


