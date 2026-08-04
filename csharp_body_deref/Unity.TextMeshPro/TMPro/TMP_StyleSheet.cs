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
[Token(Token = "0x2000084")]
[ExcludeFromPreset]
public class TMP_StyleSheet : ScriptableObject
{
	[Token(Token = "0x400043F")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private List<TMP_Style> m_StyleList;

	[Token(Token = "0x4000440")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, TMP_Style> m_StyleLookupDictionary;

	[Token(Token = "0x170000F0")]
	internal List<TMP_Style> styles
	{
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x4C90EE0", Offset = "0x4C90EE0", VA = "0x4C90EE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x4C90EF0", Offset = "0x4C90EF0", VA = "0x4C90EF0")]
	private void Reset()
	{
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x4C91250", Offset = "0x4C91250", VA = "0x4C91250")]
	public TMP_Style GetStyle(int hashCode)
	{
		return null;
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x4C912D0", Offset = "0x4C912D0", VA = "0x4C912D0")]
	public TMP_Style GetStyle(string name)
	{
		return null;
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x4C913B0", Offset = "0x4C913B0", VA = "0x4C913B0")]
	public void RefreshStyles()
	{
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x4C90F00", Offset = "0x4C90F00", VA = "0x4C90F00")]
	private void LoadStyleDictionaryInternal()
	{
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x4C913C0", Offset = "0x4C913C0", VA = "0x4C913C0")]
	public TMP_StyleSheet()
	{
	}
}
