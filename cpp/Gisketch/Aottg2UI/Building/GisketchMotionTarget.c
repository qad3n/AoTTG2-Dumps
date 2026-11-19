// Type: Gisketch.Aottg2UI.Building.GisketchMotionTarget
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchMotionTarget.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchMotionTarget$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchMotionTarget___ctor (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o __this, UnityEngine_GameObject_o* gameObject, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* exit, const MethodInfo* method);
// 0x5393c50

void Gisketch_Aottg2UI_Building_GisketchMotionTarget___ctor
               (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o *__this,UnityEngine_GameObject_o *gameObject
               ,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *exit,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_CanvasGroup_o *__this_01;
  float fVar2;
  UnityEngine_Vector3_Fields UVar3;
  
  if (Il2CppMethodInitialized_07542b49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b49 = '\x01';
  }
  (__this->fields).GameObject = gameObject;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).Enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Enter);
  (__this->fields).Exit = exit;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Exit);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)gameObject,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (gameObject == (UnityEngine_GameObject_o *)0x0) goto label_05393dd8;
    __this_00 = UnityEngine_GameObject__get_transform(gameObject,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_05393dd8;
    UVar3 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
  }
  else {
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
    }
    UVar3 = (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields;
  }
  (__this->fields).RestScale.fields = UVar3;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_01 = (UnityEngine_CanvasGroup_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)gameObject,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (gameObject == (UnityEngine_GameObject_o *)0x0) goto label_05393dd8;
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (gameObject,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_01 == (UnityEngine_CanvasGroup_o *)0x0) {
label_05393dd8:
      ThrowNullReferenceException();
    }
    fVar2 = UnityEngine_CanvasGroup__get_alpha(__this_01,(MethodInfo *)0x0);
  }
  else {
    fVar2 = 1.0;
  }
  (__this->fields).RestAlpha = fVar2;
  return;
}


