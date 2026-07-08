using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace UnityEngineInternal;

[Token(Token = "0x2000005")]
[Il2CppEagerStaticClassConstruction]
public struct MathfInternal
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	public static float FloatMinNormal;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x4")]
	public static float FloatMinDenormal;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x8")]
	public static bool IsFlushToZeroEnabled;
}
