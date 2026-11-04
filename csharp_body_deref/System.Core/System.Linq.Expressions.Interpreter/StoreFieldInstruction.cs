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
		[Token(Token = "0x60006FF")]
		[Address(RVA = "0x2465750", Offset = "0x2463D50", VA = "0x182465750", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A4")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000700")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public StoreFieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x24656D0", Offset = "0x2463CD0", VA = "0x1824656D0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
