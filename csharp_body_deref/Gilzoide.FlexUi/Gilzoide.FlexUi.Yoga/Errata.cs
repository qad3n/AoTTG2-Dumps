using System;
using Il2CppDummyDll;

namespace Gilzoide.FlexUi.Yoga;

[Token(Token = "0x200000F")]
[Flags]
public enum Errata
{
	[Token(Token = "0x4000059")]
	None = 0,
	[Token(Token = "0x400005A")]
	StretchFlexBasis = 1,
	[Token(Token = "0x400005B")]
	StartingEndingEdgeFromFlexDirection = 2,
	[Token(Token = "0x400005C")]
	PositionStaticBehavesLikeRelative = 4,
	[Token(Token = "0x400005D")]
	All = int.MaxValue,
	[Token(Token = "0x400005E")]
	Classic = 0x7FFFFFFE
}
