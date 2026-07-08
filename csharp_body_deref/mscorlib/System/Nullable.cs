using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000F3")]
[System.Runtime.Versioning.NonVersionable]
public struct Nullable<T> where T : struct
{
	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool hasValue;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0x0")]
	internal T value;

	[Token(Token = "0x17000099")]
	public bool HasValue
	{
		[Token(Token = "0x60008C4")]
		[System.Runtime.Versioning.NonVersionable]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009A")]
	public T Value
	{
		[Token(Token = "0x60008C5")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x60008C3")]
	[System.Runtime.Versioning.NonVersionable]
	public Nullable(T value)
	{
	}

	[Token(Token = "0x60008C6")]
	[System.Runtime.Versioning.NonVersionable]
	public T GetValueOrDefault()
	{
		return (T)null;
	}

	[Token(Token = "0x60008C7")]
	[System.Runtime.Versioning.NonVersionable]
	public T GetValueOrDefault(T defaultValue)
	{
		return (T)null;
	}

	[Token(Token = "0x60008C8")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C9")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60008CA")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60008CB")]
	private static object Box(T? o)
	{
		return null;
	}

	[Token(Token = "0x60008CC")]
	private static T? Unbox(object o)
	{
		return null;
	}

	[Token(Token = "0x60008CD")]
	private static T? UnboxExact(object o)
	{
		return null;
	}
}
[Token(Token = "0x20000F4")]
public static class Nullable
{
	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x4FD3A00", Offset = "0x4FD3A00", VA = "0x4FD3A00")]
	public static Type GetUnderlyingType(Type nullableType)
	{
		return null;
	}
}
