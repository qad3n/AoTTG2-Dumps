// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.GetArrayItemInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E4")]
internal sealed class GetArrayItemInstruction : Instruction
{
	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly GetArrayItemInstruction Instance;

	[Token(Token = "0x1700014C")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014D")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014E")]
	public override string InstructionName
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x24399E0", Offset = "0x2437FE0", VA = "0x1824399E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private GetArrayItemInstruction()
	{
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x24398D0", Offset = "0x2437ED0", VA = "0x1824398D0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
