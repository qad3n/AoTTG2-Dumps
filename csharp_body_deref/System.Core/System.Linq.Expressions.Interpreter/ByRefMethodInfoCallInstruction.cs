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

[Token(Token = "0x20000EC")]
internal class ByRefMethodInfoCallInstruction : MethodInfoCallInstruction
{
	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0x20")]
	private readonly ByRefUpdater[] _byrefArgs;

	[Token(Token = "0x1700015C")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000600")]
		[Address(RVA = "0x242A4B0", Offset = "0x2428AB0", VA = "0x18242A4B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x242A460", Offset = "0x2428A60", VA = "0x18242A460")]
	internal ByRefMethodInfoCallInstruction(MethodInfo target, int argumentCount, ByRefUpdater[] byrefArgs)
	{
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x2429F50", Offset = "0x2428550", VA = "0x182429F50", Slot = "8")]
	public sealed override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
