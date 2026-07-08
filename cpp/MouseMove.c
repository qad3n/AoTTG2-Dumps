// Type: MouseMove
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MouseMove.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Example/Scripts/MouseMove.cs  [prior source available (delta unverified)]
// --------------------------------

// MouseMove$$Start
// il2cpp: void MouseMove__Start (MouseMove_o* __this, const MethodInfo* method);
// 0x3d69ca0

void MouseMove__Start(MouseMove_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UVar1 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    (__this->fields)._originalPos.fields = UVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MouseMove$$Update
// il2cpp: void MouseMove__Update (MouseMove_o* __this, const MethodInfo* method);
// 0x3d69cd0

void MouseMove__Update(MouseMove_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int32_t iVar3;
  int32_t iVar4;
  UnityEngine_Transform_o *__this_00;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o value;
  float fStack_28;
  float fStack_24;
  
  UVar6 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar4 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar5 = (__this->fields)._sensitivity;
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    fVar5 = fVar5 + fVar5;
    uVar1 = (__this->fields)._originalPos.fields.x;
    uVar2 = (__this->fields)._originalPos.fields.y;
    fStack_28 = UVar6.fields.x;
    fStack_24 = UVar6.fields.y;
    value.fields.x = (fStack_28 / (float)iVar3 + -0.5) * fVar5 + (float)uVar1;
    value.fields.z = UVar6.fields.z * fVar5 + (__this->fields)._originalPos.fields.z;
    value.fields.y = (fStack_24 / (float)iVar4 + -0.5) * fVar5 + (float)uVar2;
    UnityEngine_Transform__set_position(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MouseMove$$.ctor
// il2cpp: void MouseMove___ctor (MouseMove_o* __this, const MethodInfo* method);
// 0x3d69da0

void MouseMove___ctor(MouseMove_o *__this,MethodInfo *method)

{
  (__this->fields)._sensitivity = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


