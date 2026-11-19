// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.PropertyByRefUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200019C")]
internal sealed class PropertyByRefUpdater : ByRefUpdater
{
	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x18")]
	private readonly LocalDefinition? _object;

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x30")]
	private readonly PropertyInfo _property;

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x5E07340", Offset = "0x5E06340", VA = "0x5E07340")]
	public PropertyByRefUpdater(LocalDefinition? obj, PropertyInfo property, int argumentIndex)
	{
	}

	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x5E07390", Offset = "0x5E06390", VA = "0x5E07390", Slot = "4")]
	public override void Update(InterpretedFrame frame, object value)
	{
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x5E074E0", Offset = "0x5E064E0", VA = "0x5E074E0", Slot = "5")]
	public override void UndefineTemps(InstructionList instructions, LocalVariables locals)
	{
	}
}
