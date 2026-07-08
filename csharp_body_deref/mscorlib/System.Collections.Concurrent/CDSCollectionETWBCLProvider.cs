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
	[Address(RVA = "0x4FA8E90", Offset = "0x4FA8E90", VA = "0x4FA8E90")]
	private CDSCollectionETWBCLProvider()
	{
	}

	[Token(Token = "0x600309D")]
	[Address(RVA = "0x4FA8EE0", Offset = "0x4FA8EE0", VA = "0x4FA8EE0")]
	[Event(3, Level = EventLevel.Warning)]
	public void ConcurrentDictionary_AcquiringAllLocks(int numOfBuckets)
	{
	}
}
