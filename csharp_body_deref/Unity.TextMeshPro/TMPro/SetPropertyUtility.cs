using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x200004D")]
internal static class SetPropertyUtility
{
	[Token(Token = "0x6000291")]
	[Address(RVA = "0x4936B10", Offset = "0x4936B10", VA = "0x4936B10")]
	public static bool SetColor(ref Color currentValue, Color newValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000292")]
	public static bool SetEquatableStruct<T>(ref T currentValue, T newValue) where T : IEquatable<T>
	{
		return default(bool);
	}

	[Token(Token = "0x6000293")]
	public static bool SetStruct<T>(ref T currentValue, T newValue) where T : struct
	{
		return default(bool);
	}

	[Token(Token = "0x6000294")]
	public static bool SetClass<T>(ref T currentValue, T newValue) where T : class
	{
		return default(bool);
	}
}
