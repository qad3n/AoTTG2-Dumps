using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Video;

[Token(Token = "0x2000006")]
[UnityEngine.Scripting.RequiredByNativeCode]
public enum VideoAspectRatio
{
	[Token(Token = "0x400000D")]
	NoScaling,
	[Token(Token = "0x400000E")]
	FitVertically,
	[Token(Token = "0x400000F")]
	FitHorizontally,
	[Token(Token = "0x4000010")]
	FitInside,
	[Token(Token = "0x4000011")]
	FitOutside,
	[Token(Token = "0x4000012")]
	Stretch
}
