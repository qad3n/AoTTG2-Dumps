using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x2000043")]
[ExcludeFromPreset]
[ExcludeFromObjectFactory]
public class TextStyleSheet : ScriptableObject
{
	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private List<TextStyle> m_StyleList;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, TextStyle> m_StyleLookupDictionary;

	[Token(Token = "0x17000058")]
	internal List<TextStyle> styles
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x4BC3B80", Offset = "0x4BC3B80", VA = "0x4BC3B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4BC3B90", Offset = "0x4BC3B90", VA = "0x4BC3B90")]
	private void Reset()
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4BB64E0", Offset = "0x4BB64E0", VA = "0x4BB64E0")]
	public TextStyle GetStyle(int hashCode)
	{
		return null;
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4BC3F50", Offset = "0x4BC3F50", VA = "0x4BC3F50")]
	public TextStyle GetStyle(string name)
	{
		return null;
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x4BC4090", Offset = "0x4BC4090", VA = "0x4BC4090")]
	public void RefreshStyles()
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4BC3BA0", Offset = "0x4BC3BA0", VA = "0x4BC3BA0")]
	private void LoadStyleDictionaryInternal()
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4BC40A0", Offset = "0x4BC40A0", VA = "0x4BC40A0")]
	public TextStyleSheet()
	{
	}
}
