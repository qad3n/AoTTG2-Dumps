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

[Token(Token = "0x2000007")]
public static class Extensions
{
	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<object> keysWithNullValue;

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x56A8DF0", Offset = "0x56A7DF0", VA = "0x56A8DF0")]
	public static void Merge(this IDictionary target, IDictionary addHash)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x56A9280", Offset = "0x56A8280", VA = "0x56A9280")]
	public static void MergeStringKeys(this IDictionary target, IDictionary addHash)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x56A9750", Offset = "0x56A8750", VA = "0x56A9750")]
	public static string ToStringFull(this IDictionary origin)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	public static string ToStringFull<T>(this List<T> data)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x56A97A0", Offset = "0x56A87A0", VA = "0x56A97A0")]
	public static string ToStringFull(this object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x56A9900", Offset = "0x56A8900", VA = "0x56A9900")]
	public static ExitGames.Client.Photon.Hashtable StripToStringKeys(this IDictionary original)
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x56A9D60", Offset = "0x56A8D60", VA = "0x56A9D60")]
	public static ExitGames.Client.Photon.Hashtable StripToStringKeys(this ExitGames.Client.Photon.Hashtable original)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x56A9F20", Offset = "0x56A8F20", VA = "0x56A9F20")]
	public static void StripKeysWithNullValues(this IDictionary original)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x56AA580", Offset = "0x56A9580", VA = "0x56AA580")]
	public static void StripKeysWithNullValues(this ExitGames.Client.Photon.Hashtable original)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x56AA940", Offset = "0x56A9940", VA = "0x56AA940")]
	public static bool Contains(this int[] target, int nr)
	{
		return default(bool);
	}
}
