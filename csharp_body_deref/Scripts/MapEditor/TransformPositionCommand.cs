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

[Token(Token = "0x2000147")]
internal class TransformPositionCommand : BaseCommand
{
	[Token(Token = "0x4000774")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldPositions;

	[Token(Token = "0x4000775")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newPositions;

	[Token(Token = "0x4000776")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _ids;

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x5B8FE70", Offset = "0x5B8EE70", VA = "0x5B8FE70")]
	public TransformPositionCommand(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x5B90260", Offset = "0x5B8F260", VA = "0x5B90260", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x5B90420", Offset = "0x5B8F420", VA = "0x5B90420", Slot = "5")]
	public override void Unexecute()
	{
	}
}
