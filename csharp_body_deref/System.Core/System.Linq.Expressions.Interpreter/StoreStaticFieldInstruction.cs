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

[Token(Token = "0x200013C")]
internal sealed class StoreStaticFieldInstruction : FieldInstruction
{
	[Token(Token = "0x170001A5")]
	public override string InstructionName
	{
		[Token(Token = "0x6000704")]
		[Address(RVA = "0x44CE9B0", Offset = "0x44CE9B0", VA = "0x44CE9B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A6")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000705")]
		[Address(RVA = "0x44CE9E0", Offset = "0x44CE9E0", VA = "0x44CE9E0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x44CE980", Offset = "0x44CE980", VA = "0x44CE980")]
	public StoreStaticFieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x44CE9F0", Offset = "0x44CE9F0", VA = "0x44CE9F0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
