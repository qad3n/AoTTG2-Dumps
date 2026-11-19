// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_StyleSheet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000079")]
[TMPro.TMPHelpURL("StyleSheets")]
[ExcludeFromPreset]
public class TMP_StyleSheet : ScriptableObject
{
	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private List<TMP_Style> m_StyleList;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, TMP_Style> m_StyleLookupDictionary;

	[Token(Token = "0x170000F1")]
	internal List<TMP_Style> styles
	{
		[Token(Token = "0x60003E6")]
		[Address(RVA = "0x673D390", Offset = "0x673C390", VA = "0x673D390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x673D3A0", Offset = "0x673C3A0", VA = "0x673D3A0")]
	private void Reset()
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x673D6F0", Offset = "0x673C6F0", VA = "0x673D6F0")]
	public TMP_Style GetStyle(int hashCode)
	{
		return null;
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x673D770", Offset = "0x673C770", VA = "0x673D770")]
	public TMP_Style GetStyle(string name)
	{
		return null;
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x673D850", Offset = "0x673C850", VA = "0x673D850")]
	public void RefreshStyles()
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x673D3B0", Offset = "0x673C3B0", VA = "0x673D3B0")]
	private void LoadStyleDictionaryInternal()
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x673D860", Offset = "0x673C860", VA = "0x673D860")]
	public TMP_StyleSheet()
	{
	}
}
