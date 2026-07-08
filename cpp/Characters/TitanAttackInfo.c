// Type: Characters.TitanAttackInfo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/TitanAttackInfo.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Controllers/TitanAttackInfo.cs  [CHANGED since prior version]
// --------------------------------

// Characters.TitanAttackInfo$$.ctor
// il2cpp: void Characters_TitanAttackInfo___ctor (Characters_TitanAttackInfo_o* __this, SimpleJSONFixed_JSONNode_o* attackInfo, SimpleJSONFixed_JSONNode_o* keyframes, const MethodInfo* method);
// 0x4015cd0

void Characters_TitanAttackInfo___ctor
               (Characters_TitanAttackInfo_o *__this,SimpleJSONFixed_JSONNode_o *attackInfo,
               SimpleJSONFixed_JSONNode_o *keyframes,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  long *plVar9;
  long *plVar10;
  SimpleJSONFixed_JSONNode_o *data;
  Characters_TitanAttackKeyframe_o *__this_00;
  int iVar11;
  bool_conflict bVar12;
  bool_conflict bVar13;
  bool_conflict bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  
  if (DAT_0570429c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Characters_TitanAttackKeyframe);
    il2cpp_init_method_metadata(&TypeInfo_List_TitanAttackKeyframe);
    il2cpp_init_method_metadata(&TypeInfo_TitanAttackKeyframe);
    il2cpp_init_method_metadata(&"Ranges");
    il2cpp_init_method_metadata(&"RightArm");
    il2cpp_init_method_metadata(&"Z");
    il2cpp_init_method_metadata(&"Keyframes");
    il2cpp_init_method_metadata(&"Far");
    il2cpp_init_method_metadata(&"LeftArm");
    il2cpp_init_method_metadata(&"MapObject");
    il2cpp_init_method_metadata(&"Y");
    il2cpp_init_method_metadata(&"X");
    il2cpp_init_method_metadata(&"HumanOnly");
    DAT_0570429c = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_TitanAttackKeyframe);
  System_Collections_Generic_List<object>___ctor(pSVar8,MethodInfo_List_1_Characters_TitanAttackKeyframe);
  *(System_Collections_Generic_List_object__o **)&(__this->fields).MaxRange.fields.z = pSVar8;
  il2cpp_runtime_glue();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((attackInfo != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (plVar9 = (long *)(*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                                 (attackInfo,"HumanOnly",
                                  (attackInfo->klass->vtable)._7_get_Item.method),
     plVar9 != (long *)0x0)) {
    uVar5 = (**(code **)(*plVar9 + 0x3a8))(plVar9,*(undefined8 *)(*plVar9 + 0x3b0));
    *(undefined1 *)&(__this->fields).HumanOnly = uVar5;
    cVar6 = (*(attackInfo->klass->vtable)._28_HasKey.methodPtr)
                      (attackInfo,"MapObject",(attackInfo->klass->vtable)._28_HasKey.method);
    uVar5 = 1;
    if (cVar6 != '\0') {
      plVar9 = (long *)(*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                                 (attackInfo,"MapObject",
                                  (attackInfo->klass->vtable)._7_get_Item.method);
      if (plVar9 == (long *)0x0) goto LAB_04016622;
      uVar5 = (**(code **)(*plVar9 + 0x3a8))(plVar9,*(undefined8 *)(*plVar9 + 0x3b0));
    }
    *(undefined1 *)((long)&(__this->fields).HumanOnly + 1) = uVar5;
    plVar9 = (long *)(*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                               (attackInfo,"Far",
                                (attackInfo->klass->vtable)._7_get_Item.method);
    if (plVar9 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar9 + 0x3a8))(plVar9,*(undefined8 *)(*plVar9 + 0x3b0));
      *(undefined1 *)((long)&(__this->fields).HumanOnly + 2) = uVar5;
      cVar6 = (*(attackInfo->klass->vtable)._28_HasKey.methodPtr)
                        (attackInfo,"LeftArm",(attackInfo->klass->vtable)._28_HasKey.method);
      if (cVar6 == '\0') {
        uVar5 = 0;
      }
      else {
        plVar9 = (long *)(*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                                   (attackInfo,"LeftArm",
                                    (attackInfo->klass->vtable)._7_get_Item.method);
        if (plVar9 == (long *)0x0) goto LAB_04016622;
        uVar5 = (**(code **)(*plVar9 + 0x3a8))(plVar9,*(undefined8 *)(*plVar9 + 0x3b0));
      }
      *(undefined1 *)((long)&(__this->fields).HumanOnly + 3) = uVar5;
      cVar6 = (*(attackInfo->klass->vtable)._28_HasKey.methodPtr)
                        (attackInfo,"RightArm",(attackInfo->klass->vtable)._28_HasKey.method);
      if (cVar6 == '\0') {
        uVar5 = 0;
      }
      else {
        plVar9 = (long *)(*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                                   (attackInfo,"RightArm",
                                    (attackInfo->klass->vtable)._7_get_Item.method);
        if (plVar9 == (long *)0x0) goto LAB_04016622;
        uVar5 = (**(code **)(*plVar9 + 0x3a8))(plVar9,*(undefined8 *)(*plVar9 + 0x3b0));
      }
      *(undefined1 *)&(__this->fields).MapObject = uVar5;
      cVar6 = (*(attackInfo->klass->vtable)._28_HasKey.methodPtr)
                        (attackInfo,"Ranges",(attackInfo->klass->vtable)._28_HasKey.method);
      if (cVar6 != '\0') {
        plVar9 = (long *)(*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                                   (attackInfo,"Ranges",
                                    (attackInfo->klass->vtable)._7_get_Item.method);
        if (((plVar9 == (long *)0x0) ||
            (plVar10 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                         (plVar9,"X",*(undefined8 *)(*plVar9 + 0x1b0)),
            plVar10 == (long *)0x0)) ||
           (plVar10 = (long *)(**(code **)(*plVar10 + 0x188))
                                        (plVar10,0,*(undefined8 *)(*plVar10 + 400)),
           plVar10 == (long *)0x0)) goto LAB_04016622;
        bVar12 = (**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390));
        plVar10 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                    (plVar9,"Y",*(undefined8 *)(*plVar9 + 0x1b0));
        if ((plVar10 == (long *)0x0) ||
           (plVar10 = (long *)(**(code **)(*plVar10 + 0x188))
                                        (plVar10,0,*(undefined8 *)(*plVar10 + 400)),
           plVar10 == (long *)0x0)) goto LAB_04016622;
        bVar13 = (**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390));
        plVar10 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                    (plVar9,"Z",*(undefined8 *)(*plVar9 + 0x1b0));
        if ((plVar10 == (long *)0x0) ||
           (plVar10 = (long *)(**(code **)(*plVar10 + 0x188))
                                        (plVar10,0,*(undefined8 *)(*plVar10 + 400)),
           plVar10 == (long *)0x0)) goto LAB_04016622;
        bVar14 = (**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390));
        (__this->fields).FarOnly = bVar12;
        (__this->fields).LeftArm = bVar13;
        (__this->fields).RightArm = bVar14;
        plVar10 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                    (plVar9,"X",*(undefined8 *)(*plVar9 + 0x1b0));
        if ((plVar10 == (long *)0x0) ||
           (plVar10 = (long *)(**(code **)(*plVar10 + 0x188))
                                        (plVar10,1,*(undefined8 *)(*plVar10 + 400)),
           plVar10 == (long *)0x0)) goto LAB_04016622;
        fVar15 = (float)(**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390));
        plVar10 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                    (plVar9,"Y",*(undefined8 *)(*plVar9 + 0x1b0));
        if ((plVar10 == (long *)0x0) ||
           (plVar10 = (long *)(**(code **)(*plVar10 + 0x188))
                                        (plVar10,1,*(undefined8 *)(*plVar10 + 400)),
           plVar10 == (long *)0x0)) goto LAB_04016622;
        fVar16 = (float)(**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390));
        plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                   (plVar9,"Z",*(undefined8 *)(*plVar9 + 0x1b0));
        if ((plVar9 == (long *)0x0) ||
           (plVar9 = (long *)(**(code **)(*plVar9 + 0x188))(plVar9,1,*(undefined8 *)(*plVar9 + 400))
           , plVar9 == (long *)0x0)) goto LAB_04016622;
        fVar17 = (float)(**(code **)(*plVar9 + 0x388))(plVar9);
        (__this->fields).MinRange.fields.x = fVar15;
        (__this->fields).MinRange.fields.y = fVar16;
        (__this->fields).MinRange.fields.z = fVar17;
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar12 = SimpleJSONFixed_JSONNode__op_Inequality
                         (keyframes,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        return;
      }
      *(undefined1 *)&(__this->fields).MaxRange.fields.x = 1;
      if ((keyframes != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         (plVar9 = (long *)(*(keyframes->klass->vtable)._7_get_Item.methodPtr)
                                     (keyframes,"Keyframes",
                                      (keyframes->klass->vtable)._7_get_Item.method),
         plVar9 != (long *)0x0)) {
        iVar11 = 0;
        do {
          iVar7 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
          if (iVar7 <= iVar11) {
            plVar9 = (long *)(*(keyframes->klass->vtable)._7_get_Item.methodPtr)
                                       (keyframes,"Ranges",
                                        (keyframes->klass->vtable)._7_get_Item.method);
            if (((plVar9 != (long *)0x0) &&
                (plVar10 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                             (plVar9,"X",*(undefined8 *)(*plVar9 + 0x1b0)),
                plVar10 != (long *)0x0)) &&
               (plVar10 = (long *)(**(code **)(*plVar10 + 0x188))
                                            (plVar10,0,*(undefined8 *)(*plVar10 + 400)),
               plVar10 != (long *)0x0)) {
              bVar12 = (**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390));
              plVar10 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                          (plVar9,"Y",*(undefined8 *)(*plVar9 + 0x1b0));
              if ((plVar10 != (long *)0x0) &&
                 (plVar10 = (long *)(**(code **)(*plVar10 + 0x188))
                                              (plVar10,0,*(undefined8 *)(*plVar10 + 400)),
                 plVar10 != (long *)0x0)) {
                bVar13 = (**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390));
                plVar10 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                            (plVar9,"Z",*(undefined8 *)(*plVar9 + 0x1b0));
                if ((plVar10 != (long *)0x0) &&
                   (plVar10 = (long *)(**(code **)(*plVar10 + 0x188))
                                                (plVar10,0,*(undefined8 *)(*plVar10 + 400)),
                   plVar10 != (long *)0x0)) {
                  bVar14 = (**(code **)(*plVar10 + 0x388))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x390));
                  (__this->fields).FarOnly = bVar12;
                  (__this->fields).LeftArm = bVar13;
                  (__this->fields).RightArm = bVar14;
                  plVar10 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                              (plVar9,"X",*(undefined8 *)(*plVar9 + 0x1b0))
                  ;
                  if ((plVar10 != (long *)0x0) &&
                     (plVar10 = (long *)(**(code **)(*plVar10 + 0x188))
                                                  (plVar10,1,*(undefined8 *)(*plVar10 + 400)),
                     plVar10 != (long *)0x0)) {
                    fVar15 = (float)(**(code **)(*plVar10 + 0x388))
                                              (plVar10,*(undefined8 *)(*plVar10 + 0x390));
                    plVar10 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                                (plVar9,"Y",
                                                 *(undefined8 *)(*plVar9 + 0x1b0));
                    if ((plVar10 != (long *)0x0) &&
                       (plVar10 = (long *)(**(code **)(*plVar10 + 0x188))
                                                    (plVar10,1,*(undefined8 *)(*plVar10 + 400)),
                       plVar10 != (long *)0x0)) {
                      fVar16 = (float)(**(code **)(*plVar10 + 0x388))
                                                (plVar10,*(undefined8 *)(*plVar10 + 0x390));
                      plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                                 (plVar9,"Z",
                                                  *(undefined8 *)(*plVar9 + 0x1b0));
                      if ((plVar9 != (long *)0x0) &&
                         (plVar9 = (long *)(**(code **)(*plVar9 + 0x188))
                                                     (plVar9,1,*(undefined8 *)(*plVar9 + 400)),
                         plVar9 != (long *)0x0)) {
                        fVar17 = (float)(**(code **)(*plVar9 + 0x388))
                                                  (plVar9,*(undefined8 *)(*plVar9 + 0x390));
                        (__this->fields).MinRange.fields.x = fVar15;
                        (__this->fields).MinRange.fields.y = fVar16;
                        (__this->fields).MinRange.fields.z = fVar17;
                        return;
                      }
                    }
                  }
                }
              }
            }
            break;
          }
          pSVar8 = *(System_Collections_Generic_List_object__o **)
                    &(__this->fields).MaxRange.fields.z;
          plVar9 = (long *)(*(keyframes->klass->vtable)._7_get_Item.methodPtr)
                                     (keyframes,"Keyframes",
                                      (keyframes->klass->vtable)._7_get_Item.method);
          if (plVar9 == (long *)0x0) break;
          data = (SimpleJSONFixed_JSONNode_o *)
                 (**(code **)(*plVar9 + 0x188))(plVar9,iVar11,*(undefined8 *)(*plVar9 + 400));
          auVar18 = il2cpp_runtime_glue(TypeInfo_TitanAttackKeyframe);
          __this_00 = auVar18._0_8_;
          Characters_TitanAttackKeyframe___ctor(__this_00,data,auVar18._8_8_);
          lVar4 = MethodInfo_Void_Add;
          if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) break;
          piVar1 = &(pSVar8->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar8->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) break;
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_00;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar8,(Il2CppObject *)__this_00,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          iVar11 = iVar11 + 1;
          plVar9 = (long *)(*(keyframes->klass->vtable)._7_get_Item.methodPtr)
                                     (keyframes,"Keyframes",
                                      (keyframes->klass->vtable)._7_get_Item.method);
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_04016622:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.TitanAttackInfo$$CheckSimpleAttack
// il2cpp: bool Characters_TitanAttackInfo__CheckSimpleAttack (Characters_TitanAttackInfo_o* __this, UnityEngine_Vector3_o relativePosition, const MethodInfo* method);
// 0x40167f0

bool_conflict
Characters_TitanAttackInfo__CheckSimpleAttack
          (Characters_TitanAttackInfo_o *__this,UnityEngine_Vector3_o relativePosition,
          MethodInfo *method)

{
  undefined8 in_RAX;
  
  if (relativePosition.fields.x < (float)(__this->fields).FarOnly) {
    return 0;
  }
  if (relativePosition.fields.y < (float)(__this->fields).LeftArm) {
    return 0;
  }
  if (relativePosition.fields.z < (float)(__this->fields).RightArm) {
    return 0;
  }
  if ((__this->fields).MinRange.fields.x < relativePosition.fields.x) {
    return 0;
  }
  if ((__this->fields).MinRange.fields.y < relativePosition.fields.y) {
    return 0;
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)in_RAX >> 8),
                  relativePosition.fields.z <= (__this->fields).MinRange.fields.z);
}


