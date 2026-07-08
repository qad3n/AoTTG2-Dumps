using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000FF")]
internal class TProfilingSampler<TEnum> : ProfilingSampler where TEnum : Enum
{
	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x0")]
	internal static Dictionary<TEnum, TProfilingSampler<TEnum>> samples;

	[Token(Token = "0x600084B")]
	static TProfilingSampler()
	{
	}

	[Token(Token = "0x600084C")]
	public TProfilingSampler(string name)
	{
	}
}
