// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.CreateEmptyParentCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/CreateEmptyParentCommand.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
			return default(int);
		}
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x5B8BED0", Offset = "0x5B8AED0", VA = "0x5B8BED0")]
	public CreateEmptyParentCommand(MapScriptBaseObject parent, List<int> childIds, int insertAfterId)
	{
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x5B8C020", Offset = "0x5B8B020", VA = "0x5B8C020", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x5B8C720", Offset = "0x5B8B720", VA = "0x5B8C720", Slot = "5")]
	public override void Unexecute()
	{
	}
}
