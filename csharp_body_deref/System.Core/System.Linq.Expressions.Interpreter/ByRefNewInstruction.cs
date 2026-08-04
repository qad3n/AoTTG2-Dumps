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

[Token(Token = "0x20001DF")]
internal class ByRefNewInstruction : NewInstruction
{
	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x20")]
	private readonly ByRefUpdater[] _byrefArgs;

	[Token(Token = "0x17000210")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A0F")]
		[Address(RVA = "0x44FC3B0", Offset = "0x44FC3B0", VA = "0x44FC3B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x44FC360", Offset = "0x44FC360", VA = "0x44FC360")]
	internal ByRefNewInstruction(ConstructorInfo target, int argumentCount, ByRefUpdater[] byrefArgs)
	{
	}

	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x44FC3E0", Offset = "0x44FC3E0", VA = "0x44FC3E0", Slot = "8")]
	public sealed override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
