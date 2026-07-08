using System.Collections.Generic;
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000036")]
public static class TMP_FontUtilities
{
	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x0")]
	private static List<int> k_searchedFontAssets;

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x4909B90", Offset = "0x4909B90", VA = "0x4909B90")]
	public static TMP_FontAsset SearchForCharacter(TMP_FontAsset font, uint unicode, out TMP_Character character)
	{
		return null;
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x4909F10", Offset = "0x4909F10", VA = "0x4909F10")]
	public static TMP_FontAsset SearchForCharacter(List<TMP_FontAsset> fonts, uint unicode, out TMP_Character character)
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x4909C80", Offset = "0x4909C80", VA = "0x4909C80")]
	private static TMP_FontAsset SearchForCharacterInternal(TMP_FontAsset font, uint unicode, out TMP_Character character)
	{
		return null;
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x4909F20", Offset = "0x4909F20", VA = "0x4909F20")]
	private static TMP_FontAsset SearchForCharacterInternal(List<TMP_FontAsset> fonts, uint unicode, out TMP_Character character)
	{
		return null;
	}
}
