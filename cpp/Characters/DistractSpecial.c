// Type: Characters.DistractSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/DistractSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DistractSpecial.cs
// --------------------------------

// Characters.DistractSpecial$$get_ActiveTime
// il2cpp: float Characters_DistractSpecial__get_ActiveTime (Characters_DistractSpecial_o* __this, const MethodInfo* method);
// 0x42f4e30

float Characters_DistractSpecial__get_ActiveTime(Characters_DistractSpecial_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Characters.DistractSpecial$$get_GroundedOnly
// il2cpp: bool Characters_DistractSpecial__get_GroundedOnly (Characters_DistractSpecial_o* __this, const MethodInfo* method);
// 0x42f4e40

bool_conflict
Characters_DistractSpecial__get_GroundedOnly(Characters_DistractSpecial_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.DistractSpecial$$.ctor
// il2cpp: void Characters_DistractSpecial___ctor (Characters_DistractSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42e40a0

void Characters_DistractSpecial___ctor
               (Characters_DistractSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).Range = 300.0;
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 20.0;
  return;
}


// Characters.DistractSpecial$$Activate
// il2cpp: void Characters_DistractSpecial__Activate (Characters_DistractSpecial_o* __this, const MethodInfo* method);
// 0x42f4e50

void Characters_DistractSpecial__Activate(Characters_DistractSpecial_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_Human_o *__this_00;
  long lVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  undefined1 auVar8 [12];
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  System_Collections_Generic_HashSet_T__o *pSVar11;
  Il2CppMethodPointer pIVar12;
  Characters_BasicTitan_o *pCVar13;
  Characters_BasicTitan_o *__this_05;
  float fStack_a0;
  float fStack_9c;
  _union_332950 a_Stack_80 [5];
  undefined1 auStack_58 [16];
  Characters_BasicTitan_o *pCStack_48;
  Characters_Human_o *pCStack_40;
  
  if (g_data_057adedc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    g_data_057adedc = '\x01';
  }
  __this_00 = (__this->fields)._human;
  lVar6 = TypeInfo_HumanAnimations;
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__EmoteAnimation
              (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x1e0),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCStack_40 = __this_00;
  if (g_data_057adedd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasicTitan_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BasicTitan_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057adedd = '\x01';
  }
  pSVar11 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIVar12 = (Il2CppMethodPointer)0x0;
  pCVar13 = (Characters_BasicTitan_o *)0x0;
  if (*(long *)(lVar6 + 0x40) != 0) {
    if (*(int *)(*(long *)(lVar6 + 0x40) + 0x158) != 8) {
      return;
    }
    plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
          TypeInfo_InGameManager)) goto label_042f517f;
      if ((System_Collections_Generic_HashSet_object__o *)plVar5[9] !=
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_58,
                   (System_Collections_Generic_HashSet_object__o *)plVar5[9],MethodInfo_HashSet_1_T_Enumerator_Characters_BasicTitan_GetEnumerat);
        pSVar11 = (System_Collections_Generic_HashSet_T__o *)auStack_58._0_8_;
        pIVar12 = (Il2CppMethodPointer)auStack_58._8_8_;
label_042f4ff0:
        while( true ) {
          __this_05 = pCStack_48;
          __this_01.fields._8_8_ = pIVar12;
          __this_01.fields._set = pSVar11;
          __this_01.fields._current = (Il2CppObject *)__this_05;
          bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff40);
          if ((char)bVar4 == '\0') {
            __this_02.fields._8_8_ = pIVar12;
            __this_02.fields._set = pSVar11;
            __this_02.fields._current = (Il2CppObject *)__this_05;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff40);
            return;
          }
          pCVar13 = __this_05;
          if (*(long *)(lVar6 + 0x40) == 0) break;
          lVar2 = *(long *)(*(long *)(lVar6 + 0x40) + 0x70);
          if (lVar2 == 0) goto label_042f5166;
          pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
          if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_042f516b;
          UVar9 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
          if (__this_05 == (Characters_BasicTitan_o *)0x0) goto label_042f5170;
          lVar2 = *(long *)&(__this_05->fields).Dead;
          if (lVar2 == 0) {
            il2cpp_runtime_helper_022b2c90();
            break;
          }
          pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
          if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_042f5175;
          UVar10 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
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
          a_Stack_80[0]._0_4_ = UVar9.fields.x;
          a_Stack_80[0]._4_4_ = UVar9.fields.y;
          fStack_a0 = UVar10.fields.x;
          fStack_9c = UVar10.fields.y;
          fVar7 = UVar9.fields.z - UVar10.fields.z;
          fVar7 = ((float)a_Stack_80[0]._0_4_ - fStack_a0) * ((float)a_Stack_80[0]._0_4_ - fStack_a0) +
                  ((float)a_Stack_80[0]._4_4_ - fStack_9c) * ((float)a_Stack_80[0]._4_4_ - fStack_9c) +
                  fVar7 * fVar7;
          if (fVar7 < 0.0) goto label_042f5110;
          pCStack_48 = pCVar13;
          if (SQRT(fVar7) < *(float *)(lVar6 + 0x48)) goto label_042f5125;
        }
        il2cpp_runtime_helper_022b2c90();
label_042f5166:
        il2cpp_runtime_helper_022b2c90();
label_042f516b:
        il2cpp_runtime_helper_022b2c90();
