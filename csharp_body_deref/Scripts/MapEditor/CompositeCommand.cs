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

[Token(Token = "0x200013E")]
internal class CompositeCommand : BaseCommand
{
	[Token(Token = "0x4000755")]
	[FieldOffset(Offset = "0x10")]
	private List<BaseCommand> _commands;

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x5B8BC60", Offset = "0x5B8AC60", VA = "0x5B8BC60")]
	public CompositeCommand(List<BaseCommand> commands)
	{
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x5B8BCF0", Offset = "0x5B8ACF0", VA = "0x5B8BCF0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x5B8BE30", Offset = "0x5B8AE30", VA = "0x5B8BE30", Slot = "5")]
	public override void Unexecute()
	{
	}
}
