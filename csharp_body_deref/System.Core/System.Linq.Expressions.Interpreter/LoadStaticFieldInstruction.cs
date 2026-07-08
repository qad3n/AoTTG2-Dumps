using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000139")]
internal sealed class LoadStaticFieldInstruction : FieldInstruction
{
	[Token(Token = "0x1700019E")]
	public override string InstructionName
	{
		[Token(Token = "0x60006F7")]
		[Address(RVA = "0x41A9550", Offset = "0x41A9550", VA = "0x41A9550", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019F")]
	public override int ProducedStack
	{
		[Token(Token = "0x60006F8")]
		[Address(RVA = "0x41A9580", Offset = "0x41A9580", VA = "0x41A9580", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x41A9520", Offset = "0x41A9520", VA = "0x41A9520")]
	public LoadStaticFieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x41A9590", Offset = "0x41A9590", VA = "0x41A9590", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
