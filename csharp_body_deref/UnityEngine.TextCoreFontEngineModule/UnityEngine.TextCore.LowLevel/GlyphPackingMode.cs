using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Token(Token = "0x200000A")]
[UnityEngine.Scripting.UsedByNativeCode]
public enum GlyphPackingMode
{
	[Token(Token = "0x4000056")]
	BestShortSideFit,
	[Token(Token = "0x4000057")]
	BestLongSideFit,
	[Token(Token = "0x4000058")]
	BestAreaFit,
	[Token(Token = "0x4000059")]
	BottomLeftRule,
	[Token(Token = "0x400005A")]
	ContactPointRule
}
