// Type: Characters.SmellSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/SmellSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SmellSpecial.cs
// --------------------------------

// Characters.SmellSpecial$$get_ActiveTime
// il2cpp: float Characters_SmellSpecial__get_ActiveTime (Characters_SmellSpecial_o* __this, const MethodInfo* method);
// 0x42f77c0

float Characters_SmellSpecial__get_ActiveTime(Characters_SmellSpecial_o *__this,MethodInfo *method)

{
  return 30.0;
}


// Characters.SmellSpecial$$get_GroundedOnly
// il2cpp: bool Characters_SmellSpecial__get_GroundedOnly (Characters_SmellSpecial_o* __this, const MethodInfo* method);
// 0x42f77d0

bool_conflict Characters_SmellSpecial__get_GroundedOnly(Characters_SmellSpecial_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.SmellSpecial$$.ctor
// il2cpp: void Characters_SmellSpecial___ctor (Characters_SmellSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42e4120

void Characters_SmellSpecial___ctor
               (Characters_SmellSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).Range = 600.0;
  (__this->fields).Delay = 1.0;
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 60.0;
  return;
}


// Characters.SmellSpecial$$Activate
// il2cpp: void Characters_SmellSpecial__Activate (Characters_SmellSpecial_o* __this, const MethodInfo* method);
// 0x42f77e0

void Characters_SmellSpecial__Activate(Characters_SmellSpecial_o *__this,MethodInfo *method)

