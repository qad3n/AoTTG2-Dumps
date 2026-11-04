// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventInterestAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000545")]
[AttributeUsage(AttributeTargets.Method, AllowMultiple = true)]
public class EventInterestAttribute : Attribute
{
	[Token(Token = "0x40011EB")]
	[FieldOffset(Offset = "0x10")]
	internal Type[] eventTypes;

	[Token(Token = "0x40011EC")]
	[FieldOffset(Offset = "0x18")]
	internal EventCategoryFlags categoryFlags;

	[Token(Token = "0x60027EF")]
	[Address(RVA = "0x315C4B0", Offset = "0x315AAB0", VA = "0x18315C4B0")]
	public EventInterestAttribute(params Type[] eventTypes)
	{
	}

	[Token(Token = "0x60027F0")]
	[Address(RVA = "0x315C480", Offset = "0x315AA80", VA = "0x18315C480")]
	public EventInterestAttribute(EventInterestOptions interests)
	{
	}

	[Token(Token = "0x60027F1")]
	[Address(RVA = "0x315C480", Offset = "0x315AA80", VA = "0x18315C480")]
	internal EventInterestAttribute(EventInterestOptionsInternal interests)
	{
	}
}
