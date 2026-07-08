// Type: Characters.TitanAttackKeyframe
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/TitanAttackKeyframe.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Controllers/TitanAttackKeyframe.cs  [CHANGED since prior version]
// --------------------------------

// Characters.TitanAttackKeyframe$$.ctor
// il2cpp: void Characters_TitanAttackKeyframe___ctor (Characters_TitanAttackKeyframe_o* __this, SimpleJSONFixed_JSONNode_o* data, const MethodInfo* method);
// 0x4016630

void Characters_TitanAttackKeyframe___ctor
               (Characters_TitanAttackKeyframe_o *__this,SimpleJSONFixed_JSONNode_o *data,
               MethodInfo *method)

{
  int32_t iVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (DAT_0570429e == '\0') {
    il2cpp_init_method_metadata(&"x");
    il2cpp_init_method_metadata(&"f");
    il2cpp_init_method_metadata(&"y");
    il2cpp_init_method_metadata(&"z");
    il2cpp_init_method_metadata(&"r");
    DAT_0570429e = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (data != (SimpleJSONFixed_JSONNode_o *)0x0) {
    plVar2 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                               (data,"f",(data->klass->vtable)._7_get_Item.method);
    if (plVar2 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar2 + 0x368))(plVar2,*(undefined8 *)(*plVar2 + 0x370));
      (__this->fields).Frame = iVar1;
      plVar2 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"x",(data->klass->vtable)._7_get_Item.method);
      if (plVar2 != (long *)0x0) {
        fVar3 = (float)(**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390));
        plVar2 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                   (data,"y",(data->klass->vtable)._7_get_Item.method);
        if (plVar2 != (long *)0x0) {
          fVar4 = (float)(**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390));
          plVar2 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                     (data,"z",(data->klass->vtable)._7_get_Item.method);
          if (plVar2 != (long *)0x0) {
            fVar5 = (float)(**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390));
            (__this->fields)._localPosition.fields.x = fVar3;
            (__this->fields)._localPosition.fields.y = fVar4;
            (__this->fields)._localPosition.fields.z = fVar5;
            plVar2 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                       (data,"r",(data->klass->vtable)._7_get_Item.method);
            if (plVar2 != (long *)0x0) {
              fVar3 = (float)(**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390))
              ;
              (__this->fields)._radius = fVar3;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.TitanAttackKeyframe$$CheckCollision
// il2cpp: bool Characters_TitanAttackKeyframe__CheckCollision (Characters_TitanAttackKeyframe_o* __this, UnityEngine_Transform_o* titan, UnityEngine_Vector3_o position, UnityEngine_Vector3_o velocity, float attackSpeed, float size, const MethodInfo* method);
// 0x4016aa0

bool_conflict
Characters_TitanAttackKeyframe__CheckCollision
          (Characters_TitanAttackKeyframe_o *__this,UnityEngine_Transform_o *titan,
          UnityEngine_Vector3_o position,UnityEngine_Vector3_o velocity,float attackSpeed,float size
          ,MethodInfo *method)

{
  undefined4 extraout_EAX;
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  float fStack_24;
  
  if (titan != (UnityEngine_Transform_o *)0x0) {
    UVar4 = UnityEngine_Transform__TransformPoint
                      (titan,(__this->fields)._localPosition.fields,(MethodInfo *)0x0);
    fVar1 = size * (__this->fields)._radius;
    fStack_24 = position.fields.y;
    fStack_24 = fStack_24 - UVar4.fields.y;
    fVar2 = position.fields.z - UVar4.fields.z;
    fVar3 = position.fields.x - UVar4.fields.x;
    return CONCAT31((int3)((uint)extraout_EAX >> 8),
                    fVar3 * fVar3 + fStack_24 * fStack_24 + fVar2 * fVar2 <= fVar1 * fVar1);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(position.fields.x,position.fields.z,velocity.fields._0_8_,velocity.fields.z);
}


