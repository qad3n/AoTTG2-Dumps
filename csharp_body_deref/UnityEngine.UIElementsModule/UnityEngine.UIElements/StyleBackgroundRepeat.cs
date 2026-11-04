// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleBackgroundRepeat
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000411")]
public struct StyleBackgroundRepeat : IStyleValue<BackgroundRepeat>, IEquatable<StyleBackgroundRepeat>
{
	[Token(Token = "0x4000DB7")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private BackgroundRepeat m_Value;

	[Token(Token = "0x4000DB8")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008C2")]
	public BackgroundRepeat value
	{
		[Token(Token = "0x6001FBB")]
		[Address(RVA = "0x3111860", Offset = "0x310FE60", VA = "0x183111860", Slot = "4")]
		get
		{
			return default(BackgroundRepeat);
		}
		[Token(Token = "0x6001FBC")]
		[Address(RVA = "0x31118E0", Offset = "0x310FEE0", VA = "0x1831118E0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008C3")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001FBD")]
		[Address(RVA = "0xA50840", Offset = "0xA4EE40", VA = "0x180A50840", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001FBE")]
		[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001FBF")]
	[Address(RVA = "0x3111830", Offset = "0x310FE30", VA = "0x183111830")]
	public StyleBackgroundRepeat(BackgroundRepeat v)
	{
	}

	[Token(Token = "0x6001FC0")]
	[Address(RVA = "0x3111850", Offset = "0x310FE50", VA = "0x183111850")]
	public StyleBackgroundRepeat(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FC1")]
	[Address(RVA = "0x3111840", Offset = "0x310FE40", VA = "0x183111840")]
	internal StyleBackgroundRepeat(BackgroundRepeat v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FC2")]
	[Address(RVA = "0x3111870", Offset = "0x310FE70", VA = "0x183111870")]
	public static bool operator ==(StyleBackgroundRepeat lhs, StyleBackgroundRepeat rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FC3")]
	[Address(RVA = "0x31118C0", Offset = "0x310FEC0", VA = "0x1831118C0")]
	public static implicit operator StyleBackgroundRepeat(StyleKeyword keyword)
	{
		return default(StyleBackgroundRepeat);
	}

	[Token(Token = "0x6001FC4")]
	[Address(RVA = "0x31118A0", Offset = "0x310FEA0", VA = "0x1831118A0")]
	public static implicit operator StyleBackgroundRepeat(BackgroundRepeat v)
	{
		return default(StyleBackgroundRepeat);
	}

	[Token(Token = "0x6001FC5")]
	[Address(RVA = "0x31116D0", Offset = "0x310FCD0", VA = "0x1831116D0", Slot = "8")]
	public bool Equals(StyleBackgroundRepeat other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FC6")]
	[Address(RVA = "0x3111700", Offset = "0x310FD00", VA = "0x183111700", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FC7")]
	[Address(RVA = "0x31117A0", Offset = "0x310FDA0", VA = "0x1831117A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001FC8")]
	[Address(RVA = "0x31117C0", Offset = "0x310FDC0", VA = "0x1831117C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
