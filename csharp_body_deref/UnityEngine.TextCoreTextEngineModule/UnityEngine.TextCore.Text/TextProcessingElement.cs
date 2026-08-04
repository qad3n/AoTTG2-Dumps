// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextProcessingElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200002C")]
[DebuggerDisplay("Unicode ({unicode})  '{(char)unicode}'")]
internal struct TextProcessingElement
{
	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0x0")]
	public TextProcessingElementType elementType;

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x4")]
	public uint unicode;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x8")]
	public int stringIndex;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0xC")]
	public int length;
}
