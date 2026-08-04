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

[Token(Token = "0x200012A")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/PlayerPrefs.h")]
public class PlayerPrefs
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000921")]
	[Address(RVA = "0x4DF1C50", Offset = "0x4DF1C50", VA = "0x4DF1C50")]
	[UnityEngine.Bindings.NativeMethod("SetString")]
	private static extern bool TrySetSetString(string key, string value);

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x4DF1C90", Offset = "0x4DF1C90", VA = "0x4DF1C90")]
	public static void SetString(string key, string value)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000923")]
	[Address(RVA = "0x4DF1D20", Offset = "0x4DF1D20", VA = "0x4DF1D20")]
	public static extern string GetString(string key, string defaultValue);

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x4DF1D60", Offset = "0x4DF1D60", VA = "0x4DF1D60")]
	public static string GetString(string key)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000925")]
	[Address(RVA = "0x4DF1DC0", Offset = "0x4DF1DC0", VA = "0x4DF1DC0")]
	public static extern bool HasKey(string key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000926")]
	[Address(RVA = "0x4DF1DF0", Offset = "0x4DF1DF0", VA = "0x4DF1DF0")]
	public static extern void DeleteKey(string key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000927")]
	[Address(RVA = "0x4DF1E20", Offset = "0x4DF1E20", VA = "0x4DF1E20")]
	[UnityEngine.Bindings.NativeMethod("Sync")]
	public static extern void Save();
}
