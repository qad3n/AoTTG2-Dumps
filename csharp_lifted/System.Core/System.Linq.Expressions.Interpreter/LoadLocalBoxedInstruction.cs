// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LoadLocalBoxedInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A5")]
internal sealed class LoadLocalBoxedInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001D9")]
	public override int ProducedStack
	{
		[Token(Token = "0x600095D")]
		[Address(RVA = "0x5E0B0E0", Offset = "0x5E0A0E0", VA = "0x5E0B0E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001DA")]
	public override string InstructionName
	{
		[Token(Token = "0x600095E")]
		[Address(RVA = "0x5E0B0F0", Offset = "0x5E0A0F0", VA = "0x5E0B0F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x5E0B0C0", Offset = "0x5E0A0C0", VA = "0x5E0B0C0")]
	internal LoadLocalBoxedInstruction(int index)
	{
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x5E0B120", Offset = "0x5E0A120", VA = "0x5E0B120", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
