// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.TransformScaleCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/TransformScaleCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformScaleCommand.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200014A")]
internal class TransformScaleCommand : BaseCommand
{
	[Token(Token = "0x400077F")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldScales;

	[Token(Token = "0x4000780")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newScales;

	[Token(Token = "0x4000781")]
	[FieldOffset(Offset = "0x20")]
	private List<Vector3> _oldPositions;

	[Token(Token = "0x4000782")]
	[FieldOffset(Offset = "0x28")]
	private List<Vector3> _newPositions;

	[Token(Token = "0x4000783")]
	[FieldOffset(Offset = "0x30")]
	private List<int> _ids;

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x5B919C0", Offset = "0x5B909C0", VA = "0x5B919C0")]
	public TransformScaleCommand(List<MapObject> mapObjects)
	{
		// Lifted from source/cpp/MapEditor/TransformScaleCommand.c (MapEditor.TransformScaleCommand$$.ctor): 41 lines keep C-only constructs
		List<Vector3>* targetAddress;
		List<Vector3>* targetAddress_00;
		List<int>* targetAddress_01;
		int piVar1;
		float fVar2;
		int item;
		uint uVar3;
		Int32[] pSVar4;
		Vector3[] pUVar5;
		object pIVar7;
		bool bVar8;
		List<Vector3> pSVar9;
		List<int> pSVar10;
		Transform pUVar11;
		Il2CppClass __this_00;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar12;
		Vector3 b;
		System_Collections_Generic_List_Enumerator_object__o local_98;
		byte[] local_80 = new byte[16];
		object local_70;
		byte[] local_68 = new byte[16];
		List<Vector3>* local_58;
		TransformScaleCommand local_50;
		IntPtr local_48;

		local_68._0_8_ = mapObjects;
		local_98._list = null;
		local_98._index = 0;
		local_98._version = 0;
		local_98._current = null;
		pSVar9 = new List<Vector3>();
		local_50 = &this.fields;
		this._oldScales = pSVar9;
		pSVar9 = new List<Vector3>();
		local_58 = &this._newScales;
		this._newScales = pSVar9;
		pSVar9 = new List<Vector3>();
		targetAddress = &this._oldPositions;
		this._oldPositions = pSVar9;
		pSVar9 = new List<Vector3>();
		targetAddress_00 = &this._newPositions;
		this._newPositions = pSVar9;
		pSVar10 = new List<int>();
		targetAddress_01 = &this._ids;
		this._ids = pSVar10;
		base();
		if ((List<object>)local_68._0_8_ ==null) {
			throw new NullReferenceException();
		}
		local_80.GetEnumerator((List<object>)local_68._0_8_);
		local_98._current = local_70;
		local_98._list = (List<T>)local_80._0_8_;
		local_98._index = local_80._8_4_;
		local_98._version = local_80._12_4_;
		local_80._0_8_ = null;
		local_80._8_8_ = &local_98;
		while(true) {
			bVar8 = local_98.MoveNext();
			pIVar7 = local_98._current;
			if (!bVar8) {
				local_98.Dispose();
				return;
			}
			if (local_98._current == null) {
				throw new NullReferenceException();
			}
			__this_00 = local_98._current[2].klass;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			pSVar10 = *targetAddress_01;
			if (pSVar10 == null) break;
			item = *(int)&(__this_00._1).byval_arg.data;
			piVar1 = &pSVar10._version;
			*piVar1 = *piVar1 + 1;
			pSVar4 = pSVar10._items;
			if (pSVar4 == null) break;
			uVar3 = pSVar10._size;
			if (uVar3 < (uint)pSVar4.Length) {
				pSVar10._size = uVar3 + 1;
				pSVar4[(int)uVar3] = item;
			}
			else {
				pSVar10.AddWithResize(item);
				__this_00 = pIVar7[2].klass;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
			}
			pSVar9 = local_50._oldScales;
			UVar12 = __this_00.GetScale();
			if (pSVar9 == null) {
	label_05c91ec2: ;
				throw new NullReferenceException();
			}
			piVar1 = &pSVar9._version;
			*piVar1 = *piVar1 + 1;
			pUVar5 = pSVar9._items;
			if (pUVar5 == null) goto label_05c91ec2;
			uVar3 = pSVar9._size;
			if (uVar3 < (uint)pUVar5.Length) {
				pSVar9._size = uVar3 + 1;
				pUVar5[(int)uVar3].x = UVar12.x;
				pUVar5[(int)uVar3].y = UVar12.y;
				pUVar5[(int)uVar3].z = UVar12.z;
			}
			else {
				pSVar9.AddWithResize(UVar12);
			}
			if (pIVar7[1].monitor == null) {
				throw new NullReferenceException();
			}
			pSVar9 = *local_58;
			pUVar11 = pIVar7[1].monitor.transform;
			if (pUVar11 == null) {
				throw new NullReferenceException();
			}
			UVar12 = pUVar11.localScale;
			local_68._8_4_ = extraout_XMM0_Dc;
			local_68._0_8_ = UVar12._0_8_;
			local_68._12_4_ = extraout_XMM0_Dd;
			local_48 = pIVar7[2].monitor;
			fVar2 = *(float)&pIVar7[3].klass;
			UVar12.x = (float)local_68._0_4_;
			UVar12.y = (float)local_68._4_4_;
			b.z = fVar2;
			b._0_8_ = local_48;
			UVar12 = Util.DivideVectors(UVar12, b);
			if (pSVar9 == null) {
	label_05c91ed1: ;
				throw new NullReferenceException();
			}
			piVar1 = &pSVar9._version;
			*piVar1 = *piVar1 + 1;
			pUVar5 = pSVar9._items;
			if (pUVar5 == null) goto label_05c91ed1;
			uVar3 = pSVar9._size;
			if (uVar3 < (uint)pUVar5.Length) {
				pSVar9._size = uVar3 + 1;
				pUVar5[(int)uVar3].x = UVar12.x;
				pUVar5[(int)uVar3].y = UVar12.y;
				pUVar5[(int)uVar3].z = UVar12.z;
			}
			else {
				pSVar9.AddWithResize(UVar12);
			}
			if (pIVar7[2].klass == null) {
				throw new NullReferenceException();
			}
			pSVar9 = *targetAddress;
			UVar12 = pIVar7[2].klass.GetPosition();
			if (pSVar9 == null) {
	label_05c91ecc: ;
				throw new NullReferenceException();
			}
			piVar1 = &pSVar9._version;
			*piVar1 = *piVar1 + 1;
			pUVar5 = pSVar9._items;
			if (pUVar5 == null) goto label_05c91ecc;
			uVar3 = pSVar9._size;
			if (uVar3 < (uint)pUVar5.Length) {
				pSVar9._size = uVar3 + 1;
				pUVar5[(int)uVar3].x = UVar12.x;
				pUVar5[(int)uVar3].y = UVar12.y;
				pUVar5[(int)uVar3].z = UVar12.z;
			}
			else {
				pSVar9.AddWithResize(UVar12);
			}
			if (pIVar7[1].monitor == null) {
				throw new NullReferenceException();
			}
			pSVar9 = *targetAddress_00;
			pUVar11 = pIVar7[1].monitor.transform;
			if (pUVar11 == null) {
				throw new NullReferenceException();
			}
			UVar12 = pUVar11.localPosition;
			if (pSVar9 == null) {
	label_05c91ed6: ;
				throw new NullReferenceException();
			}
			piVar1 = &pSVar9._version;
			*piVar1 = *piVar1 + 1;
			pUVar5 = pSVar9._items;
			if (pUVar5 == null) goto label_05c91ed6;
			uVar3 = pSVar9._size;
			if (uVar3 < (uint)pUVar5.Length) {
				pSVar9._size = uVar3 + 1;
				pUVar5[(int)uVar3].x = UVar12.x;
				pUVar5[(int)uVar3].y = UVar12.y;
				pUVar5[(int)uVar3].z = UVar12.z;
			}
			else {
				pSVar9.AddWithResize(UVar12);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x5B91FA0", Offset = "0x5B90FA0", VA = "0x5B91FA0", Slot = "4")]
	public override void Execute()
	{
		// Lifted from source/cpp/MapEditor/TransformScaleCommand.c (MapEditor.TransformScaleCommand$$Execute): clean
		Dictionary<int, object> __this_00;
		GameObject pUVar1;
		List<Vector3> pSVar2;
		MapScriptBaseObject pMVar3;
		Vector3 a;
		int key;
		MapObject pMVar4;
		Transform pUVar5;
		List<int> __this_01;
		int index;
		Vector3 UVar6;

		__this_01 = this._ids;
		if (__this_01 == null) {
	label_05c921e5: ;
			throw new NullReferenceException();
		}
		index = 0;
		do {
			if (__this_01._size <= index) {
				return;
			}
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
				__this_01 = this._ids;
				if (__this_01 == null) goto label_05c921e5;
			}
			__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			key = __this_01.get_Item(index);
			if (((__this_00 == null) ||(pMVar4 = __this_00.get_Item(key), pMVar4 == null)) ||(pUVar1 = pMVar4.GameObject, pUVar1 == null)) goto label_05c921e5;
			pUVar5 = pUVar1.transform;
			pSVar2 = this._newScales;
			if (pSVar2 == null) goto label_05c921e5;
			a = pMVar4.BaseScale;
			UVar6 = pSVar2.get_Item(index);
			UVar6 = Util.MultiplyVectors((Vector3)a, UVar6);
			if (pUVar5 == null) goto label_05c921e5;
			pUVar5.localScale = UVar6;
			pSVar2 = this._newScales;
			if (pSVar2 == null) goto label_05c921e5;
			pMVar3 = pMVar4.ScriptObject;
			UVar6 = pSVar2.get_Item(index);
			if (pMVar3 == null) goto label_05c921e5;
			pMVar3.SetScale(UVar6);
			pUVar1 = pMVar4.GameObject;
			if (pUVar1 == null) goto label_05c921e5;
			pUVar5 = pUVar1.transform;
			pSVar2 = this._newPositions;
			if ((pSVar2 == null) ||(UVar6 = pSVar2.get_Item(index), pUVar5 == null)) goto label_05c921e5;
			pUVar5.localPosition = UVar6;
			pSVar2 = this._newPositions;
			if (pSVar2 == null) goto label_05c921e5;
			pMVar3 = pMVar4.ScriptObject;
			UVar6 = pSVar2.get_Item(index);
			if (pMVar3 == null) goto label_05c921e5;
			pMVar3.SetPosition(UVar6);
			index = index + 1;
			__this_01 = this._ids;
			if (__this_01 == null) goto label_05c921e5;
		} while(true);
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x5B92200", Offset = "0x5B91200", VA = "0x5B92200", Slot = "5")]
	public override void Unexecute()
	{
		// Lifted from source/cpp/MapEditor/TransformScaleCommand.c (MapEditor.TransformScaleCommand$$Unexecute): clean
		Dictionary<int, object> __this_00;
		GameObject pUVar1;
		List<Vector3> pSVar2;
		MapScriptBaseObject pMVar3;
		Vector3 a;
		int key;
		MapObject pMVar4;
		Transform pUVar5;
		List<int> __this_01;
		int index;
		Vector3 UVar6;

		__this_01 = this._ids;
		if (__this_01 == null) {
	label_05c92445: ;
			throw new NullReferenceException();
		}
		index = 0;
		do {
			if (__this_01._size <= index) {
				return;
			}
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
				__this_01 = this._ids;
				if (__this_01 == null) goto label_05c92445;
			}
			__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			key = __this_01.get_Item(index);
			if (((__this_00 == null) ||(pMVar4 = __this_00.get_Item(key), pMVar4 == null)) ||(pUVar1 = pMVar4.GameObject, pUVar1 == null)) goto label_05c92445;
			pUVar5 = pUVar1.transform;
			pSVar2 = this._oldScales;
			if (pSVar2 == null) goto label_05c92445;
			a = pMVar4.BaseScale;
			UVar6 = pSVar2.get_Item(index);
			UVar6 = Util.MultiplyVectors((Vector3)a, UVar6);
			if (pUVar5 == null) goto label_05c92445;
			pUVar5.localScale = UVar6;
			pSVar2 = this._oldScales;
			if (pSVar2 == null) goto label_05c92445;
			pMVar3 = pMVar4.ScriptObject;
			UVar6 = pSVar2.get_Item(index);
			if (pMVar3 == null) goto label_05c92445;
			pMVar3.SetScale(UVar6);
			pUVar1 = pMVar4.GameObject;
			if (pUVar1 == null) goto label_05c92445;
			pUVar5 = pUVar1.transform;
			pSVar2 = this._oldPositions;
			if ((pSVar2 == null) ||(UVar6 = pSVar2.get_Item(index), pUVar5 == null)) goto label_05c92445;
			pUVar5.localPosition = UVar6;
			pSVar2 = this._oldPositions;
			if (pSVar2 == null) goto label_05c92445;
			pMVar3 = pMVar4.ScriptObject;
			UVar6 = pSVar2.get_Item(index);
			if (pMVar3 == null) goto label_05c92445;
			pMVar3.SetPosition(UVar6);
			index = index + 1;
			__this_01 = this._ids;
			if (__this_01 == null) goto label_05c92445;
		} while(true);
	}
}
