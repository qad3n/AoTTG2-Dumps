// Type: CustomLogic.CustomLogicSymbols
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSymbols.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicSymbols.cs
// --------------------------------

// CustomLogic.CustomLogicSymbols$$Init
// il2cpp: void CustomLogic_CustomLogicSymbols__Init (const MethodInfo* method);
// 0x425e6c0

void CustomLogic_CustomLogicSymbols__Init(MethodInfo *method)

{
  code cVar1;
  int iVar2;
  MethodInfo *method_00;
  
  if (g_data_057adc0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    g_data_057adc0e = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_CustomLogicSymbols[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_CustomLogicSymbols[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = TypeInfo_CustomLogicSymbols[2].virtualMethodPointer[0x30];
    method_00 = TypeInfo_CustomLogicSymbols;
  }
  else {
    cVar1 = TypeInfo_CustomLogicSymbols[2].virtualMethodPointer[0x30];
    method_00 = TypeInfo_CustomLogicSymbols;
  }
  if (cVar1 != (code)0x0) {
    TypeInfo_CustomLogicSymbols = method_00;
    return;
  }
  TypeInfo_CustomLogicSymbols = method_00;
  if (*(int *)((long)&method_00[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_CustomLogicSymbols__ClearSymbols(method_00);
  CustomLogic_CustomLogicSymbols__AddSymbols(method_00);
  CustomLogic_CustomLogicSymbols__CategorizeSymbols(method_00);
  TypeInfo_CustomLogicSymbols[2].virtualMethodPointer[0x30] = (code)0x1;
  return;
}


// CustomLogic.CustomLogicSymbols$$ClearSymbols
// il2cpp: void CustomLogic_CustomLogicSymbols__ClearSymbols (const MethodInfo* method);
// 0x4265290

void CustomLogic_CustomLogicSymbols__ClearSymbols(MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_object__int__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Collections_Generic_Dictionary_int__int__o *pSVar4;
  System_Collections_Generic_HashSet_int__o *pSVar5;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_03;
  System_Array_o *pSVar10;
  long *plVar11;
  Il2CppRGCTXData *unaff_RBX;
  ulong uVar12;
  long lVar13;
  long *unaff_R15;
  undefined1 auVar14 [12];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar15;
  Il2CppType *pIVar16;
  Il2CppObject *pIVar17;
  Il2CppObject *pIVar18;
  undefined1 auStack_78 [16];
  Il2CppObject *pIStack_68;
  Il2CppRGCTXData *pIStack_60;
  
  if (g_data_057adc0f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057adc0f = '\x01';
    iVar7 = *(int *)(TypeInfo_CustomLogicSymbols + 0xe4);
  }
  else {
    iVar7 = *(int *)(TypeInfo_CustomLogicSymbols + 0xe4);
  }
  if (iVar7 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8);
  }
  else {
    pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary_object__int___Clear(pSVar2,MethodInfo_Void_Clear);
    pSVar3 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 8);
    if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      unaff_RBX = (Il2CppRGCTXData *)&MethodInfo_Void_Clear;
      System_Collections_Generic_HashSet_object___Clear(pSVar3,MethodInfo_Void_Clear);
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x10);
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Clear(pSVar3,MethodInfo_Void_Clear);
        pSVar4 = *(System_Collections_Generic_Dictionary_int__int__o **)
                  (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
        if (pSVar4 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
          System_Collections_Generic_Dictionary_int__int___Clear(pSVar4,MethodInfo_Void_Clear);
          pSVar5 = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x20);
          if (pSVar5 != (System_Collections_Generic_HashSet_int__o *)0x0) {
            unaff_RBX = (Il2CppRGCTXData *)&MethodInfo_Void_Clear;
            System_Collections_Generic_HashSet_int___Clear(pSVar5,MethodInfo_Void_Clear);
            pSVar5 = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x28);
            if (pSVar5 != (System_Collections_Generic_HashSet_int__o *)0x0) {
              System_Collections_Generic_HashSet_int___Clear(pSVar5,MethodInfo_Void_Clear);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"{");
    il2cpp_runtime_helper_023445d0(&"&&");
    il2cpp_runtime_helper_023445d0(&"!");
    il2cpp_runtime_helper_023445d0(&"/=");
    il2cpp_runtime_helper_023445d0(&"=");
    il2cpp_runtime_helper_023445d0(&"+");
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"cutscene");
    il2cpp_runtime_helper_023445d0(&"<=");
    il2cpp_runtime_helper_023445d0(&">=");
    il2cpp_runtime_helper_023445d0(&"elif");
    il2cpp_runtime_helper_023445d0(&"-");
    il2cpp_runtime_helper_023445d0(&"else");
    il2cpp_runtime_helper_023445d0(&"+=");
    il2cpp_runtime_helper_023445d0(&"}");
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"class");
    il2cpp_runtime_helper_023445d0(&"if");
    il2cpp_runtime_helper_023445d0(&"component");
    il2cpp_runtime_helper_023445d0(&"%");
    il2cpp_runtime_helper_023445d0(&"<");
    il2cpp_runtime_helper_023445d0(&"function");
    il2cpp_runtime_helper_023445d0(&"addon");
    il2cpp_runtime_helper_023445d0(&"==");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"extension");
    il2cpp_runtime_helper_023445d0(&";");
    il2cpp_runtime_helper_023445d0(&"wait");
    il2cpp_runtime_helper_023445d0(&"continue");
    il2cpp_runtime_helper_023445d0(&"(");
    il2cpp_runtime_helper_023445d0(&"while");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"||");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"in");
    il2cpp_runtime_helper_023445d0(&"*=");
    il2cpp_runtime_helper_023445d0(&"\"");
    il2cpp_runtime_helper_023445d0(&"break");
    il2cpp_runtime_helper_023445d0(&"-=");
    il2cpp_runtime_helper_023445d0(&"*");
    il2cpp_runtime_helper_023445d0(&"for");
    il2cpp_runtime_helper_023445d0(&">");
    il2cpp_runtime_helper_023445d0(&".");
    il2cpp_runtime_helper_023445d0(&"coroutine");
    il2cpp_runtime_helper_023445d0(&"!=");
    g_data_057adc10 = '\x01';
    iVar7 = *(int *)(TypeInfo_CustomLogicSymbols + 0xe4);
  }
  else {
    iVar7 = *(int *)(TypeInfo_CustomLogicSymbols + 0xe4);
  }
  if (iVar7 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8);
  }
  else {
    pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    unaff_RBX = (Il2CppRGCTXData *)&MethodInfo_Void_Add;
    System_Collections_Generic_Dictionary_object__int___Add(pSVar2,"class",1,MethodInfo_Void_Add);
    if ((System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      System_Collections_Generic_Dictionary_object__int___Add
                ((System_Collections_Generic_Dictionary_object__int__o *)
                 **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"extension",2,MethodInfo_Void_Add);
      if ((System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        System_Collections_Generic_Dictionary_object__int___Add
                  ((System_Collections_Generic_Dictionary_object__int__o *)
                   **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"addon",3,MethodInfo_Void_Add);
        if ((System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
            (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
          System_Collections_Generic_Dictionary_object__int___Add
                    ((System_Collections_Generic_Dictionary_object__int__o *)
                     **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"component",0,MethodInfo_Void_Add);
          if ((System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8)
              != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
            System_Collections_Generic_Dictionary_object__int___Add
                      ((System_Collections_Generic_Dictionary_object__int__o *)
                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"cutscene",4,MethodInfo_Void_Add);
            if ((System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8)
                != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
              System_Collections_Generic_Dictionary_object__int___Add
                        ((System_Collections_Generic_Dictionary_object__int__o *)
                         **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"function",5,MethodInfo_Void_Add);
              if ((System_Collections_Generic_Dictionary_object__int__o *)
                  **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                  (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                System_Collections_Generic_Dictionary_object__int___Add
                          ((System_Collections_Generic_Dictionary_object__int__o *)
                           **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"coroutine",6,MethodInfo_Void_Add);
                if ((System_Collections_Generic_Dictionary_object__int__o *)
                    **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                    (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__int___Add
                            ((System_Collections_Generic_Dictionary_object__int__o *)
                             **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"wait",7,MethodInfo_Void_Add);
                  if ((System_Collections_Generic_Dictionary_object__int__o *)
                      **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                      (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    System_Collections_Generic_Dictionary_object__int___Add
                              ((System_Collections_Generic_Dictionary_object__int__o *)
                               **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"null",8,MethodInfo_Void_Add);
                    if ((System_Collections_Generic_Dictionary_object__int__o *)
                        **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                        (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                      System_Collections_Generic_Dictionary_object__int___Add
                                ((System_Collections_Generic_Dictionary_object__int__o *)
                                 **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"return",0xd,MethodInfo_Void_Add);
                      if ((System_Collections_Generic_Dictionary_object__int__o *)
                          **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                          (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                        System_Collections_Generic_Dictionary_object__int___Add
                                  ((System_Collections_Generic_Dictionary_object__int__o *)
                                   **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"break",0xf,MethodInfo_Void_Add);
                        if ((System_Collections_Generic_Dictionary_object__int__o *)
                            **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                            (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                          System_Collections_Generic_Dictionary_object__int___Add
                                    ((System_Collections_Generic_Dictionary_object__int__o *)
                                     **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"continue",0xe,MethodInfo_Void_Add);
                          if ((System_Collections_Generic_Dictionary_object__int__o *)
                              **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                              (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                            System_Collections_Generic_Dictionary_object__int___Add
                                      ((System_Collections_Generic_Dictionary_object__int__o *)
                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"if",0x27,MethodInfo_Void_Add);
                            if ((System_Collections_Generic_Dictionary_object__int__o *)
                                **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                              System_Collections_Generic_Dictionary_object__int___Add
                                        ((System_Collections_Generic_Dictionary_object__int__o *)
                                         **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"else",0x28,MethodInfo_Void_Add
                                        );
                              if ((System_Collections_Generic_Dictionary_object__int__o *)
                                  **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                  (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                System_Collections_Generic_Dictionary_object__int___Add
                                          ((System_Collections_Generic_Dictionary_object__int__o *)
                                           **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"elif",0x29,
                                           MethodInfo_Void_Add);
                                if ((System_Collections_Generic_Dictionary_object__int__o *)
                                    **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                    (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                  System_Collections_Generic_Dictionary_object__int___Add
                                            ((System_Collections_Generic_Dictionary_object__int__o *)
                                             **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"for",0x2b,
                                             MethodInfo_Void_Add);
                                  if ((System_Collections_Generic_Dictionary_object__int__o *)
                                      **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                      (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                    System_Collections_Generic_Dictionary_object__int___Add
                                              ((System_Collections_Generic_Dictionary_object__int__o *)
                                               **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"while",0x2a,
                                               MethodInfo_Void_Add);
                                    if ((System_Collections_Generic_Dictionary_object__int__o *)
                                        **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                        (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                      System_Collections_Generic_Dictionary_object__int___Add
                                                ((System_Collections_Generic_Dictionary_object__int__o *)
                                                 **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"in",0x2c,
                                                 MethodInfo_Void_Add);
                                      if ((System_Collections_Generic_Dictionary_object__int__o *)
                                          **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                          (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                        System_Collections_Generic_Dictionary_object__int___Add
                                                  ((System_Collections_Generic_Dictionary_object__int__o *)
                                                   **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"{",9,
                                                   MethodInfo_Void_Add);
                                        if ((System_Collections_Generic_Dictionary_object__int__o *)
                                            **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                            (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                          System_Collections_Generic_Dictionary_object__int___Add
                                                    ((System_Collections_Generic_Dictionary_object__int__o *)
                                                     **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"}",10,
                                                     MethodInfo_Void_Add);
                                          if ((System_Collections_Generic_Dictionary_object__int__o *)
                                              **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                              (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                            System_Collections_Generic_Dictionary_object__int___Add
                                                      ((System_Collections_Generic_Dictionary_object__int__o *
                                                       )**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"(",
                                                       0xb,MethodInfo_Void_Add);
                                            if ((System_Collections_Generic_Dictionary_object__int__o *)
                                                **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                              System_Collections_Generic_Dictionary_object__int___Add
                                                        ((System_Collections_Generic_Dictionary_object__int__o
                                                          *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                         ")",0xc,MethodInfo_Void_Add);
                                              if ((System_Collections_Generic_Dictionary_object__int__o *)
                                                  **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (System_Collections_Generic_Dictionary_object__int__o *)0x0)
                                              {
                                                System_Collections_Generic_Dictionary_object__int___Add
                                                          ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),";",
                                                       0x23,MethodInfo_Void_Add);
                                                if ((System_Collections_Generic_Dictionary_object__int__o *)
                                                    **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                    (System_Collections_Generic_Dictionary_object__int__o *)
                                                    0x0) {
                                                  System_Collections_Generic_Dictionary_object__int___Add
                                                            ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"\"",
                                                       0x24,MethodInfo_Void_Add);
                                                  if ((System_Collections_Generic_Dictionary_object__int__o *)
                                                      **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                      (System_Collections_Generic_Dictionary_object__int__o *)
                                                      0x0) {
                                                    System_Collections_Generic_Dictionary_object__int___Add
                                                              ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"=",
                                                       0x11,MethodInfo_Void_Add);
                                                    if ((System_Collections_Generic_Dictionary_object__int__o
                                                         *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                        (System_Collections_Generic_Dictionary_object__int__o
                                                         *)0x0) {
                                                      System_Collections_Generic_Dictionary_object__int___Add
                                                                ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"+=",
                                                       0x12,MethodInfo_Void_Add);
                                                      if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"-=",
                                                       0x13,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"*=",
                                                       0x14,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"/=",
                                                       0x15,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),",",
                                                       0x25,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),".",
                                                       0x26,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"||",
                                                       0x17,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"&&",
                                                       0x16,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"+",
                                                       0x1e,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"-",
                                                       0x1f,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"*",
                                                       0x20,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"/",
                                                       0x21,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"%",
                                                       0x22,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"==",
                                                       0x1c,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"!=",
                                                       0x1d,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"<",
                                                       0x18,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),">",
                                                       0x19,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),_DAT_055bf588,
                                                       0x1a,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),">=",
                                                       0x1b,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"!",
                                                       0x10,MethodInfo_Void_Add);
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
  il2cpp_runtime_helper_022b2c90();
  pIStack_60 = unaff_RBX;
  if (g_data_057adc11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&fld_04226ADAE818465BE5CD19E8A9550A792EA1B8F185AEEC114F3335BE);
    il2cpp_runtime_helper_023445d0(&fld_91B95CD461297F030EB678AC3AE924777791C7C75450AAC41C2F4B2E);
    il2cpp_runtime_helper_023445d0(&fld_AAA9A0887F1FFCCD7D9FAFD6C581C10DD56E042994AF9075C209B87C);
    il2cpp_runtime_helper_023445d0(&fld_E8913D2567E2C28E1D347DE0AB9FE97E1117D263D725E2F26406CCCD);
    il2cpp_runtime_helper_023445d0(&fld_ECAA48558A18E02C5C542171022961EC691B65B5B4F2EC078BD43973);
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"cutscene");
    il2cpp_runtime_helper_023445d0(&"elif");
    il2cpp_runtime_helper_023445d0(&"else");
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"class");
    il2cpp_runtime_helper_023445d0(&"if");
    il2cpp_runtime_helper_023445d0(&"component");
    il2cpp_runtime_helper_023445d0(&"function");
    il2cpp_runtime_helper_023445d0(&"addon");
    il2cpp_runtime_helper_023445d0(&"extension");
    il2cpp_runtime_helper_023445d0(&"wait");
    il2cpp_runtime_helper_023445d0(&"continue");
    il2cpp_runtime_helper_023445d0(&"while");
    il2cpp_runtime_helper_023445d0(&"in");
    il2cpp_runtime_helper_023445d0(&"break");
    il2cpp_runtime_helper_023445d0(&"for");
    il2cpp_runtime_helper_023445d0(&"coroutine");
    g_data_057adc11 = '\x01';
  }
  pSVar15 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar16 = (Il2CppType *)0x0;
  pIVar17 = (Il2CppObject *)0x0;
  lVar8 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,0x12);
  if (lVar8 == 0) goto label_0426691f;
  if (*(int *)(lVar8 + 0x18) == 0) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0x20) = "class";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x20);
  if (*(uint *)(lVar8 + 0x18) < 2) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0x28) = "component";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x28);
  if (*(uint *)(lVar8 + 0x18) < 3) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0x30) = "extension";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x30);
  if (*(uint *)(lVar8 + 0x18) < 4) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0x38) = "addon";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x38);
  if (*(uint *)(lVar8 + 0x18) < 5) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0x40) = "cutscene";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x40);
  if (*(uint *)(lVar8 + 0x18) < 6) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0x48) = "function";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x48);
  if (*(uint *)(lVar8 + 0x18) < 7) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0x50) = "coroutine";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x50);
  if (*(uint *)(lVar8 + 0x18) < 8) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0x58) = "wait";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x58);
  if (*(uint *)(lVar8 + 0x18) < 9) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0x60) = "null";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x60);
  if (*(uint *)(lVar8 + 0x18) < 10) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0x68) = "return";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x68);
  if (*(uint *)(lVar8 + 0x18) < 0xb) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0x70) = "break";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x70);
  if (*(uint *)(lVar8 + 0x18) < 0xc) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0x78) = "continue";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x78);
  if (*(uint *)(lVar8 + 0x18) < 0xd) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0x80) = "if";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x80);
  if (*(uint *)(lVar8 + 0x18) < 0xe) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0x88) = "else";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x88);
  if (*(uint *)(lVar8 + 0x18) < 0xf) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0x90) = "for";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x90);
  if (*(uint *)(lVar8 + 0x18) < 0x10) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0x98) = "while";
  il2cpp_runtime_helper_022b4080(lVar8 + 0x98);
  if (*(uint *)(lVar8 + 0x18) < 0x11) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0xa0) = "elif";
  il2cpp_runtime_helper_022b4080(lVar8 + 0xa0);
  if (*(uint *)(lVar8 + 0x18) < 0x12) goto label_0426691a;
  *(Il2CppObject **)(lVar8 + 0xa8) = "in";
  il2cpp_runtime_helper_022b4080(lVar8 + 0xa8);
  if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
    uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
    uVar12 = 0;
    unaff_R15 = &TypeInfo_CustomLogicSymbols;
    do {
      if (uVar9 <= uVar12) goto label_0426691a;
      pIVar18 = *(Il2CppObject **)(lVar8 + 0x20 + uVar12 * 8);
      if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x10);
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0426691f;
      System_Collections_Generic_HashSet_object___Add(pSVar3,pIVar18,MethodInfo_Boolean_Add);
      uVar12 = uVar12 + 1;
      uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
    } while ((long)uVar12 < (long)(int)*(uint *)(lVar8 + 0x18));
  }
  unaff_R15 = &TypeInfo_CustomLogicSymbols;
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) ==
      (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto label_0426691f;
  __this_03 = System_Collections_Generic_Dictionary_object__int___get_Keys
                        ((System_Collections_Generic_Dictionary_object__int__o *)
                         **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
  if (__this_03 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_0426691f;
  System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_78,
             __this_03,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  pSVar15 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)auStack_78._0_8_
  ;
  pIVar16 = (Il2CppType *)auStack_78._8_8_;
  while( true ) {
    do {
      pIVar18 = pIStack_68;
      __this.fields._8_8_ = pIVar16;
      __this.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15;
      __this.fields._currentKey = pIVar18;
      bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext
                        (__this,(MethodInfo_3250140 *)&stack0xffffffffffffff68);
      if ((char)bVar6 == '\0') {
        __this_00.fields._8_8_ = pIVar16;
        __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15;
        __this_00.fields._currentKey = pIVar18;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
                  (__this_00,(MethodInfo_3250130 *)&stack0xffffffffffffff68);
        goto label_04266488;
      }
      pIVar17 = pIVar18;
      if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x10);
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_04266924;
      bVar6 = System_Collections_Generic_HashSet_object___Contains(pSVar3,pIVar18,MethodInfo_Boolean_Contains);
      pIStack_68 = pIVar17;
    } while ((char)bVar6 != '\0');
    if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 8);
    if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
    System_Collections_Generic_HashSet_object___Add(pSVar3,pIVar18,MethodInfo_Boolean_Add);
    pIStack_68 = pIVar17;
  }
  do {
    auVar14 = il2cpp_runtime_helper_022b2c90();
    if (auVar14._8_4_ != 1) {
label_042669a5:
      __this_02.fields._8_8_ = pIVar16;
      __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15;
      __this_02.fields._currentKey = pIVar17;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
                (__this_02,(MethodInfo_3250130 *)&stack0xffffffffffffff68);
      _Unwind_Resume(auVar14._0_8_);
    }
    plVar11 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar8 = *plVar11;
    __cxa_end_catch();
    __this_01.fields._8_8_ = pIVar16;
    __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15;
    __this_01.fields._currentKey = pIVar17;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
              (__this_01,(MethodInfo_3250130 *)&stack0xffffffffffffff68);
    pIVar18 = pIVar17;
    if (lVar8 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar8);
      goto label_042669a5;
    }
