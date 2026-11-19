// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.FieldByRefUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200019B")]
internal sealed class FieldByRefUpdater : ByRefUpdater
{
	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x18")]
	private readonly LocalDefinition? _object;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x30")]
	private readonly FieldInfo _field;

	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x5E071D0", Offset = "0x5E061D0", VA = "0x5E071D0")]
	public FieldByRefUpdater(LocalDefinition? obj, FieldInfo field, int argumentIndex)
	{
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x5E07220", Offset = "0x5E06220", VA = "0x5E07220", Slot = "4")]
	public override void Update(InterpretedFrame frame, object value)
	{
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x5E072B0", Offset = "0x5E062B0", VA = "0x5E072B0", Slot = "5")]
	public override void UndefineTemps(InstructionList instructions, LocalVariables locals)
	{
	}
}