// Characters.TitanAttackInfo$$CheckSmartAttack
// il2cpp: bool Characters_TitanAttackInfo__CheckSmartAttack (Characters_TitanAttackInfo_o* __this, UnityEngine_Transform_o* titan, UnityEngine_Vector3_o worldPosition, UnityEngine_Vector3_o velocity, float attackSpeed, float size, const MethodInfo* method);
// 0x4016840

/* WARNING: Removing unreachable block (ram,0x04016931) */
/* WARNING: Removing unreachable block (ram,0x04016987) */
/* WARNING: Removing unreachable block (ram,0x040169ea) */

bool_conflict
Characters_TitanAttackInfo__CheckSmartAttack
          (Characters_TitanAttackInfo_o *__this,UnityEngine_Transform_o *titan,
          UnityEngine_Vector3_o worldPosition,UnityEngine_Vector3_o velocity,float attackSpeed,
          float size,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  char cVar1;
  bool_conflict bVar2;
  uint extraout_EAX;
  undefined1 in_stack_ffffffffffffff88 [12];
  System_Collections_Generic_List_T__o *pSVar3;
  
  if (DAT_0570429d == '\0') {
    il2cpp_init_method_metadata(worldPosition.fields.x,worldPosition.fields.z,velocity.fields._0_8_,
                       velocity.fields.z,&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_TitanAttackKeyframe_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Characters_TitanAttackKeyfr);
    DAT_0570429d = '\x01';
  }
  pSVar3 = (System_Collections_Generic_List_T__o *)0x0;
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields).MaxRange.fields.z;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff98,__this_00,
             MethodInfo_List_1_T__Enumerator_Characters_TitanAttackKeyfr);
  if (titan == (UnityEngine_Transform_o *)0x0) {
    __this_02.fields._version = (int32_t)size;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_
    ;
    __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_02.fields._current = (Il2CppObject *)pSVar3;
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
    cVar1 = (char)bVar2;
  }
  else {
    __this_01.fields._version = (int32_t)size;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_
    ;
    __this_01.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_01.fields._current = (Il2CppObject *)pSVar3;
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
    cVar1 = (char)bVar2;
  }
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_03.fields._version = (int32_t)size;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
  __this_03.fields._index = in_stack_ffffffffffffff88._8_4_;
  __this_03.fields._current = (Il2CppObject *)pSVar3;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
  return extraout_EAX & 0xffffff00;
}


