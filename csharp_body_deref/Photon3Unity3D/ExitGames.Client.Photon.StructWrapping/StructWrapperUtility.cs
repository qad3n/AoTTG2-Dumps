using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon.StructWrapping;

[Token(Token = "0x2000057")]
public static class StructWrapperUtility
{
	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x3BAD6F0", Offset = "0x3BAD6F0", VA = "0x3BAD6F0")]
	public static Type GetWrappedType(this object obj)
	{
		return null;
	}

	[Token(Token = "0x60003C7")]
	public static StructWrapper<T> Wrap<T>(this T value, bool persistant)
	{
		return null;
	}

	[Token(Token = "0x60003C8")]
	public static StructWrapper<T> Wrap<T>(this T value)
	{
		return null;
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x3BAD760", Offset = "0x3BAD760", VA = "0x3BAD760")]
	public static StructWrapper<byte> Wrap(this byte value)
	{
		return null;
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x3BAD7F0", Offset = "0x3BAD7F0", VA = "0x3BAD7F0")]
	public static StructWrapper<bool> Wrap(this bool value)
	{
		return null;
	}

	[Token(Token = "0x60003CB")]
	public static bool IsType<T>(this object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CC")]
	public static T DisconnectPooling<T>(this T table) where T : IEnumerable<object>
	{
		return (T)null;
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x3BAD880", Offset = "0x3BAD880", VA = "0x3BAD880")]
	public static List<object> ReleaseAllWrappers(this List<object> collection)
	{
		return null;
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x3BADA20", Offset = "0x3BADA20", VA = "0x3BADA20")]
	public static object[] ReleaseAllWrappers(this object[] collection)
	{
		return null;
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x3BADAE0", Offset = "0x3BADAE0", VA = "0x3BADAE0")]
	public static Hashtable ReleaseAllWrappers(this Hashtable table)
	{
		return null;
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x3BADCB0", Offset = "0x3BADCB0", VA = "0x3BADCB0")]
	public static void BoxAll(this Hashtable table, bool recursive = false)
	{
	}

	[Token(Token = "0x60003D1")]
	public static T Unwrap<T>(this object obj)
	{
		return (T)null;
	}

	[Token(Token = "0x60003D2")]
	public static T Get<T>(this object obj)
	{
		return (T)null;
	}

	[Token(Token = "0x60003D3")]
	public static T Unwrap<T>(this Hashtable table, object key)
	{
		return (T)null;
	}

	[Token(Token = "0x60003D4")]
	public static bool TryUnwrapValue<T>(this Hashtable table, byte key, out T value) where T : new()
	{
		return default(bool);
	}

	[Token(Token = "0x60003D5")]
	public static bool TryGetValue<T>(this Hashtable table, byte key, out T value) where T : new()
	{
		return default(bool);
	}

	[Token(Token = "0x60003D6")]
	public static bool TryGetValue<T>(this Hashtable table, object key, out T value) where T : new()
	{
		return default(bool);
	}

	[Token(Token = "0x60003D7")]
	public static bool TryUnwrapValue<T>(this Hashtable table, object key, out T value) where T : new()
	{
		return default(bool);
	}

	[Token(Token = "0x60003D8")]
	public static T Unwrap<T>(this Hashtable table, byte key)
	{
		return (T)null;
	}

	[Token(Token = "0x60003D9")]
	public static T Get<T>(this Hashtable table, byte key)
	{
		return (T)null;
	}
}
