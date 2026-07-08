using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x200006D")]
public class TMP_Style
{
	[Token(Token = "0x4000342")]
	[FieldOffset(Offset = "0x0")]
	internal static TMP_Style k_NormalStyle;

	[Token(Token = "0x4000343")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private string m_Name;

	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private int m_HashCode;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private string m_OpeningDefinition;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private string m_ClosingDefinition;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private int[] m_OpeningTagArray;

	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private int[] m_ClosingTagArray;

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	internal uint[] m_OpeningTagUnicodeArray;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	internal uint[] m_ClosingTagUnicodeArray;

	[Token(Token = "0x170000C8")]
	public static TMP_Style NormalStyle
	{
		[Token(Token = "0x600034B")]
		[Address(RVA = "0x4943420", Offset = "0x4943420", VA = "0x4943420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	public string name
	{
		[Token(Token = "0x600034C")]
		[Address(RVA = "0x4943580", Offset = "0x4943580", VA = "0x4943580")]
		get
		{
			return null;
		}
		[Token(Token = "0x600034D")]
		[Address(RVA = "0x4943590", Offset = "0x4943590", VA = "0x4943590")]
		set
		{
		}
	}

	[Token(Token = "0x170000CA")]
	public int hashCode
	{
		[Token(Token = "0x600034E")]
		[Address(RVA = "0x49435D0", Offset = "0x49435D0", VA = "0x49435D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600034F")]
		[Address(RVA = "0x49435E0", Offset = "0x49435E0", VA = "0x49435E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000CB")]
	public string styleOpeningDefinition
	{
		[Token(Token = "0x6000350")]
		[Address(RVA = "0x49435F0", Offset = "0x49435F0", VA = "0x49435F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CC")]
	public string styleClosingDefinition
	{
		[Token(Token = "0x6000351")]
		[Address(RVA = "0x4943600", Offset = "0x4943600", VA = "0x4943600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CD")]
	public int[] styleOpeningTagArray
	{
		[Token(Token = "0x6000352")]
		[Address(RVA = "0x4943610", Offset = "0x4943610", VA = "0x4943610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CE")]
	public int[] styleClosingTagArray
	{
		[Token(Token = "0x6000353")]
		[Address(RVA = "0x4943620", Offset = "0x4943620", VA = "0x4943620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x49434E0", Offset = "0x49434E0", VA = "0x49434E0")]
	internal TMP_Style(string styleName, string styleOpeningDefinition, string styleClosingDefinition)
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x4943740", Offset = "0x4943740", VA = "0x4943740")]
	public void RefreshStyle()
	{
	}
}
