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
		[Token(Token = "0x60006F6")]
		[Address(RVA = "0x2465650", Offset = "0x2463C50", VA = "0x182465650", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019F")]
	public override int ProducedStack
	{
		[Token(Token = "0x60006F7")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public LoadStaticFieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x24655B0", Offset = "0x2463BB0", VA = "0x1824655B0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
