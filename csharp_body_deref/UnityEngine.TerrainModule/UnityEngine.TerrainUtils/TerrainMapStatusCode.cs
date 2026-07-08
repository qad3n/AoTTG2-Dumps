using Il2CppDummyDll;

namespace UnityEngine.TerrainUtils;

[Token(Token = "0x2000009")]
internal enum TerrainMapStatusCode
{
	[Token(Token = "0x4000016")]
	OK = 0,
	[Token(Token = "0x4000017")]
	Overlapping = 1,
	[Token(Token = "0x4000018")]
	SizeMismatch = 4,
	[Token(Token = "0x4000019")]
	EdgeAlignmentMismatch = 8
}
