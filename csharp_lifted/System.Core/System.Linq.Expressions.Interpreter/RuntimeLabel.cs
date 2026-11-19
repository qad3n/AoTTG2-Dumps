// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.RuntimeLabel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E9")]
internal readonly struct RuntimeLabel
{
	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x0")]
	public readonly int Index;

	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0x4")]
	public readonly int StackDepth;

	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x8")]
	public readonly int ContinuationStackDepth;

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x5DDB720", Offset = "0x5DDA720", VA = "0x5DDB720")]
	public RuntimeLabel(int index, int continuationStackDepth, int stackDepth)
	{
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x5DDB730", Offset = "0x5DDA730", VA = "0x5DDB730", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
