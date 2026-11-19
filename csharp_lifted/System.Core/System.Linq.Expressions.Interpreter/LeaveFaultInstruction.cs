// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LeaveFaultInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000FA")]
internal sealed class LeaveFaultInstruction : Instruction
{
	[Token(Token = "0x4000250")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Instruction Instance;

	[Token(Token = "0x1700017E")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000656")]
		[Address(RVA = "0x5DDEE40", Offset = "0x5DDDE40", VA = "0x5DDEE40", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700017F")]
	public override int ConsumedContinuations
	{
		[Token(Token = "0x6000657")]
		[Address(RVA = "0x5DDEE50", Offset = "0x5DDDE50", VA = "0x5DDEE50", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000180")]
	public override string InstructionName
	{
		[Token(Token = "0x6000658")]
		[Address(RVA = "0x5DDEE60", Offset = "0x5DDDE60", VA = "0x5DDEE60", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x5DDEE30", Offset = "0x5DDDE30", VA = "0x5DDEE30")]
	private LeaveFaultInstruction()
	{
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x5DDEE90", Offset = "0x5DDDE90", VA = "0x5DDEE90", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
