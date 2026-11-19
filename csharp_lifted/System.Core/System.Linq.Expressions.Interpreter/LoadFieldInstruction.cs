// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LoadFieldInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200013B")]
internal sealed class LoadFieldInstruction : FieldInstruction
{
	[Token(Token = "0x170001A2")]
	public override string InstructionName
	{
		[Token(Token = "0x6000705")]
		[Address(RVA = "0x5DE4350", Offset = "0x5DE3350", VA = "0x5DE4350", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A3")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000706")]
		[Address(RVA = "0x5DE4380", Offset = "0x5DE3380", VA = "0x5DE4380", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001A4")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000707")]
		[Address(RVA = "0x5DE4390", Offset = "0x5DE3390", VA = "0x5DE4390", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x5DE4320", Offset = "0x5DE3320", VA = "0x5DE4320")]
	public LoadFieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x5DE43A0", Offset = "0x5DE33A0", VA = "0x5DE43A0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
