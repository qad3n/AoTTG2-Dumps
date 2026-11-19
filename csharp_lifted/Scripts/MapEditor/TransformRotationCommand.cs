// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.TransformRotationCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/TransformRotationCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformRotationCommand.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000149")]
internal class TransformRotationCommand : BaseCommand
{
	[Token(Token = "0x400077C")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldRotations;

	[Token(Token = "0x400077D")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newRotations;

	[Token(Token = "0x400077E")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _ids;

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x5B911A0", Offset = "0x5B901A0", VA = "0x5B911A0")]
	public TransformRotationCommand(List<MapObject> mapObjects)
	{
		// Lifted from source/cpp/MapEditor/TransformRotationCommand.c (MapEditor.TransformRotationCommand$$.ctor): 19 lines keep C-only constructs
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
		Vector3 euler;
		System_Collections_Generic_List_Enumerator_object__o local_78;
		byte[] local_60 = new byte[16];
		object local_50;
		Quaternion local_48;

		local_78._list = null;
		local_78._index = 0;
		local_78._version = 0;
		local_78._current = null;
		local_48 = (Quaternion)ZEXT816(0);
		pSVar8 = new List<Vector3>();
		this._oldRotations = pSVar8;
		pSVar8 = new List<Vector3>();
		targetAddress = &this._newRotations;
		this._newRotations = pSVar8;
		pSVar9 = new List<int>();
		targetAddress_00 = &this._ids;
		this._ids = pSVar9;
		base();
		if (mapObjects == null) {
			throw new NullReferenceException();
		}
		local_60.GetEnumerator((List<object>)mapObjects);
		local_78._current = local_50;
		local_78._list = (List<T>)local_60._0_8_;
		local_78._index = local_60._8_4_;
		local_78._version = local_60._12_4_;
		local_60._0_8_ = null;
		local_60._8_8_ = &local_78;
		while(true) {
			bVar7 = local_78.MoveNext();
			pIVar6 = local_78._current;
			if (!bVar7) {
				local_78.Dispose();
				return;
			}
			if (local_78._current == null) {
				throw new NullReferenceException();
			}
			__this_02 = local_78._current[2].klass;
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
			pSVar8 = this._oldRotations;
			UVar10 = __this_02.GetRotation();
			if (pSVar8 == null) {
	label_05c9152d: ;
				throw new NullReferenceException();
			}
			piVar1 = &pSVar8._version;
			*piVar1 = *piVar1 + 1;
			pUVar4 = pSVar8._items;
			if (pUVar4 == null) goto label_05c9152d;
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
			local_48 = __this_01.localRotation;
			UVar10 = Quaternion.Internal_ToEulerRad(ref local_48);
			euler.z = UVar10.z * 57.29578;
			euler.y = UVar10.y * 57.29578;
			euler.x = UVar10.x * 57.29578;
			UVar10 = Quaternion.Internal_MakePositive(euler);
			if (pSVar8 == null) {
	label_05c91537: ;
				throw new NullReferenceException();
			}
			piVar1 = &pSVar8._version;
			*piVar1 = *piVar1 + 1;
			pUVar4 = pSVar8._items;
			if (pUVar4 == null) goto label_05c91537;
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

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x5B915E0", Offset = "0x5B905E0", VA = "0x5B915E0", Slot = "4")]
	public override void Execute()
	{
		// Lifted from source/cpp/MapEditor/TransformRotationCommand.c (MapEditor.TransformRotationCommand$$Execute): clean
		Dictionary<int, object> pSVar1;
		GameObject __this_00;
		List<Vector3> pSVar2;
		MapScriptBaseObject __this_01;
		int iVar3;
		MapObject pMVar4;
		Transform __this_02;
		List<int> pSVar5;
		int index;
		Quaternion value;
		Vector3 UVar6;
		Vector3 UStack_40;

		pSVar5 = this._ids;
		if (pSVar5 == null) {
	label_05c917bc: ;
			throw new NullReferenceException();
		}
		index = 0;
		do {
			if (pSVar5._size <= index) {
				return;
			}
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
				pSVar5 = this._ids;
				if (pSVar5 == null) goto label_05c917bc;
			}
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			iVar3 = pSVar5.get_Item(index);
			if (((pSVar1 == null) ||(pMVar4 = pSVar1.get_Item(iVar3), pMVar4 == null)) ||(__this_00 = pMVar4.GameObject, __this_00 == null)) goto label_05c917bc;
			__this_02 = __this_00.transform;
			pSVar2 = this._newRotations;
			if (pSVar2 == null) goto label_05c917bc;
			UVar6 = pSVar2.get_Item(index);
			UStack_40.x = UVar6.x * 0.017453292;
			UStack_40.y = UVar6.y * 0.017453292;
			UStack_40.z = UVar6.z * 0.017453292;
			value = Quaternion.Internal_FromEulerRad(ref UStack_40);
			if (__this_02 == null) goto label_05c917bc;
			__this_02.localRotation = value;
			pSVar5 = this._ids;
			if (pSVar5 == null) goto label_05c917bc;
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			iVar3 = pSVar5.get_Item(index);
			if (((pSVar1 == null) ||(pMVar4 = pSVar1.get_Item(iVar3), pMVar4 == null)) ||(pSVar2 = this._newRotations, pSVar2 == null)) goto label_05c917bc;
			__this_01 = pMVar4.ScriptObject;
			UVar6 = pSVar2.get_Item(index);
			if (__this_01 == null) goto label_05c917bc;
			__this_01.SetRotation(UVar6);
			index = index + 1;
			pSVar5 = this._ids;
			if (pSVar5 == null) goto label_05c917bc;
		} while(true);
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x5B917D0", Offset = "0x5B907D0", VA = "0x5B917D0", Slot = "5")]
	public override void Unexecute()
	{
		// Lifted from source/cpp/MapEditor/TransformRotationCommand.c (MapEditor.TransformRotationCommand$$Unexecute): clean
		Dictionary<int, object> pSVar1;
		GameObject __this_00;
		List<Vector3> pSVar2;
		MapScriptBaseObject __this_01;
		int iVar3;
		MapObject pMVar4;
		Transform __this_02;
		List<int> pSVar5;
		int index;
		Quaternion value;
		Vector3 UVar6;
		Vector3 UStack_40;

		pSVar5 = this._ids;
		if (pSVar5 == null) {
	label_05c919ac: ;
			throw new NullReferenceException();
		}
		index = 0;
		do {
			if (pSVar5._size <= index) {
				return;
			}
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
				pSVar5 = this._ids;
				if (pSVar5 == null) goto label_05c919ac;
			}
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			iVar3 = pSVar5.get_Item(index);
			if (((pSVar1 == null) ||(pMVar4 = pSVar1.get_Item(iVar3), pMVar4 == null)) ||(__this_00 = pMVar4.GameObject, __this_00 == null)) goto label_05c919ac;
			__this_02 = __this_00.transform;
			pSVar2 = this._oldRotations;
			if (pSVar2 == null) goto label_05c919ac;
			UVar6 = pSVar2.get_Item(index);
			UStack_40.x = UVar6.x * 0.017453292;
			UStack_40.y = UVar6.y * 0.017453292;
			UStack_40.z = UVar6.z * 0.017453292;
			value = Quaternion.Internal_FromEulerRad(ref UStack_40);
			if (__this_02 == null) goto label_05c919ac;
			__this_02.localRotation = value;
			pSVar5 = this._ids;
			if (pSVar5 == null) goto label_05c919ac;
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			iVar3 = pSVar5.get_Item(index);
			if (((pSVar1 == null) ||(pMVar4 = pSVar1.get_Item(iVar3), pMVar4 == null)) ||(pSVar2 = this._oldRotations, pSVar2 == null)) goto label_05c919ac;
			__this_01 = pMVar4.ScriptObject;
			UVar6 = pSVar2.get_Item(index);
			if (__this_01 == null) goto label_05c919ac;
			__this_01.SetRotation(UVar6);
			index = index + 1;
			pSVar5 = this._ids;
			if (pSVar5 == null) goto label_05c919ac;
		} while(true);
	}
}
