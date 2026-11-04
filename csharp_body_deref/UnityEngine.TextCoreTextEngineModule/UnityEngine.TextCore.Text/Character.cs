// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.Character
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x200001A")]
public class Character : TextElement
{
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x3003180", Offset = "0x3001780", VA = "0x183003180")]
	public Character()
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x30031B0", Offset = "0x30017B0", VA = "0x1830031B0")]
	public Character(uint unicode, FontAsset fontAsset, Glyph glyph)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x3003100", Offset = "0x3001700", VA = "0x183003100")]
	internal Character(uint unicode, uint glyphIndex)
	{
	}
}
