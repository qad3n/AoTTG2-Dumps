using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000157")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, "./Library/PackageCache/com.unity.render-pipelines.core@15.0.7/Runtime/PostProcessing/HDROutputDefines.cs")]
public enum HDRRangeReduction
{
	[Token(Token = "0x40005E4")]
	None,
	[Token(Token = "0x40005E5")]
	Reinhard,
	[Token(Token = "0x40005E6")]
	BT2390,
	[Token(Token = "0x40005E7")]
	ACES1000Nits,
	[Token(Token = "0x40005E8")]
	ACES2000Nits,
	[Token(Token = "0x40005E9")]
	ACES4000Nits
}
