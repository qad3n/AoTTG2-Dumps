// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.TransformPositionCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/TransformPositionCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformPositionCommand.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200013F")]
internal class TransformPositionCommand : BaseCommand
{
	[Token(Token = "0x4000728")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldPositions;

	[Token(Token = "0x4000729")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newPositions;

	[Token(Token = "0x400072A")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _ids;

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x21FE7A0", Offset = "0x21FCDA0", VA = "0x1821FE7A0")]
	public TransformPositionCommand(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x21FE380", Offset = "0x21FC980", VA = "0x1821FE380", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x21FE590", Offset = "0x21FCB90", VA = "0x1821FE590", Slot = "5")]
	public override void Unexecute()
	{
	}
}
