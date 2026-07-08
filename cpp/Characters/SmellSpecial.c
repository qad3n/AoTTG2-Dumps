// Type: Characters.SmellSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/SmellSpecial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/SmellSpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.SmellSpecial$$get_ActiveTime
// il2cpp: float Characters_SmellSpecial__get_ActiveTime (Characters_SmellSpecial_o* __this, const MethodInfo* method);
// 0x3feaf00

float Characters_SmellSpecial__get_ActiveTime(Characters_SmellSpecial_o *__this,MethodInfo *method)

{
  return 30.0;
}


// Characters.SmellSpecial$$get_GroundedOnly
// il2cpp: bool Characters_SmellSpecial__get_GroundedOnly (Characters_SmellSpecial_o* __this, const MethodInfo* method);
// 0x3feaf10

bool_conflict
Characters_SmellSpecial__get_GroundedOnly(Characters_SmellSpecial_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.SmellSpecial$$.ctor
// il2cpp: void Characters_SmellSpecial___ctor (Characters_SmellSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fd7860

void Characters_SmellSpecial___ctor
               (Characters_SmellSpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  (__this->fields).Range = 600.0;
  (__this->fields).Delay = 1.0;
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 60.0;
  return;
}


// Characters.SmellSpecial$$Activate
// il2cpp: void Characters_SmellSpecial__Activate (Characters_SmellSpecial_o* __this, const MethodInfo* method);
// 0x3feaf20

void Characters_SmellSpecial__Activate(Characters_SmellSpecial_o *__this,MethodInfo *method)

{
  float outMax;
  int iVar1;
  Characters_Human_o *pCVar2;
  long *plVar3;
  long lVar4;
  UnityEngine_Transform_o *pUVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  bool_conflict bVar6;
  undefined8 uVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar8;
  float inMax;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  float in_stack_ffffffffffffff58;
  undefined4 in_stack_ffffffffffffff5c;
  undefined4 in_stack_ffffffffffffff60;
  undefined4 in_stack_ffffffffffffff64;
  System_Collections_Generic_HashSet_T__o *pSVar11;
  float fStack_68;
  float fStack_64;
  _union_329995 a_Stack_58 [2];
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (DAT_05704179 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704179 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pCVar2 != (Characters_Human_o *)0x0) {
    Characters_Human__EmoteAnimation
              (pCVar2,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x220),
               (MethodInfo *)0x0);
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
                  (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar3[9],MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G
                  );
        pSVar11 = SStack_48.fields._set;
LAB_03feb0a0:
        do {
          __this_00.fields._set._4_4_ = in_stack_ffffffffffffff5c;
          __this_00.fields._set._0_4_ = in_stack_ffffffffffffff58;
          __this_00.fields._index = in_stack_ffffffffffffff60;
          __this_00.fields._version = in_stack_ffffffffffffff64;
          __this_00.fields._current = (Il2CppObject *)pSVar11;
          bVar6 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffff68);
          if ((char)bVar6 == '\0') {
            __this_01.fields._set._4_4_ = in_stack_ffffffffffffff5c;
            __this_01.fields._set._0_4_ = in_stack_ffffffffffffff58;
            __this_01.fields._index = in_stack_ffffffffffffff60;
            __this_01.fields._version = in_stack_ffffffffffffff64;
            __this_01.fields._current = (Il2CppObject *)pSVar11;
            System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                      (__this_01,(MethodInfo_3185880 *)&stack0xffffffffffffff68);
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
          UVar9 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
          in_stack_ffffffffffffff58 = UVar9.fields.z;
          if ((Characters_BaseCharacter_o *)SStack_48.fields._current ==
              (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          lVar4 = *(long *)&((Characters_BaseCharacter_Fields *)
                            ((long)SStack_48.fields._current + 0x10))->Dead;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar5 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
          if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UVar10 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
          if (DAT_056fdea6 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Math);
            DAT_056fdea6 = '\x01';
            iVar1 = *(int *)(TypeInfo_Math + 0xe4);
            in_stack_ffffffffffffff5c = in_XMM1_Db;
            in_stack_ffffffffffffff60 = in_XMM1_Dc;
            in_stack_ffffffffffffff64 = in_XMM1_Dd;
          }
          else {
            iVar1 = *(int *)(TypeInfo_Math + 0xe4);
            in_stack_ffffffffffffff5c = in_XMM1_Db;
            in_stack_ffffffffffffff60 = in_XMM1_Dc;
            in_stack_ffffffffffffff64 = in_XMM1_Dd;
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
          }
          fStack_68 = UVar9.fields.x;
          fStack_64 = UVar9.fields.y;
          a_Stack_58[0]._0_4_ = UVar10.fields.x;
          a_Stack_58[0]._4_4_ = UVar10.fields.y;
          fVar8 = in_stack_ffffffffffffff58 - UVar10.fields.z;
          fVar8 = (fStack_68 - (float)a_Stack_58[0]._0_4_) *
                  (fStack_68 - (float)a_Stack_58[0]._0_4_) +
                  (fStack_64 - (float)a_Stack_58[0]._4_4_) *
                  (fStack_64 - (float)a_Stack_58[0]._4_4_) + fVar8 * fVar8;
          if (fVar8 < 0.0) goto LAB_03feb1c0;
          fVar8 = SQRT(fVar8);
          inMax = (__this->fields).Range;
          in_XMM1_Db = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
        } while (inMax <= fVar8);
        goto LAB_03feb1d5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_03feb1c0:
  fVar8 = sqrtf(fVar8);
  inMax = (__this->fields).Range;
  in_XMM1_Db = 0;
  in_XMM1_Dc = 0;
  in_XMM1_Dd = 0;
  if (fVar8 < inMax) {
LAB_03feb1d5:
    outMax = (__this->fields).Delay;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    in_stack_ffffffffffffff58 =
         Utility_Util__LinearMap(fVar8,0.0,inMax,0.0,outMax,(MethodInfo *)0x0);
    uVar7 = (*(__this->klass->vtable)._14_get_ActiveTime.methodPtr)(__this);
    in_XMM1_Db = (undefined4)((ulong)uVar7 >> 0x20);
    in_XMM1_Dc = extraout_XMM0_Dc;
    in_XMM1_Dd = extraout_XMM0_Dd;
    Characters_BaseCharacter__Reveal
              ((Characters_BaseCharacter_o *)SStack_48.fields._current,in_stack_ffffffffffffff58,
               (float)uVar7,(MethodInfo *)0x0);
  }
  goto LAB_03feb0a0;
}


// Characters.SmellSpecial$$Deactivate
// il2cpp: void Characters_SmellSpecial__Deactivate (Characters_SmellSpecial_o* __this, const MethodInfo* method);
// 0x3feb3a0

void Characters_SmellSpecial__Deactivate(Characters_SmellSpecial_o *__this,MethodInfo *method)

{
  return;
}


