using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200013B")]
internal sealed class StoreFieldInstruction : FieldInstruction
{
	[Token(Token = "0x170001A3")]
	public override string InstructionName
	{
		[Token(Token = "0x6000700")]
		[Address(RVA = "0x41A97D0", Offset = "0x41A97D0", VA = "0x41A97D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A4")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000701")]
		[Address(RVA = "0x41A9800", Offset = "0x41A9800", VA = "0x41A9800", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x41A97A0", Offset = "0x41A97A0", VA = "0x41A97A0")]
	public StoreFieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x41A9810", Offset = "0x41A9810", VA = "0x41A9810", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
