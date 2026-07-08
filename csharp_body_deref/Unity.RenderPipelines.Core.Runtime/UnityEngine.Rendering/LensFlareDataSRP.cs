using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000167")]
public sealed class LensFlareDataSRP : ScriptableObject
{
	[Token(Token = "0x400064F")]
	[FieldOffset(Offset = "0x18")]
	public LensFlareDataElementSRP[] elements;

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x48B9930", Offset = "0x48B9930", VA = "0x48B9930")]
	public LensFlareDataSRP()
	{
	}
}
