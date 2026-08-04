// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleValueCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x50AC280", Offset = "0x50AC280", VA = "0x50AC280")]
	public StyleLength GetStyleLength(StylePropertyId id)
	{
		return default(StyleLength);
	}

	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x50AC4B0", Offset = "0x50AC4B0", VA = "0x50AC4B0")]
	public StyleFloat GetStyleFloat(StylePropertyId id)
	{
		return default(StyleFloat);
	}

	[Token(Token = "0x60015B6")]
	[Address(RVA = "0x50AC520", Offset = "0x50AC520", VA = "0x50AC520")]
	public StyleInt GetStyleInt(StylePropertyId id)
	{
		return default(StyleInt);
	}

	[Token(Token = "0x60015B7")]
	[Address(RVA = "0x50AC2D0", Offset = "0x50AC2D0", VA = "0x50AC2D0")]
	public bool TryGetStyleValue(StylePropertyId id, ref StyleValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015B8")]
	[Address(RVA = "0x50AC590", Offset = "0x50AC590", VA = "0x50AC590")]
	public void SetStyleValue(StyleValue value)
	{
	}

	[Token(Token = "0x60015B9")]
	[Address(RVA = "0x50AC730", Offset = "0x50AC730", VA = "0x50AC730")]
	public StyleValueCollection()
	{
	}
}
