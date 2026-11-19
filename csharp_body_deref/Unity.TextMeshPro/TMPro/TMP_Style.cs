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
[Token(Token = "0x2000078")]
public class TMP_Style
{
	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0x0")]
	internal static TMP_Style k_NormalStyle;

	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private string m_Name;

	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private int m_HashCode;

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private string m_OpeningDefinition;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private string m_ClosingDefinition;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private uint[] m_OpeningTagArray;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private uint[] m_ClosingTagArray;

	[Token(Token = "0x170000EA")]
	public static TMP_Style NormalStyle
	{
		[Token(Token = "0x60003DB")]
		[Address(RVA = "0x673CF10", Offset = "0x673BF10", VA = "0x673CF10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EB")]
	public string name
	{
		[Token(Token = "0x60003DC")]
		[Address(RVA = "0x673D070", Offset = "0x673C070", VA = "0x673D070")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x673D080", Offset = "0x673C080", VA = "0x673D080")]
		set
		{
		}
	}

	[Token(Token = "0x170000EC")]
	public int hashCode
	{
		[Token(Token = "0x60003DE")]
		[Address(RVA = "0x673D0C0", Offset = "0x673C0C0", VA = "0x673D0C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x673D0D0", Offset = "0x673C0D0", VA = "0x673D0D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000ED")]
	public string styleOpeningDefinition
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x673D0E0", Offset = "0x673C0E0", VA = "0x673D0E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EE")]
	public string styleClosingDefinition
	{
		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x673D0F0", Offset = "0x673C0F0", VA = "0x673D0F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EF")]
	public uint[] styleOpeningTagArray
	{
		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x673D100", Offset = "0x673C100", VA = "0x673D100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F0")]
	public uint[] styleClosingTagArray
	{
		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x673D110", Offset = "0x673C110", VA = "0x673D110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x673CFD0", Offset = "0x673BFD0", VA = "0x673CFD0")]
	internal TMP_Style(string styleName, string styleOpeningDefinition, string styleClosingDefinition)
	{
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x673D230", Offset = "0x673C230", VA = "0x673D230")]
	public void RefreshStyle()
	{
	}
}
