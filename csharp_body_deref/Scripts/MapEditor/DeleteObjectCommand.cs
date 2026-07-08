using System.Collections.Generic;
using Il2CppDummyDll;
using Map;

namespace MapEditor;

[Token(Token = "0x2000106")]
internal class DeleteObjectCommand : BaseCommand
{
	[Token(Token = "0x4000639")]
	[FieldOffset(Offset = "0x10")]
	private string _script;

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x3F443A0", Offset = "0x3F443A0", VA = "0x3F443A0")]
	public DeleteObjectCommand(List<MapObject> objs)
	{
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x3F44630", Offset = "0x3F44630", VA = "0x3F44630", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x3F44800", Offset = "0x3F44800", VA = "0x3F44800", Slot = "5")]
	public override void Unexecute()
	{
	}
}
