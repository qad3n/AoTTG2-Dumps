using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200010A")]
internal class TransformScaleCommand : BaseCommand
{
	[Token(Token = "0x4000645")]
	[FieldOffset(Offset = "0x10")]
	private List<Vector3> _oldScales;

	[Token(Token = "0x4000646")]
	[FieldOffset(Offset = "0x18")]
	private List<Vector3> _newScales;

	[Token(Token = "0x4000647")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _ids;

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x3F46760", Offset = "0x3F46760", VA = "0x3F46760")]
	public TransformScaleCommand(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x3F46CA0", Offset = "0x3F46CA0", VA = "0x3F46CA0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x3F46E90", Offset = "0x3F46E90", VA = "0x3F46E90", Slot = "5")]
	public override void Unexecute()
	{
	}
}
