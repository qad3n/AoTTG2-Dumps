// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.SetPropertyUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x2000063")]
internal static class SetPropertyUtility
{
	[Token(Token = "0x6000382")]
	[Address(RVA = "0x4C84090", Offset = "0x4C84090", VA = "0x4C84090")]
	public static bool SetColor(ref Color currentValue, Color newValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000383")]
	public static bool SetEquatableStruct<T>(ref T currentValue, T newValue) where T : IEquatable<T>
	{
		return default(bool);
	}

	[Token(Token = "0x6000384")]
	public static bool SetStruct<T>(ref T currentValue, T newValue) where T : struct
	{
		return default(bool);
	}

	[Token(Token = "0x6000385")]
	public static bool SetClass<T>(ref T currentValue, T newValue) where T : class
	{
		return default(bool);
	}
}
