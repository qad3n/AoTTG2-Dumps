// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.TypeIsInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000231")]
internal sealed class TypeIsInstruction : Instruction
{
	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _type;

	[Token(Token = "0x17000237")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AEA")]
		[Address(RVA = "0x4504BA0", Offset = "0x4504BA0", VA = "0x4504BA0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000238")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AEB")]
		[Address(RVA = "0x4504BB0", Offset = "0x4504BB0", VA = "0x4504BB0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000239")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AEC")]
		[Address(RVA = "0x4504BC0", Offset = "0x4504BC0", VA = "0x4504BC0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x4504B70", Offset = "0x4504B70", VA = "0x4504B70")]
	internal TypeIsInstruction(Type type)
	{
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x4504BF0", Offset = "0x4504BF0", VA = "0x4504BF0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x4504C50", Offset = "0x4504C50", VA = "0x4504C50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
