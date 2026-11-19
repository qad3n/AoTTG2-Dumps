// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ByRefMethodInfoCallInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000ED")]
internal class ByRefMethodInfoCallInstruction : MethodInfoCallInstruction
{
	[Token(Token = "0x400023D")]
	[FieldOffset(Offset = "0x20")]
	private readonly ByRefUpdater[] _byrefArgs;

	[Token(Token = "0x1700015E")]
	public override int ProducedStack
	{
		[Token(Token = "0x600060B")]
		[Address(RVA = "0x5DDCB70", Offset = "0x5DDBB70", VA = "0x5DDCB70", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x5DDCB20", Offset = "0x5DDBB20", VA = "0x5DDCB20")]
	internal ByRefMethodInfoCallInstruction(MethodInfo target, int argumentCount, ByRefUpdater[] byrefArgs)
	{
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x5DDCBE0", Offset = "0x5DDBBE0", VA = "0x5DDCBE0", Slot = "8")]
	public sealed override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
