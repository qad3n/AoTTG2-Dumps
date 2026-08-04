// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.GlyphLoadFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Token(Token = "0x2000007")]
[UnityEngine.Scripting.UsedByNativeCode]
[Flags]
public enum GlyphLoadFlags
{
	[Token(Token = "0x400002D")]
	LOAD_DEFAULT = 0,
	[Token(Token = "0x400002E")]
	LOAD_NO_SCALE = 1,
	[Token(Token = "0x400002F")]
	LOAD_NO_HINTING = 2,
	[Token(Token = "0x4000030")]
	LOAD_RENDER = 4,
	[Token(Token = "0x4000031")]
	LOAD_NO_BITMAP = 8,
	[Token(Token = "0x4000032")]
	LOAD_FORCE_AUTOHINT = 0x20,
	[Token(Token = "0x4000033")]
	LOAD_MONOCHROME = 0x1000,
	[Token(Token = "0x4000034")]
	LOAD_NO_AUTOHINT = 0x8000,
	[Token(Token = "0x4000035")]
	LOAD_COLOR = 0x100000,
	[Token(Token = "0x4000036")]
	LOAD_COMPUTE_METRICS = 0x200000,
	[Token(Token = "0x4000037")]
	LOAD_BITMAP_METRICS_ONLY = 0x400000
}
