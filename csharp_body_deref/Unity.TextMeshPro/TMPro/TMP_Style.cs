// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_Style
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2D431B0", Offset = "0x2D417B0", VA = "0x182D431B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EB")]
	public string name
	{
		[Token(Token = "0x60003DC")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x2D432A0", Offset = "0x2D418A0", VA = "0x182D432A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000EC")]
	public int hashCode
	{
		[Token(Token = "0x60003DE")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x2D43290", Offset = "0x2D41890", VA = "0x182D43290")]
		set
		{
		}
	}

	[Token(Token = "0x170000ED")]
	public string styleOpeningDefinition
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EE")]
	public string styleClosingDefinition
	{
		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EF")]
	public uint[] styleOpeningTagArray
	{
		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F0")]
	public uint[] styleClosingTagArray
	{
		[Token(Token = "0x60003E3")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x2D43110", Offset = "0x2D41710", VA = "0x182D43110")]
	internal TMP_Style(string styleName, string styleOpeningDefinition, string styleClosingDefinition)
	{
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x2D42FB0", Offset = "0x2D415B0", VA = "0x182D42FB0")]
	public void RefreshStyle()
	{
	}
}
