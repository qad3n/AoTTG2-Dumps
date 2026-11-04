// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.TransformRotationCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/TransformRotationCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformRotationCommand.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000141")]
internal class TransformRotationCommand : BaseCommand
{
	[Token(Token = "0x4000730")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldRotations;

	[Token(Token = "0x4000731")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newRotations;

	[Token(Token = "0x4000732")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _ids;

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x21FFE10", Offset = "0x21FE410", VA = "0x1821FFE10")]
	public TransformRotationCommand(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x21FF950", Offset = "0x21FDF50", VA = "0x1821FF950", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x21FFBB0", Offset = "0x21FE1B0", VA = "0x1821FFBB0", Slot = "5")]
	public override void Unexecute()
	{
	}
}
