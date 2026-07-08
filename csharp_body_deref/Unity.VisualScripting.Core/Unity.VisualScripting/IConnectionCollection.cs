using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000033")]
public interface IConnectionCollection<TConnection, TSource, TDestination> : ICollection<TConnection>, IEnumerable<TConnection>, IEnumerable where TConnection : IConnection<TSource, TDestination>
{
	[Token(Token = "0x17000057")]
	IEnumerable<TConnection> this[TSource source]
	{
		[Token(Token = "0x60001C3")]
		get;
	}

	[Token(Token = "0x17000058")]
	IEnumerable<TConnection> this[TDestination destination]
	{
		[Token(Token = "0x60001C4")]
		get;
	}

	[Token(Token = "0x60001C5")]
	IEnumerable<TConnection> WithSource(TSource source);

	[Token(Token = "0x60001C6")]
	IEnumerable<TConnection> WithDestination(TDestination destination);
}
