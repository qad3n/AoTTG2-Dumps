// ==================== AoTTG2 cross-reference ====================
// Type: System.DelegateData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001AB")]
internal sealed class DelegateData
{
	[Token(Token = "0x40006EA")]
	[FieldOffset(Offset = "0x10")]
	public Type target_type;

	[Token(Token = "0x40006EB")]
	[FieldOffset(Offset = "0x18")]
	public string method_name;

	[Token(Token = "0x40006EC")]
	[FieldOffset(Offset = "0x20")]
	public bool curried_first_arg;

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public DelegateData()
	{
	}
}
