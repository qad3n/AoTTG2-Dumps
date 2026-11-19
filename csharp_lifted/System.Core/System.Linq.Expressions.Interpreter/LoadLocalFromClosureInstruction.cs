// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LoadLocalFromClosureInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A6")]
internal sealed class LoadLocalFromClosureInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001DB")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000961")]
		[Address(RVA = "0x5E0B2B0", Offset = "0x5E0A2B0", VA = "0x5E0B2B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001DC")]
	public override string InstructionName
	{
		[Token(Token = "0x6000962")]
		[Address(RVA = "0x5E0B2C0", Offset = "0x5E0A2C0", VA = "0x5E0B2C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x5E0B290", Offset = "0x5E0A290", VA = "0x5E0B290")]
	internal LoadLocalFromClosureInstruction(int index)
	{
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x5E0B2F0", Offset = "0x5E0A2F0", VA = "0x5E0B2F0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
