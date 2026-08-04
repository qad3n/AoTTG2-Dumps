// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.FontReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Token(Token = "0x200000B")]
[DebuggerDisplay("{familyName} - {styleName}")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct FontReference
{
	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x0")]
	public string familyName;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x8")]
	public string styleName;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x10")]
	public int faceIndex;

	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x18")]
	public string filePath;
}
