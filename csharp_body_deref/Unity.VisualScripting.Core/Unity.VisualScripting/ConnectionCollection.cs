// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ConnectionCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200002F")]
public class ConnectionCollection<TConnection, TSource, TDestination> : ConnectionCollectionBase<TConnection, TSource, TDestination, List<TConnection>> where TConnection : IConnection<TSource, TDestination>
{
	[Token(Token = "0x6000198")]
	public ConnectionCollection()
	{
	}
}
