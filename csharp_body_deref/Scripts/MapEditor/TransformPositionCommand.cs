using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000107")]
internal class TransformPositionCommand : BaseCommand
{
	[Token(Token = "0x400063A")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldPositions;

	[Token(Token = "0x400063B")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newPositions;

	[Token(Token = "0x400063C")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _ids;

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x3F449C0", Offset = "0x3F449C0", VA = "0x3F449C0")]
	public TransformPositionCommand(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x3F44E60", Offset = "0x3F44E60", VA = "0x3F44E60", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x3F45020", Offset = "0x3F45020", VA = "0x3F45020", Slot = "5")]
	public override void Unexecute()
	{
	}
}
