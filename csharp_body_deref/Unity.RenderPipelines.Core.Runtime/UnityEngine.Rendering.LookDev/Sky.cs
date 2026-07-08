using Il2CppDummyDll;

namespace UnityEngine.Rendering.LookDev;

[Token(Token = "0x200020F")]
public struct Sky
{
	[Token(Token = "0x4000848")]
	[FieldOffset(Offset = "0x0")]
	public Cubemap cubemap;

	[Token(Token = "0x4000849")]
	[FieldOffset(Offset = "0x8")]
	public float longitudeOffset;

	[Token(Token = "0x400084A")]
	[FieldOffset(Offset = "0xC")]
	public float exposure;
}
