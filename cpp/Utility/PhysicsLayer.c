// Type: Utility.PhysicsLayer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/PhysicsLayer.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/PhysicsLayer.cs  [CHANGED since prior version]
// --------------------------------

// Utility.PhysicsLayer$$Init
// il2cpp: void Utility_PhysicsLayer__Init (const MethodInfo* method);
// 0x417ade0

void Utility_PhysicsLayer__Init(MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  int iVar3;
  MethodInfo *pMVar4;
  System_Int32_array *pSVar5;
  undefined1 auVar6 [16];
  
  if (DAT_05704b4b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_05704b4b = '\x01';
  }
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 4);
  auVar6 = il2cpp_glue_02274930(TypeInfo_int,0);
  Utility_PhysicsLayer__SetLayerCollisions(iVar1,auVar6._0_8_,auVar6._8_8_);
  iVar1 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 8);
  pSVar5 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,3);
  if (pSVar5 == (System_Int32_array *)0x0) goto LAB_0417b6ad;
  uVar2 = (uint)pSVar5->max_length;
  if (uVar2 != 0) {
    pMVar4 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
    pSVar5->m_Items[0] = *(int32_t *)((long)&pMVar4->virtualMethodPointer + 4);
    if ((uVar2 != 1) &&
       (pSVar5->m_Items[1] = *(int32_t *)((long)&pMVar4->invoker_method + 4), 2 < uVar2)) {
      pSVar5->m_Items[2] = *(int32_t *)&pMVar4->name;
      Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,pMVar4);
      iVar1 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0xc);
      pSVar5 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,8);
      if (pSVar5 == (System_Int32_array *)0x0) goto LAB_0417b6ad;
      uVar2 = (uint)pSVar5->max_length;
      if (uVar2 != 0) {
        pMVar4 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
        pSVar5->m_Items[0] = *(int32_t *)&pMVar4->virtualMethodPointer;
        if (((((uVar2 != 1) &&
              (pSVar5->m_Items[1] = *(int32_t *)((long)&pMVar4->invoker_method + 4), 2 < uVar2)) &&
             (pSVar5->m_Items[2] = *(int32_t *)((long)&pMVar4->name + 4), uVar2 != 3)) &&
            ((pSVar5->m_Items[3] = *(int32_t *)((long)&pMVar4->klass + 4), 4 < uVar2 &&
             (pSVar5->m_Items[4] = *(int32_t *)((long)&pMVar4->field7_0x38 + 4), uVar2 != 5)))) &&
           ((pSVar5->m_Items[5] = *(int32_t *)&pMVar4->field7_0x38, 6 < uVar2 &&
            (pSVar5->m_Items[6] = *(int32_t *)((long)&pMVar4->parameters + 4), uVar2 != 7)))) {
          pSVar5->m_Items[7] = *(int32_t *)&pMVar4->field_0x54;
          Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,pMVar4);
          iVar1 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x10);
          pSVar5 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,6);
          if (pSVar5 == (System_Int32_array *)0x0) goto LAB_0417b6ad;
          uVar2 = (uint)pSVar5->max_length;
          if (uVar2 != 0) {
            pMVar4 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
            pSVar5->m_Items[0] = *(int32_t *)&pMVar4->invoker_method;
            if (((uVar2 != 1) &&
                (pSVar5->m_Items[1] = *(int32_t *)((long)&pMVar4->klass + 4), 2 < uVar2)) &&
               ((pSVar5->m_Items[2] = *(int32_t *)((long)&pMVar4->field7_0x38 + 4), uVar2 != 3 &&
                ((pSVar5->m_Items[3] = *(int32_t *)&pMVar4->field7_0x38, 4 < uVar2 &&
                 (pSVar5->m_Items[4] = *(int32_t *)((long)&pMVar4->parameters + 4), uVar2 != 5))))))
            {
              pSVar5->m_Items[5] = *(int32_t *)&pMVar4->slot;
              Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,pMVar4);
              iVar1 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x14);
              pSVar5 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,4);
              if (pSVar5 == (System_Int32_array *)0x0) goto LAB_0417b6ad;
              uVar2 = (uint)pSVar5->max_length;
              if (uVar2 != 0) {
                pMVar4 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                pSVar5->m_Items[0] = *(int32_t *)&pMVar4->virtualMethodPointer;
                if (((uVar2 != 1) &&
                    (pSVar5->m_Items[1] = *(int32_t *)((long)&pMVar4->virtualMethodPointer + 4),
                    2 < uVar2)) &&
                   (pSVar5->m_Items[2] = *(int32_t *)((long)&pMVar4->name + 4), uVar2 != 3)) {
                  pSVar5->m_Items[3] = *(int32_t *)&pMVar4->return_type;
                  Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,pMVar4);
                  iVar1 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x1c);
                  pSVar5 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,6);
                  if (pSVar5 == (System_Int32_array *)0x0) goto LAB_0417b6ad;
                  uVar2 = (uint)pSVar5->max_length;
                  if (uVar2 != 0) {
                    pMVar4 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                    pSVar5->m_Items[0] = *(int32_t *)((long)&pMVar4->virtualMethodPointer + 4);
                    if (((uVar2 != 1) &&
                        (pSVar5->m_Items[1] = *(int32_t *)((long)&pMVar4->invoker_method + 4),
                        2 < uVar2)) &&
                       ((pSVar5->m_Items[2] = *(int32_t *)&pMVar4->klass, uVar2 != 3 &&
                        ((pSVar5->m_Items[3] = *(int32_t *)&pMVar4->field7_0x38, 4 < uVar2 &&
                         (pSVar5->m_Items[4] = *(int32_t *)((long)&pMVar4->field7_0x38 + 4),
                         uVar2 != 5)))))) {
                      pSVar5->m_Items[5] = *(int32_t *)&pMVar4->parameters;
                      Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,pMVar4);
                      iVar1 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x20);
                      auVar6 = il2cpp_glue_02274930(TypeInfo_int,1);
                      pSVar5 = auVar6._0_8_;
                      if (pSVar5 == (System_Int32_array *)0x0) {
LAB_0417b6ad:
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      if ((int)pSVar5->max_length != 0) {
                        pSVar5->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x1c);
                        Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,auVar6._8_8_);
                        iVar1 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x24);
                        pSVar5 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,2);
                        if (pSVar5 == (System_Int32_array *)0x0) goto LAB_0417b6ad;
                        iVar3 = (int)pSVar5->max_length;
                        if (iVar3 != 0) {
                          pMVar4 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                          pSVar5->m_Items[0] = *(int32_t *)((long)&pMVar4->virtualMethodPointer + 4)
                          ;
                          if (iVar3 != 1) {
                            pSVar5->m_Items[1] = *(int32_t *)&pMVar4->invoker_method;
                            Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,pMVar4);
                            iVar1 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x28);
                            pSVar5 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,4);
                            if (pSVar5 == (System_Int32_array *)0x0) goto LAB_0417b6ad;
                            uVar2 = (uint)pSVar5->max_length;
                            if (uVar2 != 0) {
                              pMVar4 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                              pSVar5->m_Items[0] = *(int32_t *)((long)&pMVar4->invoker_method + 4);
                              if (((uVar2 != 1) &&
                                  (pSVar5->m_Items[1] = *(int32_t *)((long)&pMVar4->parameters + 4),
                                  2 < uVar2)) &&
                                 (pSVar5->m_Items[2] = *(int32_t *)&pMVar4->field7_0x38, uVar2 != 3)
                                 ) {
                                pSVar5->m_Items[3] = *(int32_t *)((long)&pMVar4->field7_0x38 + 4);
                                Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,pMVar4);
                                iVar1 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x18);
                                auVar6 = il2cpp_glue_02274930(TypeInfo_int,1);
                                pSVar5 = auVar6._0_8_;
                                if (pSVar5 == (System_Int32_array *)0x0) goto LAB_0417b6ad;
                                if ((int)pSVar5->max_length != 0) {
                                  pSVar5->m_Items[0] =
                                       *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 8);
                                  Utility_PhysicsLayer__SetLayerCollisions
                                            (iVar1,pSVar5,auVar6._8_8_);
                                  iVar1 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x2c);
                                  pSVar5 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,7);
                                  if (pSVar5 == (System_Int32_array *)0x0) goto LAB_0417b6ad;
                                  uVar2 = (uint)pSVar5->max_length;
                                  if (uVar2 != 0) {
                                    pMVar4 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                                    pSVar5->m_Items[0] =
                                         *(int32_t *)((long)&pMVar4->field7_0x38 + 4);
                                    if ((((uVar2 != 1) &&
                                         (pSVar5->m_Items[1] =
                                               *(int32_t *)((long)&pMVar4->return_type + 4),
                                         2 < uVar2)) &&
                                        ((pSVar5->m_Items[2] = *(int32_t *)&pMVar4->parameters,
                                         uVar2 != 3 &&
                                         ((pSVar5->m_Items[3] = *(int32_t *)&pMVar4->slot, 4 < uVar2
                                          && (pSVar5->m_Items[4] = *(int32_t *)&pMVar4->field_0x54,
                                             uVar2 != 5)))))) &&
                                       (pSVar5->m_Items[5] =
                                             *(int32_t *)((long)&pMVar4->parameters + 4), 6 < uVar2)
                                       ) {
                                      pSVar5->m_Items[6] = *(int32_t *)&pMVar4->field7_0x38;
                                      Utility_PhysicsLayer__SetLayerCollisions(iVar1,pSVar5,pMVar4);
                                      iVar1 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x30);
                                      pSVar5 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,3);
                                      if (pSVar5 == (System_Int32_array *)0x0) goto LAB_0417b6ad;
                                      uVar2 = (uint)pSVar5->max_length;
                                      if (uVar2 != 0) {
                                        pMVar4 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                                        pSVar5->m_Items[0] =
                                             *(int32_t *)((long)&pMVar4->field7_0x38 + 4);
                                        if ((uVar2 != 1) &&
                                           (pSVar5->m_Items[1] =
                                                 *(int32_t *)((long)&pMVar4->return_type + 4),
                                           2 < uVar2)) {
                                          pSVar5->m_Items[2] = *(int32_t *)((long)&pMVar4->name + 4)
                                          ;
                                          Utility_PhysicsLayer__SetLayerCollisions
                                                    (iVar1,pSVar5,pMVar4);
                                          iVar1 = *(int32_t *)
                                                   (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x50);
                                          pSVar5 = (System_Int32_array *)
                                                   il2cpp_glue_02274930(TypeInfo_int,3);
                                          if (pSVar5 == (System_Int32_array *)0x0)
                                          goto LAB_0417b6ad;
                                          uVar2 = (uint)pSVar5->max_length;
                                          if (uVar2 != 0) {
                                            pMVar4 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                                            pSVar5->m_Items[0] =
                                                 *(int32_t *)((long)&pMVar4->field7_0x38 + 4);
                                            if ((uVar2 != 1) &&
                                               (pSVar5->m_Items[1] =
                                                     *(int32_t *)((long)&pMVar4->return_type + 4),
                                               2 < uVar2)) {
                                              pSVar5->m_Items[2] =
                                                   *(int32_t *)&pMVar4->invoker_method;
                                              Utility_PhysicsLayer__SetLayerCollisions
                                                        (iVar1,pSVar5,pMVar4);
                                              iVar1 = *(int32_t *)
                                                       (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x54);
                                              pSVar5 = (System_Int32_array *)
                                                       il2cpp_glue_02274930(TypeInfo_int,3);
                                              if (pSVar5 == (System_Int32_array *)0x0)
                                              goto LAB_0417b6ad;
                                              uVar2 = (uint)pSVar5->max_length;
                                              if (uVar2 != 0) {
                                                pMVar4 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                                                pSVar5->m_Items[0] =
                                                     *(int32_t *)((long)&pMVar4->field7_0x38 + 4);
                                                if ((uVar2 != 1) &&
                                                   (pSVar5->m_Items[1] =
                                                         *(int32_t *)
                                                          ((long)&pMVar4->return_type + 4),
                                                   2 < uVar2)) {
                                                  pSVar5->m_Items[2] =
                                                       *(int32_t *)
                                                        ((long)&pMVar4->virtualMethodPointer + 4);
                                                  Utility_PhysicsLayer__SetLayerCollisions
                                                            (iVar1,pSVar5,pMVar4);
                                                  iVar1 = *(int32_t *)
                                                           (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x34);
                                                  pSVar5 = (System_Int32_array *)
                                                           il2cpp_glue_02274930(TypeInfo_int,5);
                                                  if (pSVar5 == (System_Int32_array *)0x0)
                                                  goto LAB_0417b6ad;
                                                  uVar2 = (uint)pSVar5->max_length;
                                                  if (uVar2 != 0) {
                                                    pMVar4 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                                                    pSVar5->m_Items[0] =
                                                         *(int32_t *)
                                                          ((long)&pMVar4->field7_0x38 + 4);
                                                    if ((((uVar2 != 1) &&
                                                         (pSVar5->m_Items[1] =
                                                               *(int32_t *)
                                                                ((long)&pMVar4->return_type + 4),
                                                         2 < uVar2)) &&
                                                        (pSVar5->m_Items[2] =
                                                              *(int32_t *)
                                                               ((long)&pMVar4->virtualMethodPointer
                                                               + 4), uVar2 != 3)) &&
                                                       (pSVar5->m_Items[3] =
                                                             *(int32_t *)&pMVar4->invoker_method,
                                                       4 < uVar2)) {
                                                      pSVar5->m_Items[4] =
                                                           *(int32_t *)&pMVar4->return_type;
                                                      Utility_PhysicsLayer__SetLayerCollisions
                                                                (iVar1,pSVar5,pMVar4);
                                                      iVar1 = *(int32_t *)
                                                               (*(long *)(TypeInfo_PhysicsLayer + 0xb8) +
                                                               0x38);
                                                      pSVar5 = (System_Int32_array *)
                                                               il2cpp_glue_02274930(TypeInfo_int,6);
                                                      if (pSVar5 == (System_Int32_array *)0x0)
                                                      goto LAB_0417b6ad;
                                                      uVar2 = (uint)pSVar5->max_length;
                                                      if (uVar2 != 0) {
                                                        pMVar4 = *(MethodInfo **)
                                                                  (TypeInfo_PhysicsLayer + 0xb8);
                                                        pSVar5->m_Items[0] =
                                                             *(int32_t *)
                                                              ((long)&pMVar4->field7_0x38 + 4);
                                                        if (((uVar2 != 1) &&
                                                            (pSVar5->m_Items[1] =
                                                                  *(int32_t *)
                                                                   ((long)&pMVar4->return_type + 4),
                                                            2 < uVar2)) &&
                                                           ((pSVar5->m_Items[2] =
                                                                  *(int32_t *)
                                                                   &pMVar4->invoker_method,
                                                            uVar2 != 3 &&
                                                            ((pSVar5->m_Items[3] =
                                                                   *(int32_t *)
                                                                    ((long)&pMVar4->
                                                  virtualMethodPointer + 4), 4 < uVar2 &&
                                                  (pSVar5->m_Items[4] =
                                                        *(int32_t *)((long)&pMVar4->name + 4),
                                                  uVar2 != 5)))))) {
                                                    pSVar5->m_Items[5] =
                                                         *(int32_t *)&pMVar4->return_type;
                                                    Utility_PhysicsLayer__SetLayerCollisions
                                                              (iVar1,pSVar5,pMVar4);
                                                    iVar1 = *(int32_t *)
                                                             (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x3c)
                                                    ;
                                                    pSVar5 = (System_Int32_array *)
                                                             il2cpp_glue_02274930(TypeInfo_int,0xb);
                                                    if (pSVar5 == (System_Int32_array *)0x0)
                                                    goto LAB_0417b6ad;
                                                    uVar2 = (uint)pSVar5->max_length;
                                                    if (uVar2 != 0) {
                                                      pMVar4 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8)
                                                      ;
                                                      pSVar5->m_Items[0] =
                                                           *(int32_t *)
                                                            ((long)&pMVar4->virtualMethodPointer + 4
                                                            );
                                                      if ((((((uVar2 != 1) &&
                                                             (pSVar5->m_Items[1] =
                                                                   *(int32_t *)
                                                                    &pMVar4->invoker_method,
                                                             2 < uVar2)) &&
                                                            (pSVar5->m_Items[2] =
                                                                  *(int32_t *)
                                                                   ((long)&pMVar4->name + 4),
                                                            uVar2 != 3)) &&
                                                           ((pSVar5->m_Items[3] =
                                                                  *(int32_t *)
                                                                   ((long)&pMVar4->field7_0x38 + 4),
                                                            4 < uVar2 &&
                                                            (pSVar5->m_Items[4] =
                                                                  *(int32_t *)&pMVar4->slot,
                                                            uVar2 != 5)))) &&
                                                          (((pSVar5->m_Items[5] =
                                                                  *(int32_t *)&pMVar4->field_0x54,
                                                            6 < uVar2 &&
                                                            ((pSVar5->m_Items[6] =
                                                                   *(int32_t *)
                                                                    ((long)&pMVar4->return_type + 4)
                                                             , uVar2 != 7 &&
                                                             (pSVar5->m_Items[7] =
                                                                   *(int32_t *)&pMVar4->field7_0x38,
                                                             8 < uVar2)))) &&
                                                           (pSVar5->m_Items[8] =
                                                                 *(int32_t *)
                                                                  ((long)&pMVar4->parameters + 4),
                                                           uVar2 != 9)))) &&
                                                         (pSVar5->m_Items[9] =
                                                               *(int32_t *)&pMVar4->parameters,
                                                         10 < uVar2)) {
                                                        pSVar5->m_Items[10] =
                                                             *(int32_t *)&pMVar4->return_type;
                                                        Utility_PhysicsLayer__SetLayerCollisions
                                                                  (iVar1,pSVar5,pMVar4);
                                                        iVar1 = *(int32_t *)
                                                                 (*(long *)(TypeInfo_PhysicsLayer + 0xb8) +
                                                                 0x40);
                                                        auVar6 = il2cpp_glue_02274930(TypeInfo_int,0);
                                                        Utility_PhysicsLayer__SetLayerCollisions
                                                                  (iVar1,auVar6._0_8_,auVar6._8_8_);
                                                        iVar1 = *(int32_t *)
                                                                 (*(long *)(TypeInfo_PhysicsLayer + 0xb8) +
                                                                 0x44);
                                                        auVar6 = il2cpp_glue_02274930(TypeInfo_int,0);
                                                        Utility_PhysicsLayer__SetLayerCollisions
                                                                  (iVar1,auVar6._0_8_,auVar6._8_8_);
                                                        iVar1 = *(int32_t *)
                                                                 (*(long *)(TypeInfo_PhysicsLayer + 0xb8) +
                                                                 0x48);
                                                        auVar6 = il2cpp_glue_02274930(TypeInfo_int,0);
                                                        Utility_PhysicsLayer__SetLayerCollisions
                                                                  (iVar1,auVar6._0_8_,auVar6._8_8_);
                                                        iVar1 = *(int32_t *)
                                                                 (*(long *)(TypeInfo_PhysicsLayer + 0xb8) +
                                                                 0x4c);
                                                        auVar6 = il2cpp_glue_02274930(TypeInfo_int,0);
                                                        Utility_PhysicsLayer__SetLayerCollisions
                                                                  (iVar1,auVar6._0_8_,auVar6._8_8_);
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.PhysicsLayer$$GetMask
// il2cpp: UnityEngine_LayerMask_o Utility_PhysicsLayer__GetMask (System_Int32_array* layers, const MethodInfo* method);
// 0x417b810

UnityEngine_LayerMask_o Utility_PhysicsLayer__GetMask(System_Int32_array *layers,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (layers == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (layers->max_length == 0) {
    UVar1 = UnityEngine_LayerMask__op_Implicit(0,(MethodInfo *)0x0);
    return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar1;
  }
  if ((int)layers->max_length != 0) {
    UVar1 = UnityEngine_LayerMask__op_Implicit
                      (1 << ((byte)layers->m_Items[0] & 0x1f),(MethodInfo *)0x0);
    if (1 < (int)layers->max_length) {
      lVar3 = 9;
      do {
        uVar2 = UnityEngine_LayerMask__op_Implicit(UVar1,(MethodInfo *)0x0);
        if ((ulong)(uint)layers->max_length <= lVar3 - 8U) goto LAB_0417b89f;
        UVar1 = UnityEngine_LayerMask__op_Implicit
                          (uVar2 | 1 << ((byte)layers->m_Items[lVar3 + -8] & 0x1f),(MethodInfo *)0x0
                          );
        lVar4 = lVar3 + -7;
        lVar3 = lVar3 + 1;
      } while (lVar4 < (int)layers->max_length);
    }
    return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar1;
  }
LAB_0417b89f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.PhysicsLayer$$CopyMask
// il2cpp: UnityEngine_LayerMask_o Utility_PhysicsLayer__CopyMask (int32_t originLayer, const MethodInfo* method);
// 0x417b8b0

UnityEngine_LayerMask_o Utility_PhysicsLayer__CopyMask(int32_t originLayer,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__LayerMask__o *__this;
  UnityEngine_LayerMask_o UVar2;
  
  if (DAT_05704b4c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayerMask_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_05704b4c = '\x01';
    iVar1 = *(int *)(TypeInfo_PhysicsLayer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhysicsLayer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Collections_Generic_Dictionary_int__LayerMask__o **)
              (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x58);
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_int__LayerMask__o **)
              (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x58);
  }
  if (__this != (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) {
    UVar2 = System_Collections_Generic_Dictionary<int__LayerMask>__get_Item
                      (__this,originLayer,MethodInfo_LayerMask_get_Item);
    return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.PhysicsLayer$$SetLayerCollisions
// il2cpp: void Utility_PhysicsLayer__SetLayerCollisions (int32_t layer, System_Int32_array* others, const MethodInfo* method);
// 0x417b6c0

void Utility_PhysicsLayer__SetLayerCollisions
               (int32_t layer,System_Int32_array *others,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__LayerMask__o *__this;
  UnityEngine_LayerMask_o value;
  uint uVar2;
  MethodInfo *method_00;
  ulong uVar3;
  
  if (DAT_05704b4d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05704b4d = '\x01';
  }
  uVar2 = 0;
  iVar1 = *(int *)(TypeInfo_Physics + 0xe4);
  while( true ) {
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)(ulong)uVar2;
    UnityEngine_Physics__IgnoreLayerCollision(layer,uVar2,1,(MethodInfo *)0x0);
    uVar2 = uVar2 + 1;
    if (uVar2 == 0x20) break;
    iVar1 = *(int *)(TypeInfo_Physics + 0xe4);
  }
  if (others != (System_Int32_array *)0x0) {
    if (0 < (int)others->max_length) {
      uVar3 = 0;
      if ((others->max_length & 0xffffffff) != 0) {
        do {
          uVar2 = others->m_Items[uVar3];
          method_00 = (MethodInfo *)(ulong)uVar2;
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Physics__IgnoreLayerCollision(layer,uVar2,0,(MethodInfo *)0x0);
          uVar3 = uVar3 + 1;
          uVar2 = (uint)others->max_length;
          if ((long)(int)uVar2 <= (long)uVar3) goto LAB_0417b7ad;
        } while (uVar3 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_0417b7ad:
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = *(System_Collections_Generic_Dictionary_int__LayerMask__o **)
              (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x58);
    value = Utility_PhysicsLayer__GetMask(others,method_00);
    if (__this != (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) {
      System_Collections_Generic_Dictionary<int__LayerMask>__Add(__this,layer,value,MethodInfo_Void_Add);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.PhysicsLayer$$.ctor
// il2cpp: void Utility_PhysicsLayer___ctor (Utility_PhysicsLayer_o* __this, const MethodInfo* method);
// 0x417b950

void Utility_PhysicsLayer___ctor(Utility_PhysicsLayer_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.PhysicsLayer$$.cctor
// il2cpp: void Utility_PhysicsLayer___cctor (const MethodInfo* method);
// 0x417b960

void Utility_PhysicsLayer___cctor(MethodInfo *method)

{
  undefined8 *puVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_int__LayerMask__o *__this;
  
  if (DAT_05704b4e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_LayerMask);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__LayerMask);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_05704b4e = '\x01';
  }
  puVar1 = *(undefined8 **)(TypeInfo_PhysicsLayer + 0xb8);
  *puVar1 = 0x800000005;
  puVar1[1] = 0xa00000009;
  puVar1[2] = 0xc0000000b;
  puVar1[3] = 0xe0000000d;
  puVar1[4] = 0x100000000f;
  puVar1[5] = 0x1400000011;
  puVar1[6] = 0x1600000015;
  puVar1[7] = 0x1800000017;
  *(undefined4 *)(puVar1 + 8) = 0x19;
  *(undefined4 *)((long)puVar1 + 0x44) = 0x1a;
  *(undefined4 *)(puVar1 + 9) = 0x1b;
  *(undefined4 *)((long)puVar1 + 0x4c) = 0x1c;
  puVar1[10] = 0x1e0000001d;
  __this = (System_Collections_Generic_Dictionary_int__LayerMask__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_int__LayerMask);
  System_Collections_Generic_Dictionary<int__LayerMask>___ctor(__this,MethodInfo_Dictionary_2_System_Int32_UnityEngine_LayerMask);
  lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
  *(System_Collections_Generic_Dictionary_int__LayerMask__o **)(lVar2 + 0x58) = __this;
  il2cpp_runtime_glue(lVar2 + 0x58,__this);
  return;
}


