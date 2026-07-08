using System;
using Il2CppDummyDll;

namespace UnityEngine.Tilemaps;

[Token(Token = "0x2000009")]
[Flags]
public enum TileFlags
{
	[Token(Token = "0x400001A")]
	None = 0,
	[Token(Token = "0x400001B")]
	LockColor = 1,
	[Token(Token = "0x400001C")]
	LockTransform = 2,
	[Token(Token = "0x400001D")]
	InstantiateGameObjectRuntimeOnly = 4,
	[Token(Token = "0x400001E")]
	KeepGameObjectRuntimeOnly = 8,
	[Token(Token = "0x400001F")]
	LockAll = 3
}
