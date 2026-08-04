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

[Token(Token = "0x200046B")]
[AttributeUsage(AttributeTargets.Method, AllowMultiple = true)]
public class EventInterestAttribute : Attribute
{
	[Token(Token = "0x4000D4E")]
	[FieldOffset(Offset = "0x10")]
	internal Type[] eventTypes;

	[Token(Token = "0x4000D4F")]
	[FieldOffset(Offset = "0x18")]
	internal EventCategoryFlags categoryFlags;

	[Token(Token = "0x6001B8C")]
	[Address(RVA = "0x4F75F40", Offset = "0x4F75F40", VA = "0x4F75F40")]
	public EventInterestAttribute(params Type[] eventTypes)
	{
	}

	[Token(Token = "0x6001B8D")]
	[Address(RVA = "0x4F75F80", Offset = "0x4F75F80", VA = "0x4F75F80")]
	public EventInterestAttribute(EventInterestOptions interests)
	{
	}

	[Token(Token = "0x6001B8E")]
	[Address(RVA = "0x4F75FA0", Offset = "0x4F75FA0", VA = "0x4F75FA0")]
	internal EventInterestAttribute(EventInterestOptionsInternal interests)
	{
	}
}
