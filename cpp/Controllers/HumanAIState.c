// Type: Controllers.HumanAIState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/HumanAIState.cs
// Prior real C# source: none
// --------------------------------

// Controllers.HumanAIState$$get_Name
// il2cpp: System_String_o* Controllers_HumanAIState__get_Name (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x5baa9a0

System_String_o * Controllers_HumanAIState__get_Name(Controllers_HumanAIState_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075474a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075474a0 = '\x01';
  }
  return "";
}


// Controllers.HumanAIState$$Init
// il2cpp: Controllers_HumanAIState_o* Controllers_HumanAIState__Init (Controllers_HumanAIState_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x5baa9d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5baaa62: lea rdi, [r14 + 0x18]
// asm:   0x5baaa66: jmp 0x5baaa74

Controllers_HumanAIState_o *
Controllers_HumanAIState__Init
          (Controllers_HumanAIState_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  byte bVar1;
  Controllers_HumanAIController_o *pCVar2;
  Controllers_HumanAIController_c *pCVar3;
  
  if (Il2CppMethodInitialized_075474a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIController);
    Il2CppMethodInitialized_075474a1 = '\x01';
  }
  (__this->fields).Human = human;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Human);
  pCVar3 = TypeInfo_Controllers_HumanAIController;
  if (human == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar2 = (Controllers_HumanAIController_o *)(human->fields).Controller;
  if (pCVar2 == (Controllers_HumanAIController_o *)0x0) {
    (__this->fields).Controller = (Controllers_HumanAIController_o *)0x0;
label_05baaa74:
    Il2CppCodeGenWriteBarrier(&(__this->fields).Controller);
    return __this;
  }
  bVar1 = (TypeInfo_Controllers_HumanAIController->_2).typeHierarchyDepth;
  if ((bVar1 <= (((Controllers_IHumanController_c *)pCVar2->klass)->_2).typeHierarchyDepth) &&
     ((((Controllers_IHumanController_c *)pCVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_Controllers_HumanAIController)) {
    (__this->fields).Controller = pCVar2;
    if ((bVar1 <= (((Controllers_IHumanController_c *)pCVar2->klass)->_2).typeHierarchyDepth) &&
       ((((Controllers_IHumanController_c *)pCVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)pCVar3)) goto label_05baaa74;
  }
  il2cpp_codegen_raise_invalid_cast_exception(pCVar2,pCVar3);
}


// Controllers.HumanAIState$$OnStateEntry
// il2cpp: void Controllers_HumanAIState__OnStateEntry (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x5baaaa0

void Controllers_HumanAIState__OnStateEntry(Controllers_HumanAIState_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.HumanAIState$$Action
// il2cpp: void Controllers_HumanAIState__Action (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x5baaab0

void Controllers_HumanAIState__Action(Controllers_HumanAIState_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.HumanAIState$$OnStateExit
// il2cpp: void Controllers_HumanAIState__OnStateExit (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x5baaac0

void Controllers_HumanAIState__OnStateExit(Controllers_HumanAIState_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.HumanAIState$$.ctor
// il2cpp: void Controllers_HumanAIState___ctor (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x5baaad0

void Controllers_HumanAIState___ctor(Controllers_HumanAIState_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


