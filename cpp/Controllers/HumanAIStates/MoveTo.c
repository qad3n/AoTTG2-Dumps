// Type: Controllers.HumanAIStates.MoveTo
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers.HumanAIStates/MoveTo.cs
// Prior real C# source: none
// --------------------------------

// Controllers.HumanAIStates.MoveTo$$get_Name
// il2cpp: System_String_o* Controllers_HumanAIStates_MoveTo__get_Name (Controllers_HumanAIStates_MoveTo_o* __this, const MethodInfo* method);
// 0x18211cf40

System_String_o *
Controllers_HumanAIStates_MoveTo__get_Name(Controllers_HumanAIStates_MoveTo_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346af0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTo");
    Il2CppMethodInitialized_184346af0 = '\x01';
  }
  return "MoveTo";
}


// Controllers.HumanAIStates.MoveTo$$Action
// il2cpp: void Controllers_HumanAIStates_MoveTo__Action (Controllers_HumanAIStates_MoveTo_o* __this, const MethodInfo* method);
// 0x18211cd80

void Controllers_HumanAIStates_MoveTo__Action(Controllers_HumanAIStates_MoveTo_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Characters_Human_o *pCVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *__this_00;
  Controllers_HumanAIController_o *pCVar6;
  UnityEngine_Vector3_o *pUVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o local_78 [9];
  
  pCVar4 = (__this->fields).Human;
  if (((pCVar4 != (Characters_Human_o *)0x0) &&
      (pUVar5 = (pCVar4->fields).Cache, pUVar5 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar5->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar7 = UnityEngine_Transform__get_position(local_78,__this_00,(MethodInfo *)0x0);
    pCVar6 = (__this->fields).Controller;
    if (pCVar6 != (Controllers_HumanAIController_o *)0x0) {
      fVar9 = (pUVar7->fields).y;
      fVar10 = (pUVar7->fields).x;
      fVar11 = (pUVar7->fields).z;
      fVar1 = (pCVar6->fields)._targetPosition.fields.x;
      fVar2 = (pCVar6->fields)._targetPosition.fields.y;
      fVar3 = (pCVar6->fields)._targetPosition.fields.z;
      if (Il2CppMethodInitialized_18433dee7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_18433dee7 = '\x01';
      }
      fVar10 = fVar10 - fVar1;
      fVar9 = fVar9 - fVar2;
      fVar11 = fVar11 - fVar3;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar8 = (double)(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
      if (dVar8 < 0.0) {
        dVar8 = sqrt(dVar8);
      }
      else {
        dVar8 = SQRT(dVar8);
      }
      if ((__this->fields).Controller != (Controllers_HumanAIController_o *)0x0) {
        pCVar6 = (__this->fields).Controller;
        if ((__this->fields).MoveToRange < (float)dVar8) {
          Controllers_HumanAIController__MoveToPosition(pCVar6,(MethodInfo *)0x0);
          return;
        }
        Controllers_HumanAIController__CompleteMove(pCVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIStates.MoveTo$$OnStateExit
// il2cpp: void Controllers_HumanAIStates_MoveTo__OnStateExit (Controllers_HumanAIStates_MoveTo_o* __this, const MethodInfo* method);
// 0x18211cf00

void Controllers_HumanAIStates_MoveTo__OnStateExit
               (Controllers_HumanAIStates_MoveTo_o *__this,MethodInfo *method)

{
  Controllers_HumanAIController_o *pCVar1;
  Controllers_HumanAICallback_o *pCVar2;
  
  pCVar1 = (__this->fields).Controller;
  if ((pCVar1 != (Controllers_HumanAIController_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Callbacks, pCVar2 != (Controllers_HumanAICallback_o *)0x0)) {
    (pCVar2->fields).MoveToCallback = (System_Action_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pCVar2->fields).MoveToCallback,(void *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanAIStates.MoveTo$$.ctor
// il2cpp: void Controllers_HumanAIStates_MoveTo___ctor (Controllers_HumanAIStates_MoveTo_o* __this, const MethodInfo* method);
// 0x18054c890

void
Controllers_HumanAIStates_MoveTo___ctor(Controllers_HumanAIStates_MoveTo_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


