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

[Token(Token = "0x2000600")]
[EventSource(Name = "System.Collections.Concurrent.ConcurrentCollectionsEventSource", Guid = "35167F8E-49B2-4b96-AB86-435B59336B5E")]
internal sealed class CDSCollectionETWBCLProvider : EventSource
{
	[Token(Token = "0x40018EF")]
	[FieldOffset(Offset = "0x0")]
	public static System.Collections.Concurrent.CDSCollectionETWBCLProvider Log;

	[Token(Token = "0x6002DAF")]
	[Address(RVA = "0x1ACD670", Offset = "0x1ACBC70", VA = "0x181ACD670")]
	private CDSCollectionETWBCLProvider()
	{
	}

	[Token(Token = "0x6002DB0")]
	[Address(RVA = "0x1ACD5B0", Offset = "0x1ACBBB0", VA = "0x181ACD5B0")]
	[Event(3, Level = EventLevel.Warning)]
	public void ConcurrentDictionary_AcquiringAllLocks(int numOfBuckets)
	{
	}
}
