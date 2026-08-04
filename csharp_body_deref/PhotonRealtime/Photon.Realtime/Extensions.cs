// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.Extensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/Extensions.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3EBC160", Offset = "0x3EBC160", VA = "0x3EBC160")]
	public static void Merge(this IDictionary target, IDictionary addHash)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x3EBC660", Offset = "0x3EBC660", VA = "0x3EBC660")]
	public static void MergeStringKeys(this IDictionary target, IDictionary addHash)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x3EBCB70", Offset = "0x3EBCB70", VA = "0x3EBCB70")]
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
	[Address(RVA = "0x3EBCBC0", Offset = "0x3EBCBC0", VA = "0x3EBCBC0")]
	public static string ToStringFull(this object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x3EBCD20", Offset = "0x3EBCD20", VA = "0x3EBCD20")]
	public static ExitGames.Client.Photon.Hashtable StripToStringKeys(this IDictionary original)
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x3EBD1F0", Offset = "0x3EBD1F0", VA = "0x3EBD1F0")]
	public static ExitGames.Client.Photon.Hashtable StripToStringKeys(this ExitGames.Client.Photon.Hashtable original)
	{
		return null;
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x3EBD3F0", Offset = "0x3EBD3F0", VA = "0x3EBD3F0")]
	public static void StripKeysWithNullValues(this IDictionary original)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x3EBDAC0", Offset = "0x3EBDAC0", VA = "0x3EBDAC0")]
	public static void StripKeysWithNullValues(this ExitGames.Client.Photon.Hashtable original)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x3EBDEC0", Offset = "0x3EBDEC0", VA = "0x3EBDEC0")]
	public static bool Contains(this int[] target, int nr)
	{
		return default(bool);
	}
}
