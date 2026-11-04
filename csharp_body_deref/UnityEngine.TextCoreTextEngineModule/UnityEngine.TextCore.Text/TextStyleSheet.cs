// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextStyleSheet
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x2000041")]
[ExcludeFromPreset]
[ExcludeFromObjectFactory]
public class TextStyleSheet : ScriptableObject
{
	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private List<TextStyle> m_StyleList;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, TextStyle> m_StyleLookupDictionary;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x28")]
	private object styleLookupLock;

	[Token(Token = "0x1700005D")]
	internal List<TextStyle> styles
	{
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x1536BF0", Offset = "0x15351F0", VA = "0x181536BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x3056010", Offset = "0x3054610", VA = "0x183056010")]
	private void Reset()
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x3055B20", Offset = "0x3054120", VA = "0x183055B20")]
	public TextStyle GetStyle(int hashCode)
	{
		return null;
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x3055C40", Offset = "0x3054240", VA = "0x183055C40")]
	public TextStyle GetStyle(string name)
	{
		return null;
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x3056010", Offset = "0x3054610", VA = "0x183056010")]
	public void RefreshStyles()
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x3055CD0", Offset = "0x30542D0", VA = "0x183055CD0")]
	private void LoadStyleDictionaryInternal()
	{
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x3056020", Offset = "0x3054620", VA = "0x183056020")]
	public TextStyleSheet()
	{
	}
}
