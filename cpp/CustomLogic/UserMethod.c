// Type: CustomLogic.UserMethod
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/UserMethod.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.UserMethod$$.ctor
// il2cpp: void CustomLogic_UserMethod___ctor (CustomLogic_UserMethod_o* __this, CustomLogic_CustomLogicClassInstance_o* owner, CustomLogic_CustomLogicMethodDefinitionAst_o* ast, const MethodInfo* method);
// 0x3db3570

void CustomLogic_UserMethod___ctor
               (CustomLogic_UserMethod_o *__this,CustomLogic_CustomLogicClassInstance_o *owner,
               CustomLogic_CustomLogicMethodDefinitionAst_o *ast,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Owner = owner;
  il2cpp_runtime_glue(&__this->fields,owner);
  (__this->fields).Ast = ast;
  il2cpp_runtime_glue(&(__this->fields).Ast,ast);
  return;
}


// CustomLogic.UserMethod$$Call
// il2cpp: Il2CppObject* CustomLogic_UserMethod__Call (CustomLogic_UserMethod_o* __this, System_Object_array* parameterValues, const MethodInfo* method);
// 0x3db35b0

Il2CppObject *
CustomLogic_UserMethod__Call
          (CustomLogic_UserMethod_o *__this,System_Object_array *parameterValues,MethodInfo *method)

{
  Il2CppObject *in_RAX;
  
  return in_RAX;
}


// CustomLogic.UserMethod$$Call
// il2cpp: Il2CppObject* CustomLogic_UserMethod__Call (CustomLogic_UserMethod_o* __this, CustomLogic_CustomLogicEvaluator_o* evaluator, System_Object_array* parameterValues, const MethodInfo* method);
// 0x3db35c0

Il2CppObject *
CustomLogic_UserMethod__Call
          (CustomLogic_UserMethod_o *__this,CustomLogic_CustomLogicEvaluator_o *evaluator,
          System_Object_array *parameterValues,MethodInfo *method)

{
  Il2CppObject *in_RAX;
  
  return in_RAX;
}


