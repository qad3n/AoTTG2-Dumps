// Type: Characters.TitanAttackKeyframe
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/TitanAttackKeyframe.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/TitanAttackKeyframe.cs
// --------------------------------

// Characters.TitanAttackKeyframe$$.ctor
// il2cpp: void Characters_TitanAttackKeyframe___ctor (Characters_TitanAttackKeyframe_o* __this, SimpleJSONFixed_JSONNode_o* data, const MethodInfo* method);
// 0x1821cce90

void Characters_TitanAttackKeyframe___ctor
               (Characters_TitanAttackKeyframe_o *__this,SimpleJSONFixed_JSONNode_o *data,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184346ead == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"x");
    il2cpp_codegen_initialize_runtime_metadata(&"f");
    il2cpp_codegen_initialize_runtime_metadata(&"y");
    il2cpp_codegen_initialize_runtime_metadata(&"z");
    il2cpp_codegen_initialize_runtime_metadata(&"r");
    Il2CppMethodInitialized_184346ead = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (data != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"f");
    if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      iVar1 = (*(code *)((Il2CppClass *)pSVar2->klass)->vtable[35].methodPtr)
                        (pSVar2,((Il2CppClass *)pSVar2->klass)->vtable[35].method);
      (__this->fields).Frame = iVar1;
      pSVar2 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"x");
      if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        fVar3 = (float)(*(code *)((Il2CppClass *)pSVar2->klass)->vtable[37].methodPtr)
                                 (pSVar2,((Il2CppClass *)pSVar2->klass)->vtable[37].method);
        pSVar2 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"y");
        if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
          fVar4 = (float)(*(code *)((Il2CppClass *)pSVar2->klass)->vtable[37].methodPtr)
                                   (pSVar2,((Il2CppClass *)pSVar2->klass)->vtable[37].method);
          pSVar2 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"z");
          if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
            fVar5 = (float)(*(code *)((Il2CppClass *)pSVar2->klass)->vtable[37].methodPtr)
                                     (pSVar2,((Il2CppClass *)pSVar2->klass)->vtable[37].method);
            (__this->fields)._localPosition.fields.x = fVar3;
            (__this->fields)._localPosition.fields.z = fVar5;
            (__this->fields)._localPosition.fields.y = fVar4;
            pSVar2 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"r");
            if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
              fVar3 = (float)(*(code *)((Il2CppClass *)pSVar2->klass)->vtable[37].methodPtr)
                                       (pSVar2,((Il2CppClass *)pSVar2->klass)->vtable[37].method);
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
// 0x1821ccde0

bool Characters_TitanAttackKeyframe__CheckCollision
               (Characters_TitanAttackKeyframe_o *__this,UnityEngine_Transform_o *titan,
               UnityEngine_Vector3_o *position,UnityEngine_Vector3_o *velocity,float attackSpeed,float size,
               MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if (titan != (UnityEngine_Transform_o *)0x0) {
    local_38.x = (__this->fields)._localPosition.fields.x;
    local_38.y = (__this->fields)._localPosition.fields.y;
    local_38.z = (__this->fields)._localPosition.fields.z;
    pUVar1 = UnityEngine_Transform__TransformPoint
                       (local_28,titan,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
    fVar5 = (position->fields).y - (pUVar1->fields).y;
    fVar2 = (position->fields).z - (pUVar1->fields).z;
    fVar4 = (position->fields).x - (pUVar1->fields).x;
    fVar3 = (float)il2cpp_runtime_helper_1804f6b50(size * (__this->fields)._radius,0x40000000);
    return fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2 <= fVar3;
  }
  ThrowNullReferenceException();
}


