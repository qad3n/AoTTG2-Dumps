// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LoadLocalFromClosureBoxedInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A7")]
internal sealed class LoadLocalFromClosureBoxedInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001DD")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000965")]
		[Address(RVA = "0x5E0B450", Offset = "0x5E0A450", VA = "0x5E0B450", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001DE")]
	public override string InstructionName
	{
		[Token(Token = "0x6000966")]
		[Address(RVA = "0x5E0B460", Offset = "0x5E0A460", VA = "0x5E0B460", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x5E0B430", Offset = "0x5E0A430", VA = "0x5E0B430")]
	internal LoadLocalFromClosureBoxedInstruction(int index)
	{
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x5E0B490", Offset = "0x5E0A490", VA = "0x5E0B490", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
