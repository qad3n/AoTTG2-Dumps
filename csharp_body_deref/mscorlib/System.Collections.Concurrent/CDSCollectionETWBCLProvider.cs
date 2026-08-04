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

[Token(Token = "0x200062C")]
[EventSource(Name = "System.Collections.Concurrent.ConcurrentCollectionsEventSource", Guid = "35167F8E-49B2-4b96-AB86-435B59336B5E")]
internal sealed class CDSCollectionETWBCLProvider : EventSource
{
	[Token(Token = "0x4001AE3")]
	[FieldOffset(Offset = "0x0")]
	public static System.Collections.Concurrent.CDSCollectionETWBCLProvider Log;

	[Token(Token = "0x600309C")]
	[Address(RVA = "0x3C8E9B0", Offset = "0x3C8E9B0", VA = "0x3C8E9B0")]
	private CDSCollectionETWBCLProvider()
	{
	}

	[Token(Token = "0x600309D")]
	[Address(RVA = "0x3C8EA00", Offset = "0x3C8EA00", VA = "0x3C8EA00")]
	[Event(3, Level = EventLevel.Warning)]
	public void ConcurrentDictionary_AcquiringAllLocks(int numOfBuckets)
	{
	}
}
