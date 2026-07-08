using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001DF")]
internal class ByRefNewInstruction : NewInstruction
{
	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x20")]
	private readonly ByRefUpdater[] _byrefArgs;

	[Token(Token = "0x17000210")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A0F")]
		[Address(RVA = "0x41D72B0", Offset = "0x41D72B0", VA = "0x41D72B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x41D7260", Offset = "0x41D7260", VA = "0x41D7260")]
	internal ByRefNewInstruction(ConstructorInfo target, int argumentCount, ByRefUpdater[] byrefArgs)
	{
	}

	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x41D72E0", Offset = "0x41D72E0", VA = "0x41D72E0", Slot = "8")]
	public sealed override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
