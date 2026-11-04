// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.AddObjectCommand
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/AddObjectCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/AddObjectCommand.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;

namespace MapEditor;

[Token(Token = "0x2000133")]
internal class AddObjectCommand : BaseCommand
{
	[Token(Token = "0x4000704")]
	[FieldOffset(Offset = "0x10")]
	private string _script;

	[Token(Token = "0x4000705")]
	[FieldOffset(Offset = "0x18")]
	private int _insertAfterId;

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x21E9970", Offset = "0x21E7F70", VA = "0x1821E9970")]
	public AddObjectCommand(List<MapScriptBaseObject> objs, int insertAfterId = -1)
	{
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x21E91A0", Offset = "0x21E77A0", VA = "0x1821E91A0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x21E97E0", Offset = "0x21E7DE0", VA = "0x1821E97E0", Slot = "5")]
	public override void Unexecute()
	{
	}
}
