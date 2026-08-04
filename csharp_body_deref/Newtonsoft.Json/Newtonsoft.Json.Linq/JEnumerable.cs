// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JEnumerable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x200016B")]
public readonly struct JEnumerable<T> : IJEnumerable<T>, IEnumerable<T>, IEnumerable, IEquatable<JEnumerable<T>> where T : notnull, JToken
{
	[Token(Token = "0x40006BD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly JEnumerable<T> Empty;

	[Token(Token = "0x40006BE")]
	[FieldOffset(Offset = "0x0")]
	private readonly IEnumerable<T> _enumerable;

	[Token(Token = "0x170001F0")]
	public IJEnumerable<JToken> this[object key]
	{
		[Token(Token = "0x6000BD3")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BD0")]
	public JEnumerable(IEnumerable<T> enumerable)
	{
	}

	[Token(Token = "0x6000BD1")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000BD2")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000BD4")]
	public bool Equals(JEnumerable<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD5")]
	public override bool Equals(object? obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD6")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
