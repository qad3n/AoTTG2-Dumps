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

[Token(Token = "0x20005EC")]
[AttributeUsage(AttributeTargets.Method)]
public sealed class EventAttribute : Attribute
{
	[Token(Token = "0x17000712")]
	private int EventId
	{
		[Token(Token = "0x6002E86")]
		[Address(RVA = "0x3C7C450", Offset = "0x3C7C450", VA = "0x3C7C450")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000713")]
	public EventLevel Level
	{
		[Token(Token = "0x6002E87")]
		[Address(RVA = "0x3C7C460", Offset = "0x3C7C460", VA = "0x3C7C460")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000714")]
	public EventKeywords Keywords
	{
		[Token(Token = "0x6002E88")]
		[Address(RVA = "0x3C7C470", Offset = "0x3C7C470", VA = "0x3C7C470")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000715")]
	public string Message
	{
		[Token(Token = "0x6002E89")]
		[Address(RVA = "0x3C7C480", Offset = "0x3C7C480", VA = "0x3C7C480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002E85")]
	[Address(RVA = "0x3C7C430", Offset = "0x3C7C430", VA = "0x3C7C430")]
	public EventAttribute(int eventId)
	{
	}
}
