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
	[Address(RVA = "0x1D14970", Offset = "0x1D12F70", VA = "0x181D14970")]
	public static void Merge(this IDictionary target, IDictionary addHash)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x1D14700", Offset = "0x1D12D00", VA = "0x181D14700")]
	public static void MergeStringKeys(this IDictionary target, IDictionary addHash)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x1D15850", Offset = "0x1D13E50", VA = "0x181D15850")]
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
	[Address(RVA = "0x1D158A0", Offset = "0x1D13EA0", VA = "0x181D158A0")]
	public static string ToStringFull(this object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x1D155F0", Offset = "0x1D13BF0", VA = "0x181D155F0")]
	public static ExitGames.Client.Photon.Hashtable StripToStringKeys(this IDictionary original)
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x1D15490", Offset = "0x1D13A90", VA = "0x181D15490")]
	public static ExitGames.Client.Photon.Hashtable StripToStringKeys(this ExitGames.Client.Photon.Hashtable original)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x1D14FC0", Offset = "0x1D135C0", VA = "0x181D14FC0")]
	public static void StripKeysWithNullValues(this IDictionary original)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x1D14C80", Offset = "0x1D13280", VA = "0x181D14C80")]
	public static void StripKeysWithNullValues(this ExitGames.Client.Photon.Hashtable original)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x1D146B0", Offset = "0x1D12CB0", VA = "0x181D146B0")]
	public static bool Contains(this int[] target, int nr)
	{
		return default(bool);
	}
}
