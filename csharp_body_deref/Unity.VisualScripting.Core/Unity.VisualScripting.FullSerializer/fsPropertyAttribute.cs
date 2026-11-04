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

[Token(Token = "0x2000215")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field)]
public class fsPropertyAttribute : Attribute
{
	[Token(Token = "0x40009AF")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x40009B0")]
	[FieldOffset(Offset = "0x18")]
	public Type Converter;

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x287CF80", Offset = "0x287B580", VA = "0x18287CF80")]
	public fsPropertyAttribute()
	{
	}

	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public fsPropertyAttribute(string name)
	{
	}
}
