using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Token(Token = "0x200000E")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct GlyphMarshallingStruct
{
	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x0")]
	public uint index;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x4")]
	public GlyphMetrics metrics;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x18")]
	public GlyphRect glyphRect;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x28")]
	public float scale;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x2C")]
	public int atlasIndex;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x30")]
	public GlyphClassDefinitionType classDefinitionType;
}
