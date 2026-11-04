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

[Token(Token = "0x200019B")]
internal sealed class PropertyByRefUpdater : ByRefUpdater
{
	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x18")]
	private readonly LocalDefinition? _object;

	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x30")]
	private readonly PropertyInfo _property;

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x246F2E0", Offset = "0x246D8E0", VA = "0x18246F2E0")]
	public PropertyByRefUpdater(LocalDefinition? obj, PropertyInfo property, int argumentIndex)
	{
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x247C7B0", Offset = "0x247ADB0", VA = "0x18247C7B0", Slot = "4")]
	public override void Update(InterpretedFrame frame, object value)
	{
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x247C710", Offset = "0x247AD10", VA = "0x18247C710", Slot = "5")]
	public override void UndefineTemps(InstructionList instructions, LocalVariables locals)
	{
	}
}
