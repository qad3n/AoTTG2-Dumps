// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LoadLocalFromClosureBoxedInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A6")]
internal sealed class LoadLocalFromClosureBoxedInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001DB")]
	public override int ProducedStack
	{
		[Token(Token = "0x600095B")]
		[Address(RVA = "0x44F60D0", Offset = "0x44F60D0", VA = "0x44F60D0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001DC")]
	public override string InstructionName
	{
		[Token(Token = "0x600095C")]
		[Address(RVA = "0x44F60E0", Offset = "0x44F60E0", VA = "0x44F60E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x44F60B0", Offset = "0x44F60B0", VA = "0x44F60B0")]
	internal LoadLocalFromClosureBoxedInstruction(int index)
	{
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x44F6110", Offset = "0x44F6110", VA = "0x44F6110", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
