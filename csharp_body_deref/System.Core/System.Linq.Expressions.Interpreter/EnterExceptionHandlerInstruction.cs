// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.EnterExceptionHandlerInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000FD")]
internal sealed class EnterExceptionHandlerInstruction : Instruction
{
	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly EnterExceptionHandlerInstruction Void;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly EnterExceptionHandlerInstruction NonVoid;

	[Token(Token = "0x4000255")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _hasValue;

	[Token(Token = "0x17000185")]
	public override string InstructionName
	{
		[Token(Token = "0x6000666")]
		[Address(RVA = "0x5DDF0E0", Offset = "0x5DDE0E0", VA = "0x5DDF0E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000186")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000667")]
		[Address(RVA = "0x5DDF110", Offset = "0x5DDE110", VA = "0x5DDF110", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000187")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000668")]
		[Address(RVA = "0x5DDF120", Offset = "0x5DDE120", VA = "0x5DDF120", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x5DDF0C0", Offset = "0x5DDE0C0", VA = "0x5DDF0C0")]
	private EnterExceptionHandlerInstruction(bool hasValue)
	{
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x5DDF130", Offset = "0x5DDE130", VA = "0x5DDF130", Slot = "8")]
	[ExcludeFromCodeCoverage]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
