// Type: Gisketch.Aottg2UI.Building.GisketchMotionTarget
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchMotionTarget.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchMotionTarget$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchMotionTarget___ctor (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o __this, UnityEngine_GameObject_o* gameObject, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* exit, const MethodInfo* method);
// 0x3b1d810

void Gisketch_Aottg2UI_Building_GisketchMotionTarget___ctor
               (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o __this,
               UnityEngine_GameObject_o *gameObject,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *exit,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_CanvasGroup_o *__this_01;
  float fVar2;
  UnityEngine_Vector3_Fields UVar3;
  
  if (DAT_05701566 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701566 = '\x01';
  }
  gameObject->klass = (UnityEngine_GameObject_c *)enter;
  il2cpp_runtime_glue(gameObject,enter);
  gameObject->monitor = exit;
  il2cpp_runtime_glue(&gameObject->monitor,exit);
  (gameObject->fields).m_CachedPtr = (intptr_t)method;
  il2cpp_runtime_glue(&gameObject->fields);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)enter,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (DAT_056fe077 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fe077 = '\x01';
    }
    UVar3 = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
  }
  else {
    if (enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) goto LAB_03b1d998;
    __this_00 = UnityEngine_GameObject__get_transform
                          ((UnityEngine_GameObject_o *)enter,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto LAB_03b1d998;
    UVar3 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
  }
  *(UnityEngine_Vector3_Fields *)(gameObject + 1) = UVar3;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_01 = (UnityEngine_CanvasGroup_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)enter,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) goto LAB_03b1d998;
    __this_01 = (UnityEngine_CanvasGroup_o *)
                UnityEngine_GameObject__GetComponent<object>
                          ((UnityEngine_GameObject_o *)enter,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar1 == '\0') {
    fVar2 = 1.0;
  }
  else {
    if (__this_01 == (UnityEngine_CanvasGroup_o *)0x0) {
LAB_03b1d998:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar2 = UnityEngine_CanvasGroup__get_alpha(__this_01,(MethodInfo *)0x0);
  }
  *(float *)((long)&gameObject[1].monitor + 4) = fVar2;
  return;
}


