// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.AddObjectCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/AddObjectCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/AddObjectCommand.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;

namespace MapEditor;

[Token(Token = "0x200013B")]
internal class AddObjectCommand : BaseCommand
{
	[Token(Token = "0x4000750")]
	[FieldOffset(Offset = "0x10")]
	private string _script;

	[Token(Token = "0x4000751")]
	[FieldOffset(Offset = "0x18")]
	private int _insertAfterId;

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x5B8AC50", Offset = "0x5B89C50", VA = "0x5B8AC50")]
	public AddObjectCommand(List<MapScriptBaseObject> objs, int insertAfterId = -1)
	{
		// Lifted from source/cpp/MapEditor/AddObjectCommand.c (MapEditor.AddObjectCommand$$.ctor): 19 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		MapEditorGameManager __this_00;
		List<MapScriptBaseObject> pSVar4;
		MapScriptBaseObject[] pMVar5;
		AddObjectCommand pMVar7;
		bool bVar8;
		int iVar9;
		MapScriptObjects __this_01;
		object pIVar10;
		MapScriptBaseObject pMVar11;
		Dictionary<int, int> __this_02;
		String pSVar12;
		ulong uVar13;
		byte[] local_68 = new byte[8];
		MapScriptBaseObject local_58;
		byte[] local_50 = new byte[16];
		MapScriptBaseObject local_40;
		AddObjectCommand local_38;

		if (Il2CppMethodInitialized_075479be == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor) ;
			Il2CppMethodInitialized_075479be = true;
		}
		local_68 = (byte[])0x0;
		local_58 = null;
		base();
		this._insertAfterId = insertAfterId;
		__this_01 = new MapScriptObjects();
		__this_00 = (MapEditorGameManager)SceneLoader.CurrentGameManager;
		if (__this_00 != null) {
			bVar2 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar2) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(MapEditorGameManager))) {
				throw new InvalidCastException();
			}
		}
		local_38 = this;
		if (objs == null) goto label_05c8b1db;
		pIVar10 = new int[objs._size];
		if (0 < objs._size) {
			if (pIVar10 == null) {
				objs.get_Item(0);
				goto label_05c8b1db;
			}
			if (__this_00 == null) {
				pMVar11 = objs.get_Item(0);
				if (pMVar11 == null) goto label_05c8b1db;
				if (*(int)&pIVar10[1].monitor != 0) {
					*(int)&pIVar10[2].klass = pMVar11.Id;
					objs.get_Item(0);
					throw new NullReferenceException();
				}
				goto label_05c8b1d6;
			}
			uVar13 = 0;
			do {
				pMVar11 = objs.get_Item((int32_t)uVar13);
				if (pMVar11 == null) goto label_05c8b1db;
				if (*(uint)&pIVar10[1].monitor <= uVar13) goto label_05c8b1d6;
				*(int)((long)&pIVar10[2].klass + uVar13 * 4) = pMVar11.Id;
				pMVar11 = objs.get_Item((int32_t)uVar13);
				iVar9 = __this_00.GetNextObjectId();
				if (pMVar11 == null) goto label_05c8b1db;
				pMVar11.Id = iVar9;
				uVar13 = uVar13 + 1;
			} while ((long)uVar13 < (long)objs._size);
		}
		__this_02 = il2cpp_codegen_object_new(typeof(Dictionary<int, int>)) ;
		__this_02 = new Dictionary<int, int>();
		if (0 < objs._size) {
			if (pIVar10 == null) goto label_05c8b1db;
			if (__this_02 == null) {
				if (*(int)&pIVar10[1].monitor == 0) {
	label_05c8b1d6: ;
					throw new IndexOutOfRangeException();
				}
				goto label_05c8b1db;
			}
			uVar13 = 0;
			do {
				if (*(uint)&pIVar10[1].monitor <= uVar13) goto label_05c8b1d6;
				bVar8 = __this_02.ContainsKey(*(int)((long)&pIVar10[2].klass + uVar13 * 4));
				if (!bVar8) {
					if (*(uint)&pIVar10[1].monitor <= uVar13) goto label_05c8b1d6;
					iVar9 = *(int)((long)&pIVar10[2].klass + uVar13 * 4);
					pMVar11 = objs.get_Item((int32_t)uVar13);
					if (pMVar11 == null) goto label_05c8b1db;
					__this_02.set_Item(iVar9, pMVar11.Id);
				}
				uVar13 = uVar13 + 1;
			} while ((long)uVar13 < (long)objs._size);
		}
		local_50.GetEnumerator((List<object>)objs);
		local_58 = local_40;
		local_68 = (byte[])local_50._0_8_;
		local_50._0_8_ = null;
		local_50._8_8_ = local_68;
		if (__this_01 == null) {
			bVar8 = local_68.MoveNext();
			pMVar11 = local_58;
			if (bVar8) {
				if (local_58 != null) {
					iVar9 = local_58.Parent;
					if (-1 < iVar9) {
						if (__this_02 == null) {
	label_05c8b200: ;
							throw new NullReferenceException();
						}
						bVar8 = __this_02.ContainsKey(iVar9);
						if (bVar8) {
							iVar9 = __this_02.get_Item(pMVar11.Parent);
							pMVar11.Parent = iVar9;
						}
					}
					throw new NullReferenceException();
				}
	label_05c8b1ea: ;
				throw new NullReferenceException();
			}
		}
		else if (__this_02 == null) {
			while(true) {
				bVar8 = local_68.MoveNext();
				if (!bVar8) break;
				if (local_58 == null) goto label_05c8b1ea;
				if (-1 < local_58.Parent) goto label_05c8b200;
				pSVar4 = __this_01.Objects;
				if (pSVar4 == null) goto label_05c8b170;
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				pMVar5 = pSVar4._items;
				if (pMVar5 == null) goto label_05c8b170;
				uVar3 = pSVar4._size;
				if (uVar3 < (uint)pMVar5.Length) {
					pSVar4._size = uVar3 + 1;
					pMVar5[(int)uVar3] = local_58;
				}
				else {
					pSVar4.AddWithResize((object)local_58);
				}
			}
		}
		else {
			while(true) {
				bVar8 = local_68.MoveNext();
				pMVar11 = local_58;
				if (!bVar8) break;
				if (local_58 == null) goto label_05c8b1ea;
				iVar9 = local_58.Parent;
				if (-1 < iVar9) {
					bVar8 = __this_02.ContainsKey(iVar9);
					if (bVar8) {
						iVar9 = __this_02.get_Item(pMVar11.Parent);
						pMVar11.Parent = iVar9;
					}
				}
				pSVar4 = __this_01.Objects;
				if (pSVar4 == null) {
	label_05c8b170: ;
					throw new NullReferenceException();
				}
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				pMVar5 = pSVar4._items;
				if (pMVar5 == null) goto label_05c8b170;
				uVar3 = pSVar4._size;
				if (uVar3 < (uint)pMVar5.Length) {
					pSVar4._size = uVar3 + 1;
					pMVar5[(int)uVar3] = pMVar11;
				}
				else {
					pSVar4.AddWithResize((object)pMVar11);
				}
			}
		}
		local_68.Dispose();
		pMVar7 = local_38;
		if (__this_01 != null) {
			pSVar12 = __this_01.Serialize();
			pMVar7._script = pSVar12;
			return;
		}
	label_05c8b1db: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x5B8B2C0", Offset = "0x5B8A2C0", VA = "0x5B8B2C0", Slot = "4")]
	public override void Execute()
	{
		// Lifted from source/cpp/MapEditor/AddObjectCommand.c (MapEditor.AddObjectCommand$$Execute): 13 lines keep C-only constructs
		int iVar1;
		List<MapScriptBaseObject> pSVar2;
		List<int> pSVar3;
		object pIVar4;
		AddObjectCommand pMVar5;
		MapScriptBaseObject scriptObject;
		bool bVar6;
		int iVar7;
		int item;
		MapScriptObjects __this_00;
		Func<MapScriptBaseObject, int> __this_01;
		System_Collections_Generic_IEnumerable_TResult__o source;
		MapEditor_AddObjectCommand___c_StaticFields pMVar8;
		Func<int, bool> __this_02;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		System_Collections_Generic_List_TSource__o __this_03;
		int iVar9;
		byte[] auStack_88 = new byte[16];
		MapScriptBaseObject pMStack_78;
		AddObjectCommand pMStack_70;
		byte[] auStack_68 = new byte[8];
		MapScriptBaseObject pMStack_58;
		byte[] auStack_48 = new byte[8];
		MapScriptBaseObject pMStack_38;

		auStack_48 = (byte[])0x0;
		pMStack_38 = null;
		auStack_68 = (byte[])0x0;
		pMStack_58 = null;
		__this_00 = new MapScriptObjects();
		if (__this_00 != null) {
			pMStack_70 = this;
			__this_00.Deserialize(this._script);
			pSVar2 = __this_00.Objects;
			if (pSVar2 != null) {
				auStack_88.GetEnumerator((List<object>)pSVar2);
				pMStack_38 = pMStack_78;
				auStack_48 = (byte[])auStack_88._0_8_;
				auStack_88._0_8_ = null;
				auStack_88._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_48;
				while (true) {
					bVar6 = auStack_48.MoveNext();
					scriptObject = pMStack_38;
					if (!(bVar6)) break;
					MapLoader.LoadObject(scriptObject, true);
				}
				auStack_48.Dispose();
				pMVar5 = pMStack_70;
				if (pMStack_70._insertAfterId < 1) {
					return;
				}
				pSVar3 = MapLoader.ObjectOrder;
				if (pSVar3 != null) {
					bVar6 = pSVar3.Contains(pMVar5._insertAfterId);
					if (!bVar6) {
						return;
					}
					pSVar2 = __this_00.Objects;
					if ((typeof(AddObjectCommand.c)._2).cctor_finished_or_no_cctor == 0) {
						pMVar8 = typeof(AddObjectCommand.c).static_fields;
						__this_01 = pMVar8.__9__3_0;
					}
					else {
						pMVar8 = typeof(AddObjectCommand.c).static_fields;
						__this_01 = pMVar8.__9__3_0;
					}
					if (__this_01 == null) {
						if (((typeof(AddObjectCommand.c))._2).cctor_finished_or_no_cctor == 0) {
							pMVar8 = typeof(AddObjectCommand.c).static_fields;
						}
						pIVar4 = (object)pMVar8.__9;
						__this_01 = new Func<MapScriptBaseObject, int>(pIVar4, (intptr_t)MethodInfo_MapEditor_AddObjectCommand_c_Execute_b__3_0);
						pMVar8 = typeof(AddObjectCommand.c).static_fields;
						pMVar8.__9__3_0 = __this_01;
					}
					source = Enumerable.Select<MapScriptBaseObject, int>((System_Collections_Generic_IEnumerable_TSource__o)pSVar2, (System_Func_TSource__TResult__o)__this_01);
					if ((typeof(AddObjectCommand.c)._2).cctor_finished_or_no_cctor == 0) {
						pMVar8 = typeof(AddObjectCommand.c).static_fields;
						__this_02 = pMVar8.__9__3_1;
					}
					else {
						pMVar8 = typeof(AddObjectCommand.c).static_fields;
						__this_02 = pMVar8.__9__3_1;
					}
					if (__this_02 == null) {
						if (((typeof(AddObjectCommand.c))._2).cctor_finished_or_no_cctor == 0) {
							pMVar8 = typeof(AddObjectCommand.c).static_fields;
						}
						pIVar4 = (object)pMVar8.__9;
						__this_02 = new Func<int, bool>(pIVar4, (intptr_t)MethodInfo_MapEditor_AddObjectCommand_c_Execute_b__3_1);
						pMVar8 = typeof(AddObjectCommand.c).static_fields;
						pMVar8.__9__3_1 = __this_02;
					}
					source_00 = Enumerable.Where<int>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_02);
					__this_03 = Enumerable.ToList<int>(source_00);
					if (__this_03 != null) {
						auStack_88.GetEnumerator((List<int>)__this_03);
						pMStack_58 = pMStack_78;
						auStack_68 = (byte[])auStack_88._0_8_;
						auStack_88._0_8_ = null;
						auStack_88._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_68;
						while (bVar6 = auStack_68.MoveNext()) {
							iVar9 = (int32_t)pMStack_58;
							pSVar3 = MapLoader.ObjectOrder;
							if (pSVar3 == null) {
								throw new NullReferenceException();
							}
							pSVar3.Remove(iVar9);
						}
						auStack_68.Dispose();
						pSVar3 = MapLoader.ObjectOrder;
						if (pSVar3 != null) {
							iVar7 = pSVar3.IndexOf(pMStack_70._insertAfterId);
							if (iVar7 < 0) {
								pSVar3 = MapLoader.ObjectOrder;
								if (pSVar3 == null) goto label_05c8b898;
								iVar7 = pSVar3._size + -1;
								iVar1 = __this_03._size;
							}
							else {
								iVar1 = __this_03._size;
							}
							if (iVar1 < 1) {
								return;
							}
							iVar9 = 0;
							while(true) {
								pSVar3 = MapLoader.ObjectOrder;
								item = __this_03.get_Item(iVar9) ;
								if (pSVar3 == null) break;
								iVar1 = iVar7 + 1 + iVar9;
								iVar9 = iVar9 + 1;
								pSVar3.Insert(iVar1, item);
								if (__this_03._size <= iVar9) {
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05c8b898: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x5B8B950", Offset = "0x5B8A950", VA = "0x5B8B950", Slot = "5")]
	public override void Unexecute()
	{
		// Lifted from source/cpp/MapEditor/AddObjectCommand.c (MapEditor.AddObjectCommand$$Unexecute): 3 lines keep C-only constructs
		int id;
		List<MapScriptBaseObject> __this_00;
		bool bVar1;
		MapScriptObjects __this_01;
		System_Collections_Generic_List_Enumerator_T__o SStack_48;
		byte puStack_28;

		SStack_48._list = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		__this_01 = new MapScriptObjects();
		if (__this_01 != null) {
			__this_01.Deserialize(this._script);
			__this_00 = __this_01.Objects;
			if (__this_00 != null) {
				SStack_48 = __this_00.GetEnumerator();
				puStack_28 = (byte)&SStack_48;
				while(true) {
					bVar1 = SStack_48.MoveNext() ;
					if (!bVar1) {
						SStack_48.Dispose();
						return;
					}
					if (SStack_48._current == null) break;
					id = *(int)&SStack_48._current[2].klass;
					MapLoader.DeleteObject(id);
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/MapEditor/AddObjectCommand.c.

	// MapEditor.AddObjectCommand.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AddObjectCommand.c();
		AddObjectCommand.c.__9 = (AddObjectCommand.c)__this;
		return;
	}

	// MapEditor.AddObjectCommand.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// MapEditor.AddObjectCommand.<>c$$<Execute>b__3_0: clean
	private int c__Execute_b__3_0(MapScriptBaseObject o)
	{
		if (o == null) {
			throw new NullReferenceException();
		}
		return o.Id;
	}

	// MapEditor.AddObjectCommand.<>c$$<Execute>b__3_1: clean
	private bool c__Execute_b__3_1(int id)
	{
		uint uVar1;
		List<int> __this_00;
		bool bVar2;

		if (Il2CppMethodInitialized_075479c2 == false) {
			Il2CppMethodInitialized_075479c2 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = MapLoader.ObjectOrder;
		}
		else {
			__this_00 = *(List<int>*)((long)(typeof(MapLoader)).static_fields + 0x10);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar2;
	}
}
