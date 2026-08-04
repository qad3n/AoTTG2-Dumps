// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.DeleteObjectCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/DeleteObjectCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/DeleteObjectCommand.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;

namespace MapEditor;

[Token(Token = "0x2000107")]
internal class DeleteObjectCommand : BaseCommand
{
	[Token(Token = "0x4000641")]
	[FieldOffset(Offset = "0x10")]
	private string _script;

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x42391E0", Offset = "0x42391E0", VA = "0x42391E0")]
	public DeleteObjectCommand(List<MapObject> objs)
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x4239470", Offset = "0x4239470", VA = "0x4239470", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x4239640", Offset = "0x4239640", VA = "0x4239640", Slot = "5")]
	public override void Unexecute()
	{
	}
}
