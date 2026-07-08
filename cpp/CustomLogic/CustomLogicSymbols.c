// Type: CustomLogic.CustomLogicSymbols
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSymbols.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/CustomLogicSymbols.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicSymbols$$Init
// il2cpp: void CustomLogic_CustomLogicSymbols__Init (const MethodInfo* method);
// 0x3f59370

void CustomLogic_CustomLogicSymbols__Init(MethodInfo *method)

{
  code cVar1;
  int iVar2;
  MethodInfo *method_00;
  
  if (DAT_05703ea2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbols);
    DAT_05703ea2 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_CustomLogicSymbols[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_CustomLogicSymbols[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
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
    il2cpp_init_class();
  }
  CustomLogic_CustomLogicSymbols__ClearSymbols(method_00);
  CustomLogic_CustomLogicSymbols__AddSymbols(method_00);
  CustomLogic_CustomLogicSymbols__CategorizeSymbols(method_00);
  TypeInfo_CustomLogicSymbols[2].virtualMethodPointer[0x30] = (code)0x1;
  return;
}


// CustomLogic.CustomLogicSymbols$$ClearSymbols
// il2cpp: void CustomLogic_CustomLogicSymbols__ClearSymbols (const MethodInfo* method);
// 0x3f59410

void CustomLogic_CustomLogicSymbols__ClearSymbols(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  
  if (DAT_05703ea3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbols);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05703ea3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicSymbols + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicSymbols + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = (System_Collections_Generic_Dictionary_object__int__o *)
             **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8);
  }
  else {
    __this = (System_Collections_Generic_Dictionary_object__int__o *)
             **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary<object__int>__Clear(__this,MethodInfo_Void_Clear);
    pSVar2 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 8);
    if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__Clear(pSVar2,MethodInfo_Void_Clear);
      pSVar2 = *(System_Collections_Generic_HashSet_object__o **)
                (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x10);
      if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Clear(pSVar2,MethodInfo_Void_Clear);
        __this_00 = *(System_Collections_Generic_Dictionary_int__int__o **)
                     (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
        if (__this_00 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
          System_Collections_Generic_Dictionary<int__int>__Clear(__this_00,MethodInfo_Void_Clear);
          pSVar3 = *(System_Collections_Generic_HashSet_int__o **)
                    (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x20);
          if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
            System_Collections_Generic_HashSet<int>__Clear(pSVar3,MethodInfo_Void_Clear);
            pSVar3 = *(System_Collections_Generic_HashSet_int__o **)
                      (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x28);
            if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
              System_Collections_Generic_HashSet<int>__Clear(pSVar3,MethodInfo_Void_Clear);
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


// CustomLogic.CustomLogicSymbols$$AddSymbols
// il2cpp: void CustomLogic_CustomLogicSymbols__AddSymbols (const MethodInfo* method);
// 0x3f59570

void CustomLogic_CustomLogicSymbols__AddSymbols(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this;
  
  if (DAT_05703ea4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbols);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"{");
    il2cpp_init_method_metadata(&"&&");
    il2cpp_init_method_metadata(&"!");
    il2cpp_init_method_metadata(&"/=");
    il2cpp_init_method_metadata(&"=");
    il2cpp_init_method_metadata(&"+");
    il2cpp_init_method_metadata(&"return");
    il2cpp_init_method_metadata(&"cutscene");
    il2cpp_init_method_metadata(&"<=");
    il2cpp_init_method_metadata(&">=");
    il2cpp_init_method_metadata(&"elif");
    il2cpp_init_method_metadata(&"-");
    il2cpp_init_method_metadata(&"else");
    il2cpp_init_method_metadata(&"+=");
    il2cpp_init_method_metadata(&"}");
    il2cpp_init_method_metadata(&"null");
    il2cpp_init_method_metadata(&"class");
    il2cpp_init_method_metadata(&"if");
    il2cpp_init_method_metadata(&"component");
    il2cpp_init_method_metadata(&"%");
    il2cpp_init_method_metadata(&"<");
    il2cpp_init_method_metadata(&"function");
    il2cpp_init_method_metadata(&"addon");
    il2cpp_init_method_metadata(&"==");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"extension");
    il2cpp_init_method_metadata(&";");
    il2cpp_init_method_metadata(&"wait");
    il2cpp_init_method_metadata(&"continue");
    il2cpp_init_method_metadata(&"(");
    il2cpp_init_method_metadata(&"while");
    il2cpp_init_method_metadata(&")");
    il2cpp_init_method_metadata(&"||");
    il2cpp_init_method_metadata(&",");
    il2cpp_init_method_metadata(&"in");
    il2cpp_init_method_metadata(&"*=");
    il2cpp_init_method_metadata(&"\"");
    il2cpp_init_method_metadata(&"break");
    il2cpp_init_method_metadata(&"-=");
    il2cpp_init_method_metadata(&"*");
    il2cpp_init_method_metadata(&"for");
    il2cpp_init_method_metadata(&">");
    il2cpp_init_method_metadata(&".");
    il2cpp_init_method_metadata(&"coroutine");
    il2cpp_init_method_metadata(&"!=");
    DAT_05703ea4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicSymbols + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicSymbols + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = (System_Collections_Generic_Dictionary_object__int__o *)
             **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8);
  }
  else {
    __this = (System_Collections_Generic_Dictionary_object__int__o *)
             **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary<object__int>__Add(__this,"class",1,MethodInfo_Void_Add);
    if ((System_Collections_Generic_Dictionary_object__int__o *)
        **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      System_Collections_Generic_Dictionary<object__int>__Add
                ((System_Collections_Generic_Dictionary_object__int__o *)
                 **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"extension",2,MethodInfo_Void_Add);
      if ((System_Collections_Generic_Dictionary_object__int__o *)
          **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        System_Collections_Generic_Dictionary<object__int>__Add
                  ((System_Collections_Generic_Dictionary_object__int__o *)
                   **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"addon",3,MethodInfo_Void_Add);
        if ((System_Collections_Generic_Dictionary_object__int__o *)
            **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
            (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
          System_Collections_Generic_Dictionary<object__int>__Add
                    ((System_Collections_Generic_Dictionary_object__int__o *)
                     **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"component",0,MethodInfo_Void_Add);
          if ((System_Collections_Generic_Dictionary_object__int__o *)
              **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
              (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
            System_Collections_Generic_Dictionary<object__int>__Add
                      ((System_Collections_Generic_Dictionary_object__int__o *)
                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"cutscene",4,MethodInfo_Void_Add);
            if ((System_Collections_Generic_Dictionary_object__int__o *)
                **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
              System_Collections_Generic_Dictionary<object__int>__Add
                        ((System_Collections_Generic_Dictionary_object__int__o *)
                         **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"function",5,MethodInfo_Void_Add);
              if ((System_Collections_Generic_Dictionary_object__int__o *)
                  **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                  (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                System_Collections_Generic_Dictionary<object__int>__Add
                          ((System_Collections_Generic_Dictionary_object__int__o *)
                           **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"coroutine",6,MethodInfo_Void_Add);
                if ((System_Collections_Generic_Dictionary_object__int__o *)
                    **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                    (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                  System_Collections_Generic_Dictionary<object__int>__Add
                            ((System_Collections_Generic_Dictionary_object__int__o *)
                             **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"wait",7,MethodInfo_Void_Add);
                  if ((System_Collections_Generic_Dictionary_object__int__o *)
                      **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                      (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    System_Collections_Generic_Dictionary<object__int>__Add
                              ((System_Collections_Generic_Dictionary_object__int__o *)
                               **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"null",8,MethodInfo_Void_Add);
                    if ((System_Collections_Generic_Dictionary_object__int__o *)
                        **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                        (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                      System_Collections_Generic_Dictionary<object__int>__Add
                                ((System_Collections_Generic_Dictionary_object__int__o *)
                                 **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"return",0xd,
                                 MethodInfo_Void_Add);
                      if ((System_Collections_Generic_Dictionary_object__int__o *)
                          **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                          (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                        System_Collections_Generic_Dictionary<object__int>__Add
                                  ((System_Collections_Generic_Dictionary_object__int__o *)
                                   **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"break",0xf,
                                   MethodInfo_Void_Add);
                        if ((System_Collections_Generic_Dictionary_object__int__o *)
                            **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                            (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                          System_Collections_Generic_Dictionary<object__int>__Add
                                    ((System_Collections_Generic_Dictionary_object__int__o *)
                                     **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"continue",0xe,
                                     MethodInfo_Void_Add);
                          if ((System_Collections_Generic_Dictionary_object__int__o *)
                              **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                              (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                            System_Collections_Generic_Dictionary<object__int>__Add
                                      ((System_Collections_Generic_Dictionary_object__int__o *)
                                       **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"if",0x27,
                                       MethodInfo_Void_Add);
                            if ((System_Collections_Generic_Dictionary_object__int__o *)
                                **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                              System_Collections_Generic_Dictionary<object__int>__Add
                                        ((System_Collections_Generic_Dictionary_object__int__o *)
                                         **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"else",0x28,
                                         MethodInfo_Void_Add);
                              if ((System_Collections_Generic_Dictionary_object__int__o *)
                                  **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                  (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                System_Collections_Generic_Dictionary<object__int>__Add
                                          ((System_Collections_Generic_Dictionary_object__int__o *)
                                           **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"elif",0x29,
                                           MethodInfo_Void_Add);
                                if ((System_Collections_Generic_Dictionary_object__int__o *)
                                    **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                    (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                  System_Collections_Generic_Dictionary<object__int>__Add
                                            ((System_Collections_Generic_Dictionary_object__int__o *
                                             )**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),"for",
                                             0x2b,MethodInfo_Void_Add);
                                  if ((System_Collections_Generic_Dictionary_object__int__o *)
                                      **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                      (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                    System_Collections_Generic_Dictionary<object__int>__Add
                                              ((System_Collections_Generic_Dictionary_object__int__o
                                                *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                               "while",0x2a,MethodInfo_Void_Add);
                                    if ((System_Collections_Generic_Dictionary_object__int__o *)
                                        **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                        (System_Collections_Generic_Dictionary_object__int__o *)0x0)
                                    {
                                      System_Collections_Generic_Dictionary<object__int>__Add
                                                ((System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                 "in",0x2c,MethodInfo_Void_Add);
                                      if ((System_Collections_Generic_Dictionary_object__int__o *)
                                          **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                          (System_Collections_Generic_Dictionary_object__int__o *)
                                          0x0) {
                                        System_Collections_Generic_Dictionary<object__int>__Add
                                                  ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "{",9,MethodInfo_Void_Add);
                                        if ((System_Collections_Generic_Dictionary_object__int__o *)
                                            **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                            (System_Collections_Generic_Dictionary_object__int__o *)
                                            0x0) {
                                          System_Collections_Generic_Dictionary<object__int>__Add
                                                    ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "}",10,MethodInfo_Void_Add);
                                          if ((System_Collections_Generic_Dictionary_object__int__o
                                               *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                              (System_Collections_Generic_Dictionary_object__int__o
                                               *)0x0) {
                                            System_Collections_Generic_Dictionary<object__int>__Add
                                                      ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "(",0xb,MethodInfo_Void_Add);
                                            if ((System_Collections_Generic_Dictionary_object__int__o
                                                 *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                (System_Collections_Generic_Dictionary_object__int__o
                                                 *)0x0) {
                                              System_Collections_Generic_Dictionary<object__int>__Add
                                                        ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  ")",0xc,MethodInfo_Void_Add);
                                              if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                System_Collections_Generic_Dictionary<object__int>__Add
                                                          ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  ";",0x23,MethodInfo_Void_Add);
                                                if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "\"",0x24,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "=",0x11,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "+=",0x12,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "-=",0x13,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "*=",0x14,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "/=",0x15,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  ",",0x25,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  ".",0x26,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "||",0x17,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "&&",0x16,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "+",0x1e,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "-",0x1f,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "*",0x20,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "/",0x21,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "%",0x22,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "==",0x1c,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "!=",0x1d,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "<",0x18,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  ">",0x19,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "<=",0x1a,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  ">=",0x1b,MethodInfo_Void_Add);
                                                  if ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                                  (
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object__int>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  "!",0x10,MethodInfo_Void_Add);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSymbols$$CategorizeSymbols
// il2cpp: void CustomLogic_CustomLogicSymbols__CategorizeSymbols (const MethodInfo* method);
// 0x3f59ff0

void CustomLogic_CustomLogicSymbols__CategorizeSymbols(MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_int__int__o *pSVar3;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  bool_conflict bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  System_Array_o *pSVar9;
  ulong uVar10;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar11;
  Il2CppType *pIVar12;
  Il2CppObject *pIVar13;
  Il2CppObject *pIVar14;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_05703ea5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbol);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbols);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&fld_04226ADAE818465BE5CD19E8A9550A792EA1B8F185AEEC1);
    il2cpp_init_method_metadata(&fld_91B95CD461297F030EB678AC3AE924777791C7C75450AAC);
    il2cpp_init_method_metadata(&fld_AAA9A0887F1FFCCD7D9FAFD6C581C10DD56E042994AF9075);
    il2cpp_init_method_metadata(&fld_E8913D2567E2C28E1D347DE0AB9FE97E1117D263D725E2F2);
    il2cpp_init_method_metadata(&fld_ECAA48558A18E02C5C542171022961EC691B65B5B4F2EC07);
    il2cpp_init_method_metadata(&"return");
    il2cpp_init_method_metadata(&"cutscene");
    il2cpp_init_method_metadata(&"elif");
    il2cpp_init_method_metadata(&"else");
    il2cpp_init_method_metadata(&"null");
    il2cpp_init_method_metadata(&"class");
    il2cpp_init_method_metadata(&"if");
    il2cpp_init_method_metadata(&"component");
    il2cpp_init_method_metadata(&"function");
    il2cpp_init_method_metadata(&"addon");
    il2cpp_init_method_metadata(&"extension");
    il2cpp_init_method_metadata(&"wait");
    il2cpp_init_method_metadata(&"continue");
    il2cpp_init_method_metadata(&"while");
    il2cpp_init_method_metadata(&"in");
    il2cpp_init_method_metadata(&"break");
    il2cpp_init_method_metadata(&"for");
    il2cpp_init_method_metadata(&"coroutine");
    DAT_05703ea5 = '\x01';
  }
  lVar7 = il2cpp_glue_02274930(TypeInfo_string,0x12);
  if (lVar7 == 0) goto LAB_03f5aa9f;
  if (*(int *)(lVar7 + 0x18) != 0) {
    *(undefined8 *)(lVar7 + 0x20) = "class";
    il2cpp_runtime_glue(lVar7 + 0x20);
    if (1 < *(uint *)(lVar7 + 0x18)) {
      *(undefined8 *)(lVar7 + 0x28) = "component";
      il2cpp_runtime_glue(lVar7 + 0x28);
      if (2 < *(uint *)(lVar7 + 0x18)) {
        *(undefined8 *)(lVar7 + 0x30) = "extension";
        il2cpp_runtime_glue(lVar7 + 0x30);
        if (3 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x38) = "addon";
          il2cpp_runtime_glue(lVar7 + 0x38);
          if (4 < *(uint *)(lVar7 + 0x18)) {
            *(undefined8 *)(lVar7 + 0x40) = "cutscene";
            il2cpp_runtime_glue(lVar7 + 0x40);
            if (5 < *(uint *)(lVar7 + 0x18)) {
              *(undefined8 *)(lVar7 + 0x48) = "function";
              il2cpp_runtime_glue(lVar7 + 0x48);
              if (6 < *(uint *)(lVar7 + 0x18)) {
                *(undefined8 *)(lVar7 + 0x50) = "coroutine";
                il2cpp_runtime_glue(lVar7 + 0x50);
                if (7 < *(uint *)(lVar7 + 0x18)) {
                  *(undefined8 *)(lVar7 + 0x58) = "wait";
                  il2cpp_runtime_glue(lVar7 + 0x58);
                  if (8 < *(uint *)(lVar7 + 0x18)) {
                    *(undefined8 *)(lVar7 + 0x60) = "null";
                    il2cpp_runtime_glue(lVar7 + 0x60);
                    if (9 < *(uint *)(lVar7 + 0x18)) {
                      *(undefined8 *)(lVar7 + 0x68) = "return";
                      il2cpp_runtime_glue(lVar7 + 0x68);
                      if (10 < *(uint *)(lVar7 + 0x18)) {
                        *(undefined8 *)(lVar7 + 0x70) = "break";
                        il2cpp_runtime_glue(lVar7 + 0x70);
                        if (0xb < *(uint *)(lVar7 + 0x18)) {
                          *(undefined8 *)(lVar7 + 0x78) = "continue";
                          il2cpp_runtime_glue(lVar7 + 0x78);
                          if (0xc < *(uint *)(lVar7 + 0x18)) {
                            *(undefined8 *)(lVar7 + 0x80) = "if";
                            il2cpp_runtime_glue(lVar7 + 0x80);
                            if (0xd < *(uint *)(lVar7 + 0x18)) {
                              *(undefined8 *)(lVar7 + 0x88) = "else";
                              il2cpp_runtime_glue(lVar7 + 0x88);
                              if (0xe < *(uint *)(lVar7 + 0x18)) {
                                *(undefined8 *)(lVar7 + 0x90) = "for";
                                il2cpp_runtime_glue(lVar7 + 0x90);
                                if (0xf < *(uint *)(lVar7 + 0x18)) {
                                  *(undefined8 *)(lVar7 + 0x98) = "while";
                                  il2cpp_runtime_glue(lVar7 + 0x98);
                                  if (0x10 < *(uint *)(lVar7 + 0x18)) {
                                    *(undefined8 *)(lVar7 + 0xa0) = "elif";
                                    il2cpp_runtime_glue(lVar7 + 0xa0);
                                    if (0x11 < *(uint *)(lVar7 + 0x18)) {
                                      *(undefined8 *)(lVar7 + 0xa8) = "in";
                                      il2cpp_runtime_glue(lVar7 + 0xa8);
                                      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
                                        uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
                                        uVar10 = 0;
                                        do {
                                          if (uVar8 <= uVar10) goto LAB_03f5aa9a;
                                          pIVar13 = *(Il2CppObject **)(lVar7 + 0x20 + uVar10 * 8);
                                          if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                                            il2cpp_init_class();
                                          }
                                          pSVar2 = *(System_Collections_Generic_HashSet_object__o **
                                                    )(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x10);
                                          if (pSVar2 == (
                                                  System_Collections_Generic_HashSet_object__o *)0x0
                                             ) goto LAB_03f5aa9f;
                                          System_Collections_Generic_HashSet<object>__Add
                                                    (pSVar2,pIVar13,MethodInfo_Boolean_Add);
                                          uVar10 = uVar10 + 1;
                                          uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
                                        } while ((long)uVar10 < (long)(int)*(uint *)(lVar7 + 0x18));
                                      }
                                      if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                                        il2cpp_init_class();
                                      }
                                      if ((System_Collections_Generic_Dictionary_object__int__o *)
                                          **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) !=
                                          (System_Collections_Generic_Dictionary_object__int__o *)
                                          0x0) {
                                        __this_01 = 
                                                  System_Collections_Generic_Dictionary<object__int>__get_Keys
                                                            ((
                                                  System_Collections_Generic_Dictionary_object__int__o
                                                  *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8),
                                                  MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
                                        if (__this_01 !=
                                            (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o
                                             *)0x0) {
                                          System_Collections_Generic_Dictionary_KeyCollection<object__int>__GetEnumerator
                                                    ((
                                                  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                                  *)local_48,__this_01,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
                                          pSVar11 = (
                                                  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c
                                                  *)local_48._0_8_;
                                          pIVar12 = (Il2CppType *)local_48._8_8_;
                                          while( true ) {
                                            pIVar13 = local_38;
                                            __this.fields._8_8_ = pIVar12;
                                            __this.fields._dictionary =
                                                 (System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar11;
                                            __this.fields._currentKey = pIVar13;
                                            bVar5 = 
                                                  System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__int>__MoveNext
                                                            (__this,(MethodInfo_31CEE70 *)
                                                                    &stack0xffffffffffffff98);
                                            if ((char)bVar5 == '\0') break;
                                            pIVar14 = pIVar13;
                                            if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                                              il2cpp_init_class();
                                            }
                                            pSVar2 = *(System_Collections_Generic_HashSet_object__o
                                                       **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x10);
                                            if (pSVar2 == (
                                                  System_Collections_Generic_HashSet_object__o *)0x0
                                               ) {
                    /* WARNING: Subroutine does not return */
                                              il2cpp_raise_exception();
                                            }
                                            bVar5 = 
                                                  System_Collections_Generic_HashSet<object>__Contains
                                                            (pSVar2,pIVar13,MethodInfo_Boolean_Contains);
                                            local_38 = pIVar14;
                                            if ((char)bVar5 == '\0') {
                                              if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                                                il2cpp_init_class();
                                              }
                                              pSVar2 = *(
                                                  System_Collections_Generic_HashSet_object__o **)
                                                  (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 8);
                                              if (pSVar2 == (
                                                  System_Collections_Generic_HashSet_object__o *)0x0
                                                 ) {
                    /* WARNING: Subroutine does not return */
                                                il2cpp_raise_exception();
                                              }
                                              System_Collections_Generic_HashSet<object>__Add
                                                        (pSVar2,pIVar13,MethodInfo_Boolean_Add);
                                              local_38 = pIVar14;
                                            }
                                          }
                                          __this_00.fields._8_8_ = pIVar12;
                                          __this_00.fields._dictionary =
                                               (System_Collections_Generic_Dictionary_TKey__TValue__o
                                                *)pSVar11;
                                          __this_00.fields._currentKey = pIVar13;
                                          System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__int>__Dispose
                                                    (__this_00,
                                                     (MethodInfo_31CEE60 *)&stack0xffffffffffffff98)
                                          ;
                                          if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                                            il2cpp_init_class();
                                          }
                                          pSVar3 = *(
                                                  System_Collections_Generic_Dictionary_int__int__o
                                                  **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
                                          if (pSVar3 != (
                                                  System_Collections_Generic_Dictionary_int__int__o
                                                  *)0x0) {
                                            System_Collections_Generic_Dictionary<int__int>__Add
                                                      (pSVar3,0x11,0,MethodInfo_Void_Add);
                                            pSVar9 = (System_Array_o *)il2cpp_glue_02274930(TypeInfo_CustomLogicSymbol,4);
                                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                      (pSVar9,fld_91B95CD461297F030EB678AC3AE924777791C7C75450AAC,(MethodInfo *)0x0);
                                            if (pSVar9 != (System_Array_o *)0x0) {
                                              if (0 < (int)pSVar9[1].monitor) {
                                                uVar8 = (ulong)pSVar9[1].monitor & 0xffffffff;
                                                uVar10 = 0;
                                                do {
                                                  if (uVar8 <= uVar10) goto LAB_03f5aa9a;
                                                  iVar1 = *(int32_t *)
                                                           ((long)&pSVar9[2].klass + uVar10 * 4);
                                                  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                                                    il2cpp_init_class();
                                                  }
                                                  pSVar3 = *(
                                                  System_Collections_Generic_Dictionary_int__int__o
                                                  **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
                                                  if (pSVar3 == (
                                                  System_Collections_Generic_Dictionary_int__int__o
                                                  *)0x0) goto LAB_03f5aa9f;
                                                  System_Collections_Generic_Dictionary<int__int>__Add
                                                            (pSVar3,iVar1,0,MethodInfo_Void_Add);
                                                  uVar10 = uVar10 + 1;
                                                  uVar8 = (ulong)*(uint *)&pSVar9[1].monitor;
                                                } while ((long)uVar10 <
                                                         (long)(int)*(uint *)&pSVar9[1].monitor);
                                              }
                                              lVar7 = il2cpp_glue_02274930(TypeInfo_CustomLogicSymbol,2);
                                              if (lVar7 != 0) {
                                                iVar6 = (int)*(ulong *)(lVar7 + 0x18);
                                                if ((iVar6 == 0) ||
                                                   (*(undefined4 *)(lVar7 + 0x20) = 0x17, iVar6 == 1
                                                   )) goto LAB_03f5aa9a;
                                                *(undefined4 *)(lVar7 + 0x24) = 0x16;
                                                if (0 < iVar6) {
                                                  uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
                                                  uVar10 = 0;
                                                  do {
                                                    if (uVar8 <= uVar10) goto LAB_03f5aa9a;
                                                    iVar1 = *(int32_t *)(lVar7 + 0x20 + uVar10 * 4);
                                                    if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                                                      il2cpp_init_class();
                                                    }
                                                    pSVar3 = *(
                                                  System_Collections_Generic_Dictionary_int__int__o
                                                  **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
                                                  if (pSVar3 == (
                                                  System_Collections_Generic_Dictionary_int__int__o
                                                  *)0x0) goto LAB_03f5aa9f;
                                                  System_Collections_Generic_Dictionary<int__int>__Add
                                                            (pSVar3,iVar1,1,MethodInfo_Void_Add);
                                                  uVar10 = uVar10 + 1;
                                                  uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
                                                  } while ((long)uVar10 <
                                                           (long)(int)*(uint *)(lVar7 + 0x18));
                                                }
                                                pSVar9 = (System_Array_o *)
                                                         il2cpp_glue_02274930(TypeInfo_CustomLogicSymbol,6);
                                                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                          (pSVar9,fld_04226ADAE818465BE5CD19E8A9550A792EA1B8F185AEEC1,(MethodInfo *)0x0);
                                                if (pSVar9 != (System_Array_o *)0x0) {
                                                  if (0 < (int)pSVar9[1].monitor) {
                                                    uVar8 = (ulong)pSVar9[1].monitor & 0xffffffff;
                                                    uVar10 = 0;
                                                    do {
                                                      if (uVar8 <= uVar10) goto LAB_03f5aa9a;
                                                      iVar1 = *(int32_t *)
                                                               ((long)&pSVar9[2].klass + uVar10 * 4)
                                                      ;
                                                      if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                                                        il2cpp_init_class();
                                                      }
                                                      pSVar3 = *(
                                                  System_Collections_Generic_Dictionary_int__int__o
                                                  **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
                                                  if (pSVar3 == (
                                                  System_Collections_Generic_Dictionary_int__int__o
                                                  *)0x0) goto LAB_03f5aa9f;
                                                  System_Collections_Generic_Dictionary<int__int>__Add
                                                            (pSVar3,iVar1,2,MethodInfo_Void_Add);
                                                  uVar10 = uVar10 + 1;
                                                  uVar8 = (ulong)*(uint *)&pSVar9[1].monitor;
                                                  } while ((long)uVar10 <
                                                           (long)(int)*(uint *)&pSVar9[1].monitor);
                                                  }
                                                  lVar7 = il2cpp_glue_02274930(TypeInfo_CustomLogicSymbol,2);
                                                  if (lVar7 != 0) {
                                                    iVar6 = (int)*(ulong *)(lVar7 + 0x18);
                                                    if ((iVar6 == 0) ||
                                                       (*(undefined4 *)(lVar7 + 0x20) = 0x1e,
                                                       iVar6 == 1)) goto LAB_03f5aa9a;
                                                    *(undefined4 *)(lVar7 + 0x24) = 0x1f;
                                                    if (0 < iVar6) {
                                                      uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
                                                      uVar10 = 0;
                                                      do {
                                                        if (uVar8 <= uVar10) goto LAB_03f5aa9a;
                                                        iVar1 = *(int32_t *)
                                                                 (lVar7 + 0x20 + uVar10 * 4);
                                                        if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                                                          il2cpp_init_class();
                                                        }
                                                        pSVar3 = *(
                                                  System_Collections_Generic_Dictionary_int__int__o
                                                  **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
                                                  if (pSVar3 == (
                                                  System_Collections_Generic_Dictionary_int__int__o
                                                  *)0x0) goto LAB_03f5aa9f;
                                                  System_Collections_Generic_Dictionary<int__int>__Add
                                                            (pSVar3,iVar1,3,MethodInfo_Void_Add);
                                                  uVar10 = uVar10 + 1;
                                                  uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
                                                  } while ((long)uVar10 <
                                                           (long)(int)*(uint *)(lVar7 + 0x18));
                                                  }
                                                  pSVar9 = (System_Array_o *)
                                                           il2cpp_glue_02274930(TypeInfo_CustomLogicSymbol,3);
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (pSVar9,fld_E8913D2567E2C28E1D347DE0AB9FE97E1117D263D725E2F2,(MethodInfo *)0x0);
                                                  if (pSVar9 != (System_Array_o *)0x0) {
                                                    if (0 < (int)pSVar9[1].monitor) {
                                                      uVar8 = (ulong)pSVar9[1].monitor & 0xffffffff;
                                                      uVar10 = 0;
                                                      do {
                                                        if (uVar8 <= uVar10) goto LAB_03f5aa9a;
                                                        iVar1 = *(int32_t *)
                                                                 ((long)&pSVar9[2].klass +
                                                                 uVar10 * 4);
                                                        if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                                                          il2cpp_init_class();
                                                        }
                                                        pSVar3 = *(
                                                  System_Collections_Generic_Dictionary_int__int__o
                                                  **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
                                                  if (pSVar3 == (
                                                  System_Collections_Generic_Dictionary_int__int__o
                                                  *)0x0) goto LAB_03f5aa9f;
                                                  System_Collections_Generic_Dictionary<int__int>__Add
                                                            (pSVar3,iVar1,4,MethodInfo_Void_Add);
                                                  uVar10 = uVar10 + 1;
                                                  uVar8 = (ulong)*(uint *)&pSVar9[1].monitor;
                                                  } while ((long)uVar10 <
                                                           (long)(int)*(uint *)&pSVar9[1].monitor);
                                                  }
                                                  pSVar9 = (System_Array_o *)
                                                           il2cpp_glue_02274930(TypeInfo_CustomLogicSymbol,5);
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (pSVar9,fld_AAA9A0887F1FFCCD7D9FAFD6C581C10DD56E042994AF9075,(MethodInfo *)0x0);
                                                  if (pSVar9 != (System_Array_o *)0x0) {
                                                    if (0 < (int)pSVar9[1].monitor) {
                                                      uVar8 = (ulong)pSVar9[1].monitor & 0xffffffff;
                                                      uVar10 = 0;
                                                      do {
                                                        if (uVar8 <= uVar10) goto LAB_03f5aa9a;
                                                        iVar1 = *(int32_t *)
                                                                 ((long)&pSVar9[2].klass +
                                                                 uVar10 * 4);
                                                        if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                                                          il2cpp_init_class();
                                                        }
                                                        pSVar4 = *(
                                                  System_Collections_Generic_HashSet_int__o **)
                                                  (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x20);
                                                  if (pSVar4 == (
                                                  System_Collections_Generic_HashSet_int__o *)0x0)
                                                  goto LAB_03f5aa9f;
                                                  System_Collections_Generic_HashSet<int>__Add
                                                            (pSVar4,iVar1,MethodInfo_Boolean_Add);
                                                  uVar10 = uVar10 + 1;
                                                  uVar8 = (ulong)*(uint *)&pSVar9[1].monitor;
                                                  } while ((long)uVar10 <
                                                           (long)(int)*(uint *)&pSVar9[1].monitor);
                                                  }
                                                  pSVar9 = (System_Array_o *)
                                                           il2cpp_glue_02274930(TypeInfo_CustomLogicSymbol,4);
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (pSVar9,fld_ECAA48558A18E02C5C542171022961EC691B65B5B4F2EC07,(MethodInfo *)0x0);
                                                  if (pSVar9 != (System_Array_o *)0x0) {
                                                    if (0 < (int)pSVar9[1].monitor) {
                                                      uVar8 = (ulong)pSVar9[1].monitor & 0xffffffff;
                                                      uVar10 = 0;
                                                      do {
                                                        if (uVar8 <= uVar10) goto LAB_03f5aa9a;
                                                        iVar1 = *(int32_t *)
                                                                 ((long)&pSVar9[2].klass +
                                                                 uVar10 * 4);
                                                        if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
                                                          il2cpp_init_class();
                                                        }
                                                        pSVar4 = *(
                                                  System_Collections_Generic_HashSet_int__o **)
                                                  (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x28);
                                                  if (pSVar4 == (
                                                  System_Collections_Generic_HashSet_int__o *)0x0)
                                                  goto LAB_03f5aa9f;
                                                  System_Collections_Generic_HashSet<int>__Add
                                                            (pSVar4,iVar1,MethodInfo_Boolean_Add);
                                                  uVar10 = uVar10 + 1;
                                                  uVar8 = (ulong)*(uint *)&pSVar9[1].monitor;
                                                  } while ((long)uVar10 <
                                                           (long)(int)*(uint *)&pSVar9[1].monitor);
                                                  }
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
LAB_03f5aa9f:
                    /* WARNING: Subroutine does not return */
                                      il2cpp_raise_exception();
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
LAB_03f5aa9a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSymbols$$.ctor
// il2cpp: void CustomLogic_CustomLogicSymbols___ctor (CustomLogic_CustomLogicSymbols_o* __this, const MethodInfo* method);
// 0x3f5ab60

void CustomLogic_CustomLogicSymbols___ctor
               (CustomLogic_CustomLogicSymbols_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSymbols$$.cctor
// il2cpp: void CustomLogic_CustomLogicSymbols___cctor (const MethodInfo* method);
// 0x3f5ab70

void CustomLogic_CustomLogicSymbols___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  
  if (DAT_05703ea6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbols);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__int);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__int);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_int);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    DAT_05703ea6 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_string__int);
  System_Collections_Generic_Dictionary<object__int>___ctor(__this,MethodInfo_Dictionary_2_System_String_System_Int32);
  **(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicSymbols + 0xb8),__this);
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(pSVar2,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_CustomLogicSymbols + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(pSVar2,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_CustomLogicSymbols + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x10,pSVar2);
  __this_00 = (System_Collections_Generic_Dictionary_int__int__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_int__int);
  System_Collections_Generic_Dictionary<int__int>___ctor(__this_00,MethodInfo_Dictionary_2_System_Int32_System_Int32);
  lVar1 = *(long *)(TypeInfo_CustomLogicSymbols + 0xb8);
  *(System_Collections_Generic_Dictionary_int__int__o **)(lVar1 + 0x18) = __this_00;
  il2cpp_runtime_glue(lVar1 + 0x18,__this_00);
  pSVar3 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_glue(TypeInfo_HashSet_int);
  System_Collections_Generic_HashSet<int>___ctor(pSVar3,MethodInfo_HashSet_1_System_Int32);
  lVar1 = *(long *)(TypeInfo_CustomLogicSymbols + 0xb8);
  *(System_Collections_Generic_HashSet_int__o **)(lVar1 + 0x20) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x20,pSVar3);
  pSVar3 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_glue(TypeInfo_HashSet_int);
  System_Collections_Generic_HashSet<int>___ctor(pSVar3,MethodInfo_HashSet_1_System_Int32);
  lVar1 = *(long *)(TypeInfo_CustomLogicSymbols + 0xb8);
  *(System_Collections_Generic_HashSet_int__o **)(lVar1 + 0x28) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x28,pSVar3);
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x30) = 0;
  return;
}


