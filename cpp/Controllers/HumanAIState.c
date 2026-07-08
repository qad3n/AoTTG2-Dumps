// Type: Controllers.HumanAIState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Controllers/HumanAIState.cs
// Prior source: NEW in this update
// --------------------------------

// Controllers.HumanAIState$$get_Name
// il2cpp: System_String_o* Controllers_HumanAIState__get_Name (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x3f8aea0

System_String_o *
Controllers_HumanAIState__get_Name(Controllers_HumanAIState_o *__this,MethodInfo *method)

{
  if (DAT_05703f91 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05703f91 = '\x01';
  }
  return "";
}


// Controllers.HumanAIState$$Init
// il2cpp: Controllers_HumanAIState_o* Controllers_HumanAIState__Init (Controllers_HumanAIState_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x3f8aed0

Controllers_HumanAIState_o *
Controllers_HumanAIState__Init
          (Controllers_HumanAIState_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  byte bVar1;
  Controllers_HumanAIController_o *pCVar2;
  Il2CppClass *pIVar3;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703f92 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAIController);
    DAT_05703f92 = '\x01';
    method = extraout_RDX;
  }
  (__this->fields).Human = human;
  il2cpp_runtime_glue(&__this->fields,human,method);
  pIVar3 = TypeInfo_HumanAIController;
  if (human == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pCVar2 = (Controllers_HumanAIController_o *)(human->fields).WalkAnimation;
  if (pCVar2 == (Controllers_HumanAIController_o *)0x0) {
    (__this->fields).Controller = (Controllers_HumanAIController_o *)0x0;
LAB_03f8af74:
    il2cpp_runtime_glue(&(__this->fields).Controller);
    return __this;
  }
  bVar1 = (TypeInfo_HumanAIController->_2).naturalAligment;
  if ((bVar1 <= (((System_String_c *)pCVar2->klass)->_2).naturalAligment) &&
     ((((System_String_c *)pCVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_HumanAIController)) {
    (__this->fields).Controller = pCVar2;
    if ((bVar1 <= (((System_String_c *)pCVar2->klass)->_2).naturalAligment) &&
       ((((System_String_c *)pCVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3))
    goto LAB_03f8af74;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pCVar2,pIVar3);
}


// Controllers.HumanAIState$$OnStateEntry
// il2cpp: void Controllers_HumanAIState__OnStateEntry (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x3f8afa0

void Controllers_HumanAIState__OnStateEntry(Controllers_HumanAIState_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.HumanAIState$$Action
// il2cpp: void Controllers_HumanAIState__Action (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x3f8afb0

void Controllers_HumanAIState__Action(Controllers_HumanAIState_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.HumanAIState$$OnStateExit
// il2cpp: void Controllers_HumanAIState__OnStateExit (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x3f8afc0

void Controllers_HumanAIState__OnStateExit(Controllers_HumanAIState_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.HumanAIState$$.ctor
// il2cpp: void Controllers_HumanAIState___ctor (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x3f8afd0

void Controllers_HumanAIState___ctor(Controllers_HumanAIState_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


