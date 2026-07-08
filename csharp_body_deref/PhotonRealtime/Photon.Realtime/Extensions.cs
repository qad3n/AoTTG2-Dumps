using System.Collections;
using System.Collections.Generic;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000009")]
public static class Extensions
{
	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<object> keysWithNullValue;

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x3BC6810", Offset = "0x3BC6810", VA = "0x3BC6810")]
	public static void Merge(this IDictionary target, IDictionary addHash)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x3BC6D10", Offset = "0x3BC6D10", VA = "0x3BC6D10")]
	public static void MergeStringKeys(this IDictionary target, IDictionary addHash)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x3BC7220", Offset = "0x3BC7220", VA = "0x3BC7220")]
	public static string ToStringFull(this IDictionary origin)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	public static string ToStringFull<T>(this List<T> data)
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x3BC7270", Offset = "0x3BC7270", VA = "0x3BC7270")]
	public static string ToStringFull(this object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x3BC73D0", Offset = "0x3BC73D0", VA = "0x3BC73D0")]
	public static ExitGames.Client.Photon.Hashtable StripToStringKeys(this IDictionary original)
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x3BC78A0", Offset = "0x3BC78A0", VA = "0x3BC78A0")]
	public static ExitGames.Client.Photon.Hashtable StripToStringKeys(this ExitGames.Client.Photon.Hashtable original)
	{
		return null;
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x3BC7AA0", Offset = "0x3BC7AA0", VA = "0x3BC7AA0")]
	public static void StripKeysWithNullValues(this IDictionary original)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x3BC8170", Offset = "0x3BC8170", VA = "0x3BC8170")]
	public static void StripKeysWithNullValues(this ExitGames.Client.Photon.Hashtable original)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x3BC8570", Offset = "0x3BC8570", VA = "0x3BC8570")]
	public static bool Contains(this int[] target, int nr)
	{
		return default(bool);
	}
}
