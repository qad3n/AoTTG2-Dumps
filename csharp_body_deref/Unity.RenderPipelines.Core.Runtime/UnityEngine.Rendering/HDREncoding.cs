using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000159")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, "./Library/PackageCache/com.unity.render-pipelines.core@15.0.7/Runtime/PostProcessing/HDROutputDefines.cs")]
public enum HDREncoding
{
	[Token(Token = "0x40005EF")]
	Linear = 3,
	[Token(Token = "0x40005F0")]
	PQ = 2,
	[Token(Token = "0x40005F1")]
	Gamma22 = 4,
	[Token(Token = "0x40005F2")]
	sRGB = 0
}
