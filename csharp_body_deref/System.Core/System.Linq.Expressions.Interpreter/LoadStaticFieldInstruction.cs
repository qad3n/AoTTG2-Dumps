// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LoadStaticFieldInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000139")]
internal sealed class LoadStaticFieldInstruction : FieldInstruction
{
	[Token(Token = "0x1700019E")]
	public override string InstructionName
	{
		[Token(Token = "0x60006F7")]
		[Address(RVA = "0x44CE650", Offset = "0x44CE650", VA = "0x44CE650", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019F")]
	public override int ProducedStack
	{
		[Token(Token = "0x60006F8")]
		[Address(RVA = "0x44CE680", Offset = "0x44CE680", VA = "0x44CE680", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x44CE620", Offset = "0x44CE620", VA = "0x44CE620")]
	public LoadStaticFieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x44CE690", Offset = "0x44CE690", VA = "0x44CE690", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
