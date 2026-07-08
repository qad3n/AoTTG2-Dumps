using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000EC")]
internal class ByRefMethodInfoCallInstruction : MethodInfoCallInstruction
{
	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0x20")]
	private readonly ByRefUpdater[] _byrefArgs;

	[Token(Token = "0x1700015C")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000601")]
		[Address(RVA = "0x41A1D00", Offset = "0x41A1D00", VA = "0x41A1D00", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x41A1CB0", Offset = "0x41A1CB0", VA = "0x41A1CB0")]
	internal ByRefMethodInfoCallInstruction(MethodInfo target, int argumentCount, ByRefUpdater[] byrefArgs)
	{
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x41A1D70", Offset = "0x41A1D70", VA = "0x41A1D70", Slot = "8")]
	public sealed override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
