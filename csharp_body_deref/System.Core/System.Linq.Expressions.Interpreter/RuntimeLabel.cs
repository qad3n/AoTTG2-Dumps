// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.RuntimeLabel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E8")]
internal readonly struct RuntimeLabel
{
	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x0")]
	public readonly int Index;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x4")]
	public readonly int StackDepth;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x8")]
	public readonly int ContinuationStackDepth;

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x44C5980", Offset = "0x44C5980", VA = "0x44C5980")]
	public RuntimeLabel(int index, int continuationStackDepth, int stackDepth)
	{
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x44C5990", Offset = "0x44C5990", VA = "0x44C5990", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
