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

[Token(Token = "0x200013B")]
internal class AddObjectCommand : BaseCommand
{
	[Token(Token = "0x4000750")]
	[FieldOffset(Offset = "0x10")]
	private string _script;

	[Token(Token = "0x4000751")]
	[FieldOffset(Offset = "0x18")]
	private int _insertAfterId;

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x5B8AC50", Offset = "0x5B89C50", VA = "0x5B8AC50")]
	public AddObjectCommand(List<MapScriptBaseObject> objs, int insertAfterId = -1)
	{
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x5B8B2C0", Offset = "0x5B8A2C0", VA = "0x5B8B2C0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x5B8B950", Offset = "0x5B8A950", VA = "0x5B8B950", Slot = "5")]
	public override void Unexecute()
	{
	}
}
