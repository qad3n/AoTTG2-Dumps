using System.Collections.Generic;
using Il2CppDummyDll;
using Map;

namespace MapEditor;

[Token(Token = "0x2000103")]
internal class AddObjectCommand : BaseCommand
{
	[Token(Token = "0x4000637")]
	[FieldOffset(Offset = "0x10")]
	private string _script;

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x3F439B0", Offset = "0x3F439B0", VA = "0x3F439B0")]
	public AddObjectCommand(List<MapScriptBaseObject> objs)
	{
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x3F43D80", Offset = "0x3F43D80", VA = "0x3F43D80", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x3F43F40", Offset = "0x3F43F40", VA = "0x3F43F40", Slot = "5")]
	public override void Unexecute()
	{
	}
}
