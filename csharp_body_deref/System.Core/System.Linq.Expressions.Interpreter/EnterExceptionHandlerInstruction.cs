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

[Token(Token = "0x20000FC")]
internal sealed class EnterExceptionHandlerInstruction : Instruction
{
	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly EnterExceptionHandlerInstruction Void;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly EnterExceptionHandlerInstruction NonVoid;

	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _hasValue;

	[Token(Token = "0x17000183")]
	public override string InstructionName
	{
		[Token(Token = "0x600065B")]
		[Address(RVA = "0x242D830", Offset = "0x242BE30", VA = "0x18242D830", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000184")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600065C")]
		[Address(RVA = "0x242D820", Offset = "0x242BE20", VA = "0x18242D820", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000185")]
	public override int ProducedStack
	{
		[Token(Token = "0x600065D")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	private EnterExceptionHandlerInstruction(bool hasValue)
	{
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "8")]
	[ExcludeFromCodeCoverage]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
