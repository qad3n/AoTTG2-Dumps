// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ThrowInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000FF")]
internal sealed class ThrowInstruction : Instruction
{
	[Token(Token = "0x4000258")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly ThrowInstruction Throw;

	[Token(Token = "0x4000259")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly ThrowInstruction VoidThrow;

	[Token(Token = "0x400025A")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly ThrowInstruction Rethrow;

	[Token(Token = "0x400025B")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly ThrowInstruction VoidRethrow;

	[Token(Token = "0x400025C")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _hasResult;

	[Token(Token = "0x400025D")]
	[FieldOffset(Offset = "0x11")]
	private readonly bool _rethrow;

	[Token(Token = "0x1700018B")]
	public override string InstructionName
	{
		[Token(Token = "0x6000673")]
		[Address(RVA = "0x5DDF440", Offset = "0x5DDE440", VA = "0x5DDF440", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018C")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000674")]
		[Address(RVA = "0x5DDF470", Offset = "0x5DDE470", VA = "0x5DDF470", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018D")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000675")]
		[Address(RVA = "0x5DDF480", Offset = "0x5DDE480", VA = "0x5DDF480", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x5DDF420", Offset = "0x5DDE420", VA = "0x5DDF420")]
	private ThrowInstruction(bool hasResult, bool isRethrow)
	{
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x5DDF490", Offset = "0x5DDE490", VA = "0x5DDF490", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x5DDF5A0", Offset = "0x5DDE5A0", VA = "0x5DDF5A0")]
	private static Exception WrapThrownObject(object thrown)
	{
		return null;
	}
}
