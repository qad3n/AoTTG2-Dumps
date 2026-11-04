// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.DefaultValueInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200010A")]
internal sealed class DefaultValueInstruction : Instruction
{
	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _type;

	[Token(Token = "0x17000193")]
	public override int ProducedStack
	{
		[Token(Token = "0x600068C")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000194")]
	public override string InstructionName
	{
		[Token(Token = "0x600068D")]
		[Address(RVA = "0x242C5C0", Offset = "0x242ABC0", VA = "0x18242C5C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	internal DefaultValueInstruction(Type type)
	{
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x242C520", Offset = "0x242AB20", VA = "0x18242C520", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x242C560", Offset = "0x242AB60", VA = "0x18242C560", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