{
  float outMax;
  int iVar1;
  Characters_Human_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  bool_conflict bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar8;
  float inMax;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar9 [12];
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  float in_stack_ffffffffffffff58;
  undefined4 in_stack_ffffffffffffff5c;
  undefined4 in_stack_ffffffffffffff60;
  undefined4 in_stack_ffffffffffffff64;
  System_Collections_Generic_HashSet_T__o *pSVar12;
  float fStack_68;
  float fStack_64;
  _union_332950 a_Stack_58 [2];
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (g_data_057adee7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasicTitan_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BasicTitan_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057adee7 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pCVar2 = (__this->fields)._human;
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pCVar2 != (Characters_Human_o *)0x0) {
    Characters_Human__EmoteAnimation
              (pCVar2,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x220),(MethodInfo *)0x0);
    plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar6 != (long *)0x0) {
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
         (*(long *)(*(long *)(*plVar6 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
          TypeInfo_InGameManager)) goto label_042f7b53;
      if ((System_Collections_Generic_HashSet_object__o *)plVar6[9] !=
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  (&SStack_48,(System_Collections_Generic_HashSet_object__o *)plVar6[9],MethodInfo_HashSet_1_T_Enumerator_Characters_BasicTitan_GetEnumerat);
        pSVar12 = SStack_48.fields._set;
label_042f7960:
        while( true ) {
          __this_00.fields._set._4_4_ = in_stack_ffffffffffffff5c;
          __this_00.fields._set._0_4_ = in_stack_ffffffffffffff58;
          __this_00.fields._index = in_stack_ffffffffffffff60;
          __this_00.fields._version = in_stack_ffffffffffffff64;
          __this_00.fields._current = (Il2CppObject *)pSVar12;
          bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffff68);
          if ((char)bVar5 == '\0') {
            __this_01.fields._set._4_4_ = in_stack_ffffffffffffff5c;
            __this_01.fields._set._0_4_ = in_stack_ffffffffffffff58;
            __this_01.fields._index = in_stack_ffffffffffffff60;
            __this_01.fields._version = in_stack_ffffffffffffff64;
            __this_01.fields._current = (Il2CppObject *)pSVar12;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_01,(MethodInfo_3219C30 *)&stack0xffffffffffffff68);
            return;
          }
          pCVar2 = (__this->fields)._human;
          if (pCVar2 == (Characters_Human_o *)0x0) break;
          lVar3 = *(long *)&(pCVar2->fields).Dead;
          if (lVar3 == 0) goto label_042f7b44;
          pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_042f7b35;
          UVar10 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
          in_stack_ffffffffffffff58 = UVar10.fields.z;
          if ((Characters_BaseCharacter_o *)SStack_48.fields._current == (Characters_BaseCharacter_o *)0x0)
          goto label_042f7b3a;
          lVar3 = *(long *)&((Characters_BaseCharacter_Fields *)((long)SStack_48.fields._current + 0x10))->
                            Dead;
          if (lVar3 == 0) goto label_042f7b3f;
          pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_042f7b49;
          UVar11 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
          if (g_data_057a68cb == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a68cb = '\x01';
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
            il2cpp_runtime_helper_02337ed0();
          }
          fStack_68 = UVar10.fields.x;
          fStack_64 = UVar10.fields.y;
          a_Stack_58[0]._0_4_ = UVar11.fields.x;
          a_Stack_58[0]._4_4_ = UVar11.fields.y;
          fVar8 = in_stack_ffffffffffffff58 - UVar11.fields.z;
          fVar8 = (fStack_68 - (float)a_Stack_58[0]._0_4_) * (fStack_68 - (float)a_Stack_58[0]._0_4_) +
                  (fStack_64 - (float)a_Stack_58[0]._4_4_) * (fStack_64 - (float)a_Stack_58[0]._4_4_) +
                  fVar8 * fVar8;
          if (fVar8 < 0.0) goto label_042f7a80;
          fVar8 = SQRT(fVar8);
          inMax = (__this->fields).Range;
          in_XMM1_Db = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          if (fVar8 < inMax) goto label_042f7a95;
        }
        il2cpp_runtime_helper_022b2c90();
label_042f7b35:
        in_XMM1_Dd = in_stack_ffffffffffffff64;
        in_XMM1_Dc = in_stack_ffffffffffffff60;
        in_XMM1_Db = in_stack_ffffffffffffff5c;
        il2cpp_runtime_helper_022b2c90();
label_042f7b3a:
        il2cpp_runtime_helper_022b2c90();
label_042f7b3f:
        il2cpp_runtime_helper_022b2c90();
        in_stack_ffffffffffffff5c = in_XMM1_Db;
        in_stack_ffffffffffffff60 = in_XMM1_Dc;
        in_stack_ffffffffffffff64 = in_XMM1_Dd;
label_042f7b44:
        in_XMM1_Dd = in_stack_ffffffffffffff64;
        in_XMM1_Dc = in_stack_ffffffffffffff60;
        in_XMM1_Db = in_stack_ffffffffffffff5c;
        il2cpp_runtime_helper_022b2c90();
label_042f7b49:
        il2cpp_runtime_helper_022b2c90();
        in_stack_ffffffffffffff5c = in_XMM1_Db;
        in_stack_ffffffffffffff60 = in_XMM1_Dc;
        in_stack_ffffffffffffff64 = in_XMM1_Dd;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_042f7b53:
  auVar9 = il2cpp_runtime_helper_022b2fd0();
  if (auVar9._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar3 = *plVar6;
    __cxa_end_catch();
    __this_02.fields._set._4_4_ = in_stack_ffffffffffffff5c;
    __this_02.fields._set._0_4_ = in_stack_ffffffffffffff58;
    __this_02.fields._index = in_stack_ffffffffffffff60;
    __this_02.fields._version = in_stack_ffffffffffffff64;
    __this_02.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff68);
    if (lVar3 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_03.fields._set._4_4_ = in_stack_ffffffffffffff5c;
  __this_03.fields._set._0_4_ = in_stack_ffffffffffffff58;
  __this_03.fields._index = in_stack_ffffffffffffff60;
  __this_03.fields._version = in_stack_ffffffffffffff64;
  __this_03.fields._current = (Il2CppObject *)pSVar12;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff68);
  _Unwind_Resume(auVar9._0_8_);
label_042f7a80:
  fVar8 = sqrtf(fVar8);
  inMax = (__this->fields).Range;
  in_XMM1_Db = 0;
  in_XMM1_Dc = 0;
  in_XMM1_Dd = 0;
  if (fVar8 < inMax) {
label_042f7a95:
    outMax = (__this->fields).Delay;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    in_stack_ffffffffffffff58 = Utility_Util__LinearMap(fVar8,0.0,inMax,0.0,outMax,(MethodInfo *)0x0);
    uVar7 = (*(__this->klass->vtable)._14_get_ActiveTime.methodPtr)(__this);
    in_XMM1_Db = (undefined4)((ulong)uVar7 >> 0x20);
    in_XMM1_Dc = extraout_XMM0_Dc;
    in_XMM1_Dd = extraout_XMM0_Dd;
    Characters_BaseCharacter__Reveal
              ((Characters_BaseCharacter_o *)SStack_48.fields._current,in_stack_ffffffffffffff58,(float)uVar7,
               (MethodInfo *)0x0);
  }
  goto label_042f7960;
}


// Characters.SmellSpecial$$Deactivate
// il2cpp: void Characters_SmellSpecial__Deactivate (Characters_SmellSpecial_o* __this, const MethodInfo* method);
// 0x42f7c60

void Characters_SmellSpecial__Deactivate(Characters_SmellSpecial_o *__this,MethodInfo *method)

{
  return;
}


