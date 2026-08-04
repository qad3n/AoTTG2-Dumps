// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsPropertyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x200020E")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field)]
public class fsPropertyAttribute : Attribute
{
	[Token(Token = "0x400099F")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x40009A0")]
	[FieldOffset(Offset = "0x18")]
	public Type Converter;

	[Token(Token = "0x6001276")]
	[Address(RVA = "0x4D80D60", Offset = "0x4D80D60", VA = "0x4D80D60")]
	public fsPropertyAttribute()
	{
	}

	[Token(Token = "0x6001277")]
	[Address(RVA = "0x4D80DA0", Offset = "0x4D80DA0", VA = "0x4D80DA0")]
	public fsPropertyAttribute(string name)
	{
	}
}
