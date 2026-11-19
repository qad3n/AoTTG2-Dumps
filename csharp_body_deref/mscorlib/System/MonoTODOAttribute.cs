// ==================== AoTTG2 cross-reference ====================
// Type: System.MonoTODOAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200014E")]
[AttributeUsage(AttributeTargets.All, AllowMultiple = true)]
internal class MonoTODOAttribute : Attribute
{
	[Token(Token = "0x40004CC")]
	[FieldOffset(Offset = "0x10")]
	private string comment;

	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x54E9970", Offset = "0x54E8970", VA = "0x54E9970")]
	public MonoTODOAttribute()
	{
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x54E9990", Offset = "0x54E8990", VA = "0x54E9990")]
	public MonoTODOAttribute(string comment)
	{
	}
}
