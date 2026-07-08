using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000E4")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ColorGamut.h")]
public enum TransferFunction
{
	[Token(Token = "0x400027F")]
	Unknown = -1,
	[Token(Token = "0x4000280")]
	sRGB,
	[Token(Token = "0x4000281")]
	BT1886,
	[Token(Token = "0x4000282")]
	PQ,
	[Token(Token = "0x4000283")]
	Linear,
	[Token(Token = "0x4000284")]
	Gamma22
}
