using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200030B")]
[Flags]
public enum BatchDrawCommandFlags
{
	[Token(Token = "0x4000987")]
	None = 0,
	[Token(Token = "0x4000988")]
	FlipWinding = 1,
	[Token(Token = "0x4000989")]
	HasMotion = 2,
	[Token(Token = "0x400098A")]
	IsLightMapped = 4,
	[Token(Token = "0x400098B")]
	HasSortingPosition = 8,
	[Token(Token = "0x400098C")]
	LODCrossFade = 0x10
}
