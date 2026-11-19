// Type: Controllers.HumanAIStates.MoveTo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers.HumanAIStates/MoveTo.cs
// Prior real C# source: none
// --------------------------------

// Controllers.HumanAIStates.MoveTo$$get_Name
// il2cpp: System_String_o* Controllers_HumanAIStates_MoveTo__get_Name (Controllers_HumanAIStates_MoveTo_o* __this, const MethodInfo* method);
// 0x5bb0090

System_String_o *
Controllers_HumanAIStates_MoveTo__get_Name(Controllers_HumanAIStates_MoveTo_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075474bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTo");
    Il2CppMethodInitialized_075474bd = '\x01';
  }
  return "MoveTo";
}


// Controllers.HumanAIStates.MoveTo$$Action
// il2cpp: void Controllers_HumanAIStates_MoveTo__Action (Controllers_HumanAIStates_MoveTo_o* __this, const MethodInfo* method);
// 0x5bb00c0

void Controllers_HumanAIStates_MoveTo__Action(Controllers_HumanAIStates_MoveTo_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint32_t uVar3;
  Characters_Human_o *pCVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *__this_00;
  Controllers_HumanAICallback_o *pCVar6;
  System_Action_o *pSVar7;
  Controllers_HumanAIController_o *pCVar8;
  MethodInfo *method_00;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  
  pCVar4 = (__this->fields).Human;
  if (((pCVar4 == (Characters_Human_o *)0x0) ||
      (pUVar5 = (pCVar4->fields).Cache, pUVar5 == (Utility_BaseComponentCache_o *)0x0)) ||
     (__this_00 = (pUVar5->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) goto label_05bb0254;
  method_00 = (MethodInfo *)0x0;
  UVar12 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  pCVar8 = (__this->fields).Controller;
  if (pCVar8 == (Controllers_HumanAIController_o *)0x0) goto label_05bb0254;
  uVar1 = (pCVar8->fields)._targetPosition.fields.x;
  uVar2 = (pCVar8->fields)._targetPosition.fields.y;
  fVar10 = (pCVar8->fields)._targetPosition.fields.z;
  if (Il2CppMethodInitialized_0753e7b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7b7 = '\x01';
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar9 = UVar12.fields.y - (float)uVar2;
  fVar10 = UVar12.fields.z - fVar10;
  fVar11 = UVar12.fields.x - (float)uVar1;
  fVar10 = fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10;
  if (fVar10 < 0.0) {
    fVar10 = sqrtf(fVar10);
    pCVar8 = (__this->fields).Controller;
    if ((__this->fields).MoveToRange < fVar10) goto label_05bb01be;
  }
  else {
    pCVar8 = (__this->fields).Controller;
    if ((__this->fields).MoveToRange < SQRT(fVar10)) {
label_05bb01be:
      if (pCVar8 != (Controllers_HumanAIController_o *)0x0) {
        Controllers_HumanAIController__MoveToPosition(pCVar8,method_00);
        return;
      }
      goto label_05bb0254;
    }
  }
  if ((pCVar8 != (Controllers_HumanAIController_o *)0x0) &&
     (pCVar6 = (pCVar8->fields).Callbacks, pCVar6 != (Controllers_HumanAICallback_o *)0x0)) {
    pSVar7 = (pCVar6->fields).MoveToCallback;
    if (pSVar7 != (System_Action_o *)0x0) {
      method_00 = (MethodInfo *)(pSVar7->fields).method;
      (*(code *)(pSVar7->fields).invoke_impl)((pSVar7->fields).method_code);
    }
    Controllers_HumanAIController__Idle(pCVar8,method_00);
    return;
  }
label_05bb0254:
  ThrowNullReferenceException();
}


// Controllers.HumanAIStates.MoveTo$$OnStateExit
// il2cpp: void Controllers_HumanAIStates_MoveTo__OnStateExit (Controllers_HumanAIStates_MoveTo_o* __this, const MethodInfo* method);
// 0x5bb0260

void Controllers_HumanAIStates_MoveTo__OnStateExit
               (Controllers_HumanAIStates_MoveTo_o *__this,MethodInfo *method)

{
  Controllers_HumanAIController_o *pCVar1;
  Controllers_HumanAICallback_o *pCVar2;
  
  pCVar1 = (__this->fields).Controller;
  if ((pCVar1 == (Controllers_HumanAIController_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).Callbacks, pCVar2 == (Controllers_HumanAICallback_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pCVar2->fields).MoveToCallback = (System_Action_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(pCVar2->fields).MoveToCallback);
  return;
}


// Controllers.HumanAIStates.MoveTo$$.ctor
// il2cpp: void Controllers_HumanAIStates_MoveTo___ctor (Controllers_HumanAIStates_MoveTo_o* __this, const MethodInfo* method);
// 0x5ba7720

void Controllers_HumanAIStates_MoveTo___ctor(Controllers_HumanAIStates_MoveTo_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


