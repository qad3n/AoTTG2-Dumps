// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.ReorderObjectsCommand
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/ReorderObjectsCommand.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace MapEditor;

[Token(Token = "0x200013B")]
internal class ReorderObjectsCommand : BaseCommand
{
	[Token(Token = "0x4000718")]
	[FieldOffset(Offset = "0x10")]
	private List<int> _objectIds;

	[Token(Token = "0x4000719")]
	[FieldOffset(Offset = "0x18")]
	private int _anchorId;

	[Token(Token = "0x400071A")]
	[FieldOffset(Offset = "0x1C")]
	private bool _insertAfter;

	[Token(Token = "0x400071B")]
	[FieldOffset(Offset = "0x20")]
	private int? _newParentId;

	[Token(Token = "0x400071C")]
	[FieldOffset(Offset = "0x28")]
	private List<int> _oldOrder;

	[Token(Token = "0x400071D")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<int, int> _oldParents;

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x21F9BF0", Offset = "0x21F81F0", VA = "0x1821F9BF0")]
	public ReorderObjectsCommand(List<int> objectIds, int anchorId, bool insertAfter, int? newParentId)
	{
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x21F9850", Offset = "0x21F7E50", VA = "0x1821F9850", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x21F9860", Offset = "0x21F7E60", VA = "0x1821F9860", Slot = "5")]
	public override void Unexecute()
	{
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x21F9190", Offset = "0x21F7790", VA = "0x1821F9190")]
	private void ApplyReorder()
	{
	}
}
