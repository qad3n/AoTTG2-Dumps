// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ThrowInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000FE")]
internal sealed class ThrowInstruction : Instruction
{
	[Token(Token = "0x400024F")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly ThrowInstruction Throw;

	[Token(Token = "0x4000250")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly ThrowInstruction VoidThrow;

	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly ThrowInstruction Rethrow;

	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly ThrowInstruction VoidRethrow;

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _hasResult;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0x11")]
	private readonly bool _rethrow;

	[Token(Token = "0x17000189")]
	public override string InstructionName
	{
		[Token(Token = "0x6000668")]
		[Address(RVA = "0x2441660", Offset = "0x243FC60", VA = "0x182441660", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018A")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000669")]
		[Address(RVA = "0x242D820", Offset = "0x242BE20", VA = "0x18242D820", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018B")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600066A")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x2441620", Offset = "0x243FC20", VA = "0x182441620")]
	private ThrowInstruction(bool hasResult, bool isRethrow)
	{
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x2441300", Offset = "0x243F900", VA = "0x182441300", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x2441420", Offset = "0x243FA20", VA = "0x182441420")]
	private static Exception WrapThrownObject(object thrown)
	{
		return null;
	}
}
