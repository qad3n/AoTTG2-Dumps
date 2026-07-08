using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000108")]
internal class TransformPositionRotationCommand : BaseCommand
{
	[Token(Token = "0x400063D")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldPositions;

	[Token(Token = "0x400063E")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newPositions;

	[Token(Token = "0x400063F")]
	[FieldOffset(Offset = "0x20")]
	private List<Vector3> _oldRotations;

	[Token(Token = "0x4000640")]
	[FieldOffset(Offset = "0x28")]
	private List<Vector3> _newRotations;

	[Token(Token = "0x4000641")]
	[FieldOffset(Offset = "0x30")]
	private List<int> _ids;

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x3F451E0", Offset = "0x3F451E0", VA = "0x3F451E0")]
	public TransformPositionRotationCommand(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x3F45900", Offset = "0x3F45900", VA = "0x3F45900", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x3F45BE0", Offset = "0x3F45BE0", VA = "0x3F45BE0", Slot = "5")]
	public override void Unexecute()
	{
	}
}
