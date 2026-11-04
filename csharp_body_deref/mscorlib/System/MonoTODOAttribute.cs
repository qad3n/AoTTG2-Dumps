// ==================== AoTTG2 cross-reference ====================
// Type: System.MonoTODOAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000176")]
[AttributeUsage(AttributeTargets.All, AllowMultiple = true)]
internal class MonoTODOAttribute : Attribute
{
	[Token(Token = "0x400056E")]
	[FieldOffset(Offset = "0x10")]
	private string comment;

	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public MonoTODOAttribute()
	{
	}

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public MonoTODOAttribute(string comment)
	{
	}
}
