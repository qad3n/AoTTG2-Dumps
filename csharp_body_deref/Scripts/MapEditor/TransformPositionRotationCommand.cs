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

[Token(Token = "0x2000109")]
internal class TransformPositionRotationCommand : BaseCommand
{
	[Token(Token = "0x4000645")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldPositions;

	[Token(Token = "0x4000646")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newPositions;

	[Token(Token = "0x4000647")]
	[FieldOffset(Offset = "0x20")]
	private List<Vector3> _oldRotations;

	[Token(Token = "0x4000648")]
	[FieldOffset(Offset = "0x28")]
	private List<Vector3> _newRotations;

	[Token(Token = "0x4000649")]
	[FieldOffset(Offset = "0x30")]
	private List<int> _ids;

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x423A020", Offset = "0x423A020", VA = "0x423A020")]
	public TransformPositionRotationCommand(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x423A740", Offset = "0x423A740", VA = "0x423A740", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x423AA20", Offset = "0x423AA20", VA = "0x423AA20", Slot = "5")]
	public override void Unexecute()
	{
	}
}
