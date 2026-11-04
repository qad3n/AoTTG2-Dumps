// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.TraceFilter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x2000108")]
public abstract class TraceFilter
{
	[Token(Token = "0x6000658")]
	public abstract bool ShouldTrace(TraceEventCache cache, string source, TraceEventType eventType, int id, string formatOrMessage, object[] args, object data1, object[] data);

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x2874EE0", Offset = "0x28734E0", VA = "0x182874EE0")]
	internal bool ShouldTrace(TraceEventCache cache, string source, TraceEventType eventType, int id, string formatOrMessage)
	{
		return default(bool);
	}
}