label_04266488:
    lVar8 = *unaff_R15;
    pIVar17 = pIVar18;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar8 = *unaff_R15;
      pIVar17 = pIVar18;
    }
    pSVar4 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(lVar8 + 0xb8) + 0x18);
    if (pSVar4 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
      System_Collections_Generic_Dictionary_int__int___Add(pSVar4,0x11,0,MethodInfo_Void_Add);
      pSVar10 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,4);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                (pSVar10,fld_91B95CD461297F030EB678AC3AE924777791C7C75450AAC41C2F4B2E,(MethodInfo *)0x0);
      if (pSVar10 != (System_Array_o *)0x0) {
        if (0 < (int)pSVar10[1].monitor) {
          uVar9 = (ulong)pSVar10[1].monitor & 0xffffffff;
          uVar12 = 0;
          do {
            if (uVar9 <= uVar12) goto label_0426691a;
            iVar1 = *(int32_t *)((long)&pSVar10[2].klass + uVar12 * 4);
            lVar8 = *unaff_R15;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              lVar8 = *unaff_R15;
            }
            pSVar4 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(lVar8 + 0xb8) + 0x18);
            if (pSVar4 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_0426691f;
            System_Collections_Generic_Dictionary_int__int___Add(pSVar4,iVar1,0,MethodInfo_Void_Add);
            uVar12 = uVar12 + 1;
            uVar9 = (ulong)*(uint *)&pSVar10[1].monitor;
          } while ((long)uVar12 < (long)(int)*(uint *)&pSVar10[1].monitor);
        }
        lVar8 = il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,2);
        if (lVar8 != 0) {
          iVar7 = (int)*(ulong *)(lVar8 + 0x18);
          if ((iVar7 == 0) || (*(undefined4 *)(lVar8 + 0x20) = 0x17, iVar7 == 1)) {
label_0426691a:
            il2cpp_runtime_helper_022b2ca0();
          }
          else {
            *(undefined4 *)(lVar8 + 0x24) = 0x16;
            if (0 < iVar7) {
              uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
              uVar12 = 0;
              do {
                if (uVar9 <= uVar12) goto label_0426691a;
                iVar1 = *(int32_t *)(lVar8 + 0x20 + uVar12 * 4);
                lVar13 = *unaff_R15;
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  lVar13 = *unaff_R15;
                }
                pSVar4 = *(System_Collections_Generic_Dictionary_int__int__o **)
                          (*(long *)(lVar13 + 0xb8) + 0x18);
                if (pSVar4 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_0426691f;
                System_Collections_Generic_Dictionary_int__int___Add(pSVar4,iVar1,1,MethodInfo_Void_Add);
                uVar12 = uVar12 + 1;
                uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
              } while ((long)uVar12 < (long)(int)*(uint *)(lVar8 + 0x18));
            }
            pSVar10 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,6);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                      (pSVar10,fld_04226ADAE818465BE5CD19E8A9550A792EA1B8F185AEEC114F3335BE,(MethodInfo *)0x0);
            if (pSVar10 != (System_Array_o *)0x0) {
              if (0 < (int)pSVar10[1].monitor) {
                uVar9 = (ulong)pSVar10[1].monitor & 0xffffffff;
                uVar12 = 0;
                do {
                  if (uVar9 <= uVar12) goto label_0426691a;
                  iVar1 = *(int32_t *)((long)&pSVar10[2].klass + uVar12 * 4);
                  lVar8 = *unaff_R15;
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    lVar8 = *unaff_R15;
                  }
                  pSVar4 = *(System_Collections_Generic_Dictionary_int__int__o **)
                            (*(long *)(lVar8 + 0xb8) + 0x18);
                  if (pSVar4 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_0426691f;
                  System_Collections_Generic_Dictionary_int__int___Add(pSVar4,iVar1,2,MethodInfo_Void_Add);
                  uVar12 = uVar12 + 1;
                  uVar9 = (ulong)*(uint *)&pSVar10[1].monitor;
                } while ((long)uVar12 < (long)(int)*(uint *)&pSVar10[1].monitor);
              }
              lVar8 = il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,2);
              if (lVar8 != 0) {
                iVar7 = (int)*(ulong *)(lVar8 + 0x18);
                if ((iVar7 == 0) || (*(undefined4 *)(lVar8 + 0x20) = 0x1e, iVar7 == 1)) goto label_0426691a;
                *(undefined4 *)(lVar8 + 0x24) = 0x1f;
                if (0 < iVar7) {
                  uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                  uVar12 = 0;
                  do {
                    if (uVar9 <= uVar12) goto label_0426691a;
                    iVar1 = *(int32_t *)(lVar8 + 0x20 + uVar12 * 4);
                    lVar13 = *unaff_R15;
                    if (*(int *)(lVar13 + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      lVar13 = *unaff_R15;
                    }
                    pSVar4 = *(System_Collections_Generic_Dictionary_int__int__o **)
                              (*(long *)(lVar13 + 0xb8) + 0x18);
                    if (pSVar4 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_0426691f;
                    System_Collections_Generic_Dictionary_int__int___Add(pSVar4,iVar1,3,MethodInfo_Void_Add);
                    uVar12 = uVar12 + 1;
                    uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
                  } while ((long)uVar12 < (long)(int)*(uint *)(lVar8 + 0x18));
                }
                pSVar10 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,3);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                          (pSVar10,fld_E8913D2567E2C28E1D347DE0AB9FE97E1117D263D725E2F26406CCCD,(MethodInfo *)0x0);
                if (pSVar10 != (System_Array_o *)0x0) {
                  if (0 < (int)pSVar10[1].monitor) {
                    uVar9 = (ulong)pSVar10[1].monitor & 0xffffffff;
                    uVar12 = 0;
                    do {
                      if (uVar9 <= uVar12) goto label_0426691a;
                      iVar1 = *(int32_t *)((long)&pSVar10[2].klass + uVar12 * 4);
                      lVar8 = *unaff_R15;
                      if (*(int *)(lVar8 + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        lVar8 = *unaff_R15;
                      }
                      pSVar4 = *(System_Collections_Generic_Dictionary_int__int__o **)
                                (*(long *)(lVar8 + 0xb8) + 0x18);
                      if (pSVar4 == (System_Collections_Generic_Dictionary_int__int__o *)0x0)
                      goto label_0426691f;
                      System_Collections_Generic_Dictionary_int__int___Add(pSVar4,iVar1,4,MethodInfo_Void_Add);
                      uVar12 = uVar12 + 1;
                      uVar9 = (ulong)*(uint *)&pSVar10[1].monitor;
                    } while ((long)uVar12 < (long)(int)*(uint *)&pSVar10[1].monitor);
                  }
                  pSVar10 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,5);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                            (pSVar10,fld_AAA9A0887F1FFCCD7D9FAFD6C581C10DD56E042994AF9075C209B87C,(MethodInfo *)0x0);
                  if (pSVar10 != (System_Array_o *)0x0) {
                    if (0 < (int)pSVar10[1].monitor) {
                      uVar9 = (ulong)pSVar10[1].monitor & 0xffffffff;
                      uVar12 = 0;
                      do {
                        if (uVar9 <= uVar12) goto label_0426691a;
                        iVar1 = *(int32_t *)((long)&pSVar10[2].klass + uVar12 * 4);
                        lVar8 = *unaff_R15;
                        if (*(int *)(lVar8 + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                          lVar8 = *unaff_R15;
                        }
                        pSVar5 = *(System_Collections_Generic_HashSet_int__o **)
                                  (*(long *)(lVar8 + 0xb8) + 0x20);
                        if (pSVar5 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0426691f;
                        System_Collections_Generic_HashSet_int___Add(pSVar5,iVar1,MethodInfo_Boolean_Add);
                        uVar12 = uVar12 + 1;
                        uVar9 = (ulong)*(uint *)&pSVar10[1].monitor;
                      } while ((long)uVar12 < (long)(int)*(uint *)&pSVar10[1].monitor);
                    }
                    pSVar10 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,4);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                              (pSVar10,fld_ECAA48558A18E02C5C542171022961EC691B65B5B4F2EC078BD43973,(MethodInfo *)0x0);
                    if (pSVar10 != (System_Array_o *)0x0) {
                      if ((int)pSVar10[1].monitor < 1) {
                        return;
                      }
                      uVar9 = (ulong)pSVar10[1].monitor & 0xffffffff;
                      uVar12 = 0;
                      while (uVar12 < uVar9) {
                        iVar1 = *(int32_t *)((long)&pSVar10[2].klass + uVar12 * 4);
                        lVar8 = *unaff_R15;
                        if (*(int *)(lVar8 + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                          lVar8 = *unaff_R15;
                        }
                        pSVar5 = *(System_Collections_Generic_HashSet_int__o **)
                                  (*(long *)(lVar8 + 0xb8) + 0x28);
                        if (pSVar5 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0426691f;
                        System_Collections_Generic_HashSet_int___Add(pSVar5,iVar1,MethodInfo_Boolean_Add);
                        uVar12 = uVar12 + 1;
                        uVar9 = (ulong)*(uint *)&pSVar10[1].monitor;
                        if ((long)(int)*(uint *)&pSVar10[1].monitor <= (long)uVar12) {
                          return;
                        }
                      }
                      goto label_0426691a;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
label_0426691f:
    il2cpp_runtime_helper_022b2c90();
label_04266924:
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// CustomLogic.CustomLogicSymbols$$AddSymbols
// il2cpp: void CustomLogic_CustomLogicSymbols__AddSymbols (const MethodInfo* method);
// 0x42653f0

void CustomLogic_CustomLogicSymbols__AddSymbols(MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_int__int__o *pSVar3;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  System_Array_o *pSVar9;
  long *plVar10;
  Il2CppRGCTXData *unaff_RBX;
  ulong uVar11;
  long lVar12;
  long *unaff_R15;
  undefined1 auVar13 [12];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar14;
  Il2CppType *pIVar15;
  Il2CppObject *pIVar16;
  Il2CppObject *pIVar17;
  undefined1 auStack_60 [16];
  Il2CppObject *pIStack_50;
  Il2CppRGCTXData *pIStack_48;
  
  if (g_data_057adc10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"{");
    il2cpp_runtime_helper_023445d0(&"&&");
    il2cpp_runtime_helper_023445d0(&"!");
    il2cpp_runtime_helper_023445d0(&"/=");
    il2cpp_runtime_helper_023445d0(&"=");
    il2cpp_runtime_helper_023445d0(&"+");
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"cutscene");
    il2cpp_runtime_helper_023445d0(&"<=");
    il2cpp_runtime_helper_023445d0(&">=");
    il2cpp_runtime_helper_023445d0(&"elif");
    il2cpp_runtime_helper_023445d0(&"-");
    il2cpp_runtime_helper_023445d0(&"else");
    il2cpp_runtime_helper_023445d0(&"+=");
    il2cpp_runtime_helper_023445d0(&"}");
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"class");
    il2cpp_runtime_helper_023445d0(&"if");
    il2cpp_runtime_helper_023445d0(&"component");
    il2cpp_runtime_helper_023445d0(&"%");
    il2cpp_runtime_helper_023445d0(&"<");
    il2cpp_runtime_helper_023445d0(&"function");
    il2cpp_runtime_helper_023445d0(&"addon");
    il2cpp_runtime_helper_023445d0(&"==");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"extension");
    il2cpp_runtime_helper_023445d0(&";");
    il2cpp_runtime_helper_023445d0(&"wait");
    il2cpp_runtime_helper_023445d0(&"continue");
    il2cpp_runtime_helper_023445d0(&"(");
    il2cpp_runtime_helper_023445d0(&"while");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"||");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"in");
    il2cpp_runtime_helper_023445d0(&"*=");
    il2cpp_runtime_helper_023445d0(&"\"");
    il2cpp_runtime_helper_023445d0(&"break");
    il2cpp_runtime_helper_023445d0(&"-=");
    il2cpp_runtime_helper_023445d0(&"*");
    il2cpp_runtime_helper_023445d0(&"for");
    il2cpp_runtime_helper_023445d0(&">");
    il2cpp_runtime_helper_023445d0(&".");
    il2cpp_runtime_helper_023445d0(&"coroutine");
    il2cpp_runtime_helper_023445d0(&"!=");
    g_data_057adc10 = '\x01';
    iVar6 = *(int *)(TypeInfo_CustomLogicSymbols + 0xe4);
  }
  else {
    iVar6 = *(int *)(TypeInfo_CustomLogicSymbols + 0xe4);
  }
  if (iVar6 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = (System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8);
  }
  else {
    __this = (System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    unaff_RBX = (Il2CppRGCTXData *)&MethodInfo_Void_Add;
    System_Collections_Generic_Dictionary_object__int___Add(__this,"class",1,MethodInfo_Void_Add);
    if ((System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      System_Collections_Generic_Dictionary_object__int___Add
                ((System_Collections_Generic_Dictionary_object__int__o *)
                 **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"extension",2,MethodInfo_Void_Add);
      if ((System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        System_Collections_Generic_Dictionary_object__int___Add
                  ((System_Collections_Generic_Dictionary_object__int__o *)
                   **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"addon",3,MethodInfo_Void_Add);
        if ((System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
            (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
          System_Collections_Generic_Dictionary_object__int___Add
                    ((System_Collections_Generic_Dictionary_object__int__o *)
                     **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"component",0,MethodInfo_Void_Add);
          if ((System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8)
              != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
            System_Collections_Generic_Dictionary_object__int___Add
                      ((System_Collections_Generic_Dictionary_object__int__o *)
                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"cutscene",4,MethodInfo_Void_Add);
            if ((System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8)
                != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
              System_Collections_Generic_Dictionary_object__int___Add
                        ((System_Collections_Generic_Dictionary_object__int__o *)
                         **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"function",5,MethodInfo_Void_Add);
              if ((System_Collections_Generic_Dictionary_object__int__o *)
                  **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                  (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                System_Collections_Generic_Dictionary_object__int___Add
                          ((System_Collections_Generic_Dictionary_object__int__o *)
                           **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"coroutine",6,MethodInfo_Void_Add);
                if ((System_Collections_Generic_Dictionary_object__int__o *)
                    **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                    (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__int___Add
                            ((System_Collections_Generic_Dictionary_object__int__o *)
                             **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"wait",7,MethodInfo_Void_Add);
                  if ((System_Collections_Generic_Dictionary_object__int__o *)
                      **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                      (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    System_Collections_Generic_Dictionary_object__int___Add
                              ((System_Collections_Generic_Dictionary_object__int__o *)
                               **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"null",8,MethodInfo_Void_Add);
                    if ((System_Collections_Generic_Dictionary_object__int__o *)
                        **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                        (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                      System_Collections_Generic_Dictionary_object__int___Add
                                ((System_Collections_Generic_Dictionary_object__int__o *)
                                 **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"return",0xd,MethodInfo_Void_Add);
                      if ((System_Collections_Generic_Dictionary_object__int__o *)
                          **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                          (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                        System_Collections_Generic_Dictionary_object__int___Add
                                  ((System_Collections_Generic_Dictionary_object__int__o *)
                                   **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"break",0xf,MethodInfo_Void_Add);
                        if ((System_Collections_Generic_Dictionary_object__int__o *)
                            **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                            (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                          System_Collections_Generic_Dictionary_object__int___Add
                                    ((System_Collections_Generic_Dictionary_object__int__o *)
                                     **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"continue",0xe,MethodInfo_Void_Add);
                          if ((System_Collections_Generic_Dictionary_object__int__o *)
                              **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                              (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                            System_Collections_Generic_Dictionary_object__int___Add
                                      ((System_Collections_Generic_Dictionary_object__int__o *)
                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"if",0x27,MethodInfo_Void_Add);
                            if ((System_Collections_Generic_Dictionary_object__int__o *)
                                **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                              System_Collections_Generic_Dictionary_object__int___Add
                                        ((System_Collections_Generic_Dictionary_object__int__o *)
                                         **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"else",0x28,MethodInfo_Void_Add
                                        );
                              if ((System_Collections_Generic_Dictionary_object__int__o *)
                                  **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                  (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                System_Collections_Generic_Dictionary_object__int___Add
                                          ((System_Collections_Generic_Dictionary_object__int__o *)
                                           **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"elif",0x29,
                                           MethodInfo_Void_Add);
                                if ((System_Collections_Generic_Dictionary_object__int__o *)
                                    **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                    (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                  System_Collections_Generic_Dictionary_object__int___Add
                                            ((System_Collections_Generic_Dictionary_object__int__o *)
                                             **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"for",0x2b,
                                             MethodInfo_Void_Add);
                                  if ((System_Collections_Generic_Dictionary_object__int__o *)
                                      **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                      (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                    System_Collections_Generic_Dictionary_object__int___Add
                                              ((System_Collections_Generic_Dictionary_object__int__o *)
                                               **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"while",0x2a,
                                               MethodInfo_Void_Add);
                                    if ((System_Collections_Generic_Dictionary_object__int__o *)
                                        **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                        (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                      System_Collections_Generic_Dictionary_object__int___Add
                                                ((System_Collections_Generic_Dictionary_object__int__o *)
                                                 **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"in",0x2c,
                                                 MethodInfo_Void_Add);
                                      if ((System_Collections_Generic_Dictionary_object__int__o *)
                                          **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                          (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                        System_Collections_Generic_Dictionary_object__int___Add
                                                  ((System_Collections_Generic_Dictionary_object__int__o *)
                                                   **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"{",9,
                                                   MethodInfo_Void_Add);
                                        if ((System_Collections_Generic_Dictionary_object__int__o *)
                                            **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                            (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                          System_Collections_Generic_Dictionary_object__int___Add
                                                    ((System_Collections_Generic_Dictionary_object__int__o *)
                                                     **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"}",10,
                                                     MethodInfo_Void_Add);
                                          if ((System_Collections_Generic_Dictionary_object__int__o *)
                                              **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                              (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                            System_Collections_Generic_Dictionary_object__int___Add
                                                      ((System_Collections_Generic_Dictionary_object__int__o *
                                                       )**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"(",
                                                       0xb,MethodInfo_Void_Add);
                                            if ((System_Collections_Generic_Dictionary_object__int__o *)
                                                **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                              System_Collections_Generic_Dictionary_object__int___Add
                                                        ((System_Collections_Generic_Dictionary_object__int__o
                                                          *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                         ")",0xc,MethodInfo_Void_Add);
                                              if ((System_Collections_Generic_Dictionary_object__int__o *)
                                                  **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (System_Collections_Generic_Dictionary_object__int__o *)0x0)
                                              {
                                                System_Collections_Generic_Dictionary_object__int___Add
                                                          ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),";",
                                                       0x23,MethodInfo_Void_Add);
                                                if ((System_Collections_Generic_Dictionary_object__int__o *)
                                                    **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                    (System_Collections_Generic_Dictionary_object__int__o *)
                                                    0x0) {
                                                  System_Collections_Generic_Dictionary_object__int___Add
                                                            ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"\"",
                                                       0x24,MethodInfo_Void_Add);
                                                  if ((System_Collections_Generic_Dictionary_object__int__o *)
                                                      **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                      (System_Collections_Generic_Dictionary_object__int__o *)
                                                      0x0) {
                                                    System_Collections_Generic_Dictionary_object__int___Add
                                                              ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"=",
                                                       0x11,MethodInfo_Void_Add);
                                                    if ((System_Collections_Generic_Dictionary_object__int__o
                                                         *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                        (System_Collections_Generic_Dictionary_object__int__o
                                                         *)0x0) {
                                                      System_Collections_Generic_Dictionary_object__int___Add
                                                                ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"+=",
                                                       0x12,MethodInfo_Void_Add);
                                                      if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"-=",
                                                       0x13,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"*=",
                                                       0x14,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"/=",
                                                       0x15,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),",",
                                                       0x25,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),".",
                                                       0x26,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"||",
                                                       0x17,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"&&",
                                                       0x16,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"+",
                                                       0x1e,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"-",
                                                       0x1f,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"*",
                                                       0x20,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"/",
                                                       0x21,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"%",
                                                       0x22,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"==",
                                                       0x1c,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"!=",
                                                       0x1d,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"<",
                                                       0x18,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),">",
                                                       0x19,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),_DAT_055bf588,
                                                       0x1a,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),">=",
                                                       0x1b,MethodInfo_Void_Add);
                                                       if ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                       (System_Collections_Generic_Dictionary_object__int__o *
                                                       )0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"!",
                                                       0x10,MethodInfo_Void_Add);
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
  il2cpp_runtime_helper_022b2c90();
  pIStack_48 = unaff_RBX;
  if (g_data_057adc11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&fld_04226ADAE818465BE5CD19E8A9550A792EA1B8F185AEEC114F3335BE);
    il2cpp_runtime_helper_023445d0(&fld_91B95CD461297F030EB678AC3AE924777791C7C75450AAC41C2F4B2E);
    il2cpp_runtime_helper_023445d0(&fld_AAA9A0887F1FFCCD7D9FAFD6C581C10DD56E042994AF9075C209B87C);
    il2cpp_runtime_helper_023445d0(&fld_E8913D2567E2C28E1D347DE0AB9FE97E1117D263D725E2F26406CCCD);
    il2cpp_runtime_helper_023445d0(&fld_ECAA48558A18E02C5C542171022961EC691B65B5B4F2EC078BD43973);
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"cutscene");
    il2cpp_runtime_helper_023445d0(&"elif");
    il2cpp_runtime_helper_023445d0(&"else");
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"class");
    il2cpp_runtime_helper_023445d0(&"if");
    il2cpp_runtime_helper_023445d0(&"component");
    il2cpp_runtime_helper_023445d0(&"function");
    il2cpp_runtime_helper_023445d0(&"addon");
    il2cpp_runtime_helper_023445d0(&"extension");
    il2cpp_runtime_helper_023445d0(&"wait");
    il2cpp_runtime_helper_023445d0(&"continue");
    il2cpp_runtime_helper_023445d0(&"while");
    il2cpp_runtime_helper_023445d0(&"in");
    il2cpp_runtime_helper_023445d0(&"break");
    il2cpp_runtime_helper_023445d0(&"for");
    il2cpp_runtime_helper_023445d0(&"coroutine");
    g_data_057adc11 = '\x01';
  }
  pSVar14 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar15 = (Il2CppType *)0x0;
  pIVar16 = (Il2CppObject *)0x0;
  lVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,0x12);
  if (lVar7 == 0) goto label_0426691f;
  if (*(int *)(lVar7 + 0x18) == 0) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0x20) = "class";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x20);
  if (*(uint *)(lVar7 + 0x18) < 2) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0x28) = "component";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x28);
  if (*(uint *)(lVar7 + 0x18) < 3) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0x30) = "extension";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x30);
  if (*(uint *)(lVar7 + 0x18) < 4) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0x38) = "addon";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x38);
  if (*(uint *)(lVar7 + 0x18) < 5) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0x40) = "cutscene";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x40);
  if (*(uint *)(lVar7 + 0x18) < 6) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0x48) = "function";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x48);
  if (*(uint *)(lVar7 + 0x18) < 7) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0x50) = "coroutine";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x50);
  if (*(uint *)(lVar7 + 0x18) < 8) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0x58) = "wait";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x58);
  if (*(uint *)(lVar7 + 0x18) < 9) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0x60) = "null";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x60);
  if (*(uint *)(lVar7 + 0x18) < 10) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0x68) = "return";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x68);
  if (*(uint *)(lVar7 + 0x18) < 0xb) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0x70) = "break";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x70);
  if (*(uint *)(lVar7 + 0x18) < 0xc) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0x78) = "continue";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x78);
  if (*(uint *)(lVar7 + 0x18) < 0xd) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0x80) = "if";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x80);
  if (*(uint *)(lVar7 + 0x18) < 0xe) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0x88) = "else";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x88);
  if (*(uint *)(lVar7 + 0x18) < 0xf) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0x90) = "for";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x90);
  if (*(uint *)(lVar7 + 0x18) < 0x10) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0x98) = "while";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x98);
  if (*(uint *)(lVar7 + 0x18) < 0x11) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0xa0) = "elif";
  il2cpp_runtime_helper_022b4080(lVar7 + 0xa0);
  if (*(uint *)(lVar7 + 0x18) < 0x12) goto label_0426691a;
  *(Il2CppObject **)(lVar7 + 0xa8) = "in";
  il2cpp_runtime_helper_022b4080(lVar7 + 0xa8);
  if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
    uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
    uVar11 = 0;
    unaff_R15 = &TypeInfo_CustomLogicSymbols;
    do {
      if (uVar8 <= uVar11) goto label_0426691a;
      pIVar17 = *(Il2CppObject **)(lVar7 + 0x20 + uVar11 * 8);
      if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x10);
      if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0426691f;
      System_Collections_Generic_HashSet_object___Add(pSVar2,pIVar17,MethodInfo_Boolean_Add);
      uVar11 = uVar11 + 1;
      uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
    } while ((long)uVar11 < (long)(int)*(uint *)(lVar7 + 0x18));
  }
  unaff_R15 = &TypeInfo_CustomLogicSymbols;
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) ==
      (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto label_0426691f;
  __this_04 = System_Collections_Generic_Dictionary_object__int___get_Keys
                        ((System_Collections_Generic_Dictionary_object__int__o *)
                         **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
  if (__this_04 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_0426691f;
  System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_60,
             __this_04,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  pSVar14 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)auStack_60._0_8_
  ;
  pIVar15 = (Il2CppType *)auStack_60._8_8_;
  while( true ) {
    do {
      pIVar17 = pIStack_50;
      __this_00.fields._8_8_ = pIVar15;
      __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14;
      __this_00.fields._currentKey = pIVar17;
      bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext
                        (__this_00,(MethodInfo_3250140 *)&stack0xffffffffffffff80);
      if ((char)bVar5 == '\0') {
        __this_01.fields._8_8_ = pIVar15;
        __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14;
        __this_01.fields._currentKey = pIVar17;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
                  (__this_01,(MethodInfo_3250130 *)&stack0xffffffffffffff80);
        goto label_04266488;
      }
      pIVar16 = pIVar17;
      if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x10);
      if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_04266924;
      bVar5 = System_Collections_Generic_HashSet_object___Contains(pSVar2,pIVar17,MethodInfo_Boolean_Contains);
      pIStack_50 = pIVar16;
    } while ((char)bVar5 != '\0');
    if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 8);
    if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
    System_Collections_Generic_HashSet_object___Add(pSVar2,pIVar17,MethodInfo_Boolean_Add);
    pIStack_50 = pIVar16;
  }
  do {
    auVar13 = il2cpp_runtime_helper_022b2c90();
    if (auVar13._8_4_ != 1) {
label_042669a5:
      __this_03.fields._8_8_ = pIVar15;
      __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14;
      __this_03.fields._currentKey = pIVar16;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
                (__this_03,(MethodInfo_3250130 *)&stack0xffffffffffffff80);
      _Unwind_Resume(auVar13._0_8_);
    }
    plVar10 = (long *)__cxa_begin_catch(auVar13._0_8_);
    lVar7 = *plVar10;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar15;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14;
    __this_02.fields._currentKey = pIVar16;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
              (__this_02,(MethodInfo_3250130 *)&stack0xffffffffffffff80);
    pIVar17 = pIVar16;
    if (lVar7 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar7);
      goto label_042669a5;
    }
