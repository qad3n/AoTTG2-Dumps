// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.GlyphRasterModes
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.LowLevel;

[Token(Token = "0x2000008")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
[Flags]
internal enum GlyphRasterModes
{
	[Token(Token = "0x4000039")]
	RASTER_MODE_8BIT = 1,
	[Token(Token = "0x400003A")]
	RASTER_MODE_MONO = 2,
	[Token(Token = "0x400003B")]
	RASTER_MODE_NO_HINTING = 4,
	[Token(Token = "0x400003C")]
	RASTER_MODE_HINTED = 8,
	[Token(Token = "0x400003D")]
	RASTER_MODE_BITMAP = 0x10,
	[Token(Token = "0x400003E")]
	RASTER_MODE_SDF = 0x20,
	[Token(Token = "0x400003F")]
	RASTER_MODE_SDFAA = 0x40,
	[Token(Token = "0x4000040")]
	RASTER_MODE_STRONG = 0x80,
	[Token(Token = "0x4000041")]
	RASTER_MODE_MSDF = 0x100,
	[Token(Token = "0x4000042")]
	RASTER_MODE_MSDFA = 0x200,
	[Token(Token = "0x4000043")]
	RASTER_MODE_1X = 0x1000,
	[Token(Token = "0x4000044")]
	RASTER_MODE_8X = 0x2000,
	[Token(Token = "0x4000045")]
	RASTER_MODE_16X = 0x4000,
	[Token(Token = "0x4000046")]
	RASTER_MODE_32X = 0x8000,
	[Token(Token = "0x4000047")]
	RASTER_MODE_COLOR = 0x10000
}
