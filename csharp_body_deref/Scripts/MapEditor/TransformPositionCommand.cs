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

[Token(Token = "0x2000108")]
internal class TransformPositionCommand : BaseCommand
{
	[Token(Token = "0x4000642")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldPositions;

	[Token(Token = "0x4000643")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newPositions;

	[Token(Token = "0x4000644")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _ids;

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x4239800", Offset = "0x4239800", VA = "0x4239800")]
	public TransformPositionCommand(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x4239CA0", Offset = "0x4239CA0", VA = "0x4239CA0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x4239E60", Offset = "0x4239E60", VA = "0x4239E60", Slot = "5")]
	public override void Unexecute()
	{
	}
}
