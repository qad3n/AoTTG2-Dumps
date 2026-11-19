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

[Token(Token = "0x2000599")]
[AttributeUsage(AttributeTargets.Method)]
public sealed class EventAttribute : Attribute
{
	[Token(Token = "0x170006A0")]
	private int EventId
	{
		[Token(Token = "0x6002B72")]
		[Address(RVA = "0x544F550", Offset = "0x544E550", VA = "0x544F550")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170006A1")]
	public EventLevel Level
	{
		[Token(Token = "0x6002B73")]
		[Address(RVA = "0x544F560", Offset = "0x544E560", VA = "0x544F560")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170006A2")]
	public EventKeywords Keywords
	{
		[Token(Token = "0x6002B74")]
		[Address(RVA = "0x544F570", Offset = "0x544E570", VA = "0x544F570")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170006A3")]
	public string Message
	{
		[Token(Token = "0x6002B75")]
		[Address(RVA = "0x544F580", Offset = "0x544E580", VA = "0x544F580")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002B71")]
	[Address(RVA = "0x544F530", Offset = "0x544E530", VA = "0x544F530")]
	public EventAttribute(int eventId)
	{
	}
}
