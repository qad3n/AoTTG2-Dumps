using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x200006E")]
[ExcludeFromPreset]
public class TMP_StyleSheet : ScriptableObject
{
	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private List<TMP_Style> m_StyleList;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, TMP_Style> m_StyleLookupDictionary;

	[Token(Token = "0x170000CF")]
	internal List<TMP_Style> styles
	{
		[Token(Token = "0x6000356")]
		[Address(RVA = "0x4943960", Offset = "0x4943960", VA = "0x4943960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x4943970", Offset = "0x4943970", VA = "0x4943970")]
	private void Reset()
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x4943CD0", Offset = "0x4943CD0", VA = "0x4943CD0")]
	public TMP_Style GetStyle(int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x4943D50", Offset = "0x4943D50", VA = "0x4943D50")]
	public TMP_Style GetStyle(string name)
	{
		return null;
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x4943E30", Offset = "0x4943E30", VA = "0x4943E30")]
	public void RefreshStyles()
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x4943980", Offset = "0x4943980", VA = "0x4943980")]
	private void LoadStyleDictionaryInternal()
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x4943E40", Offset = "0x4943E40", VA = "0x4943E40")]
	public TMP_StyleSheet()
	{
	}
}
