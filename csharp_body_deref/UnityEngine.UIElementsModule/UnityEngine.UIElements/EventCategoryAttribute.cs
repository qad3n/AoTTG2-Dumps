using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200046C")]
[AttributeUsage(AttributeTargets.Class)]
internal class EventCategoryAttribute : Attribute
{
	[Token(Token = "0x4000D50")]
	[FieldOffset(Offset = "0x10")]
	internal EventCategory category;

	[Token(Token = "0x6001B8F")]
	[Address(RVA = "0x4C4E690", Offset = "0x4C4E690", VA = "0x4C4E690")]
	public EventCategoryAttribute(EventCategory category)
	{
	}
}
