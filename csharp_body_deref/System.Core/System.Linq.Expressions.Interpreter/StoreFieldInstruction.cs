// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.StoreFieldInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200013B")]
internal sealed class StoreFieldInstruction : FieldInstruction
{
	[Token(Token = "0x170001A3")]
	public override string InstructionName
	{
		[Token(Token = "0x6000700")]
		[Address(RVA = "0x44CE8D0", Offset = "0x44CE8D0", VA = "0x44CE8D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A4")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000701")]
		[Address(RVA = "0x44CE900", Offset = "0x44CE900", VA = "0x44CE900", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x44CE8A0", Offset = "0x44CE8A0", VA = "0x44CE8A0")]
	public StoreFieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x44CE910", Offset = "0x44CE910", VA = "0x44CE910", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
