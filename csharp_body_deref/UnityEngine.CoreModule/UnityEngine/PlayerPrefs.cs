// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.PlayerPrefs
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000156")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/PlayerPrefs.h")]
public class PlayerPrefs
{
	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x2F246B0", Offset = "0x2F22CB0", VA = "0x182F246B0")]
	[UnityEngine.Bindings.NativeMethod("SetString")]
	private static bool TrySetSetString(string key, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x2F245F0", Offset = "0x2F22BF0", VA = "0x182F245F0")]
	public static void SetString(string key, string value)
	{
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x2F24100", Offset = "0x2F22700", VA = "0x182F24100")]
	public static string GetString(string key, string defaultValue)
	{
		return null;
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x2F240C0", Offset = "0x2F226C0", VA = "0x182F240C0")]
	public static string GetString(string key)
	{
		return null;
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x2F24430", Offset = "0x2F22A30", VA = "0x182F24430")]
	public static bool HasKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x2F23EE0", Offset = "0x2F224E0", VA = "0x182F23EE0")]
	public static void DeleteKey(string key)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x2F245C0", Offset = "0x2F22BC0", VA = "0x182F245C0")]
	[UnityEngine.Bindings.NativeMethod("Sync")]
	public static extern void Save();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x2F24660", Offset = "0x2F22C60", VA = "0x182F24660")]
	private static extern bool TrySetSetString_Injected(ref ManagedSpanWrapper key, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x2F24060", Offset = "0x2F22660", VA = "0x182F24060")]
	private static extern void GetString_Injected(ref ManagedSpanWrapper key, ref ManagedSpanWrapper defaultValue, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x2F243F0", Offset = "0x2F229F0", VA = "0x182F243F0")]
	private static extern bool HasKey_Injected(ref ManagedSpanWrapper key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x2F23EA0", Offset = "0x2F224A0", VA = "0x182F23EA0")]
	private static extern void DeleteKey_Injected(ref ManagedSpanWrapper key);
}
