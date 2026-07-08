using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200013A")]
internal sealed class LoadFieldInstruction : FieldInstruction
{
	[Token(Token = "0x170001A0")]
	public override string InstructionName
	{
		[Token(Token = "0x60006FB")]
		[Address(RVA = "0x41A9670", Offset = "0x41A9670", VA = "0x41A9670", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A1")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60006FC")]
		[Address(RVA = "0x41A96A0", Offset = "0x41A96A0", VA = "0x41A96A0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001A2")]
	public override int ProducedStack
	{
		[Token(Token = "0x60006FD")]
		[Address(RVA = "0x41A96B0", Offset = "0x41A96B0", VA = "0x41A96B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x41A9640", Offset = "0x41A9640", VA = "0x41A9640")]
	public LoadFieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x41A96C0", Offset = "0x41A96C0", VA = "0x41A96C0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
