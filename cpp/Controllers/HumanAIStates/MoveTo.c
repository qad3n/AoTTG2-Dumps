// Type: Controllers.HumanAIStates.MoveTo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Controllers.HumanAIStates/MoveTo.cs
// Prior source: NEW in this update
// --------------------------------

// Controllers.HumanAIStates.MoveTo$$get_Name
// il2cpp: System_String_o* Controllers_HumanAIStates_MoveTo__get_Name (Controllers_HumanAIStates_MoveTo_o* __this, const MethodInfo* method);
// 0x3f90b00

System_String_o *
Controllers_HumanAIStates_MoveTo__get_Name
          (Controllers_HumanAIStates_MoveTo_o *__this,MethodInfo *method)

{
  if (DAT_05703fac == '\0') {
    il2cpp_init_method_metadata(&"MoveTo");
    DAT_05703fac = '\x01';
  }
  return "MoveTo";
}


// Controllers.HumanAIStates.MoveTo$$Action
// il2cpp: void Controllers_HumanAIStates_MoveTo__Action (Controllers_HumanAIStates_MoveTo_o* __this, const MethodInfo* method);
// 0x3f90b30

void Controllers_HumanAIStates_MoveTo__Action
               (Controllers_HumanAIStates_MoveTo_o *__this,MethodInfo *method)

{
  Characters_ITargetable_o *pCVar1;
  Characters_Human_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *__this_00;
  Controllers_HumanAIState_o *pCVar4;
  void *pvVar5;
  Controllers_HumanAIController_o *pCVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  
  pCVar2 = (__this->fields).Human;
  if (((pCVar2 != (Characters_Human_o *)0x0) &&
      (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
     (__this_00 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UVar10 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    pCVar6 = (__this->fields).Controller;
    if (pCVar6 != (Controllers_HumanAIController_o *)0x0) {
      pCVar1 = (pCVar6->fields)._target;
      fVar8 = (pCVar6->fields).TargetPosition.fields.x;
      if (DAT_056fdea6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdea6 = '\x01';
      }
      fVar9 = UVar10.fields.x - SUB84(pCVar1,0);
      fVar7 = UVar10.fields.y - (float)((ulong)pCVar1 >> 0x20);
      fVar8 = UVar10.fields.z - fVar8;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar8 = fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9;
      if (fVar8 < 0.0) {
        fVar8 = sqrtf(fVar8);
        pCVar6 = (__this->fields).Controller;
      }
      else {
        fVar8 = SQRT(fVar8);
        pCVar6 = (__this->fields).Controller;
      }
      if (pCVar6 != (Controllers_HumanAIController_o *)0x0) {
        if ((__this->fields).MoveToRange < fVar8) {
          Controllers_HumanAIController__MoveToPosition(pCVar6,(MethodInfo *)0x0);
          return;
        }
        pCVar4 = (pCVar6->fields).AIState;
        if (pCVar4 != (Controllers_HumanAIState_o *)0x0) {
          pvVar5 = pCVar4[1].monitor;
          if (pvVar5 != (void *)0x0) {
            (**(code **)((long)pvVar5 + 0x18))(*(undefined8 *)((long)pvVar5 + 0x40));
            pCVar6 = (__this->fields).Controller;
            if (pCVar6 == (Controllers_HumanAIController_o *)0x0) goto LAB_03f90ca8;
          }
          Controllers_HumanAIController__Idle(pCVar6,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03f90ca8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIStates.MoveTo$$OnStateExit
// il2cpp: void Controllers_HumanAIStates_MoveTo__OnStateExit (Controllers_HumanAIStates_MoveTo_o* __this, const MethodInfo* method);
// 0x3f90cb0

void Controllers_HumanAIStates_MoveTo__OnStateExit
               (Controllers_HumanAIStates_MoveTo_o *__this,MethodInfo *method)

{
  Controllers_HumanAIController_o *pCVar1;
  Controllers_HumanAIState_o *pCVar2;
  
  pCVar1 = (__this->fields).Controller;
  if ((pCVar1 != (Controllers_HumanAIController_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).AIState, pCVar2 != (Controllers_HumanAIState_o *)0x0)) {
    pCVar2[1].monitor = (void *)0x0;
    il2cpp_runtime_glue(&pCVar2[1].monitor,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanAIStates.MoveTo$$.ctor
// il2cpp: void Controllers_HumanAIStates_MoveTo___ctor (Controllers_HumanAIStates_MoveTo_o* __this, const MethodInfo* method);
// 0x3f90ce0

void Controllers_HumanAIStates_MoveTo___ctor
               (Controllers_HumanAIStates_MoveTo_o *__this,MethodInfo *method)

{
  Controllers_HumanAIState___ctor((Controllers_HumanAIState_o *)__this,(MethodInfo *)0x0);
  return;
}


