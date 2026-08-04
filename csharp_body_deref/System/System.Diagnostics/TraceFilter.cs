// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.TraceFilter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000C8")]
public abstract class TraceFilter
{
	[Token(Token = "0x6000478")]
	public abstract bool ShouldTrace(TraceEventCache cache, string source, TraceEventType eventType, int id, string formatOrMessage, object[] args, object data1, object[] data);

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x4925490", Offset = "0x4925490", VA = "0x4925490")]
	internal bool ShouldTrace(TraceEventCache cache, string source, TraceEventType eventType, int id, string formatOrMessage)
	{
		return default(bool);
	}
}
