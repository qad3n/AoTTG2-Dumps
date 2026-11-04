// Type: Gisketch.Aottg2UI.Building.GisketchMotionTarget
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchMotionTarget.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchMotionTarget$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchMotionTarget___ctor (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o __this, UnityEngine_GameObject_o* gameObject, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* exit, const MethodInfo* method);
// 0x181903200

void Gisketch_Aottg2UI_Building_GisketchMotionTarget___ctor
               (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o *__this,UnityEngine_GameObject_o *gameObject
               ,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *exit,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  bool bVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_CanvasGroup_o *__this_01;
  float fVar4;
  undefined8 uVar5;
  UnityEngine_Vector3_o local_38 [2];
  
  if (Il2CppMethodInitialized_1843421ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421ca = '\x01';
  }
  (__this->fields).GameObject = gameObject;
  Il2CppCodeGenWriteBarrier((void **)__this,gameObject);
  (__this->fields).Enter = enter;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Enter,enter);
  (__this->fields).Exit = exit;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Exit,exit);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)gameObject,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (gameObject == (UnityEngine_GameObject_o *)0x0) goto label_18190339a;
    __this_00 = UnityEngine_GameObject__get_transform(gameObject,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_18190339a;
    pUVar3 = UnityEngine_Transform__get_localScale(local_38,__this_00,(MethodInfo *)0x0);
    uVar5._0_4_ = (pUVar3->fields).x;
    uVar5._4_4_ = (pUVar3->fields).y;
    fVar4 = (pUVar3->fields).z;
  }
  else {
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar5._0_4_ = (pUVar1->oneVector).fields.x;
    uVar5._4_4_ = (pUVar1->oneVector).fields.y;
    fVar4 = (pUVar1->oneVector).fields.z;
  }
  (__this->fields).RestScale.fields.x = (float)(int)uVar5;
  (__this->fields).RestScale.fields.y = (float)(int)((ulonglong)uVar5 >> 0x20);
  (__this->fields).RestScale.fields.z = fVar4;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)gameObject,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (gameObject == (UnityEngine_GameObject_o *)0x0) goto label_18190339a;
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (gameObject,
                           (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
  }
  else {
    __this_01 = (UnityEngine_CanvasGroup_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    (__this->fields).RestAlpha = 1.0;
    return;
  }
  if (__this_01 != (UnityEngine_CanvasGroup_o *)0x0) {
    fVar4 = UnityEngine_CanvasGroup__get_alpha(__this_01,(MethodInfo *)0x0);
    (__this->fields).RestAlpha = fVar4;
    return;
  }
label_18190339a:
  ThrowNullReferenceException();
}


