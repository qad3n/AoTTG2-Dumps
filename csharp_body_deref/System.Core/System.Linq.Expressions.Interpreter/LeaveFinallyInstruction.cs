// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LeaveFinallyInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F8")]
internal sealed class LeaveFinallyInstruction : Instruction
{
	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Instruction Instance;

	[Token(Token = "0x1700017A")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600064B")]
		[Address(RVA = "0x5DDEB10", Offset = "0x5DDDB10", VA = "0x5DDEB10", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700017B")]
	public override string InstructionName
	{
		[Token(Token = "0x600064C")]
		[Address(RVA = "0x5DDEB20", Offset = "0x5DDDB20", VA = "0x5DDEB20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x5DDEB00", Offset = "0x5DDDB00", VA = "0x5DDEB00")]
	private LeaveFinallyInstruction()
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x5DDEB50", Offset = "0x5DDDB50", VA = "0x5DDEB50", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
