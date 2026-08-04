// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextStyleSheet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4EEB4B0", Offset = "0x4EEB4B0", VA = "0x4EEB4B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4EEB4C0", Offset = "0x4EEB4C0", VA = "0x4EEB4C0")]
	private void Reset()
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4EDDE10", Offset = "0x4EDDE10", VA = "0x4EDDE10")]
	public TextStyle GetStyle(int hashCode)
	{
		return null;
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4EEB880", Offset = "0x4EEB880", VA = "0x4EEB880")]
	public TextStyle GetStyle(string name)
	{
		return null;
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x4EEB9C0", Offset = "0x4EEB9C0", VA = "0x4EEB9C0")]
	public void RefreshStyles()
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4EEB4D0", Offset = "0x4EEB4D0", VA = "0x4EEB4D0")]
	private void LoadStyleDictionaryInternal()
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4EEB9D0", Offset = "0x4EEB9D0", VA = "0x4EEB9D0")]
	public TextStyleSheet()
	{
	}
}
