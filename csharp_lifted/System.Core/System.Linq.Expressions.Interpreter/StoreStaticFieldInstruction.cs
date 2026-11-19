// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.StoreStaticFieldInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200013D")]
internal sealed class StoreStaticFieldInstruction : FieldInstruction
{
	[Token(Token = "0x170001A7")]
	public override string InstructionName
	{
		[Token(Token = "0x600070E")]
		[Address(RVA = "0x5DE4590", Offset = "0x5DE3590", VA = "0x5DE4590", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A8")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600070F")]
		[Address(RVA = "0x5DE45C0", Offset = "0x5DE35C0", VA = "0x5DE45C0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x5DE4560", Offset = "0x5DE3560", VA = "0x5DE4560")]
	public StoreStaticFieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x5DE45D0", Offset = "0x5DE35D0", VA = "0x5DE45D0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
