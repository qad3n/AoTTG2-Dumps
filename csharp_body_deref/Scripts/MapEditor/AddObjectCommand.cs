// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.AddObjectCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/AddObjectCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/AddObjectCommand.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;

namespace MapEditor;

[Token(Token = "0x2000104")]
internal class AddObjectCommand : BaseCommand
{
	[Token(Token = "0x400063F")]
	[FieldOffset(Offset = "0x10")]
	private string _script;

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x42387F0", Offset = "0x42387F0", VA = "0x42387F0")]
	public AddObjectCommand(List<MapScriptBaseObject> objs)
	{
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x4238BC0", Offset = "0x4238BC0", VA = "0x4238BC0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x4238D80", Offset = "0x4238D80", VA = "0x4238D80", Slot = "5")]
	public override void Unexecute()
	{
	}
}
