// ==================== AoTTG2 cross-reference ====================
// Type: System.Nullable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000F3")]
[System.Runtime.Versioning.NonVersionable]
public struct Nullable<T> where T : struct
{
	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool hasValue;

	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0x0")]
	internal T value;

	[Token(Token = "0x17000099")]
	public bool HasValue
	{
		[Token(Token = "0x60008DA")]
		[System.Runtime.Versioning.NonVersionable]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009A")]
	public T Value
	{
		[Token(Token = "0x60008DB")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x60008D9")]
	[System.Runtime.Versioning.NonVersionable]
	public Nullable(T value)
	{
	}

	[Token(Token = "0x60008DC")]
	[System.Runtime.Versioning.NonVersionable]
	public T GetValueOrDefault()
	{
		return (T)null;
	}

	[Token(Token = "0x60008DD")]
	[System.Runtime.Versioning.NonVersionable]
	public T GetValueOrDefault(T defaultValue)
	{
		return (T)null;
	}

	[Token(Token = "0x60008DE")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DF")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60008E0")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60008E1")]
	private static object Box(T? o)
	{
		return null;
	}

	[Token(Token = "0x60008E2")]
	private static T? Unbox(object o)
	{
		return null;
	}

	[Token(Token = "0x60008E3")]
	private static T? UnboxExact(object o)
	{
		return null;
	}
}
[Token(Token = "0x20000F4")]
public static class Nullable
{
	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x54BCC00", Offset = "0x54BBC00", VA = "0x54BCC00")]
	public static Type GetUnderlyingType(Type nullableType)
	{
		return null;
	}
}
