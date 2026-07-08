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
