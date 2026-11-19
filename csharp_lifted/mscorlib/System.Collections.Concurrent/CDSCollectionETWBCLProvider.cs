// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Concurrent.CDSCollectionETWBCLProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics.Tracing;
using Il2CppDummyDll;

namespace System.Collections.Concurrent;

[Token(Token = "0x20005DB")]
[EventSource(Name = "System.Collections.Concurrent.ConcurrentCollectionsEventSource", Guid = "35167F8E-49B2-4b96-AB86-435B59336B5E")]
internal sealed class CDSCollectionETWBCLProvider : EventSource
{
	[Token(Token = "0x4001856")]
	[FieldOffset(Offset = "0x0")]
	public static System.Collections.Concurrent.CDSCollectionETWBCLProvider Log;

	[Token(Token = "0x6002D8A")]
	[Address(RVA = "0x5461810", Offset = "0x5460810", VA = "0x5461810")]
	private CDSCollectionETWBCLProvider()
	{
	}

	[Token(Token = "0x6002D8B")]
	[Address(RVA = "0x5461820", Offset = "0x5460820", VA = "0x5461820")]
	[Event(3, Level = EventLevel.Warning)]
	public void ConcurrentDictionary_AcquiringAllLocks(int numOfBuckets)
	{
	}
}