label_04266488:
    lVar7 = *unaff_R15;
    pIVar16 = pIVar17;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar7 = *unaff_R15;
      pIVar16 = pIVar17;
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(lVar7 + 0xb8) + 0x18);
    if (pSVar3 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
      System_Collections_Generic_Dictionary_int__int___Add(pSVar3,0x11,0,MethodInfo_Void_Add);
      pSVar9 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,4);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                (pSVar9,fld_91B95CD461297F030EB678AC3AE924777791C7C75450AAC41C2F4B2E,(MethodInfo *)0x0);
      if (pSVar9 != (System_Array_o *)0x0) {
        if (0 < (int)pSVar9[1].monitor) {
          uVar8 = (ulong)pSVar9[1].monitor & 0xffffffff;
          uVar11 = 0;
          do {
            if (uVar8 <= uVar11) goto label_0426691a;
            iVar1 = *(int32_t *)((long)&pSVar9[2].klass + uVar11 * 4);
            lVar7 = *unaff_R15;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              lVar7 = *unaff_R15;
            }
            pSVar3 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(lVar7 + 0xb8) + 0x18);
            if (pSVar3 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_0426691f;
            System_Collections_Generic_Dictionary_int__int___Add(pSVar3,iVar1,0,MethodInfo_Void_Add);
            uVar11 = uVar11 + 1;
            uVar8 = (ulong)*(uint *)&pSVar9[1].monitor;
          } while ((long)uVar11 < (long)(int)*(uint *)&pSVar9[1].monitor);
        }
        lVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,2);
        if (lVar7 != 0) {
          iVar6 = (int)*(ulong *)(lVar7 + 0x18);
          if ((iVar6 == 0) || (*(undefined4 *)(lVar7 + 0x20) = 0x17, iVar6 == 1)) {
label_0426691a:
            il2cpp_runtime_helper_022b2ca0();
          }
          else {
            *(undefined4 *)(lVar7 + 0x24) = 0x16;
            if (0 < iVar6) {
              uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
              uVar11 = 0;
              do {
                if (uVar8 <= uVar11) goto label_0426691a;
                iVar1 = *(int32_t *)(lVar7 + 0x20 + uVar11 * 4);
                lVar12 = *unaff_R15;
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  lVar12 = *unaff_R15;
                }
                pSVar3 = *(System_Collections_Generic_Dictionary_int__int__o **)
                          (*(long *)(lVar12 + 0xb8) + 0x18);
                if (pSVar3 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_0426691f;
                System_Collections_Generic_Dictionary_int__int___Add(pSVar3,iVar1,1,MethodInfo_Void_Add);
                uVar11 = uVar11 + 1;
                uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
              } while ((long)uVar11 < (long)(int)*(uint *)(lVar7 + 0x18));
            }
            pSVar9 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,6);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                      (pSVar9,fld_04226ADAE818465BE5CD19E8A9550A792EA1B8F185AEEC114F3335BE,(MethodInfo *)0x0);
            if (pSVar9 != (System_Array_o *)0x0) {
              if (0 < (int)pSVar9[1].monitor) {
                uVar8 = (ulong)pSVar9[1].monitor & 0xffffffff;
                uVar11 = 0;
                do {
                  if (uVar8 <= uVar11) goto label_0426691a;
                  iVar1 = *(int32_t *)((long)&pSVar9[2].klass + uVar11 * 4);
                  lVar7 = *unaff_R15;
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    lVar7 = *unaff_R15;
                  }
                  pSVar3 = *(System_Collections_Generic_Dictionary_int__int__o **)
                            (*(long *)(lVar7 + 0xb8) + 0x18);
                  if (pSVar3 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_0426691f;
                  System_Collections_Generic_Dictionary_int__int___Add(pSVar3,iVar1,2,MethodInfo_Void_Add);
                  uVar11 = uVar11 + 1;
                  uVar8 = (ulong)*(uint *)&pSVar9[1].monitor;
                } while ((long)uVar11 < (long)(int)*(uint *)&pSVar9[1].monitor);
              }
              lVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,2);
              if (lVar7 != 0) {
                iVar6 = (int)*(ulong *)(lVar7 + 0x18);
                if ((iVar6 == 0) || (*(undefined4 *)(lVar7 + 0x20) = 0x1e, iVar6 == 1)) goto label_0426691a;
                *(undefined4 *)(lVar7 + 0x24) = 0x1f;
                if (0 < iVar6) {
                  uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
                  uVar11 = 0;
                  do {
                    if (uVar8 <= uVar11) goto label_0426691a;
                    iVar1 = *(int32_t *)(lVar7 + 0x20 + uVar11 * 4);
                    lVar12 = *unaff_R15;
                    if (*(int *)(lVar12 + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      lVar12 = *unaff_R15;
                    }
                    pSVar3 = *(System_Collections_Generic_Dictionary_int__int__o **)
                              (*(long *)(lVar12 + 0xb8) + 0x18);
                    if (pSVar3 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_0426691f;
                    System_Collections_Generic_Dictionary_int__int___Add(pSVar3,iVar1,3,MethodInfo_Void_Add);
                    uVar11 = uVar11 + 1;
                    uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
                  } while ((long)uVar11 < (long)(int)*(uint *)(lVar7 + 0x18));
                }
                pSVar9 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,3);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                          (pSVar9,fld_E8913D2567E2C28E1D347DE0AB9FE97E1117D263D725E2F26406CCCD,(MethodInfo *)0x0);
                if (pSVar9 != (System_Array_o *)0x0) {
                  if (0 < (int)pSVar9[1].monitor) {
                    uVar8 = (ulong)pSVar9[1].monitor & 0xffffffff;
                    uVar11 = 0;
                    do {
                      if (uVar8 <= uVar11) goto label_0426691a;
                      iVar1 = *(int32_t *)((long)&pSVar9[2].klass + uVar11 * 4);
                      lVar7 = *unaff_R15;
                      if (*(int *)(lVar7 + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        lVar7 = *unaff_R15;
                      }
                      pSVar3 = *(System_Collections_Generic_Dictionary_int__int__o **)
                                (*(long *)(lVar7 + 0xb8) + 0x18);
                      if (pSVar3 == (System_Collections_Generic_Dictionary_int__int__o *)0x0)
                      goto label_0426691f;
                      System_Collections_Generic_Dictionary_int__int___Add(pSVar3,iVar1,4,MethodInfo_Void_Add);
                      uVar11 = uVar11 + 1;
                      uVar8 = (ulong)*(uint *)&pSVar9[1].monitor;
                    } while ((long)uVar11 < (long)(int)*(uint *)&pSVar9[1].monitor);
                  }
                  pSVar9 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,5);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                            (pSVar9,fld_AAA9A0887F1FFCCD7D9FAFD6C581C10DD56E042994AF9075C209B87C,(MethodInfo *)0x0);
                  if (pSVar9 != (System_Array_o *)0x0) {
                    if (0 < (int)pSVar9[1].monitor) {
                      uVar8 = (ulong)pSVar9[1].monitor & 0xffffffff;
                      uVar11 = 0;
                      do {
                        if (uVar8 <= uVar11) goto label_0426691a;
                        iVar1 = *(int32_t *)((long)&pSVar9[2].klass + uVar11 * 4);
                        lVar7 = *unaff_R15;
                        if (*(int *)(lVar7 + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                          lVar7 = *unaff_R15;
                        }
                        pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                                  (*(long *)(lVar7 + 0xb8) + 0x20);
                        if (pSVar4 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0426691f;
                        System_Collections_Generic_HashSet_int___Add(pSVar4,iVar1,MethodInfo_Boolean_Add);
                        uVar11 = uVar11 + 1;
                        uVar8 = (ulong)*(uint *)&pSVar9[1].monitor;
                      } while ((long)uVar11 < (long)(int)*(uint *)&pSVar9[1].monitor);
                    }
                    pSVar9 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,4);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                              (pSVar9,fld_ECAA48558A18E02C5C542171022961EC691B65B5B4F2EC078BD43973,(MethodInfo *)0x0);
                    if (pSVar9 != (System_Array_o *)0x0) {
                      if ((int)pSVar9[1].monitor < 1) {
                        return;
                      }
                      uVar8 = (ulong)pSVar9[1].monitor & 0xffffffff;
                      uVar11 = 0;
                      while (uVar11 < uVar8) {
                        iVar1 = *(int32_t *)((long)&pSVar9[2].klass + uVar11 * 4);
                        lVar7 = *unaff_R15;
                        if (*(int *)(lVar7 + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                          lVar7 = *unaff_R15;
                        }
                        pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                                  (*(long *)(lVar7 + 0xb8) + 0x28);
                        if (pSVar4 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0426691f;
                        System_Collections_Generic_HashSet_int___Add(pSVar4,iVar1,MethodInfo_Boolean_Add);
                        uVar11 = uVar11 + 1;
                        uVar8 = (ulong)*(uint *)&pSVar9[1].monitor;
                        if ((long)(int)*(uint *)&pSVar9[1].monitor <= (long)uVar11) {
                          return;
                        }
                      }
                      goto label_0426691a;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
label_0426691f:
    il2cpp_runtime_helper_022b2c90();
label_04266924:
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// CustomLogic.CustomLogicSymbols$$CategorizeSymbols
// il2cpp: void CustomLogic_CustomLogicSymbols__CategorizeSymbols (const MethodInfo* method);
// 0x4265e70

void CustomLogic_CustomLogicSymbols__CategorizeSymbols(MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_int__int__o *pSVar3;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_03;
  System_Array_o *pSVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *unaff_R15;
  undefined1 auVar13 [12];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar14;
  Il2CppType *pIVar15;
  Il2CppObject *pIVar16;
  Il2CppObject *pIVar17;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (g_data_057adc11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&fld_04226ADAE818465BE5CD19E8A9550A792EA1B8F185AEEC114F3335BE);
    il2cpp_runtime_helper_023445d0(&fld_91B95CD461297F030EB678AC3AE924777791C7C75450AAC41C2F4B2E);
    il2cpp_runtime_helper_023445d0(&fld_AAA9A0887F1FFCCD7D9FAFD6C581C10DD56E042994AF9075C209B87C);
    il2cpp_runtime_helper_023445d0(&fld_E8913D2567E2C28E1D347DE0AB9FE97E1117D263D725E2F26406CCCD);
    il2cpp_runtime_helper_023445d0(&fld_ECAA48558A18E02C5C542171022961EC691B65B5B4F2EC078BD43973);
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"cutscene");
    il2cpp_runtime_helper_023445d0(&"elif");
    il2cpp_runtime_helper_023445d0(&"else");
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"class");
    il2cpp_runtime_helper_023445d0(&"if");
    il2cpp_runtime_helper_023445d0(&"component");
    il2cpp_runtime_helper_023445d0(&"function");
    il2cpp_runtime_helper_023445d0(&"addon");
    il2cpp_runtime_helper_023445d0(&"extension");
    il2cpp_runtime_helper_023445d0(&"wait");
    il2cpp_runtime_helper_023445d0(&"continue");
    il2cpp_runtime_helper_023445d0(&"while");
    il2cpp_runtime_helper_023445d0(&"in");
    il2cpp_runtime_helper_023445d0(&"break");
    il2cpp_runtime_helper_023445d0(&"for");
    il2cpp_runtime_helper_023445d0(&"coroutine");
    g_data_057adc11 = '\x01';
  }
  pSVar14 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar15 = (Il2CppType *)0x0;
  pIVar16 = (Il2CppObject *)0x0;
  lVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,0x12);
  if (lVar7 == 0) goto label_0426691f;
  if (*(int *)(lVar7 + 0x18) == 0) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0x20) = "class";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x20);
  if (*(uint *)(lVar7 + 0x18) < 2) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0x28) = "component";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x28);
  if (*(uint *)(lVar7 + 0x18) < 3) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0x30) = "extension";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x30);
  if (*(uint *)(lVar7 + 0x18) < 4) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0x38) = "addon";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x38);
  if (*(uint *)(lVar7 + 0x18) < 5) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0x40) = "cutscene";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x40);
  if (*(uint *)(lVar7 + 0x18) < 6) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0x48) = "function";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x48);
  if (*(uint *)(lVar7 + 0x18) < 7) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0x50) = "coroutine";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x50);
  if (*(uint *)(lVar7 + 0x18) < 8) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0x58) = "wait";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x58);
  if (*(uint *)(lVar7 + 0x18) < 9) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0x60) = "null";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x60);
  if (*(uint *)(lVar7 + 0x18) < 10) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0x68) = "return";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x68);
  if (*(uint *)(lVar7 + 0x18) < 0xb) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0x70) = "break";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x70);
  if (*(uint *)(lVar7 + 0x18) < 0xc) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0x78) = "continue";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x78);
  if (*(uint *)(lVar7 + 0x18) < 0xd) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0x80) = "if";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x80);
  if (*(uint *)(lVar7 + 0x18) < 0xe) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0x88) = "else";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x88);
  if (*(uint *)(lVar7 + 0x18) < 0xf) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0x90) = "for";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x90);
  if (*(uint *)(lVar7 + 0x18) < 0x10) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0x98) = "while";
  il2cpp_runtime_helper_022b4080(lVar7 + 0x98);
  if (*(uint *)(lVar7 + 0x18) < 0x11) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0xa0) = "elif";
  il2cpp_runtime_helper_022b4080(lVar7 + 0xa0);
  if (*(uint *)(lVar7 + 0x18) < 0x12) goto label_0426691a;
  *(undefined8 *)(lVar7 + 0xa8) = "in";
  il2cpp_runtime_helper_022b4080(lVar7 + 0xa8);
  if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
    uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
    uVar11 = 0;
    unaff_R15 = &TypeInfo_CustomLogicSymbols;
    do {
      if (uVar8 <= uVar11) goto label_0426691a;
      pIVar17 = *(Il2CppObject **)(lVar7 + 0x20 + uVar11 * 8);
      if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x10);
      if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0426691f;
      System_Collections_Generic_HashSet_object___Add(pSVar2,pIVar17,MethodInfo_Boolean_Add);
      uVar11 = uVar11 + 1;
      uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
    } while ((long)uVar11 < (long)(int)*(uint *)(lVar7 + 0x18));
  }
  unaff_R15 = &TypeInfo_CustomLogicSymbols;
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) ==
      (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto label_0426691f;
  __this_03 = System_Collections_Generic_Dictionary_object__int___get_Keys
                        ((System_Collections_Generic_Dictionary_object__int__o *)
                         **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
  if (__this_03 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_0426691f;
  System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48,
             __this_03,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  pSVar14 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)local_48._0_8_;
  pIVar15 = (Il2CppType *)local_48._8_8_;
  while( true ) {
    do {
      pIVar17 = local_38;
      __this.fields._8_8_ = pIVar15;
      __this.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14;
      __this.fields._currentKey = pIVar17;
      bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext
                        (__this,(MethodInfo_3250140 *)&stack0xffffffffffffff98);
      if ((char)bVar5 == '\0') {
        __this_00.fields._8_8_ = pIVar15;
        __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14;
        __this_00.fields._currentKey = pIVar17;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
                  (__this_00,(MethodInfo_3250130 *)&stack0xffffffffffffff98);
        goto label_04266488;
      }
      pIVar16 = pIVar17;
      if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x10);
      if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_04266924;
      bVar5 = System_Collections_Generic_HashSet_object___Contains(pSVar2,pIVar17,MethodInfo_Boolean_Contains);
      local_38 = pIVar16;
    } while ((char)bVar5 != '\0');
    if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 8);
    if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
    System_Collections_Generic_HashSet_object___Add(pSVar2,pIVar17,MethodInfo_Boolean_Add);
    local_38 = pIVar16;
  }
  do {
    auVar13 = il2cpp_runtime_helper_022b2c90();
    if (auVar13._8_4_ != 1) {
label_042669a5:
      __this_02.fields._8_8_ = pIVar15;
      __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14;
      __this_02.fields._currentKey = pIVar16;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
                (__this_02,(MethodInfo_3250130 *)&stack0xffffffffffffff98);
      _Unwind_Resume(auVar13._0_8_);
    }
    plVar10 = (long *)__cxa_begin_catch(auVar13._0_8_);
    lVar7 = *plVar10;
    __cxa_end_catch();
    __this_01.fields._8_8_ = pIVar15;
    __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14;
    __this_01.fields._currentKey = pIVar16;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
              (__this_01,(MethodInfo_3250130 *)&stack0xffffffffffffff98);
    pIVar17 = pIVar16;
    if (lVar7 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar7);
      goto label_042669a5;
    }
