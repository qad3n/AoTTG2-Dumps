// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.ReorderObjectsCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/ReorderObjectsCommand.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x5B8E500", Offset = "0x5B8D500", VA = "0x5B8E500", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x5B8EC30", Offset = "0x5B8DC30", VA = "0x5B8EC30", Slot = "5")]
	public override void Unexecute()
	{
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x5B8E510", Offset = "0x5B8D510", VA = "0x5B8E510")]
	private void ApplyReorder()
	{
	}
}
