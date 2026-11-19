// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.ReorderObjectsCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/ReorderObjectsCommand.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace MapEditor;

[Token(Token = "0x2000143")]
internal class ReorderObjectsCommand : BaseCommand
{
	[Token(Token = "0x4000764")]
	[FieldOffset(Offset = "0x10")]
	private List<int> _objectIds;

	[Token(Token = "0x4000765")]
	[FieldOffset(Offset = "0x18")]
	private int _anchorId;

	[Token(Token = "0x4000766")]
	[FieldOffset(Offset = "0x1C")]
	private bool _insertAfter;

	[Token(Token = "0x4000767")]
	[FieldOffset(Offset = "0x20")]
	private int? _newParentId;

	[Token(Token = "0x4000768")]
	[FieldOffset(Offset = "0x28")]
	private List<int> _oldOrder;

	[Token(Token = "0x4000769")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<int, int> _oldParents;

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x5B8E180", Offset = "0x5B8D180", VA = "0x5B8E180")]
	public ReorderObjectsCommand(List<int> objectIds, int anchorId, bool insertAfter, int? newParentId)
	{
		// Lifted from source/cpp/MapEditor/ReorderObjectsCommand.c (MapEditor.ReorderObjectsCommand$$.ctor): 12 lines keep C-only constructs
		Dictionary<int, object> pSVar1;
		int key;
		bool bVar2;
		int value;
		Dictionary<int, int> pSVar3;
		List<int> pSVar4;
		List<int> __this_00;
		MapObject obj;
		byte[] local_78 = new byte[16];
		ulong local_68;
		byte[] local_58 = new byte[16];
		object local_48;
		Nullable<int> local_40;
		Dictionary<int, int>* local_38;

		local_40 = newParentId;
		if (Il2CppMethodInitialized_075479cc == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor) ;
			Il2CppMethodInitialized_075479cc = true;
		}
		local_78._0_8_ = null;
		local_78._8_4_ = 0;
		local_78._12_4_ = 0;
		local_68._0_4_ = 0;
		local_68._4_4_ = 0;
		pSVar3 = new Dictionary<int, int>();
		local_38 = &this._oldParents;
		this._oldParents = pSVar3;
		base();
		pSVar4 = new List<int>((IEnumerable<T>)objectIds);
		this._objectIds = pSVar4;
		this._anchorId = anchorId;
		this._insertAfter = insertAfter;
		this._newParentId = local_40;
		pSVar4 = MapLoader.ObjectOrder;
		__this_00 = new List<int>((IEnumerable<T>)pSVar4);
		this._oldOrder = __this_00;
		if (objectIds == null) {
			throw new NullReferenceException();
		}
		local_58.GetEnumerator(objectIds);
		local_68 = local_48;
		local_78._0_8_ = local_58._0_8_;
		local_78._8_8_ = local_58._8_8_;
		local_58._0_8_ = null;
		local_58._8_8_ = (System_Collections_Generic_List_Enumerator_int__o)local_78;
		while(true) {
			bVar2 = local_78.MoveNext();
			if (!bVar2) {
				local_78.Dispose();
				return;
			}
			key = (int32_t)local_68;
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			if (pSVar1 == null) break;
			bVar2 = pSVar1.ContainsKey(key);
			if (bVar2) {
				pSVar3 = *local_38;
				pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				obj = pSVar1.get_Item(key);
				value = MapLoader.GetLogicalParentId(obj);
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				pSVar3.set_Item(key, value);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x5B8E500", Offset = "0x5B8D500", VA = "0x5B8E500", Slot = "4")]
	public override void Execute()
	{
		// Lifted from source/cpp/MapEditor/ReorderObjectsCommand.c (MapEditor.ReorderObjectsCommand$$Execute): clean
		this.ApplyReorder();
		return;
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x5B8EC30", Offset = "0x5B8DC30", VA = "0x5B8EC30", Slot = "5")]
	public override void Unexecute()
	{
		// Lifted from source/cpp/MapEditor/ReorderObjectsCommand.c (MapEditor.ReorderObjectsCommand$$Unexecute): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<int, int> __this_00;
		Dictionary<int, object> pSVar3;
		MapScriptBaseObject pMVar4;
		List<int> __this_01;
		object pIVar5;
		bool bVar6;
		int iVar7;
		MapObject obj;
		MapObject parent;
		int key;
		byte[] auStack_78 = new byte[8];
		object pIStack_68;
		Dictionary<TKey, TValue> pSStack_50;
		object pIStack_40;

		pIStack_68 = null;
		auStack_78 = (byte[])0x0;
		__this_00 = this._oldParents;
		if (__this_00 != null) {
			pSStack_50 = __this_00.GetEnumerator();
			pIStack_68 = pIStack_40;
			auStack_78 = (byte[])pSStack_50;
			pSStack_50 = null;
			while (true) {
				bVar6 = auStack_78.MoveNext();
				pIVar5 = pIStack_68;
				if (!(bVar6)) break;
				pSVar3 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				bVar6 = pSVar3.ContainsKey((int32_t)pIVar5);
				if (bVar6) {
					pSVar3 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					obj = pSVar3.get_Item((int32_t)pIVar5);
					iVar7 = MapLoader.GetLogicalParentId(obj);
					key = (int)((ulong)pIVar5 >> 0x20);
					if (iVar7 != key) {
						if ((long)pIVar5 < 0) {
	label_05c8ee8b: ;
							parent = null;
							uVar2 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
						}
						else {
							pSVar3 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar3 == null) {
								throw new NullReferenceException();
							}
							bVar6 = pSVar3.ContainsKey(key);
							if (!bVar6) goto label_05c8ee8b;
							pSVar3 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar3 == null) {
								throw new NullReferenceException();
							}
							parent = pSVar3.get_Item(key);
							uVar2 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
						}
						if (uVar2 == 0) {
						}
						MapLoader.SetParentLogical(obj, parent);
						if (obj == null) {
							throw new NullReferenceException();
						}
						pMVar4 = obj.ScriptObject;
						if (pMVar4 == null) {
							throw new NullReferenceException();
						}
						pMVar4.Parent = key;
					}
				}
			}
			auStack_78.Dispose();
			__this_01 = MapLoader.ObjectOrder;
			if (__this_01 != null) {
				piVar1 = &__this_01._version;
				*piVar1 = *piVar1 + 1;
				__this_01._size = 0;
				__this_01.AddRange((IEnumerable<T>)this._oldOrder);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x5B8E510", Offset = "0x5B8D510", VA = "0x5B8E510")]
	private void ApplyReorder()
	{
		// Lifted from source/cpp/MapEditor/ReorderObjectsCommand.c (MapEditor.ReorderObjectsCommand$$ApplyReorder): 14 lines keep C-only constructs
		int iVar1;
		Dictionary<int, @object> pSVar2;
		List<int> pSVar3;
		MapScriptBaseObject pMVar4;
		Dictionary<int, MapObject> @object;
		object object_00;
		bool bVar5;
		int iVar6;
		int iVar7;
		MapObject obj;
		Func<int, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o source;
		MapEditor_ReorderObjectsCommand___c_StaticFields pMVar8;
		Func<int, int> __this_01;
		System_Linq_IOrderedEnumerable_TSource__o source_00;
		System_Collections_Generic_List_TSource__o __this_02;
		int iVar9;
		byte[] auStack_78 = new byte[8];
		object pIStack_68;
		byte[] auStack_58 = new byte[16];
		object pIStack_48;
		MapObject pMStack_40;
		ReorderObjectsCommand pMStack_38;

		auStack_78 = (byte[])0x0;
		pIStack_68 = null;
		if (this._newParentId.hasValue != false) {
			iVar6 = (this._newParentId).Value;
			if (iVar6 < 0) {
	label_05c8e6e5: ;
				pMStack_40 = null;
			}
			else {
				pSVar2 = (Dictionary<int, @object>)MapLoader.IdToMapObject;
				if (pSVar2 == null) goto label_05c8eb48;
				bVar5 = pSVar2.ContainsKey(iVar6);
				if (!bVar5) goto label_05c8e6e5;
				pSVar2 = (Dictionary<int, @object>)MapLoader.IdToMapObject;
				if (pSVar2 == null) goto label_05c8eb48;
				pMStack_40 = pSVar2.get_Item(iVar6);
			}
			pSVar3 = this._objectIds;
			pMStack_38 = this;
			if (pSVar3 == null) goto label_05c8eb48;
			auStack_58.GetEnumerator(pSVar3);
			pIStack_68 = pIStack_48;
			auStack_78 = (byte[])auStack_58._0_8_;
			auStack_58._0_8_ = null;
			auStack_58._8_8_ = auStack_78;
			while(true) {
				bVar5 = auStack_78.MoveNext();
				if (!bVar5) break;
				iVar7 = (int32_t)pIStack_68;
				pSVar2 = (Dictionary<int, @object>)MapLoader.IdToMapObject;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				bVar5 = pSVar2.ContainsKey(iVar7);
				if (bVar5) {
					pSVar2 = (Dictionary<int, @object>)MapLoader.IdToMapObject;
					if (pSVar2 == null) {
						throw new NullReferenceException();
					}
					obj = pSVar2.get_Item(iVar7);
					iVar7 = MapLoader.GetLogicalParentId(obj);
					if (iVar7 != iVar6) {
						MapLoader.SetParentLogical(obj, pMStack_40);
						if (obj == null) {
							throw new NullReferenceException();
						}
						pMVar4 = obj.ScriptObject;
						if (pMVar4 == null) {
							throw new NullReferenceException();
						}
						pMVar4.Parent = iVar6;
					}
				}
			}
			auStack_78.Dispose();
			this = pMStack_38;
		}
		pSVar3 = this._objectIds;
		@object = MapLoader.IdToMapObject;
		if (@object != null) {
			__this_00 = new Func<int, bool>((object)@object, (intptr_t)((Il2CppClass)@object.klass).vtable[0x24].method);
			source = Enumerable.Where<int>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3, (System_Func_TSource__bool__o)__this_00);
			if ((typeof(ReorderObjectsCommand.c)._2).cctor_finished_or_no_cctor == 0) {
				pMVar8 = typeof(ReorderObjectsCommand.c).static_fields;
				__this_01 = pMVar8.__9__9_0;
			}
			else {
				pMVar8 = typeof(ReorderObjectsCommand.c).static_fields;
				__this_01 = pMVar8.__9__9_0;
			}
			if (__this_01 == null) {
				if (((typeof(ReorderObjectsCommand.c))._2).cctor_finished_or_no_cctor == 0) {
					pMVar8 = typeof(ReorderObjectsCommand.c).static_fields;
				}
				object_00 = (object)pMVar8.__9;
				__this_01 = new Func<int, int>(object_00, (intptr_t)MethodInfo_MapEditor_ReorderObjectsCommand_c_ApplyReorder_b__9_0);
				pMVar8 = typeof(ReorderObjectsCommand.c).static_fields;
				pMVar8.__9__9_0 = __this_01;
			}
			source_00 = Enumerable.OrderBy<int, int>(source, (System_Func_TSource__TKey__o)__this_01);
			__this_02 = Enumerable.ToList<int>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
			if (__this_02 != null) {
				auStack_58.GetEnumerator((List<int>)__this_02);
				pIStack_68 = pIStack_48;
				auStack_78 = (byte[])auStack_58._0_8_;
				auStack_58._0_8_ = null;
				auStack_58._8_8_ = auStack_78;
				while(true) {
					bVar5 = auStack_78.MoveNext();
					if (!bVar5) break;
					iVar6 = (int32_t)pIStack_68;
					pSVar3 = MapLoader.ObjectOrder;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					pSVar3.Remove(iVar6);
				}
				auStack_78.Dispose();
				pSVar3 = MapLoader.ObjectOrder;
				if (pSVar3 != null) {
					iVar6 = pSVar3.IndexOf(this._anchorId);
					if (iVar6 < 0) {
						pSVar3 = MapLoader.ObjectOrder;
						if (pSVar3 == null) goto label_05c8eb48;
						iVar9 = pSVar3._size;
						iVar1 = __this_02._size;
					}
					else {
						iVar9 = iVar6 + (uint)this._insertAfter;
						iVar1 = __this_02._size;
					}
					if (0 < iVar1) {
						iVar6 = 0;
						do {
							pSVar3 = MapLoader.ObjectOrder;
							iVar7 = __this_02.get_Item(iVar6);
							if (pSVar3 == null) goto label_05c8eb48;
							pSVar3.Insert(iVar9 + iVar6, iVar7);
							iVar6 = iVar6 + 1;
						} while (iVar6 < __this_02._size);
					}
					return;
				}
			}
		}
	label_05c8eb48: ;
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/MapEditor/ReorderObjectsCommand.c.

	// MapEditor.ReorderObjectsCommand.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new ReorderObjectsCommand.c();
		ReorderObjectsCommand.c.__9 =(ReorderObjectsCommand.c)__this;
		return;
	}

	// MapEditor.ReorderObjectsCommand.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// MapEditor.ReorderObjectsCommand.<>c$$<ApplyReorder>b__9_0: clean
	private int c__ApplyReorder_b__9_0(int id)
	{
		uint uVar1;
		List<int> __this_00;
		int iVar2;

		if (Il2CppMethodInitialized_075479d0 == false) {
			Il2CppMethodInitialized_075479d0 = true;
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
		return iVar2;
	}
}
