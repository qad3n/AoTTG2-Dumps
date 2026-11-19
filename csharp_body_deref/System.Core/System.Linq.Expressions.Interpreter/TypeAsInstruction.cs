// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.TypeAsInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000233")]
internal sealed class TypeAsInstruction : Instruction
{
	[Token(Token = "0x4000413")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _type;

	[Token(Token = "0x1700023C")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AFA")]
		[Address(RVA = "0x5E19F80", Offset = "0x5E18F80", VA = "0x5E19F80", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023D")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AFB")]
		[Address(RVA = "0x5E19F90", Offset = "0x5E18F90", VA = "0x5E19F90", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023E")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AFC")]
		[Address(RVA = "0x5E19FA0", Offset = "0x5E18FA0", VA = "0x5E19FA0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x5E19F50", Offset = "0x5E18F50", VA = "0x5E19F50")]
	internal TypeAsInstruction(Type type)
	{
	}

	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x5E19FD0", Offset = "0x5E18FD0", VA = "0x5E19FD0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x5E1A030", Offset = "0x5E19030", VA = "0x5E1A030", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
