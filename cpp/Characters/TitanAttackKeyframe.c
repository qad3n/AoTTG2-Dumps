// Type: Characters.TitanAttackKeyframe
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/TitanAttackKeyframe.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/TitanAttackKeyframe.cs
// --------------------------------

// Characters.TitanAttackKeyframe$$.ctor
// il2cpp: void Characters_TitanAttackKeyframe___ctor (Characters_TitanAttackKeyframe_o* __this, SimpleJSONFixed_JSONNode_o* data, const MethodInfo* method);
// 0x5c62410

void Characters_TitanAttackKeyframe___ctor
               (Characters_TitanAttackKeyframe_o *__this,SimpleJSONFixed_JSONNode_o *data,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_0754789f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"x");
    il2cpp_codegen_initialize_runtime_metadata(&"f");
    il2cpp_codegen_initialize_runtime_metadata(&"y");
    il2cpp_codegen_initialize_runtime_metadata(&"z");
    il2cpp_codegen_initialize_runtime_metadata(&"r");
    Il2CppMethodInitialized_0754789f = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (data != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                       (data,"f",(data->klass->vtable)._7_get_Item.method);
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      iVar1 = (*(pSVar2->klass->vtable)._35_get_AsInt.methodPtr)
                        (pSVar2,(pSVar2->klass->vtable)._35_get_AsInt.method);
      (__this->fields).Frame = iVar1;
      pSVar2 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"x",(data->klass->vtable)._7_get_Item.method);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        fVar3 = (*(pSVar2->klass->vtable)._37_get_AsFloat.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable)._37_get_AsFloat.method);
        pSVar2 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                           (data,"y",(data->klass->vtable)._7_get_Item.method);
        if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          fVar4 = (*(pSVar2->klass->vtable)._37_get_AsFloat.methodPtr)
                            (pSVar2,(pSVar2->klass->vtable)._37_get_AsFloat.method);
          pSVar2 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                             (data,"z",(data->klass->vtable)._7_get_Item.method);
          if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            fVar5 = (*(pSVar2->klass->vtable)._37_get_AsFloat.methodPtr)
                              (pSVar2,(pSVar2->klass->vtable)._37_get_AsFloat.method);
            (__this->fields)._localPosition.fields.x = fVar3;
            (__this->fields)._localPosition.fields.y = fVar4;
            (__this->fields)._localPosition.fields.z = fVar5;
            pSVar2 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                               (data,"r",(data->klass->vtable)._7_get_Item.method);
            if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              fVar3 = (*(pSVar2->klass->vtable)._37_get_AsFloat.methodPtr)
                                (pSVar2,(pSVar2->klass->vtable)._37_get_AsFloat.method);
              (__this->fields)._radius = fVar3;
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanAttackKeyframe$$CheckCollision
// il2cpp: bool Characters_TitanAttackKeyframe__CheckCollision (Characters_TitanAttackKeyframe_o* __this, UnityEngine_Transform_o* titan, UnityEngine_Vector3_o position, UnityEngine_Vector3_o velocity, float attackSpeed, float size, const MethodInfo* method);
// 0x5c62840

bool Characters_TitanAttackKeyframe__CheckCollision
               (Characters_TitanAttackKeyframe_o *__this,UnityEngine_Transform_o *titan,
               UnityEngine_Vector3_o position,UnityEngine_Vector3_o velocity,float attackSpeed,float size,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  float local_18;
  float fStack_14;
  
  if (titan == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar3 = UnityEngine_Transform__TransformPoint
                    (titan,(UnityEngine_Vector3_o)(__this->fields)._localPosition.fields,(MethodInfo *)0x0);
  fVar1 = size * (__this->fields)._radius;
  local_18 = position.fields.x;
  fStack_14 = position.fields.y;
  fStack_14 = fStack_14 - UVar3.fields.y;
  fVar2 = position.fields.z - UVar3.fields.z;
  local_18 = local_18 - UVar3.fields.x;
  return fStack_14 * fStack_14 + local_18 * local_18 + fVar2 * fVar2 <= fVar1 * fVar1;
}


