// Type: ParentFollow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ParentFollow.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Setup/ParentFollow.cs  [CHANGED since prior version]
// --------------------------------

// ParentFollow$$Awake
// il2cpp: void ParentFollow__Awake (ParentFollow_o* __this, const MethodInfo* method);
// 0x3d660c0

void ParentFollow__Awake(ParentFollow_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  (__this->fields).bTransform = pUVar1;
  il2cpp_runtime_glue(&(__this->fields).bTransform,pUVar1);
  *(undefined1 *)&(__this->fields).isActiveInScene = 1;
  return;
}


// ParentFollow$$RemoveParent
// il2cpp: void ParentFollow__RemoveParent (ParentFollow_o* __this, const MethodInfo* method);
// 0x3d64ba0

void ParentFollow__RemoveParent(ParentFollow_o *__this,MethodInfo *method)

{
  (__this->fields).parent = (UnityEngine_Transform_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields).parent,0);
  return;
}


// ParentFollow$$SetParent
// il2cpp: void ParentFollow__SetParent (ParentFollow_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
// 0x3d65430

void ParentFollow__SetParent
               (ParentFollow_o *__this,UnityEngine_Transform_o *transform,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o value;
  
  (__this->fields).parent = transform;
  il2cpp_runtime_glue(&(__this->fields).parent);
  if (transform != (UnityEngine_Transform_o *)0x0) {
    __this_00 = (__this->fields).bTransform;
    value = UnityEngine_Transform__get_rotation(transform,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_rotation(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ParentFollow$$Update
// il2cpp: void ParentFollow__Update (ParentFollow_o* __this, const MethodInfo* method);
// 0x3d660f0

void ParentFollow__Update(ParentFollow_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_Vector3_o value;
  
  if (DAT_057025ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057025ce = '\x01';
  }
  if ((char)(__this->fields).isActiveInScene != '\0') {
    pUVar1 = (__this->fields).parent;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pUVar1 = (__this->fields).parent;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        __this_00 = (__this->fields).bTransform;
        value = UnityEngine_Transform__get_position(pUVar1,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_position(__this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// ParentFollow$$.ctor
// il2cpp: void ParentFollow___ctor (ParentFollow_o* __this, const MethodInfo* method);
// 0x3d66180

void ParentFollow___ctor(ParentFollow_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


