// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Token(Token = "0x200000F")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct GlyphMarshallingStruct
{
	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x0")]
	public uint index;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x4")]
	public GlyphMetrics metrics;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x18")]
	public GlyphRect glyphRect;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x28")]
	public float scale;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x2C")]
	public int atlasIndex;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x30")]
	public GlyphClassDefinitionType classDefinitionType;
}