label_04266488:
    lVar7 = *unaff_R15;
    pIVar16 = pIVar17;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar7 = *unaff_R15;
      pIVar16 = pIVar17;
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(lVar7 + 0xb8) + 0x18);
    if (pSVar3 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
      System_Collections_Generic_Dictionary_int__int___Add(pSVar3,0x11,0,MethodInfo_Void_Add);
      pSVar9 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,4);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                (pSVar9,fld_91B95CD461297F030EB678AC3AE924777791C7C75450AAC41C2F4B2E,(MethodInfo *)0x0);
      if (pSVar9 != (System_Array_o *)0x0) {
        if (0 < (int)pSVar9[1].monitor) {
          uVar8 = (ulong)pSVar9[1].monitor & 0xffffffff;
          uVar11 = 0;
          do {
            if (uVar8 <= uVar11) goto label_0426691a;
            iVar1 = *(int32_t *)((long)&pSVar9[2].klass + uVar11 * 4);
            lVar7 = *unaff_R15;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              lVar7 = *unaff_R15;
            }
            pSVar3 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(lVar7 + 0xb8) + 0x18);
            if (pSVar3 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_0426691f;
            System_Collections_Generic_Dictionary_int__int___Add(pSVar3,iVar1,0,MethodInfo_Void_Add);
            uVar11 = uVar11 + 1;
            uVar8 = (ulong)*(uint *)&pSVar9[1].monitor;
          } while ((long)uVar11 < (long)(int)*(uint *)&pSVar9[1].monitor);
        }
        lVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,2);
        if (lVar7 != 0) {
          iVar6 = (int)*(ulong *)(lVar7 + 0x18);
          if ((iVar6 == 0) || (*(undefined4 *)(lVar7 + 0x20) = 0x17, iVar6 == 1)) {
label_0426691a:
            il2cpp_runtime_helper_022b2ca0();
          }
          else {
            *(undefined4 *)(lVar7 + 0x24) = 0x16;
            if (0 < iVar6) {
              uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
              uVar11 = 0;
              do {
                if (uVar8 <= uVar11) goto label_0426691a;
                iVar1 = *(int32_t *)(lVar7 + 0x20 + uVar11 * 4);
                lVar12 = *unaff_R15;
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  lVar12 = *unaff_R15;
                }
                pSVar3 = *(System_Collections_Generic_Dictionary_int__int__o **)
                          (*(long *)(lVar12 + 0xb8) + 0x18);
                if (pSVar3 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_0426691f;
                System_Collections_Generic_Dictionary_int__int___Add(pSVar3,iVar1,1,MethodInfo_Void_Add);
                uVar11 = uVar11 + 1;
                uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
              } while ((long)uVar11 < (long)(int)*(uint *)(lVar7 + 0x18));
            }
            pSVar9 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,6);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                      (pSVar9,fld_04226ADAE818465BE5CD19E8A9550A792EA1B8F185AEEC114F3335BE,(MethodInfo *)0x0);
            if (pSVar9 != (System_Array_o *)0x0) {
              if (0 < (int)pSVar9[1].monitor) {
                uVar8 = (ulong)pSVar9[1].monitor & 0xffffffff;
                uVar11 = 0;
                do {
                  if (uVar8 <= uVar11) goto label_0426691a;
                  iVar1 = *(int32_t *)((long)&pSVar9[2].klass + uVar11 * 4);
                  lVar7 = *unaff_R15;
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    lVar7 = *unaff_R15;
                  }
                  pSVar3 = *(System_Collections_Generic_Dictionary_int__int__o **)
                            (*(long *)(lVar7 + 0xb8) + 0x18);
                  if (pSVar3 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_0426691f;
                  System_Collections_Generic_Dictionary_int__int___Add(pSVar3,iVar1,2,MethodInfo_Void_Add);
                  uVar11 = uVar11 + 1;
                  uVar8 = (ulong)*(uint *)&pSVar9[1].monitor;
                } while ((long)uVar11 < (long)(int)*(uint *)&pSVar9[1].monitor);
              }
              lVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,2);
              if (lVar7 != 0) {
                iVar6 = (int)*(ulong *)(lVar7 + 0x18);
                if ((iVar6 == 0) || (*(undefined4 *)(lVar7 + 0x20) = 0x1e, iVar6 == 1)) goto label_0426691a;
                *(undefined4 *)(lVar7 + 0x24) = 0x1f;
                if (0 < iVar6) {
                  uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
                  uVar11 = 0;
                  do {
                    if (uVar8 <= uVar11) goto label_0426691a;
                    iVar1 = *(int32_t *)(lVar7 + 0x20 + uVar11 * 4);
                    lVar12 = *unaff_R15;
                    if (*(int *)(lVar12 + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      lVar12 = *unaff_R15;
                    }
                    pSVar3 = *(System_Collections_Generic_Dictionary_int__int__o **)
                              (*(long *)(lVar12 + 0xb8) + 0x18);
                    if (pSVar3 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_0426691f;
                    System_Collections_Generic_Dictionary_int__int___Add(pSVar3,iVar1,3,MethodInfo_Void_Add);
                    uVar11 = uVar11 + 1;
                    uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
                  } while ((long)uVar11 < (long)(int)*(uint *)(lVar7 + 0x18));
                }
                pSVar9 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,3);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                          (pSVar9,fld_E8913D2567E2C28E1D347DE0AB9FE97E1117D263D725E2F26406CCCD,(MethodInfo *)0x0);
                if (pSVar9 != (System_Array_o *)0x0) {
                  if (0 < (int)pSVar9[1].monitor) {
                    uVar8 = (ulong)pSVar9[1].monitor & 0xffffffff;
                    uVar11 = 0;
                    do {
                      if (uVar8 <= uVar11) goto label_0426691a;
                      iVar1 = *(int32_t *)((long)&pSVar9[2].klass + uVar11 * 4);
                      lVar7 = *unaff_R15;
                      if (*(int *)(lVar7 + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        lVar7 = *unaff_R15;
                      }
                      pSVar3 = *(System_Collections_Generic_Dictionary_int__int__o **)
                                (*(long *)(lVar7 + 0xb8) + 0x18);
                      if (pSVar3 == (System_Collections_Generic_Dictionary_int__int__o *)0x0)
                      goto label_0426691f;
                      System_Collections_Generic_Dictionary_int__int___Add(pSVar3,iVar1,4,MethodInfo_Void_Add);
                      uVar11 = uVar11 + 1;
                      uVar8 = (ulong)*(uint *)&pSVar9[1].monitor;
                    } while ((long)uVar11 < (long)(int)*(uint *)&pSVar9[1].monitor);
                  }
                  pSVar9 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,5);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                            (pSVar9,fld_AAA9A0887F1FFCCD7D9FAFD6C581C10DD56E042994AF9075C209B87C,(MethodInfo *)0x0);
                  if (pSVar9 != (System_Array_o *)0x0) {
                    if (0 < (int)pSVar9[1].monitor) {
                      uVar8 = (ulong)pSVar9[1].monitor & 0xffffffff;
                      uVar11 = 0;
                      do {
                        if (uVar8 <= uVar11) goto label_0426691a;
                        iVar1 = *(int32_t *)((long)&pSVar9[2].klass + uVar11 * 4);
                        lVar7 = *unaff_R15;
                        if (*(int *)(lVar7 + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                          lVar7 = *unaff_R15;
                        }
                        pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                                  (*(long *)(lVar7 + 0xb8) + 0x20);
                        if (pSVar4 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0426691f;
                        System_Collections_Generic_HashSet_int___Add(pSVar4,iVar1,MethodInfo_Boolean_Add);
                        uVar11 = uVar11 + 1;
                        uVar8 = (ulong)*(uint *)&pSVar9[1].monitor;
                      } while ((long)uVar11 < (long)(int)*(uint *)&pSVar9[1].monitor);
                    }
                    pSVar9 = (System_Array_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_CustomLogicSymbol,4);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                              (pSVar9,fld_ECAA48558A18E02C5C542171022961EC691B65B5B4F2EC078BD43973,(MethodInfo *)0x0);
                    if (pSVar9 != (System_Array_o *)0x0) {
                      if ((int)pSVar9[1].monitor < 1) {
                        return;
                      }
                      uVar8 = (ulong)pSVar9[1].monitor & 0xffffffff;
                      uVar11 = 0;
                      while (uVar11 < uVar8) {
                        iVar1 = *(int32_t *)((long)&pSVar9[2].klass + uVar11 * 4);
                        lVar7 = *unaff_R15;
                        if (*(int *)(lVar7 + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                          lVar7 = *unaff_R15;
                        }
                        pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                                  (*(long *)(lVar7 + 0xb8) + 0x28);
                        if (pSVar4 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0426691f;
                        System_Collections_Generic_HashSet_int___Add(pSVar4,iVar1,MethodInfo_Boolean_Add);
                        uVar11 = uVar11 + 1;
                        uVar8 = (ulong)*(uint *)&pSVar9[1].monitor;
                        if ((long)(int)*(uint *)&pSVar9[1].monitor <= (long)uVar11) {
                          return;
                        }
                      }
                      goto label_0426691a;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
label_0426691f:
    il2cpp_runtime_helper_022b2c90();
label_04266924:
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// CustomLogic.CustomLogicSymbols$$.ctor
// il2cpp: void CustomLogic_CustomLogicSymbols___ctor (CustomLogic_CustomLogicSymbols_o* __this, const MethodInfo* method);
// 0x42669e0

void CustomLogic_CustomLogicSymbols___ctor(CustomLogic_CustomLogicSymbols_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSymbols$$.cctor
// il2cpp: void CustomLogic_CustomLogicSymbols___cctor (const MethodInfo* method);
// 0x42669f0

void CustomLogic_CustomLogicSymbols___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  
  if (g_data_057adc12 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    g_data_057adc12 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor(__this,MethodInfo_Dictionary_2_System_String_System_Int32);
  **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicSymbols + 0xb8),__this);
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(pSVar2,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_CustomLogicSymbols + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(pSVar2,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_CustomLogicSymbols + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar2);
  __this_00 = (System_Collections_Generic_Dictionary_int__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor(__this_00,MethodInfo_Dictionary_2_System_Int32_System_Int32);
  lVar1 = *(long *)(TypeInfo_CustomLogicSymbols + 0xb8);
  *(System_Collections_Generic_Dictionary_int__int__o **)(lVar1 + 0x18) = __this_00;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18,__this_00);
  pSVar3 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor(pSVar3,MethodInfo_HashSet_1_System_Int32);
  lVar1 = *(long *)(TypeInfo_CustomLogicSymbols + 0xb8);
  *(System_Collections_Generic_HashSet_int__o **)(lVar1 + 0x20) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20,pSVar3);
  pSVar3 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor(pSVar3,MethodInfo_HashSet_1_System_Int32);
  lVar1 = *(long *)(TypeInfo_CustomLogicSymbols + 0xb8);
  *(System_Collections_Generic_HashSet_int__o **)(lVar1 + 0x28) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar3);
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x30) = 0;
  return;
}


