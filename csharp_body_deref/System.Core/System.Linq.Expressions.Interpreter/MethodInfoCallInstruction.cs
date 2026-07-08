using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000EB")]
internal class MethodInfoCallInstruction : CallInstruction
{
	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x10")]
	protected readonly MethodInfo _target;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x18")]
	protected readonly int _argumentCount;

	[Token(Token = "0x1700015A")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60005FA")]
		[Address(RVA = "0x41A1680", Offset = "0x41A1680", VA = "0x41A1680", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700015B")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005FC")]
		[Address(RVA = "0x41A1690", Offset = "0x41A1690", VA = "0x41A1690", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x41A1430", Offset = "0x41A1430", VA = "0x41A1430")]
	internal MethodInfoCallInstruction(MethodInfo target, int argumentCount)
	{
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x41A1700", Offset = "0x41A1700", VA = "0x41A1700", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x41A1A40", Offset = "0x41A1A40", VA = "0x41A1A40")]
	protected object[] GetArgs(InterpretedFrame frame, int first, int skip)
	{
		return null;
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x41A1C40", Offset = "0x41A1C40", VA = "0x41A1C40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
