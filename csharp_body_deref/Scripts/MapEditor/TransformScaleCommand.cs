// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.TransformScaleCommand
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/TransformScaleCommand.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformScaleCommand.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000142")]
internal class TransformScaleCommand : BaseCommand
{
	[Token(Token = "0x4000733")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldScales;

	[Token(Token = "0x4000734")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newScales;

	[Token(Token = "0x4000735")]
	[FieldOffset(Offset = "0x20")]
	private List<Vector3> _oldPositions;

	[Token(Token = "0x4000736")]
	[FieldOffset(Offset = "0x28")]
	private List<Vector3> _newPositions;

	[Token(Token = "0x4000737")]
	[FieldOffset(Offset = "0x30")]
	private List<int> _ids;

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x22008E0", Offset = "0x21FEEE0", VA = "0x1822008E0")]
	public TransformScaleCommand(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x22002A0", Offset = "0x21FE8A0", VA = "0x1822002A0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x22005C0", Offset = "0x21FEBC0", VA = "0x1822005C0", Slot = "5")]
	public override void Unexecute()
	{
	}
}
