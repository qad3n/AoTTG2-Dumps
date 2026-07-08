using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x20006F2")]
public static class RandomGen
{
	[Token(Token = "0x600448C")]
	[Address(RVA = "0x407BA40", Offset = "0x407BA40", VA = "0x407BA40")]
	public static bool GetRandomBool()
	{
		return default(bool);
	}

	[Token(Token = "0x600448D")]
	[Address(RVA = "0x407BA60", Offset = "0x407BA60", VA = "0x407BA60")]
	public static float GetRandomSign()
	{
		return default(float);
	}

	[Token(Token = "0x600448E")]
	[Address(RVA = "0x407BA90", Offset = "0x407BA90", VA = "0x407BA90")]
	public static bool Roll(float probability)
	{
		return default(bool);
	}

	[Token(Token = "0x600448F")]
	[Address(RVA = "0x407BAC0", Offset = "0x407BAC0", VA = "0x407BAC0")]
	public static Vector3 GetRandomDirection(bool flat = false)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6004490")]
	public static T ChooseRandom<T>(List<T> items)
	{
		return (T)null;
	}
}
