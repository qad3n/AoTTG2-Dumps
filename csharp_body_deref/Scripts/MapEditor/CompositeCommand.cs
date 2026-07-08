using System.Collections.Generic;
using Il2CppDummyDll;

namespace MapEditor;

[Token(Token = "0x2000105")]
internal class CompositeCommand : BaseCommand
{
	[Token(Token = "0x4000638")]
	[FieldOffset(Offset = "0x10")]
	private List<BaseCommand> _commands;

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x3F44130", Offset = "0x3F44130", VA = "0x3F44130")]
	public CompositeCommand(List<BaseCommand> commands)
	{
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x3F441C0", Offset = "0x3F441C0", VA = "0x3F441C0", Slot = "4")]
	public override void Execute()
	{
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x3F44310", Offset = "0x3F44310", VA = "0x3F44310", Slot = "5")]
	public override void Unexecute()
	{
	}
}
