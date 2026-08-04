// Type: Characters.TitanAttackInfo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/TitanAttackInfo.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/TitanAttackInfo.cs
// --------------------------------

// Characters.TitanAttackInfo$$.ctor
// il2cpp: void Characters_TitanAttackInfo___ctor (Characters_TitanAttackInfo_o* __this, SimpleJSONFixed_JSONNode_o* attackInfo, SimpleJSONFixed_JSONNode_o* keyframes, const MethodInfo* method);
// 0x43226d0

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
  Characters_TitanAttackInfo_o *pCVar10;
  Characters_TitanAttackInfo_o *pCVar11;
  Characters_TitanAttackInfo_o *data;
  Characters_TitanAttackInfo_o *__this_00;
  int iVar12;
  bool_conflict bVar13;
  float fVar14;
  bool_conflict bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float in_XMM1_Da;
  undefined1 auVar20 [16];
  
  if (g_data_057ae00a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Characters_TitanAttackKeyframe);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_TitanAttackKeyframe);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanAttackKeyframe);
    il2cpp_runtime_helper_023445d0(&"Ranges");
    il2cpp_runtime_helper_023445d0(&"RightArm");
    il2cpp_runtime_helper_023445d0(&"Z");
    il2cpp_runtime_helper_023445d0(&"Keyframes");
    il2cpp_runtime_helper_023445d0(&"Far");
    il2cpp_runtime_helper_023445d0(&"LeftArm");
    il2cpp_runtime_helper_023445d0(&"MapObject");
    il2cpp_runtime_helper_023445d0(&"Y");
    il2cpp_runtime_helper_023445d0(&"X");
    il2cpp_runtime_helper_023445d0(&"HumanOnly");
    g_data_057ae00a = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_TitanAttackKeyframe);
  System_Collections_Generic_List_object____ctor(pSVar8,MethodInfo_List_1_Characters_TitanAttackKeyframe);
  *(System_Collections_Generic_List_object__o **)&(__this->fields).MaxRange.fields.z = pSVar8;
  il2cpp_runtime_helper_022b4080();
  data = (Characters_TitanAttackInfo_o *)0x0;
  __this_00 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  fVar17 = in_XMM1_Da;
  if ((attackInfo != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (data = "HumanOnly", __this_00 = (Characters_TitanAttackInfo_o *)attackInfo,
     plVar9 = (long *)(*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                                (attackInfo,"HumanOnly",(attackInfo->klass->vtable)._7_get_Item.method),
     fVar17 = in_XMM1_Da, plVar9 != (long *)0x0)) {
    uVar5 = (**(code **)(*plVar9 + 0x3a8))(plVar9,*(undefined8 *)(*plVar9 + 0x3b0));
    *(undefined1 *)&(__this->fields).HumanOnly = uVar5;
    cVar6 = (*(attackInfo->klass->vtable)._28_HasKey.methodPtr)
                      (attackInfo,"MapObject",(attackInfo->klass->vtable)._28_HasKey.method);
    uVar5 = 1;
    if (cVar6 != '\0') {
      data = "MapObject";
      __this_00 = (Characters_TitanAttackInfo_o *)attackInfo;
      plVar9 = (long *)(*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                                 (attackInfo,"MapObject",(attackInfo->klass->vtable)._7_get_Item.method);
      fVar17 = in_XMM1_Da;
      if (plVar9 == (long *)0x0) goto label_04323022;
      uVar5 = (**(code **)(*plVar9 + 0x3a8))(plVar9,*(undefined8 *)(*plVar9 + 0x3b0));
    }
    *(undefined1 *)((long)&(__this->fields).HumanOnly + 1) = uVar5;
    data = "Far";
    __this_00 = (Characters_TitanAttackInfo_o *)attackInfo;
    plVar9 = (long *)(*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                               (attackInfo,"Far",(attackInfo->klass->vtable)._7_get_Item.method);
    fVar17 = in_XMM1_Da;
    if (plVar9 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar9 + 0x3a8))(plVar9,*(undefined8 *)(*plVar9 + 0x3b0));
      *(undefined1 *)((long)&(__this->fields).HumanOnly + 2) = uVar5;
      cVar6 = (*(attackInfo->klass->vtable)._28_HasKey.methodPtr)
                        (attackInfo,"LeftArm",(attackInfo->klass->vtable)._28_HasKey.method);
      if (cVar6 == '\0') {
        uVar5 = 0;
      }
      else {
        data = "LeftArm";
        __this_00 = (Characters_TitanAttackInfo_o *)attackInfo;
        plVar9 = (long *)(*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                                   (attackInfo,"LeftArm",(attackInfo->klass->vtable)._7_get_Item.method);
        fVar17 = in_XMM1_Da;
        if (plVar9 == (long *)0x0) goto label_04323022;
        uVar5 = (**(code **)(*plVar9 + 0x3a8))(plVar9,*(undefined8 *)(*plVar9 + 0x3b0));
      }
      *(undefined1 *)((long)&(__this->fields).HumanOnly + 3) = uVar5;
      cVar6 = (*(attackInfo->klass->vtable)._28_HasKey.methodPtr)
                        (attackInfo,"RightArm",(attackInfo->klass->vtable)._28_HasKey.method);
      if (cVar6 == '\0') {
        uVar5 = 0;
      }
      else {
        data = "RightArm";
        __this_00 = (Characters_TitanAttackInfo_o *)attackInfo;
        plVar9 = (long *)(*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                                   (attackInfo,"RightArm",(attackInfo->klass->vtable)._7_get_Item.method);
        fVar17 = in_XMM1_Da;
        if (plVar9 == (long *)0x0) goto label_04323022;
        uVar5 = (**(code **)(*plVar9 + 0x3a8))(plVar9,*(undefined8 *)(*plVar9 + 0x3b0));
      }
      *(undefined1 *)&(__this->fields).MapObject = uVar5;
      cVar6 = (*(attackInfo->klass->vtable)._28_HasKey.methodPtr)
                        (attackInfo,"Ranges",(attackInfo->klass->vtable)._28_HasKey.method);
      if (cVar6 != '\0') {
        data = "Ranges";
        pCVar10 = (Characters_TitanAttackInfo_o *)
                  (*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                            (attackInfo,"Ranges",(attackInfo->klass->vtable)._7_get_Item.method);
        __this_00 = (Characters_TitanAttackInfo_o *)attackInfo;
        fVar17 = in_XMM1_Da;
        if ((pCVar10 == (Characters_TitanAttackInfo_o *)0x0) ||
           (data = "X", __this_00 = pCVar10,
           pCVar11 = (Characters_TitanAttackInfo_o *)
                     (*pCVar10->klass[1]._1.this_arg.data)
                               (pCVar10,"X",*(undefined8 *)&pCVar10->klass[1]._1.this_arg.bits),
           fVar17 = in_XMM1_Da, pCVar11 == (Characters_TitanAttackInfo_o *)0x0)) goto label_04323022;
        data = (Characters_TitanAttackInfo_o *)0x0;
        plVar9 = (long *)(*(code *)pCVar11->klass[1]._1.name)(pCVar11,0,pCVar11->klass[1]._1.namespaze);
        __this_00 = pCVar11;
        fVar17 = in_XMM1_Da;
        if (plVar9 == (long *)0x0) goto label_04323022;
        bVar13 = (**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
        data = "Y";
        __this_00 = pCVar10;
        pCVar11 = (Characters_TitanAttackInfo_o *)
                  (*pCVar10->klass[1]._1.this_arg.data)
                            (pCVar10,"Y",*(undefined8 *)&pCVar10->klass[1]._1.this_arg.bits);
        fVar17 = in_XMM1_Da;
        if (pCVar11 == (Characters_TitanAttackInfo_o *)0x0) goto label_04323022;
        data = (Characters_TitanAttackInfo_o *)0x0;
        plVar9 = (long *)(*(code *)pCVar11->klass[1]._1.name)(pCVar11,0,pCVar11->klass[1]._1.namespaze);
        __this_00 = pCVar11;
        fVar17 = in_XMM1_Da;
        if (plVar9 == (long *)0x0) goto label_04323022;
        fVar14 = (float)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
        data = "Z";
        __this_00 = pCVar10;
        pCVar11 = (Characters_TitanAttackInfo_o *)
                  (*pCVar10->klass[1]._1.this_arg.data)
                            (pCVar10,"Z",*(undefined8 *)&pCVar10->klass[1]._1.this_arg.bits);
        fVar17 = in_XMM1_Da;
        if (pCVar11 == (Characters_TitanAttackInfo_o *)0x0) goto label_04323022;
        data = (Characters_TitanAttackInfo_o *)0x0;
        plVar9 = (long *)(*(code *)pCVar11->klass[1]._1.name)(pCVar11,0,pCVar11->klass[1]._1.namespaze);
        __this_00 = pCVar11;
        fVar17 = in_XMM1_Da;
        if (plVar9 == (long *)0x0) goto label_04323022;
        bVar15 = (**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
        (__this->fields).FarOnly = bVar13;
        (__this->fields).LeftArm = (bool_conflict)fVar14;
        (__this->fields).RightArm = bVar15;
        data = "X";
        __this_00 = pCVar10;
        pCVar11 = (Characters_TitanAttackInfo_o *)
                  (*pCVar10->klass[1]._1.this_arg.data)
                            (pCVar10,"X",*(undefined8 *)&pCVar10->klass[1]._1.this_arg.bits);
        fVar17 = fVar14;
        if (pCVar11 == (Characters_TitanAttackInfo_o *)0x0) goto label_04323022;
        data = (Characters_TitanAttackInfo_o *)0x1;
        plVar9 = (long *)(*(code *)pCVar11->klass[1]._1.name)(pCVar11,1,pCVar11->klass[1]._1.namespaze);
        __this_00 = pCVar11;
        fVar17 = fVar14;
        if (plVar9 == (long *)0x0) goto label_04323022;
        fVar16 = (float)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
        data = "Y";
        __this_00 = pCVar10;
        pCVar11 = (Characters_TitanAttackInfo_o *)
                  (*pCVar10->klass[1]._1.this_arg.data)
                            (pCVar10,"Y",*(undefined8 *)&pCVar10->klass[1]._1.this_arg.bits);
        fVar17 = fVar14;
        if (pCVar11 == (Characters_TitanAttackInfo_o *)0x0) goto label_04323022;
        data = (Characters_TitanAttackInfo_o *)0x1;
        plVar9 = (long *)(*(code *)pCVar11->klass[1]._1.name)(pCVar11,1,pCVar11->klass[1]._1.namespaze);
        __this_00 = pCVar11;
        fVar17 = fVar14;
        if (plVar9 == (long *)0x0) goto label_04323022;
        in_XMM1_Da = (float)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
        data = "Z";
        pCVar11 = (Characters_TitanAttackInfo_o *)
                  (*pCVar10->klass[1]._1.this_arg.data)
                            (pCVar10,"Z",*(undefined8 *)&pCVar10->klass[1]._1.this_arg.bits);
        __this_00 = pCVar10;
        fVar17 = fVar14;
        if (pCVar11 == (Characters_TitanAttackInfo_o *)0x0) goto label_04323022;
        data = (Characters_TitanAttackInfo_o *)0x1;
        plVar9 = (long *)(*(code *)pCVar11->klass[1]._1.name)(pCVar11,1,pCVar11->klass[1]._1.namespaze);
        __this_00 = pCVar11;
        fVar17 = fVar14;
        if (plVar9 == (long *)0x0) goto label_04323022;
        fVar17 = (float)(**(code **)(*plVar9 + 0x388))(plVar9);
        (__this->fields).MinRange.fields.x = fVar16;
        (__this->fields).MinRange.fields.y = in_XMM1_Da;
        (__this->fields).MinRange.fields.z = fVar17;
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      data = (Characters_TitanAttackInfo_o *)0x0;
      __this_00 = (Characters_TitanAttackInfo_o *)keyframes;
      bVar13 = SimpleJSONFixed_JSONNode__op_Inequality(keyframes,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        return;
      }
      *(undefined1 *)&(__this->fields).MaxRange.fields.x = 1;
      fVar17 = in_XMM1_Da;
      if ((keyframes != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         (data = "Keyframes", __this_00 = (Characters_TitanAttackInfo_o *)keyframes,
         plVar9 = (long *)(*(keyframes->klass->vtable)._7_get_Item.methodPtr)
                                    (keyframes,"Keyframes",(keyframes->klass->vtable)._7_get_Item.method),
         fVar17 = in_XMM1_Da, plVar9 != (long *)0x0)) {
        iVar12 = 0;
        do {
          iVar7 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
          if (iVar7 <= iVar12) {
            data = "Ranges";
            pCVar10 = (Characters_TitanAttackInfo_o *)
                      (*(keyframes->klass->vtable)._7_get_Item.methodPtr)
                                (keyframes,"Ranges",(keyframes->klass->vtable)._7_get_Item.method);
            __this_00 = (Characters_TitanAttackInfo_o *)keyframes;
            fVar17 = in_XMM1_Da;
            if ((pCVar10 != (Characters_TitanAttackInfo_o *)0x0) &&
               (data = "X", __this_00 = pCVar10,
               pCVar11 = (Characters_TitanAttackInfo_o *)
                         (*pCVar10->klass[1]._1.this_arg.data)
                                   (pCVar10,"X",*(undefined8 *)&pCVar10->klass[1]._1.this_arg.bits),
               fVar17 = in_XMM1_Da, pCVar11 != (Characters_TitanAttackInfo_o *)0x0)) {
              data = (Characters_TitanAttackInfo_o *)0x0;
              plVar9 = (long *)(*(code *)pCVar11->klass[1]._1.name)(pCVar11,0,pCVar11->klass[1]._1.namespaze);
              __this_00 = pCVar11;
              fVar17 = in_XMM1_Da;
              if (plVar9 != (long *)0x0) {
                bVar13 = (**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
                data = "Y";
                __this_00 = pCVar10;
                pCVar11 = (Characters_TitanAttackInfo_o *)
                          (*pCVar10->klass[1]._1.this_arg.data)
                                    (pCVar10,"Y",*(undefined8 *)&pCVar10->klass[1]._1.this_arg.bits);
                fVar17 = in_XMM1_Da;
                if (pCVar11 != (Characters_TitanAttackInfo_o *)0x0) {
                  data = (Characters_TitanAttackInfo_o *)0x0;
                  plVar9 = (long *)(*(code *)pCVar11->klass[1]._1.name)
                                             (pCVar11,0,pCVar11->klass[1]._1.namespaze);
                  __this_00 = pCVar11;
                  fVar17 = in_XMM1_Da;
                  if (plVar9 != (long *)0x0) {
                    fVar14 = (float)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
                    data = "Z";
                    __this_00 = pCVar10;
                    pCVar11 = (Characters_TitanAttackInfo_o *)
                              (*pCVar10->klass[1]._1.this_arg.data)
                                        (pCVar10,"Z",
                                         *(undefined8 *)&pCVar10->klass[1]._1.this_arg.bits);
                    fVar17 = in_XMM1_Da;
                    if (pCVar11 != (Characters_TitanAttackInfo_o *)0x0) {
                      data = (Characters_TitanAttackInfo_o *)0x0;
                      plVar9 = (long *)(*(code *)pCVar11->klass[1]._1.name)
                                                 (pCVar11,0,pCVar11->klass[1]._1.namespaze);
                      __this_00 = pCVar11;
                      fVar17 = in_XMM1_Da;
                      if (plVar9 != (long *)0x0) {
                        bVar15 = (**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
                        (__this->fields).FarOnly = bVar13;
                        (__this->fields).LeftArm = (bool_conflict)fVar14;
                        (__this->fields).RightArm = bVar15;
                        data = "X";
                        __this_00 = pCVar10;
                        pCVar11 = (Characters_TitanAttackInfo_o *)
                                  (*pCVar10->klass[1]._1.this_arg.data)
                                            (pCVar10,"X",
                                             *(undefined8 *)&pCVar10->klass[1]._1.this_arg.bits);
                        fVar17 = fVar14;
                        if (pCVar11 != (Characters_TitanAttackInfo_o *)0x0) {
                          data = (Characters_TitanAttackInfo_o *)0x1;
                          plVar9 = (long *)(*(code *)pCVar11->klass[1]._1.name)
                                                     (pCVar11,1,pCVar11->klass[1]._1.namespaze);
                          __this_00 = pCVar11;
                          fVar17 = fVar14;
                          if (plVar9 != (long *)0x0) {
                            fVar16 = (float)(**(code **)(*plVar9 + 0x388))
                                                      (plVar9,*(undefined8 *)(*plVar9 + 0x390));
                            data = "Y";
                            __this_00 = pCVar10;
                            pCVar11 = (Characters_TitanAttackInfo_o *)
                                      (*pCVar10->klass[1]._1.this_arg.data)
                                                (pCVar10,"Y",
                                                 *(undefined8 *)&pCVar10->klass[1]._1.this_arg.bits);
                            fVar17 = fVar14;
                            if (pCVar11 != (Characters_TitanAttackInfo_o *)0x0) {
                              data = (Characters_TitanAttackInfo_o *)0x1;
                              plVar9 = (long *)(*(code *)pCVar11->klass[1]._1.name)
                                                         (pCVar11,1,pCVar11->klass[1]._1.namespaze);
                              __this_00 = pCVar11;
                              fVar17 = fVar14;
                              if (plVar9 != (long *)0x0) {
                                fVar18 = (float)(**(code **)(*plVar9 + 0x388))
                                                          (plVar9,*(undefined8 *)(*plVar9 + 0x390));
                                data = "Z";
                                pCVar11 = (Characters_TitanAttackInfo_o *)
                                          (*pCVar10->klass[1]._1.this_arg.data)
                                                    (pCVar10,"Z",
                                                     *(undefined8 *)&pCVar10->klass[1]._1.this_arg.bits);
                                __this_00 = pCVar10;
                                fVar17 = fVar14;
                                if (pCVar11 != (Characters_TitanAttackInfo_o *)0x0) {
                                  data = (Characters_TitanAttackInfo_o *)0x1;
                                  plVar9 = (long *)(*(code *)pCVar11->klass[1]._1.name)
                                                             (pCVar11,1,pCVar11->klass[1]._1.namespaze);
                                  __this_00 = pCVar11;
                                  fVar17 = fVar14;
                                  if (plVar9 != (long *)0x0) {
                                    fVar17 = (float)(**(code **)(*plVar9 + 0x388))
                                                              (plVar9,*(undefined8 *)(*plVar9 + 0x390));
                                    (__this->fields).MinRange.fields.x = fVar16;
                                    (__this->fields).MinRange.fields.y = fVar18;
                                    (__this->fields).MinRange.fields.z = fVar17;
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          }
          pSVar8 = *(System_Collections_Generic_List_object__o **)&(__this->fields).MaxRange.fields.z;
          data = "Keyframes";
          __this_00 = (Characters_TitanAttackInfo_o *)keyframes;
          plVar9 = (long *)(*(keyframes->klass->vtable)._7_get_Item.methodPtr)
                                     (keyframes,"Keyframes",(keyframes->klass->vtable)._7_get_Item.method);
          fVar17 = in_XMM1_Da;
          if (plVar9 == (long *)0x0) break;
          data = (Characters_TitanAttackInfo_o *)
                 (**(code **)(*plVar9 + 0x188))(plVar9,iVar12,*(undefined8 *)(*plVar9 + 400));
          auVar20 = il2cpp_runtime_helper_023052d0(TypeInfo_TitanAttackKeyframe);
          pCVar10 = auVar20._0_8_;
          __this_00 = pCVar10;
          Characters_TitanAttackKeyframe___ctor
                    ((Characters_TitanAttackKeyframe_o *)pCVar10,(SimpleJSONFixed_JSONNode_o *)data,
                     auVar20._8_8_);
          lVar4 = MethodInfo_Void_Add;
          fVar17 = in_XMM1_Da;
          if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) break;
          piVar1 = &(pSVar8->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar8->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) break;
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pCVar10;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pCVar10);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar8,(Il2CppObject *)pCVar10,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          iVar12 = iVar12 + 1;
          data = "Keyframes";
          __this_00 = (Characters_TitanAttackInfo_o *)keyframes;
          plVar9 = (long *)(*(keyframes->klass->vtable)._7_get_Item.methodPtr)
                                     (keyframes,"Keyframes",(keyframes->klass->vtable)._7_get_Item.method);
          fVar17 = in_XMM1_Da;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
label_04323022:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae00c == '\0') {
    il2cpp_runtime_helper_023445d0(&"x");
    il2cpp_runtime_helper_023445d0(&"f");
    il2cpp_runtime_helper_023445d0(&"y");
    il2cpp_runtime_helper_023445d0(&"z");
    il2cpp_runtime_helper_023445d0(&"r");
    g_data_057ae00c = '\x01';
  }
  pCVar10 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if ((data != (Characters_TitanAttackInfo_o *)0x0) &&
     (pCVar10 = data,
     plVar9 = (long *)(*data->klass[1]._1.this_arg.data)
                                (data,"f",*(undefined8 *)&data->klass[1]._1.this_arg.bits),
     plVar9 != (long *)0x0)) {
    bVar13 = (**(code **)(*plVar9 + 0x368))(plVar9,*(undefined8 *)(*plVar9 + 0x370));
    (__this_00->fields).HumanOnly = bVar13;
    pCVar10 = data;
    plVar9 = (long *)(*data->klass[1]._1.this_arg.data)
                               (data,"x",*(undefined8 *)&data->klass[1]._1.this_arg.bits);
    if (plVar9 != (long *)0x0) {
      bVar13 = (**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
      pCVar10 = data;
      plVar9 = (long *)(*data->klass[1]._1.this_arg.data)
                                 (data,"y",*(undefined8 *)&data->klass[1]._1.this_arg.bits);
      if (plVar9 != (long *)0x0) {
        fVar14 = (float)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
        pCVar10 = data;
        plVar9 = (long *)(*data->klass[1]._1.this_arg.data)
                                   (data,"z",*(undefined8 *)&data->klass[1]._1.this_arg.bits);
        if (plVar9 != (long *)0x0) {
          bVar15 = (**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
          (__this_00->fields).MapObject = bVar13;
          (__this_00->fields).FarOnly = (bool_conflict)fVar14;
          (__this_00->fields).LeftArm = bVar15;
          plVar9 = (long *)(*data->klass[1]._1.this_arg.data)
                                     (data,"r",*(undefined8 *)&data->klass[1]._1.this_arg.bits);
          pCVar10 = data;
          fVar17 = fVar14;
          if (plVar9 != (long *)0x0) {
            bVar13 = (**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
            (__this_00->fields).RightArm = bVar13;
            return;
          }
        }
      }
    }
  }
  uVar19 = il2cpp_runtime_helper_022b2c90();
  fVar14 = (float)((ulong)uVar19 >> 0x20);
  if ((float)uVar19 < (float)(pCVar10->fields).FarOnly) {
    return;
  }
  if (fVar14 < (float)(pCVar10->fields).LeftArm) {
    return;
  }
  if ((float)(pCVar10->fields).RightArm <= fVar17) {
    if ((pCVar10->fields).MinRange.fields.x < (float)uVar19) {
      return;
    }
    if (fVar14 <= (pCVar10->fields).MinRange.fields.y) {
      return;
    }
    return;
  }
  return;
}


// Characters.TitanAttackInfo$$CheckSimpleAttack
// il2cpp: bool Characters_TitanAttackInfo__CheckSimpleAttack (Characters_TitanAttackInfo_o* __this, UnityEngine_Vector3_o relativePosition, const MethodInfo* method);
// 0x43231f0

bool_conflict
Characters_TitanAttackInfo__CheckSimpleAttack
          (Characters_TitanAttackInfo_o *__this,UnityEngine_Vector3_o relativePosition,MethodInfo *method)

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
         CONCAT71((int7)((ulong)in_RAX >> 8),relativePosition.fields.z <= (__this->fields).MinRange.fields.z);
}


// Characters.TitanAttackInfo$$CheckSmartAttack
// il2cpp: bool Characters_TitanAttackInfo__CheckSmartAttack (Characters_TitanAttackInfo_o* __this, UnityEngine_Transform_o* titan, UnityEngine_Vector3_o worldPosition, UnityEngine_Vector3_o velocity, float attackSpeed, float size, const MethodInfo* method);
// 0x4323240

bool_conflict
Characters_TitanAttackInfo__CheckSmartAttack
          (Characters_TitanAttackInfo_o *__this,UnityEngine_Transform_o *titan,
          UnityEngine_Vector3_o worldPosition,UnityEngine_Vector3_o velocity,float attackSpeed,float size,
          MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  char cVar2;
  bool_conflict bVar3;
  uint extraout_EAX;
  uint uVar4;
  uint extraout_EAX_00;
  long *plVar5;
  undefined1 auVar6 [12];
  undefined1 in_stack_ffffffffffffff88 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  
  if (g_data_057ae00b == '\0') {
    il2cpp_runtime_helper_023445d0(worldPosition.fields.x,worldPosition.fields.z,velocity.fields._0_8_,velocity.fields.z,
                       &MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TitanAttackKeyframe_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_TitanAttackKeyframe_GetEn);
    g_data_057ae00b = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields).MaxRange.fields.z;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff98,__this_00,
               MethodInfo_List_1_T_Enumerator_Characters_TitanAttackKeyframe_GetEn);
    if (titan == (UnityEngine_Transform_o *)0x0) {
      __this_02.fields._version = (int32_t)size;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_02.fields._current = (Il2CppObject *)pSVar7;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      cVar2 = (char)bVar3;
    }
    else {
      __this_01.fields._version = (int32_t)size;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
      __this_01.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_01.fields._current = (Il2CppObject *)pSVar7;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      cVar2 = (char)bVar3;
    }
    if (cVar2 == '\0') {
      __this_03.fields._version = (int32_t)size;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
      __this_03.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_03.fields._current = (Il2CppObject *)pSVar7;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      uVar4 = extraout_EAX;
      goto label_043233c4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_04.fields._version = (int32_t)size;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
    __this_04.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_04.fields._current = (Il2CppObject *)pSVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    uVar4 = extraout_EAX_00;
    if (lVar1 == 0) {
label_043233c4:
      return uVar4 & 0xffffff00;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_05.fields._version = (int32_t)size;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
  __this_05.fields._index = in_stack_ffffffffffffff88._8_4_;
  __this_05.fields._current = (Il2CppObject *)pSVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar6._0_8_);
}


