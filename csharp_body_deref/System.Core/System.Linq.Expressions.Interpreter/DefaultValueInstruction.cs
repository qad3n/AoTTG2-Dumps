// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.DefaultValueInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200010B")]
internal sealed class DefaultValueInstruction : Instruction
{
	[Token(Token = "0x4000269")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _type;

	[Token(Token = "0x17000195")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000697")]
		[Address(RVA = "0x5DE0150", Offset = "0x5DDF150", VA = "0x5DE0150", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000196")]
	public override string InstructionName
	{
		[Token(Token = "0x6000698")]
		[Address(RVA = "0x5DE0160", Offset = "0x5DDF160", VA = "0x5DE0160", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x5DE0120", Offset = "0x5DDF120", VA = "0x5DE0120")]
	internal DefaultValueInstruction(Type type)
	{
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x5DE0190", Offset = "0x5DDF190", VA = "0x5DE0190", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x5DE01C0", Offset = "0x5DDF1C0", VA = "0x5DE01C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
