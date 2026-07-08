using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Diagnostics.Tracing;

[Token(Token = "0x20005EC")]
[AttributeUsage(AttributeTargets.Method)]
public sealed class EventAttribute : Attribute
{
	[Token(Token = "0x17000712")]
	private int EventId
	{
		[Token(Token = "0x6002E86")]
		[Address(RVA = "0x4F96930", Offset = "0x4F96930", VA = "0x4F96930")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000713")]
	public EventLevel Level
	{
		[Token(Token = "0x6002E87")]
		[Address(RVA = "0x4F96940", Offset = "0x4F96940", VA = "0x4F96940")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000714")]
	public EventKeywords Keywords
	{
		[Token(Token = "0x6002E88")]
		[Address(RVA = "0x4F96950", Offset = "0x4F96950", VA = "0x4F96950")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000715")]
	public string Message
	{
		[Token(Token = "0x6002E89")]
		[Address(RVA = "0x4F96960", Offset = "0x4F96960", VA = "0x4F96960")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002E85")]
	[Address(RVA = "0x4F96910", Offset = "0x4F96910", VA = "0x4F96910")]
	public EventAttribute(int eventId)
	{
	}
}
