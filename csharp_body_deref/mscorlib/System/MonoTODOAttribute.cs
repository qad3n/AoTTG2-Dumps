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
	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0x10")]
	private string comment;

	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x3CE5770", Offset = "0x3CE5770", VA = "0x3CE5770")]
	public MonoTODOAttribute()
	{
	}

	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x3CE5790", Offset = "0x3CE5790", VA = "0x3CE5790")]
	public MonoTODOAttribute(string comment)
	{
	}
}
