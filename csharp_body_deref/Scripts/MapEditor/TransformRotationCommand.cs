using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000109")]
internal class TransformRotationCommand : BaseCommand
{
	[Token(Token = "0x4000642")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldRotations;

	[Token(Token = "0x4000643")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newRotations;

	[Token(Token = "0x4000644")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _ids;

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x3F45EC0", Offset = "0x3F45EC0", VA = "0x3F45EC0")]
	public TransformRotationCommand(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x3F463A0", Offset = "0x3F463A0", VA = "0x3F463A0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x3F46580", Offset = "0x3F46580", VA = "0x3F46580", Slot = "5")]
	public override void Unexecute()
	{
	}
}
