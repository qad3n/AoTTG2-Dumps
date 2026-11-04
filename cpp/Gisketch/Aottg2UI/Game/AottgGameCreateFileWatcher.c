// Type: Gisketch.Aottg2UI.Game.AottgGameCreateFileWatcher
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateFileWatcher.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateFileWatcher$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher__Setup (Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1823c5030

void Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher__Setup
               (Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Utility_FileWatcherExtension_o *__this_01;
  System_IO_FileSystemEventHandler_o *pSVar1;
  System_IO_RenamedEventHandler_o *value;
  
  if (Il2CppMethodInitialized_184347d80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_OnCustomContentChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_FileSystemEventHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_FileWatcherExtension);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_RenamedEventHandler);
    Il2CppMethodInitialized_184347d80 = '\x01';
  }
  (__this->fields)._root = root;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._root,root);
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (__this_00,
                           (MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_FileWatcherExtension);
    if (__this_01 != (Utility_FileWatcherExtension_o *)0x0) {
      Utility_FileWatcherExtension__set_NotifyFilter(__this_01,0x13,(MethodInfo *)0x0);
      Utility_FileWatcherExtension__set_IncludeSubdirectories(__this_01,true,(MethodInfo *)0x0);
      pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor
                ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)pSVar1,
                 (Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_OnCustomContentChanged
                 ,(MethodInfo *)0x0);
      Utility_FileWatcherExtension__add_Changed(__this_01,pSVar1,(MethodInfo *)0x0);
      pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor
                ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)pSVar1,
                 (Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_OnCustomContentChanged
                 ,(MethodInfo *)0x0);
      Utility_FileWatcherExtension__add_Created(__this_01,pSVar1,(MethodInfo *)0x0);
      pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor
                ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)pSVar1,
                 (Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_OnCustomContentChanged
                 ,(MethodInfo *)0x0);
      Utility_FileWatcherExtension__add_Deleted(__this_01,pSVar1,(MethodInfo *)0x0);
      value = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_RenamedEventHandler);
      System_IO_RenamedEventHandler___ctor
                ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)value,
                 (Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_OnCustomContentChanged
                 ,(MethodInfo *)0x0);
      Utility_FileWatcherExtension__add_Renamed(__this_01,value,(MethodInfo *)0x0);
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      Utility_FileWatcherExtension__AddWatcher
                (__this_01,TypeInfo_Map_BuiltinLevels->static_fields->CustomMapFolderPath,(MethodInfo *)0x0);
      Utility_FileWatcherExtension__AddWatcher
                (__this_01,TypeInfo_Map_BuiltinLevels->static_fields->CustomLogicFolderPath,(MethodInfo *)0x0)
      ;
      Utility_FileWatcherExtension__AddWatcher
                (__this_01,TypeInfo_Map_BuiltinLevels->static_fields->CustomAddonFolderPath,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateFileWatcher$$OnCustomContentChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher__OnCustomContentChanged (Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_o* __this, Il2CppObject* sender, System_IO_FileSystemEventArgs_o* args, const MethodInfo* method);
// 0x1823c4f10

void Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher__OnCustomContentChanged
               (Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_o *__this,Il2CppObject *sender,
               System_IO_FileSystemEventArgs_o *args,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347d81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create");
    Il2CppMethodInitialized_184347d81 = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pGVar1->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)
    {
      bVar2 = System_String__op_Inequality
                        ((((pGVar1->fields)._Screens_k__BackingField)->fields)._activeId,"game-create"
                         ,(MethodInfo *)0x0);
      if (!bVar2) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandboxContent((MethodInfo *)0x0);
          pGVar1 = (__this->fields)._root;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(pGVar1,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateFileWatcher$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateFileWatcher_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


