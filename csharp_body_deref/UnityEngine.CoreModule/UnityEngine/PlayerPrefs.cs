using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000127")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/PlayerPrefs.h")]
public class PlayerPrefs
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600091F")]
	[Address(RVA = "0x4ACA320", Offset = "0x4ACA320", VA = "0x4ACA320")]
	[UnityEngine.Bindings.NativeMethod("SetString")]
	private static extern bool TrySetSetString(string key, string value);

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x4ACA360", Offset = "0x4ACA360", VA = "0x4ACA360")]
	public static void SetString(string key, string value)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000921")]
	[Address(RVA = "0x4ACA3F0", Offset = "0x4ACA3F0", VA = "0x4ACA3F0")]
	public static extern string GetString(string key, string defaultValue);

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x4ACA430", Offset = "0x4ACA430", VA = "0x4ACA430")]
	public static string GetString(string key)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000923")]
	[Address(RVA = "0x4ACA490", Offset = "0x4ACA490", VA = "0x4ACA490")]
	public static extern bool HasKey(string key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000924")]
	[Address(RVA = "0x4ACA4C0", Offset = "0x4ACA4C0", VA = "0x4ACA4C0")]
	public static extern void DeleteKey(string key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000925")]
	[Address(RVA = "0x4ACA4F0", Offset = "0x4ACA4F0", VA = "0x4ACA4F0")]
	[UnityEngine.Bindings.NativeMethod("Sync")]
	public static extern void Save();
}
