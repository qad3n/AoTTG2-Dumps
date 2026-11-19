// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.CreateEmptyParentCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/CreateEmptyParentCommand.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;

namespace MapEditor;

[Token(Token = "0x200013F")]
internal class CreateEmptyParentCommand : BaseCommand
{
	[Token(Token = "0x4000756")]
	[FieldOffset(Offset = "0x10")]
	private readonly AddObjectCommand _addCommand;

	[Token(Token = "0x4000757")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<int> _childIds;

	[Token(Token = "0x4000758")]
	[FieldOffset(Offset = "0x20")]
	private readonly int _parentId;

	[Token(Token = "0x4000759")]
	[FieldOffset(Offset = "0x28")]
	private ReparentObjectsCommand _reparentCommand;

	[Token(Token = "0x170000D3")]
	public int ParentId
	{
		[Token(Token = "0x600067F")]
		[Address(RVA = "0x5B8BEC0", Offset = "0x5B8AEC0", VA = "0x5B8BEC0")]
		get
		{
			// Lifted from source/cpp/MapEditor/CreateEmptyParentCommand.c (MapEditor.CreateEmptyParentCommand$$get_ParentId): clean
			return this._parentId;
		}
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x5B8BED0", Offset = "0x5B8AED0", VA = "0x5B8BED0")]
	public CreateEmptyParentCommand(MapScriptBaseObject parent, List<int> childIds, int insertAfterId)
	{
		// Lifted from source/cpp/MapEditor/CreateEmptyParentCommand.c (MapEditor.CreateEmptyParentCommand$$.ctor): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		MapScriptBaseObject[] pMVar3;
		List<MapScriptBaseObject> objs;
		AddObjectCommand __this_00;
		MethodInfo method_00;

		base();
		objs = new List<MapScriptBaseObject>();
		if (objs != null) {
			piVar1 = &objs._version;
			*piVar1 = *piVar1 + 1;
			pMVar3 = objs._items;
			if (pMVar3 != null) {
				uVar2 = objs._size;
				if (uVar2 < (uint)pMVar3.Length) {
					method_00 = (MethodInfo)(ulong)(uVar2 + 1);
					objs._size = uVar2 + 1;
					pMVar3[(int)uVar2] = parent;
				}
				else {
					objs.AddWithResize((object)parent);
				}
				__this_00 = new AddObjectCommand(objs, insertAfterId);
				this._addCommand = __this_00;
				if (parent != null) {
					this._parentId = parent.Id;
					this._childIds = childIds;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x5B8C020", Offset = "0x5B8B020", VA = "0x5B8C020", Slot = "4")]
	public override void Execute()
	{
		// Lifted from source/cpp/MapEditor/CreateEmptyParentCommand.c (MapEditor.CreateEmptyParentCommand$$Execute): 16 lines keep C-only constructs
		int piVar1;
		int iVar2;
		uint uVar3;
		AddObjectCommand pMVar4;
		List<int> pSVar5;
		Dictionary<int, object> pSVar6;
		CreateEmptyParentCommand pMVar7;
		MethodInfo pMVar8;
		CreateEmptyParentCommand pMVar9;
		byte puVar10;
		bool bVar11;
		int anchorId;
		List<MapObject> mapObjects;
		MethodInfo item;
		ReparentObjectsCommand pMVar12;
		Il2CppRGCTXData in_RCX;
		byte[] auStack_68 = new byte[8];
		object pIStack_58;
		byte[] auStack_50 = new byte[16];
		object pIStack_40;
		CreateEmptyParentCommand pMStack_38;

		auStack_68 = (byte[])0x0;
		pIStack_58 = null;
		pMVar4 = this._addCommand;
		if (pMVar4 != null) {
			pMVar4.Execute();
			pSVar5 = this._childIds;
			if (pSVar5 != null) {
				if (0 < pSVar5._size) {
					iVar2 = this._parentId;
					anchorId = pSVar5.get_Item(0);
					in_RCX = null;
					MapLoader.MoveInOrder(iVar2, anchorId, false);
				}
				pMVar12 = this._reparentCommand;
				if (pMVar12 != null) {
	label_05c8c3cc: ;
					pMVar12.Execute();
					return;
				}
				mapObjects = new List<MapObject>();
				pSVar5 = this._childIds;
				if (pSVar5 != null) {
					pMStack_38 = this;
					auStack_50.GetEnumerator(pSVar5);
					pIStack_58 = pIStack_40;
					auStack_68 = (byte[])auStack_50._0_8_;
					auStack_50._0_8_ = null;
					auStack_50._8_8_ = auStack_68;
					puVar10 = auStack_68;
					if (mapObjects == null) {
						do {
							auStack_50._8_8_ = puVar10;
							bVar11 = auStack_68.MoveNext();
							if (!bVar11) goto label_05c8c375;
							iVar2 = (int32_t)pIStack_58;
							pSVar6 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar6 == null) goto label_05c8c3eb;
							bVar11 = pSVar6.ContainsKey(iVar2);
							puVar10 = (byte)auStack_50._8_8_;
						} while (!bVar11);
						pSVar6 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar6 != null) {
							pSVar6.get_Item(iVar2);
	label_05c8c406: ;
							throw new NullReferenceException();
						}
	label_05c8c370: ;
						throw new NullReferenceException();
					}
					while (bVar11 = auStack_68.MoveNext()) {
						iVar2 = (int32_t)pIStack_58;
						pSVar6 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar6 == null) {
	label_05c8c3eb: ;
							throw new NullReferenceException();
						}
						bVar11 = pSVar6.ContainsKey(iVar2);
						if (bVar11) {
							pSVar6 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar6 == null) goto label_05c8c370;
							item = (MethodInfo)pSVar6.get_Item(iVar2);
							pMVar8 = MethodInfo_System_Collections_Generic_List_MapObject_Add;
							piVar1 = &mapObjects._version;
							*piVar1 = *piVar1 + 1;
							in_RCX = (Il2CppRGCTXData)mapObjects._items;
							if (in_RCX == null) goto label_05c8c406;
							uVar3 = mapObjects._size;
							if (uVar3 < *(uint)&in_RCX[3].rgctxDataDummy) {
								mapObjects._size = uVar3 + 1;
								in_RCX[(long)(int)uVar3 + 4].method = item;
							}
							else {
								in_RCX = pMVar8.klass.rgctx_data;
								mapObjects.AddWithResize((object)item);
							}
						}
					}
	label_05c8c375: ;
					auStack_68.Dispose();
					pMVar9 = pMStack_38;
					pMVar7 = &pMStack_38.fields;
					iVar2 = pMStack_38._parentId;
					pMVar12 = new ReparentObjectsCommand(mapObjects, iVar2);
					pMVar9._reparentCommand = pMVar12;
					pMVar12 = pMVar9._reparentCommand;
					if (pMVar12 != null) goto label_05c8c3cc;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x5B8C720", Offset = "0x5B8B720", VA = "0x5B8C720", Slot = "5")]
	public override void Unexecute()
	{
		// Lifted from source/cpp/MapEditor/CreateEmptyParentCommand.c (MapEditor.CreateEmptyParentCommand$$Unexecute): clean
		ReparentObjectsCommand pMVar1;
		AddObjectCommand pMVar2;

		pMVar1 = this._reparentCommand;
		if (pMVar1 != null) {
			pMVar1.Unexecute();
			pMVar2 = this._addCommand;
			if (pMVar2 != null) {
				pMVar2.Unexecute();
				return;
			}
		}
		throw new NullReferenceException();
	}
}
