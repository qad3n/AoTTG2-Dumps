using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000361")]
internal class StyleValueCollection
{
	[Token(Token = "0x4000A4E")]
	[FieldOffset(Offset = "0x10")]
	internal List<StyleValue> m_Values;

	[Token(Token = "0x60015B4")]
	[Address(RVA = "0x4D84950", Offset = "0x4D84950", VA = "0x4D84950")]
	public StyleLength GetStyleLength(StylePropertyId id)
	{
		return default(StyleLength);
	}

	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x4D84B80", Offset = "0x4D84B80", VA = "0x4D84B80")]
	public StyleFloat GetStyleFloat(StylePropertyId id)
	{
		return default(StyleFloat);
	}

	[Token(Token = "0x60015B6")]
	[Address(RVA = "0x4D84BF0", Offset = "0x4D84BF0", VA = "0x4D84BF0")]
	public StyleInt GetStyleInt(StylePropertyId id)
	{
		return default(StyleInt);
	}

	[Token(Token = "0x60015B7")]
	[Address(RVA = "0x4D849A0", Offset = "0x4D849A0", VA = "0x4D849A0")]
	public bool TryGetStyleValue(StylePropertyId id, ref StyleValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015B8")]
	[Address(RVA = "0x4D84C60", Offset = "0x4D84C60", VA = "0x4D84C60")]
	public void SetStyleValue(StyleValue value)
	{
	}

	[Token(Token = "0x60015B9")]
	[Address(RVA = "0x4D84E00", Offset = "0x4D84E00", VA = "0x4D84E00")]
	public StyleValueCollection()
	{
	}
}
