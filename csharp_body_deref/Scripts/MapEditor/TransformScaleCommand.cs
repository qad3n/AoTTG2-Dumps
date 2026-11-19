// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.TransformScaleCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/TransformScaleCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformScaleCommand.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200014A")]
internal class TransformScaleCommand : BaseCommand
{
	[Token(Token = "0x400077F")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldScales;

	[Token(Token = "0x4000780")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newScales;

	[Token(Token = "0x4000781")]
	[FieldOffset(Offset = "0x20")]
	private List<Vector3> _oldPositions;

	[Token(Token = "0x4000782")]
	[FieldOffset(Offset = "0x28")]
	private List<Vector3> _newPositions;

	[Token(Token = "0x4000783")]
	[FieldOffset(Offset = "0x30")]
	private List<int> _ids;

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x5B919C0", Offset = "0x5B909C0", VA = "0x5B919C0")]
	public TransformScaleCommand(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x5B91FA0", Offset = "0x5B90FA0", VA = "0x5B91FA0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x5B92200", Offset = "0x5B91200", VA = "0x5B92200", Slot = "5")]
	public override void Unexecute()
	{
	}
}
