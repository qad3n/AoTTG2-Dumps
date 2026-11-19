// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.PlayerPrefs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000157")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/PlayerPrefs.h")]
public class PlayerPrefs
{
	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x690D280", Offset = "0x690C280", VA = "0x690D280")]
	[UnityEngine.Bindings.NativeMethod("SetString")]
	private static bool TrySetSetString(string key, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x690D530", Offset = "0x690C530", VA = "0x690D530")]
	public static void SetString(string key, string value)
	{
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x690D590", Offset = "0x690C590", VA = "0x690D590")]
	public static string GetString(string key, string defaultValue)
	{
		return null;
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x690D8C0", Offset = "0x690C8C0", VA = "0x690D8C0")]
	public static string GetString(string key)
	{
		return null;
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x690D900", Offset = "0x690C900", VA = "0x690D900")]
	public static bool HasKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x690DAA0", Offset = "0x690CAA0", VA = "0x690DAA0")]
	public static void DeleteKey(string key)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x690DC30", Offset = "0x690CC30", VA = "0x690DC30")]
	[UnityEngine.Bindings.NativeMethod("Sync")]
	public static extern void Save();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x690D4F0", Offset = "0x690C4F0", VA = "0x690D4F0")]
	private static extern bool TrySetSetString_Injected(ref ManagedSpanWrapper key, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x690D880", Offset = "0x690C880", VA = "0x690D880")]
	private static extern void GetString_Injected(ref ManagedSpanWrapper key, ref ManagedSpanWrapper defaultValue, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x690DA70", Offset = "0x690CA70", VA = "0x690DA70")]
	private static extern bool HasKey_Injected(ref ManagedSpanWrapper key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x690DC00", Offset = "0x690CC00", VA = "0x690DC00")]
	private static extern void DeleteKey_Injected(ref ManagedSpanWrapper key);
}
