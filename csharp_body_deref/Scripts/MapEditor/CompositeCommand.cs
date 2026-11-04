// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.CompositeCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/CompositeCommand.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace MapEditor;

[Token(Token = "0x2000136")]
internal class CompositeCommand : BaseCommand
{
	[Token(Token = "0x4000709")]
	[FieldOffset(Offset = "0x10")]
	private List<BaseCommand> _commands;

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x21ED500", Offset = "0x21EBB00", VA = "0x1821ED500")]
	public CompositeCommand(List<BaseCommand> commands)
	{
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x21ED350", Offset = "0x21EB950", VA = "0x1821ED350", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x21ED470", Offset = "0x21EBA70", VA = "0x1821ED470", Slot = "5")]
	public override void Unexecute()
	{
	}
}
