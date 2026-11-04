// Type: Controllers.HumanAIState
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/HumanAIState.cs
// Prior real C# source: none
// --------------------------------

// Controllers.HumanAIState$$get_Name
// il2cpp: System_String_o* Controllers_HumanAIState__get_Name (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x182117a20

System_String_o * Controllers_HumanAIState__get_Name(Controllers_HumanAIState_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346ad4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346ad4 = '\x01';
  }
  return "";
}


// Controllers.HumanAIState$$Init
// il2cpp: Controllers_HumanAIState_o* Controllers_HumanAIState__Init (Controllers_HumanAIState_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x182117930

Controllers_HumanAIState_o *
Controllers_HumanAIState__Init
          (Controllers_HumanAIState_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  byte bVar1;
  Controllers_HumanAIController_o *value;
  
  if (Il2CppMethodInitialized_184346ad5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanAIController);
    Il2CppMethodInitialized_184346ad5 = '\x01';
  }
  (__this->fields).Human = human;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Human,human);
  if (human == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = (Controllers_HumanAIController_o *)(human->fields).Controller;
  if (value == (Controllers_HumanAIController_o *)0x0) {
    (__this->fields).Controller = (Controllers_HumanAIController_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_Controllers_HumanAIController->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Controllers_HumanAIController)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    (__this->fields).Controller = value;
    bVar1 = (TypeInfo_Controllers_HumanAIController->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Controllers_HumanAIController)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields).Controller,value);
  return __this;
}


// Controllers.HumanAIState$$OnStateEntry
// il2cpp: void Controllers_HumanAIState__OnStateEntry (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x180547020

void
Controllers_HumanAIState__OnStateEntry(Controllers_HumanAIState_o* __this, MethodInfo* method)

{
  return;
}


// Controllers.HumanAIState$$Action
// il2cpp: void Controllers_HumanAIState__Action (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x180547020

void
Controllers_HumanAIState__Action(Controllers_HumanAIState_o* __this, MethodInfo* method)

{
  return;
}


// Controllers.HumanAIState$$OnStateExit
// il2cpp: void Controllers_HumanAIState__OnStateExit (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x180547020

void
Controllers_HumanAIState__OnStateExit(Controllers_HumanAIState_o* __this, MethodInfo* method)

{
  return;
}


// Controllers.HumanAIState$$.ctor
// il2cpp: void Controllers_HumanAIState___ctor (Controllers_HumanAIState_o* __this, const MethodInfo* method);
// 0x18054c890

void
Controllers_HumanAIState___ctor(Controllers_HumanAIState_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


