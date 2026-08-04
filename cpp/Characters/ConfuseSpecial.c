// Type: Characters.ConfuseSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ConfuseSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/ConfuseSpecial.cs
// --------------------------------

// Characters.ConfuseSpecial$$get_ActiveTime
// il2cpp: float Characters_ConfuseSpecial__get_ActiveTime (Characters_ConfuseSpecial_o* __this, const MethodInfo* method);
// 0x42f45e0

float Characters_ConfuseSpecial__get_ActiveTime(Characters_ConfuseSpecial_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Characters.ConfuseSpecial$$get_GroundedOnly
// il2cpp: bool Characters_ConfuseSpecial__get_GroundedOnly (Characters_ConfuseSpecial_o* __this, const MethodInfo* method);
// 0x42f45f0

bool_conflict
Characters_ConfuseSpecial__get_GroundedOnly(Characters_ConfuseSpecial_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.ConfuseSpecial$$.ctor
// il2cpp: void Characters_ConfuseSpecial___ctor (Characters_ConfuseSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42e4370

void Characters_ConfuseSpecial___ctor
               (Characters_ConfuseSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).Range = 250.0;
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 30.0;
  return;
}


// Characters.ConfuseSpecial$$Activate
// il2cpp: void Characters_ConfuseSpecial__Activate (Characters_ConfuseSpecial_o* __this, const MethodInfo* method);
// 0x42f4600

void Characters_ConfuseSpecial__Activate(Characters_ConfuseSpecial_o *__this,MethodInfo *method)

{
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
  float fVar7;
  undefined1 auVar8 [12];
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  System_Collections_Generic_HashSet_T__o *pSVar11;
  Il2CppMethodPointer pIVar12;
  Il2CppObject *pIVar13;
  Il2CppObject *pIVar14;
  float local_88;
  float fStack_84;
  _union_332950 local_68 [5];
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  
  if (g_data_057aded9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasicTitan_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BasicTitan_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057aded9 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIVar12 = (Il2CppMethodPointer)0x0;
  pIVar13 = (Il2CppObject *)0x0;
  pCVar2 = (__this->fields)._human;
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pCVar2 != (Characters_Human_o *)0x0) {
    Characters_Human__EmoteAnimation
              (pCVar2,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x70),(MethodInfo *)0x0);
    plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar6 != (long *)0x0) {
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
         (*(long *)(*(long *)(*plVar6 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
          TypeInfo_InGameManager)) goto label_042f48fd;
      if ((System_Collections_Generic_HashSet_object__o *)plVar6[9] !=
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,
                   (System_Collections_Generic_HashSet_object__o *)plVar6[9],MethodInfo_HashSet_1_T_Enumerator_Characters_BasicTitan_GetEnumerat);
        pSVar11 = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
        pIVar12 = (Il2CppMethodPointer)local_40._8_8_;
label_042f4760:
        while( true ) {
          pIVar14 = local_30;
          __this_00.fields._8_8_ = pIVar12;
          __this_00.fields._set = pSVar11;
          __this_00.fields._current = pIVar14;
          bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffff58);
          if ((char)bVar5 == '\0') {
            __this_01.fields._8_8_ = pIVar12;
            __this_01.fields._set = pSVar11;
            __this_01.fields._current = pIVar14;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_01,(MethodInfo_3219C30 *)&stack0xffffffffffffff58);
            return;
          }
          pCVar2 = (__this->fields)._human;
          pIVar13 = pIVar14;
          if (pCVar2 == (Characters_Human_o *)0x0) break;
          lVar3 = *(long *)&(pCVar2->fields).Dead;
          if (lVar3 == 0) goto label_042f48e4;
          pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_042f48e9;
          UVar9 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
          if (pIVar14 == (Il2CppObject *)0x0) goto label_042f48ee;
          if (pIVar14[7].klass == (Il2CppClass *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            break;
          }
          pUVar4 = (UnityEngine_Transform_o *)((pIVar14[7].klass)->_1).name;
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_042f48f3;
          UVar10 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
          if (g_data_057a68cb == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a68cb = '\x01';
            iVar1 = *(int *)(TypeInfo_Math + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_Math + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          local_68[0]._0_4_ = UVar9.fields.x;
          local_68[0]._4_4_ = UVar9.fields.y;
          local_88 = UVar10.fields.x;
          fStack_84 = UVar10.fields.y;
          fVar7 = UVar9.fields.z - UVar10.fields.z;
          fVar7 = ((float)local_68[0]._0_4_ - local_88) * ((float)local_68[0]._0_4_ - local_88) +
                  ((float)local_68[0]._4_4_ - fStack_84) * ((float)local_68[0]._4_4_ - fStack_84) +
                  fVar7 * fVar7;
          if (fVar7 < 0.0) goto label_042f48a0;
          local_30 = pIVar13;
          if (SQRT(fVar7) < (__this->fields).Range) goto label_042f487c;
        }
        il2cpp_runtime_helper_022b2c90();
label_042f48e4:
        il2cpp_runtime_helper_022b2c90();
label_042f48e9:
        il2cpp_runtime_helper_022b2c90();
label_042f48ee:
        il2cpp_runtime_helper_022b2c90();
label_042f48f3:
        il2cpp_runtime_helper_022b2c90();
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_042f48fd:
  auVar8 = il2cpp_runtime_helper_022b2fd0();
  if (auVar8._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar3 = *plVar6;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar12;
    __this_02.fields._set = pSVar11;
    __this_02.fields._current = pIVar13;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff58);
    if (lVar3 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_03.fields._8_8_ = pIVar12;
  __this_03.fields._set = pSVar11;
  __this_03.fields._current = pIVar13;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff58);
  _Unwind_Resume(auVar8._0_8_);
label_042f48a0:
  fVar7 = sqrtf(fVar7);
  local_30 = pIVar13;
  if (fVar7 < (__this->fields).Range) {
label_042f487c:
    local_30 = pIVar13;
    if (*(char *)&pIVar14[7].monitor != '\0') {
      (*pIVar14->klass->vtable[0x96].methodPtr)(pIVar14,pIVar14->klass->vtable[0x96].method);
      local_30 = pIVar13;
    }
  }
  goto label_042f4760;
}


// Characters.ConfuseSpecial$$Deactivate
// il2cpp: void Characters_ConfuseSpecial__Deactivate (Characters_ConfuseSpecial_o* __this, const MethodInfo* method);
// 0x42f49e0

void Characters_ConfuseSpecial__Deactivate(Characters_ConfuseSpecial_o *__this,MethodInfo *method)

{
  return;
}


