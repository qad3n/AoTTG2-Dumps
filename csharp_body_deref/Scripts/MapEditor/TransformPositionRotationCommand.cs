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

[Token(Token = "0x2000148")]
internal class TransformPositionRotationCommand : BaseCommand
{
	[Token(Token = "0x4000777")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldPositions;

	[Token(Token = "0x4000778")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newPositions;

	[Token(Token = "0x4000779")]
	[FieldOffset(Offset = "0x20")]
	private List<Vector3> _oldRotations;

	[Token(Token = "0x400077A")]
	[FieldOffset(Offset = "0x28")]
	private List<Vector3> _newRotations;

	[Token(Token = "0x400077B")]
	[FieldOffset(Offset = "0x30")]
	private List<int> _ids;

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x5B905E0", Offset = "0x5B8F5E0", VA = "0x5B905E0")]
	public TransformPositionRotationCommand(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x5B90BA0", Offset = "0x5B8FBA0", VA = "0x5B90BA0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x5B90EA0", Offset = "0x5B8FEA0", VA = "0x5B90EA0", Slot = "5")]
	public override void Unexecute()
	{
	}
}
