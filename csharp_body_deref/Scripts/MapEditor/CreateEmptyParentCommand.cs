// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.CreateEmptyParentCommand
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/CreateEmptyParentCommand.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;

namespace MapEditor;

[Token(Token = "0x2000137")]
internal class CreateEmptyParentCommand : BaseCommand
{
	[Token(Token = "0x400070A")]
	[FieldOffset(Offset = "0x10")]
	private readonly AddObjectCommand _addCommand;

	[Token(Token = "0x400070B")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<int> _childIds;

	[Token(Token = "0x400070C")]
	[FieldOffset(Offset = "0x20")]
	private readonly int _parentId;

	[Token(Token = "0x400070D")]
	[FieldOffset(Offset = "0x28")]
	private ReparentObjectsCommand _reparentCommand;

	[Token(Token = "0x170000D2")]
	public int ParentId
	{
		[Token(Token = "0x6000613")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x21ED920", Offset = "0x21EBF20", VA = "0x1821ED920")]
	public CreateEmptyParentCommand(MapScriptBaseObject parent, List<int> childIds, int insertAfterId)
	{
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x21ED590", Offset = "0x21EBB90", VA = "0x1821ED590", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x21ED8D0", Offset = "0x21EBED0", VA = "0x1821ED8D0", Slot = "5")]
	public override void Unexecute()
	{
	}
}
