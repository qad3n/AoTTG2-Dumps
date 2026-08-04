// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleBackgroundPosition
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000370")]
public struct StyleBackgroundPosition : IStyleValue<BackgroundPosition>, IEquatable<StyleBackgroundPosition>
{
	[Token(Token = "0x4000A6B")]
	[FieldOffset(Offset = "0x0")]
	private BackgroundPosition m_Value;

	[Token(Token = "0x4000A6C")]
	[FieldOffset(Offset = "0xC")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x1700062E")]
	public BackgroundPosition value
	{
		[Token(Token = "0x6001600")]
		[Address(RVA = "0x50ADF20", Offset = "0x50ADF20", VA = "0x50ADF20", Slot = "4")]
		get
		{
			return default(BackgroundPosition);
		}
		[Token(Token = "0x6001601")]
		[Address(RVA = "0x50ADF40", Offset = "0x50ADF40", VA = "0x50ADF40", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700062F")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001602")]
		[Address(RVA = "0x50ADF50", Offset = "0x50ADF50", VA = "0x50ADF50", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001603")]
		[Address(RVA = "0x50ADF60", Offset = "0x50ADF60", VA = "0x50ADF60", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001604")]
	[Address(RVA = "0x50ADF70", Offset = "0x50ADF70", VA = "0x50ADF70")]
	public static bool operator ==(StyleBackgroundPosition lhs, StyleBackgroundPosition rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001605")]
	[Address(RVA = "0x50ADF90", Offset = "0x50ADF90", VA = "0x50ADF90", Slot = "8")]
	public bool Equals(StyleBackgroundPosition other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001606")]
	[Address(RVA = "0x50ADFC0", Offset = "0x50ADFC0", VA = "0x50ADFC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001607")]
	[Address(RVA = "0x50AE040", Offset = "0x50AE040", VA = "0x50AE040", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001608")]
	[Address(RVA = "0x50AE060", Offset = "0x50AE060", VA = "0x50AE060", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
