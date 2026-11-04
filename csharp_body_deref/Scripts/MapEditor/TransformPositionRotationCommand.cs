// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.TransformPositionRotationCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/TransformPositionRotationCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformPositionRotationCommand.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000140")]
internal class TransformPositionRotationCommand : BaseCommand
{
	[Token(Token = "0x400072B")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldPositions;

	[Token(Token = "0x400072C")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newPositions;

	[Token(Token = "0x400072D")]
	[FieldOffset(Offset = "0x20")]
	private List<Vector3> _oldRotations;

	[Token(Token = "0x400072E")]
	[FieldOffset(Offset = "0x28")]
	private List<Vector3> _newRotations;

	[Token(Token = "0x400072F")]
	[FieldOffset(Offset = "0x30")]
	private List<int> _ids;

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x21FF2F0", Offset = "0x21FD8F0", VA = "0x1821FF2F0")]
	public TransformPositionRotationCommand(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x21FEB90", Offset = "0x21FD190", VA = "0x1821FEB90", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x21FEF40", Offset = "0x21FD540", VA = "0x1821FEF40", Slot = "5")]
	public override void Unexecute()
	{
	}
}
