// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.TransformPositionRotationCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/TransformPositionRotationCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformPositionRotationCommand.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000148")]
internal class TransformPositionRotationCommand : BaseCommand
{
	[Token(Token = "0x4000777")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldPositions;

	[Token(Token = "0x4000778")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newPositions;

	[Token(Token = "0x4000779")]
	[FieldOffset(Offset = "0x20")]
	private List<Vector3> _oldRotations;

	[Token(Token = "0x400077A")]
	[FieldOffset(Offset = "0x28")]
	private List<Vector3> _newRotations;

	[Token(Token = "0x400077B")]
	[FieldOffset(Offset = "0x30")]
	private List<int> _ids;

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x5B905E0", Offset = "0x5B8F5E0", VA = "0x5B905E0")]
	public TransformPositionRotationCommand(List<MapObject> mapObjects)
	{
		// Lifted from source/cpp/MapEditor/TransformPositionRotationCommand.c (MapEditor.TransformPositionRotationCommand$$.ctor): 30 lines keep C-only constructs
		List<Vector3>* targetAddress;
		List<Vector3>* targetAddress_00;
		List<int>* targetAddress_01;
		int piVar1;
		int item;
		uint uVar2;
		Int32[] pSVar3;
		Vector3[] pUVar4;
		object pIVar6;
		bool bVar7;
		List<Vector3> pSVar8;
		List<int> pSVar9;
		Transform pUVar10;
		Il2CppClass __this_00;
		Vector3 UVar11;
		Vector3 euler;
		System_Collections_Generic_List_Enumerator_object__o local_98;
		byte[] local_78 = new byte[16];
		object local_68;
		List<MapObject> local_60;
		List<Vector3>* local_58;
		TransformPositionRotationCommand local_50;
		Quaternion local_48;

		local_60 = mapObjects;
		local_98._list = null;
		local_98._index = 0;
		local_98._version = 0;
		local_98._current = null;
		local_48 = (Quaternion)ZEXT816(0);
		pSVar8 = new List<Vector3>();
		local_50 = &this.fields;
		this._oldPositions = pSVar8;
		pSVar8 = new List<Vector3>();
		local_58 = &this._newPositions;
		this._newPositions = pSVar8;
		pSVar8 = new List<Vector3>();
		targetAddress = &this._oldRotations;
		this._oldRotations = pSVar8;
		pSVar8 = new List<Vector3>();
		targetAddress_00 = &this._newRotations;
		this._newRotations = pSVar8;
		pSVar9 = new List<int>();
		targetAddress_01 = &this._ids;
		this._ids = pSVar9;
		base();
		if (local_60 == null) {
			throw new NullReferenceException();
		}
		local_78.GetEnumerator((List<object>)local_60);
		local_98._current = local_68;
		local_98._list = (List<T>)local_78._0_8_;
		local_98._index = local_78._8_4_;
		local_98._version = local_78._12_4_;
		local_78._0_8_ = null;
		local_78._8_8_ = &local_98;
		while(true) {
			bVar7 = local_98.MoveNext();
			pIVar6 = local_98._current;
			if (!bVar7) {
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
			pSVar9 = *targetAddress_01;
			if (pSVar9 == null) break;
			item = *(int)&(__this_00._1).byval_arg.data;
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
				__this_00 = pIVar6[2].klass;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
			}
			pSVar8 = local_50._oldPositions;
			UVar11 = __this_00.GetPosition();
			if (pSVar8 == null) {
	label_05c90abc: ;
				throw new NullReferenceException();
			}
			piVar1 = &pSVar8._version;
			*piVar1 = *piVar1 + 1;
			pUVar4 = pSVar8._items;
			if (pUVar4 == null) goto label_05c90abc;
			uVar2 = pSVar8._size;
			if (uVar2 < (uint)pUVar4.Length) {
				pSVar8._size = uVar2 + 1;
				pUVar4[(int)uVar2].x = UVar11.x;
				pUVar4[(int)uVar2].y = UVar11.y;
				pUVar4[(int)uVar2].z = UVar11.z;
			}
			else {
				pSVar8.AddWithResize(UVar11);
			}
			if (pIVar6[1].monitor == null) {
				throw new NullReferenceException();
			}
			pSVar8 = *local_58;
			pUVar10 = pIVar6[1].monitor.transform;
			if (pUVar10 == null) {
				throw new NullReferenceException();
			}
			UVar11 = pUVar10.localPosition;
			if (pSVar8 == null) {
	label_05c90ac6: ;
				throw new NullReferenceException();
			}
			piVar1 = &pSVar8._version;
			*piVar1 = *piVar1 + 1;
			pUVar4 = pSVar8._items;
			if (pUVar4 == null) goto label_05c90ac6;
			uVar2 = pSVar8._size;
			if (uVar2 < (uint)pUVar4.Length) {
				pSVar8._size = uVar2 + 1;
				pUVar4[(int)uVar2].x = UVar11.x;
				pUVar4[(int)uVar2].y = UVar11.y;
				pUVar4[(int)uVar2].z = UVar11.z;
			}
			else {
				pSVar8.AddWithResize(UVar11);
			}
			if (pIVar6[2].klass == null) {
				throw new NullReferenceException();
			}
			pSVar8 = *targetAddress;
			UVar11 = pIVar6[2].klass.GetRotation();
			if (pSVar8 == null) {
	label_05c90acb: ;
				throw new NullReferenceException();
			}
			piVar1 = &pSVar8._version;
			*piVar1 = *piVar1 + 1;
			pUVar4 = pSVar8._items;
			if (pUVar4 == null) goto label_05c90acb;
			uVar2 = pSVar8._size;
			if (uVar2 < (uint)pUVar4.Length) {
				pSVar8._size = uVar2 + 1;
				pUVar4[(int)uVar2].x = UVar11.x;
				pUVar4[(int)uVar2].y = UVar11.y;
				pUVar4[(int)uVar2].z = UVar11.z;
			}
			else {
				pSVar8.AddWithResize(UVar11);
			}
			if (pIVar6[1].monitor == null) {
				throw new NullReferenceException();
			}
			pSVar8 = *targetAddress_00;
			pUVar10 = pIVar6[1].monitor.transform;
			if (pUVar10 == null) {
				throw new NullReferenceException();
			}
			local_48 = pUVar10.localRotation;
			UVar11 = Quaternion.Internal_ToEulerRad(ref local_48);
			euler.z = UVar11.z * 57.29578;
			euler.y = UVar11.y * 57.29578;
			euler.x = UVar11.x * 57.29578;
			UVar11 = Quaternion.Internal_MakePositive(euler);
			if (pSVar8 == null) {
	label_05c90ad0: ;
				throw new NullReferenceException();
			}
			piVar1 = &pSVar8._version;
			*piVar1 = *piVar1 + 1;
			pUVar4 = pSVar8._items;
			if (pUVar4 == null) goto label_05c90ad0;
			uVar2 = pSVar8._size;
			if (uVar2 < (uint)pUVar4.Length) {
				pSVar8._size = uVar2 + 1;
				pUVar4[(int)uVar2].x = UVar11.x;
				pUVar4[(int)uVar2].y = UVar11.y;
				pUVar4[(int)uVar2].z = UVar11.z;
			}
			else {
				pSVar8.AddWithResize(UVar11);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x5B90BA0", Offset = "0x5B8FBA0", VA = "0x5B90BA0", Slot = "4")]
	public override void Execute()
	{
		// Lifted from source/cpp/MapEditor/TransformPositionRotationCommand.c (MapEditor.TransformPositionRotationCommand$$Execute): clean
		Dictionary<int, object> pSVar1;
		GameObject pUVar2;
		List<Vector3> pSVar3;
		MapScriptBaseObject pMVar4;
		int iVar5;
		MapObject pMVar6;
		Transform pUVar7;
		List<int> pSVar8;
		int index;
		Quaternion value;
		Vector3 UVar9;
		Vector3 UStack_40;

		pSVar8 = this._ids;
		if (pSVar8 == null) {
	label_05c90e87: ;
			throw new NullReferenceException();
		}
		index = 0;
		do {
			if (pSVar8._size <= index) {
				return;
			}
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
				pSVar8 = this._ids;
				if (pSVar8 == null) goto label_05c90e87;
			}
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			iVar5 = pSVar8.get_Item(index);
			if (((pSVar1 == null) ||(pMVar6 = pSVar1.get_Item(iVar5), pMVar6 == null)) ||(pUVar2 = pMVar6.GameObject, pUVar2 == null)) goto label_05c90e87;
			pUVar7 = pUVar2.transform;
			pSVar3 = this._newPositions;
			if ((pSVar3 == null) ||(UVar9 = pSVar3.get_Item(index), pUVar7 == null)) goto label_05c90e87;
			pUVar7.localPosition = UVar9;
			pSVar8 = this._ids;
			if (pSVar8 == null) goto label_05c90e87;
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			iVar5 = pSVar8.get_Item(index);
			if (((pSVar1 == null) ||(pMVar6 = pSVar1.get_Item(iVar5), pMVar6 == null)) ||(pSVar3 = this._newPositions, pSVar3 == null)) goto label_05c90e87;
			pMVar4 = pMVar6.ScriptObject;
			UVar9 = pSVar3.get_Item(index);
			if (pMVar4 == null) goto label_05c90e87;
			pMVar4.SetPosition(UVar9);
			pSVar8 = this._ids;
			if (pSVar8 == null) goto label_05c90e87;
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			iVar5 = pSVar8.get_Item(index);
			if (((pSVar1 == null) ||(pMVar6 = pSVar1.get_Item(iVar5), pMVar6 == null)) ||(pUVar2 = pMVar6.GameObject, pUVar2 == null)) goto label_05c90e87;
			pUVar7 = pUVar2.transform;
			pSVar3 = this._newRotations;
			if (pSVar3 == null) goto label_05c90e87;
			UVar9 = pSVar3.get_Item(index);
			UStack_40.x = UVar9.x * 0.017453292;
			UStack_40.y = UVar9.y * 0.017453292;
			UStack_40.z = UVar9.z * 0.017453292;
			value = Quaternion.Internal_FromEulerRad(ref UStack_40);
			if (pUVar7 == null) goto label_05c90e87;
			pUVar7.localRotation = value;
			pSVar8 = this._ids;
			if (pSVar8 == null) goto label_05c90e87;
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			iVar5 = pSVar8.get_Item(index);
			if (((pSVar1 == null) ||(pMVar6 = pSVar1.get_Item(iVar5), pMVar6 == null)) ||(pSVar3 = this._newRotations, pSVar3 == null)) goto label_05c90e87;
			pMVar4 = pMVar6.ScriptObject;
			UVar9 = pSVar3.get_Item(index);
			if (pMVar4 == null) goto label_05c90e87;
			pMVar4.SetRotation(UVar9);
			index = index + 1;
			pSVar8 = this._ids;
			if (pSVar8 == null) goto label_05c90e87;
		} while(true);
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x5B90EA0", Offset = "0x5B8FEA0", VA = "0x5B90EA0", Slot = "5")]
	public override void Unexecute()
	{
		// Lifted from source/cpp/MapEditor/TransformPositionRotationCommand.c (MapEditor.TransformPositionRotationCommand$$Unexecute): clean
		Dictionary<int, object> pSVar1;
		GameObject pUVar2;
		List<Vector3> pSVar3;
		MapScriptBaseObject pMVar4;
		int iVar5;
		MapObject pMVar6;
		Transform pUVar7;
		List<int> pSVar8;
		int index;
		Quaternion value;
		Vector3 UVar9;
		Vector3 UStack_40;

		pSVar8 = this._ids;
		if (pSVar8 == null) {
	label_05c91187: ;
			throw new NullReferenceException();
		}
		index = 0;
		do {
			if (pSVar8._size <= index) {
				return;
			}
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
				pSVar8 = this._ids;
				if (pSVar8 == null) goto label_05c91187;
			}
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			iVar5 = pSVar8.get_Item(index);
			if (((pSVar1 == null) ||(pMVar6 = pSVar1.get_Item(iVar5), pMVar6 == null)) ||(pUVar2 = pMVar6.GameObject, pUVar2 == null)) goto label_05c91187;
			pUVar7 = pUVar2.transform;
			pSVar3 = this._oldPositions;
			if ((pSVar3 == null) ||(UVar9 = pSVar3.get_Item(index), pUVar7 == null)) goto label_05c91187;
			pUVar7.localPosition = UVar9;
			pSVar8 = this._ids;
			if (pSVar8 == null) goto label_05c91187;
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			iVar5 = pSVar8.get_Item(index);
			if (((pSVar1 == null) ||(pMVar6 = pSVar1.get_Item(iVar5), pMVar6 == null)) ||(pSVar3 = this._oldPositions, pSVar3 == null)) goto label_05c91187;
			pMVar4 = pMVar6.ScriptObject;
			UVar9 = pSVar3.get_Item(index);
			if (pMVar4 == null) goto label_05c91187;
			pMVar4.SetPosition(UVar9);
			pSVar8 = this._ids;
			if (pSVar8 == null) goto label_05c91187;
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			iVar5 = pSVar8.get_Item(index);
			if (((pSVar1 == null) ||(pMVar6 = pSVar1.get_Item(iVar5), pMVar6 == null)) ||(pUVar2 = pMVar6.GameObject, pUVar2 == null)) goto label_05c91187;
			pUVar7 = pUVar2.transform;
			pSVar3 = this._oldRotations;
			if (pSVar3 == null) goto label_05c91187;
			UVar9 = pSVar3.get_Item(index);
			UStack_40.x = UVar9.x * 0.017453292;
			UStack_40.y = UVar9.y * 0.017453292;
			UStack_40.z = UVar9.z * 0.017453292;
			value = Quaternion.Internal_FromEulerRad(ref UStack_40);
			if (pUVar7 == null) goto label_05c91187;
			pUVar7.localRotation = value;
			pSVar8 = this._ids;
			if (pSVar8 == null) goto label_05c91187;
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			iVar5 = pSVar8.get_Item(index);
			if (((pSVar1 == null) ||(pMVar6 = pSVar1.get_Item(iVar5), pMVar6 == null)) ||(pSVar3 = this._oldRotations, pSVar3 == null)) goto label_05c91187;
			pMVar4 = pMVar6.ScriptObject;
			UVar9 = pSVar3.get_Item(index);
			if (pMVar4 == null) goto label_05c91187;
			pMVar4.SetRotation(UVar9);
			index = index + 1;
			pSVar8 = this._ids;
			if (pSVar8 == null) goto label_05c91187;
		} while(true);
	}
}
