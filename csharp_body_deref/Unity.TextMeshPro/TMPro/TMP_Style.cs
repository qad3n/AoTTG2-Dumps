// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_Style
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000083")]
public class TMP_Style
{
	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x0")]
	internal static TMP_Style k_NormalStyle;

	[Token(Token = "0x4000437")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private string m_Name;

	[Token(Token = "0x4000438")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private int m_HashCode;

	[Token(Token = "0x4000439")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private string m_OpeningDefinition;

	[Token(Token = "0x400043A")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private string m_ClosingDefinition;

	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private int[] m_OpeningTagArray;

	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private int[] m_ClosingTagArray;

	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	internal uint[] m_OpeningTagUnicodeArray;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	internal uint[] m_ClosingTagUnicodeArray;

	[Token(Token = "0x170000E9")]
	public static TMP_Style NormalStyle
	{
		[Token(Token = "0x600043C")]
		[Address(RVA = "0x4C909A0", Offset = "0x4C909A0", VA = "0x4C909A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EA")]
	public string name
	{
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x4C90B00", Offset = "0x4C90B00", VA = "0x4C90B00")]
		get
		{
			return null;
		}
		[Token(Token = "0x600043E")]
		[Address(RVA = "0x4C90B10", Offset = "0x4C90B10", VA = "0x4C90B10")]
		set
		{
		}
	}

	[Token(Token = "0x170000EB")]
	public int hashCode
	{
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x4C90B50", Offset = "0x4C90B50", VA = "0x4C90B50")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x4C90B60", Offset = "0x4C90B60", VA = "0x4C90B60")]
		set
		{
		}
	}

	[Token(Token = "0x170000EC")]
	public string styleOpeningDefinition
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x4C90B70", Offset = "0x4C90B70", VA = "0x4C90B70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000ED")]
	public string styleClosingDefinition
	{
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x4C90B80", Offset = "0x4C90B80", VA = "0x4C90B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EE")]
	public int[] styleOpeningTagArray
	{
		[Token(Token = "0x6000443")]
		[Address(RVA = "0x4C90B90", Offset = "0x4C90B90", VA = "0x4C90B90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EF")]
	public int[] styleClosingTagArray
	{
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x4C90BA0", Offset = "0x4C90BA0", VA = "0x4C90BA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x4C90A60", Offset = "0x4C90A60", VA = "0x4C90A60")]
	internal TMP_Style(string styleName, string styleOpeningDefinition, string styleClosingDefinition)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x4C90CC0", Offset = "0x4C90CC0", VA = "0x4C90CC0")]
	public void RefreshStyle()
	{
	}
}
