using Il2CppDummyDll;

namespace MapEditor;

[Token(Token = "0x2000104")]
internal class BaseCommand
{
	[Token(Token = "0x6000537")]
	[Address(RVA = "0x3F44110", Offset = "0x3F44110", VA = "0x3F44110", Slot = "4")]
	public virtual void Execute()
	{
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x3F44120", Offset = "0x3F44120", VA = "0x3F44120", Slot = "5")]
	public virtual void Unexecute()
	{
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x3F43D70", Offset = "0x3F43D70", VA = "0x3F43D70")]
	public BaseCommand()
	{
	}
}
