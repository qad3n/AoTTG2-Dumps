// Type: Controllers.HumanAIState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/HumanAIState.cs
// Prior real C# source: none
// --------------------------------

// Controllers.HumanAIState$$get_Name
// il2cpp: System_String_o* Controllers_HumanAIState__get_Name (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x4297440

System_String_o * Controllers_HumanAIState__get_Name(Controllers_HumanAIState_o *__this,MethodInfo *method)

{
  if (g_data_057adcff == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcff = '\x01';
  }
  return "";
}


// Controllers.HumanAIState$$Init
// il2cpp: Controllers_HumanAIState_o* Controllers_HumanAIState__Init (Controllers_HumanAIState_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x4297470

Controllers_HumanAIState_o *
Controllers_HumanAIState__Init
          (Controllers_HumanAIState_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  byte bVar1;
  Controllers_HumanAIController_o *pCVar2;
  Il2CppClass *pIVar3;
  Controllers_HumanAIState_o *pCVar4;
  MethodInfo *extraout_RDX;
  
  if (g_data_057add00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAIController);
    g_data_057add00 = '\x01';
    method = extraout_RDX;
  }
  (__this->fields).Human = human;
  il2cpp_runtime_helper_022b4080(&__this->fields,human,method);
  pIVar3 = TypeInfo_HumanAIController;
  if (human != (Characters_Human_o *)0x0) {
    pCVar2 = (Controllers_HumanAIController_o *)(human->fields).WalkAnimation;
    if (pCVar2 == (Controllers_HumanAIController_o *)0x0) {
      (__this->fields).Controller = (Controllers_HumanAIController_o *)0x0;
label_04297514:
      il2cpp_runtime_helper_022b4080(&(__this->fields).Controller);
      return __this;
    }
    bVar1 = (TypeInfo_HumanAIController->_2).naturalAligment;
    if ((bVar1 <= (((System_String_c *)pCVar2->klass)->_2).naturalAligment) &&
       ((((System_String_c *)pCVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_HumanAIController)) {
      (__this->fields).Controller = pCVar2;
      if ((bVar1 <= (((System_String_c *)pCVar2->klass)->_2).naturalAligment) &&
         ((((System_String_c *)pCVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3))
      goto label_04297514;
    }
    il2cpp_runtime_helper_022b2fd0(pCVar2,pIVar3);
  }
  pCVar4 = (Controllers_HumanAIState_o *)il2cpp_runtime_helper_022b2c90();
  return pCVar4;
}


// Controllers.HumanAIState$$OnStateEntry
// il2cpp: void Controllers_HumanAIState__OnStateEntry (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x4297540

void Controllers_HumanAIState__OnStateEntry(Controllers_HumanAIState_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.HumanAIState$$Action
// il2cpp: void Controllers_HumanAIState__Action (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x4297550

void Controllers_HumanAIState__Action(Controllers_HumanAIState_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.HumanAIState$$OnStateExit
// il2cpp: void Controllers_HumanAIState__OnStateExit (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x4297560

void Controllers_HumanAIState__OnStateExit(Controllers_HumanAIState_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.HumanAIState$$.ctor
// il2cpp: void Controllers_HumanAIState___ctor (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x4297570

void Controllers_HumanAIState___ctor(Controllers_HumanAIState_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


