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

[Token(Token = "0x2000106")]
internal class CompositeCommand : BaseCommand
{
	[Token(Token = "0x4000640")]
	[FieldOffset(Offset = "0x10")]
	private List<BaseCommand> _commands;

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x4238F70", Offset = "0x4238F70", VA = "0x4238F70")]
	public CompositeCommand(List<BaseCommand> commands)
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x4239000", Offset = "0x4239000", VA = "0x4239000", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x4239150", Offset = "0x4239150", VA = "0x4239150", Slot = "5")]
	public override void Unexecute()
	{
	}
}
