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
	[Address(RVA = "0x4C4E610", Offset = "0x4C4E610", VA = "0x4C4E610")]
	public EventInterestAttribute(params Type[] eventTypes)
	{
	}

	[Token(Token = "0x6001B8D")]
	[Address(RVA = "0x4C4E650", Offset = "0x4C4E650", VA = "0x4C4E650")]
	public EventInterestAttribute(EventInterestOptions interests)
	{
	}

	[Token(Token = "0x6001B8E")]
	[Address(RVA = "0x4C4E670", Offset = "0x4C4E670", VA = "0x4C4E670")]
	internal EventInterestAttribute(EventInterestOptionsInternal interests)
	{
	}
}
