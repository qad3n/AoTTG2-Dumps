// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.TransformPositionCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/TransformPositionCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformPositionCommand.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000147")]
internal class TransformPositionCommand : BaseCommand
{
	[Token(Token = "0x4000774")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldPositions;

	[Token(Token = "0x4000775")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newPositions;

	[Token(Token = "0x4000776")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _ids;

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x5B8FE70", Offset = "0x5B8EE70", VA = "0x5B8FE70")]
	public TransformPositionCommand(List<MapObject> mapObjects)
	{
		// Lifted from source/cpp/MapEditor/TransformPositionCommand.c (MapEditor.TransformPositionCommand$$.ctor): 18 lines keep C-only constructs
		List<Vector3>* targetAddress;
		List<int>* targetAddress_00;
		int piVar1;
		int item;
		uint uVar2;
		Int32[] pSVar3;
		Vector3[] pUVar4;
		GameObject __this_00;
		object pIVar6;
		bool bVar7;
		List<Vector3> pSVar8;
		List<int> pSVar9;
		Transform __this_01;
		Il2CppClass __this_02;
		Vector3 UVar10;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_48 = new byte[16];
		object local_38;

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		pSVar8 = new List<Vector3>();
		this._oldPositions = pSVar8;
		pSVar8 = new List<Vector3>();
		targetAddress = &this._newPositions;
		this._newPositions = pSVar8;
		pSVar9 = new List<int>();
		targetAddress_00 = &this._ids;
		this._ids = pSVar9;
		base();
		if (mapObjects == null) {
			throw new NullReferenceException();
		}
		local_48.GetEnumerator((List<object>)mapObjects);
		local_68._current = local_38;
		local_68._list = (List<T>)local_48._0_8_;
		local_68._index = local_48._8_4_;
		local_68._version = local_48._12_4_;
		local_48._0_8_ = null;
		local_48._8_8_ = &local_68;
		while(true) {
			bVar7 = local_68.MoveNext();
			pIVar6 = local_68._current;
			if (!bVar7) {
				local_68.Dispose();
				return;
			}
			if (local_68._current == null) {
				throw new NullReferenceException();
			}
			__this_02 = local_68._current[2].klass;
			if (__this_02 == null) {
				throw new NullReferenceException();
			}
			pSVar9 = *targetAddress_00;
			if (pSVar9 == null) break;
			item = *(int)&(__this_02._1).byval_arg.data;
			piVar1 = &pSVar9._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = pSVar9._items;
			if (pSVar3 == null) break;
			uVar2 = pSVar9._size;
			if (uVar2 < (uint)pSVar3.Length) {
				pSVar9._size = uVar2 + 1;
				pSVar3[(int)uVar2] = item;
			}
			else {
				pSVar9.AddWithResize(item);
				__this_02 = pIVar6[2].klass;
				if (__this_02 == null) {
					throw new NullReferenceException();
				}
			}
			pSVar8 = this._oldPositions;
			UVar10 = __this_02.GetPosition();
			if (pSVar8 == null) {
	label_05c901ad: ;
				throw new NullReferenceException();
			}
			piVar1 = &pSVar8._version;
			*piVar1 = *piVar1 + 1;
			pUVar4 = pSVar8._items;
			if (pUVar4 == null) goto label_05c901ad;
			uVar2 = pSVar8._size;
			if (uVar2 < (uint)pUVar4.Length) {
				pSVar8._size = uVar2 + 1;
				pUVar4[(int)uVar2].x = UVar10.x;
				pUVar4[(int)uVar2].y = UVar10.y;
				pUVar4[(int)uVar2].z = UVar10.z;
			}
			else {
				pSVar8.AddWithResize(UVar10);
			}
			__this_00 = pIVar6[1].monitor;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			pSVar8 = *targetAddress;
			__this_01 = __this_00.transform;
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			UVar10 = __this_01.localPosition;
			if (pSVar8 == null) {
	label_05c901b7: ;
				throw new NullReferenceException();
			}
			piVar1 = &pSVar8._version;
			*piVar1 = *piVar1 + 1;
			pUVar4 = pSVar8._items;
			if (pUVar4 == null) goto label_05c901b7;
			uVar2 = pSVar8._size;
			if (uVar2 < (uint)pUVar4.Length) {
				pSVar8._size = uVar2 + 1;
				pUVar4[(int)uVar2].x = UVar10.x;
				pUVar4[(int)uVar2].y = UVar10.y;
				pUVar4[(int)uVar2].z = UVar10.z;
			}
			else {
				pSVar8.AddWithResize(UVar10);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x5B90260", Offset = "0x5B8F260", VA = "0x5B90260", Slot = "4")]
	public override void Execute()
	{
		// Lifted from source/cpp/MapEditor/TransformPositionCommand.c (MapEditor.TransformPositionCommand$$Execute): clean
		Dictionary<int, object> pSVar1;
		GameObject __this_00;
		List<Vector3> pSVar2;
		MapScriptBaseObject __this_01;
		int iVar3;
		MapObject pMVar4;
		Transform __this_02;
		List<int> pSVar5;
		int index;
		Vector3 UVar6;

		pSVar5 = this._ids;
		if (pSVar5 == null) {
	label_05c90408: ;
			throw new NullReferenceException();
		}
		index = 0;
		do {
			if (pSVar5._size <= index) {
				return;
			}
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
				pSVar5 = this._ids;
				if (pSVar5 == null) goto label_05c90408;
			}
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			iVar3 = pSVar5.get_Item(index);
			if (((pSVar1 == null) ||(pMVar4 = pSVar1.get_Item(iVar3), pMVar4 == null)) ||(__this_00 = pMVar4.GameObject, __this_00 == null)) goto label_05c90408;
			__this_02 = __this_00.transform;
			pSVar2 = this._newPositions;
			if ((pSVar2 == null) ||(UVar6 = pSVar2.get_Item(index), __this_02 == null)) goto label_05c90408;
			__this_02.localPosition = UVar6;
			pSVar5 = this._ids;
			if (pSVar5 == null) goto label_05c90408;
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			iVar3 = pSVar5.get_Item(index);
			if (((pSVar1 == null) ||(pMVar4 = pSVar1.get_Item(iVar3), pMVar4 == null)) ||(pSVar2 = this._newPositions, pSVar2 == null)) goto label_05c90408;
			__this_01 = pMVar4.ScriptObject;
			UVar6 = pSVar2.get_Item(index);
			if (__this_01 == null) goto label_05c90408;
			__this_01.SetPosition(UVar6);
			index = index + 1;
			pSVar5 = this._ids;
			if (pSVar5 == null) goto label_05c90408;
		} while(true);
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x5B90420", Offset = "0x5B8F420", VA = "0x5B90420", Slot = "5")]
	public override void Unexecute()
	{
		// Lifted from source/cpp/MapEditor/TransformPositionCommand.c (MapEditor.TransformPositionCommand$$Unexecute): clean
		Dictionary<int, object> pSVar1;
		GameObject __this_00;
		List<Vector3> pSVar2;
		MapScriptBaseObject __this_01;
		int iVar3;
		MapObject pMVar4;
		Transform __this_02;
		List<int> pSVar5;
		int index;
		Vector3 UVar6;

		pSVar5 = this._ids;
		if (pSVar5 == null) {
	label_05c905c8: ;
			throw new NullReferenceException();
		}
		index = 0;
		do {
			if (pSVar5._size <= index) {
				return;
			}
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
				pSVar5 = this._ids;
				if (pSVar5 == null) goto label_05c905c8;
			}
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			iVar3 = pSVar5.get_Item(index);
			if (((pSVar1 == null) ||(pMVar4 = pSVar1.get_Item(iVar3), pMVar4 == null)) ||(__this_00 = pMVar4.GameObject, __this_00 == null)) goto label_05c905c8;
			__this_02 = __this_00.transform;
			pSVar2 = this._oldPositions;
			if ((pSVar2 == null) ||(UVar6 = pSVar2.get_Item(index), __this_02 == null)) goto label_05c905c8;
			__this_02.localPosition = UVar6;
			pSVar5 = this._ids;
			if (pSVar5 == null) goto label_05c905c8;
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			iVar3 = pSVar5.get_Item(index);
			if (((pSVar1 == null) ||(pMVar4 = pSVar1.get_Item(iVar3), pMVar4 == null)) ||(pSVar2 = this._oldPositions, pSVar2 == null)) goto label_05c905c8;
			__this_01 = pMVar4.ScriptObject;
			UVar6 = pSVar2.get_Item(index);
			if (__this_01 == null) goto label_05c905c8;
			__this_01.SetPosition(UVar6);
			index = index + 1;
			pSVar5 = this._ids;
			if (pSVar5 == null) goto label_05c905c8;
		} while(true);
	}
}
