using System;
using Il2CppDummyDll;

namespace UnityEngine.Tilemaps;

[Token(Token = "0x200000A")]
[Flags]
public enum TileAnimationFlags
{
	[Token(Token = "0x4000021")]
	None = 0,
	[Token(Token = "0x4000022")]
	LoopOnce = 1,
	[Token(Token = "0x4000023")]
	PauseAnimation = 2,
	[Token(Token = "0x4000024")]
	UpdatePhysics = 4
}
