// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.Tracing.EventAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Diagnostics.Tracing;

[Token(Token = "0x20005BE")]
[AttributeUsage(AttributeTargets.Method)]
public sealed class EventAttribute : Attribute
{
	[Token(Token = "0x1700069F")]
	private int EventId
	{
		[Token(Token = "0x6002B93")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170006A0")]
	public EventLevel Level
	{
		[Token(Token = "0x6002B94")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170006A1")]
	public EventKeywords Keywords
	{
		[Token(Token = "0x6002B95")]
		[Address(RVA = "0x111C9B0", Offset = "0x111AFB0", VA = "0x18111C9B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170006A2")]
	public string Message
	{
		[Token(Token = "0x6002B96")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002B92")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public EventAttribute(int eventId)
	{
	}
}