label_042f5170:
        il2cpp_runtime_helper_022b2c90();
label_042f5175:
        il2cpp_runtime_helper_022b2c90();
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_042f517f:
  auVar8 = il2cpp_runtime_helper_022b2fd0();
  if (auVar8._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar6 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar12;
    __this_03.fields._set = pSVar11;
    __this_03.fields._current = (Il2CppObject *)pCVar13;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff40);
    if (lVar6 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_04.fields._8_8_ = pIVar12;
  __this_04.fields._set = pSVar11;
  __this_04.fields._current = (Il2CppObject *)pCVar13;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff40);
  _Unwind_Resume(auVar8._0_8_);
label_042f5110:
  fVar7 = sqrtf(fVar7);
  pCStack_48 = pCVar13;
  if (fVar7 < *(float *)(lVar6 + 0x48)) {
label_042f5125:
    Characters_BasicTitan__Distract
              (__this_05,*(Characters_BaseCharacter_o **)(lVar6 + 0x40),(MethodInfo *)0x0);
    pCStack_48 = pCVar13;
  }
  goto label_042f4ff0;
}


// Characters.DistractSpecial$$Deactivate
// il2cpp: void Characters_DistractSpecial__Deactivate (Characters_DistractSpecial_o* __this, const MethodInfo* method);
// 0x42f4ec0

void Characters_DistractSpecial__Deactivate(Characters_DistractSpecial_o *__this,MethodInfo *method)

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
  Characters_BasicTitan_o *pCVar13;
  Characters_BasicTitan_o *__this_04;
  float local_88;
  float fStack_84;
  _union_332950 local_68 [5];
  undefined1 local_40 [16];
  Characters_BasicTitan_o *local_30;
  
  if (g_data_057adedd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasicTitan_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BasicTitan_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057adedd = '\x01';
  }
  pSVar11 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIVar12 = (Il2CppMethodPointer)0x0;
  pCVar13 = (Characters_BasicTitan_o *)0x0;
  pCVar2 = (__this->fields)._human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    if ((pCVar2->fields).FinishSetup != 8) {
      return;
    }
    plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar6 != (long *)0x0) {
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
         (*(long *)(*(long *)(*plVar6 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
          TypeInfo_InGameManager)) goto label_042f517f;
      if ((System_Collections_Generic_HashSet_object__o *)plVar6[9] !=
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,
                   (System_Collections_Generic_HashSet_object__o *)plVar6[9],MethodInfo_HashSet_1_T_Enumerator_Characters_BasicTitan_GetEnumerat);
        pSVar11 = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
        pIVar12 = (Il2CppMethodPointer)local_40._8_8_;
label_042f4ff0:
        while( true ) {
          __this_04 = local_30;
          __this_00.fields._8_8_ = pIVar12;
          __this_00.fields._set = pSVar11;
          __this_00.fields._current = (Il2CppObject *)__this_04;
          bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffff58);
          if ((char)bVar5 == '\0') {
            __this_01.fields._8_8_ = pIVar12;
            __this_01.fields._set = pSVar11;
            __this_01.fields._current = (Il2CppObject *)__this_04;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_01,(MethodInfo_3219C30 *)&stack0xffffffffffffff58);
            return;
          }
          pCVar2 = (__this->fields)._human;
          pCVar13 = __this_04;
          if (pCVar2 == (Characters_Human_o *)0x0) break;
          lVar3 = *(long *)&(pCVar2->fields).Dead;
          if (lVar3 == 0) goto label_042f5166;
          pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_042f516b;
          UVar9 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
          if (__this_04 == (Characters_BasicTitan_o *)0x0) goto label_042f5170;
          lVar3 = *(long *)&(__this_04->fields).Dead;
          if (lVar3 == 0) {
            il2cpp_runtime_helper_022b2c90();
            break;
          }
          pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_042f5175;
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
          if (fVar7 < 0.0) goto label_042f5110;
          local_30 = pCVar13;
          if (SQRT(fVar7) < (__this->fields).Range) goto label_042f5125;
        }
        il2cpp_runtime_helper_022b2c90();
label_042f5166:
        il2cpp_runtime_helper_022b2c90();
label_042f516b:
        il2cpp_runtime_helper_022b2c90();
label_042f5170:
        il2cpp_runtime_helper_022b2c90();
label_042f5175:
        il2cpp_runtime_helper_022b2c90();
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_042f517f:
  auVar8 = il2cpp_runtime_helper_022b2fd0();
  if (auVar8._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar3 = *plVar6;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar12;
    __this_02.fields._set = pSVar11;
    __this_02.fields._current = (Il2CppObject *)pCVar13;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff58);
    if (lVar3 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_03.fields._8_8_ = pIVar12;
  __this_03.fields._set = pSVar11;
  __this_03.fields._current = (Il2CppObject *)pCVar13;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff58);
  _Unwind_Resume(auVar8._0_8_);
label_042f5110:
  fVar7 = sqrtf(fVar7);
  local_30 = pCVar13;
  if (fVar7 < (__this->fields).Range) {
label_042f5125:
    Characters_BasicTitan__Distract
              (__this_04,(Characters_BaseCharacter_o *)(__this->fields)._human,(MethodInfo *)0x0);
    local_30 = pCVar13;
  }
  goto label_042f4ff0;
}


