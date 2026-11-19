// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ByRefNewInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001E0")]
internal class ByRefNewInstruction : NewInstruction
{
	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x20")]
	private readonly ByRefUpdater[] _byrefArgs;

	[Token(Token = "0x17000212")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A19")]
		[Address(RVA = "0x5E11710", Offset = "0x5E10710", VA = "0x5E11710", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x5E116C0", Offset = "0x5E106C0", VA = "0x5E116C0")]
	internal ByRefNewInstruction(ConstructorInfo target, int argumentCount, ByRefUpdater[] byrefArgs)
	{
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x5E11740", Offset = "0x5E10740", VA = "0x5E11740", Slot = "8")]
	public sealed override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
