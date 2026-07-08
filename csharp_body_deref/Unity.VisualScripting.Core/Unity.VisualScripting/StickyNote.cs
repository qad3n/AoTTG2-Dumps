using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000190")]
public class StickyNote : GraphElement<IGraph>
{
	[Token(Token = "0x2000191")]
	public enum ColorEnum
	{
		[Token(Token = "0x40008C6")]
		Classic,
		[Token(Token = "0x40008C7")]
		Black,
		[Token(Token = "0x40008C8")]
		Dark,
		[Token(Token = "0x40008C9")]
		Orange,
		[Token(Token = "0x40008CA")]
		Green,
		[Token(Token = "0x40008CB")]
		Blue,
		[Token(Token = "0x40008CC")]
		Red,
		[Token(Token = "0x40008CD")]
		Purple,
		[Token(Token = "0x40008CE")]
		Teal
	}

	[Token(Token = "0x40008C0")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	public static readonly Color defaultColor;

	[Token(Token = "0x170001B7")]
	[Serialize]
	public Rect position
	{
		[Token(Token = "0x6000FA9")]
		[Address(RVA = "0x4A377E0", Offset = "0x4A377E0", VA = "0x4A377E0")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000FAA")]
		[Address(RVA = "0x4A377F0", Offset = "0x4A377F0", VA = "0x4A377F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B8")]
	[Serialize]
	public string title
	{
		[Token(Token = "0x6000FAB")]
		[Address(RVA = "0x4A37800", Offset = "0x4A37800", VA = "0x4A37800")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FAC")]
		[Address(RVA = "0x4A37810", Offset = "0x4A37810", VA = "0x4A37810")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B9")]
	[Serialize]
	[InspectorTextArea(minLines = 1f)]
	public string body
	{
		[Token(Token = "0x6000FAD")]
		[Address(RVA = "0x4A37820", Offset = "0x4A37820", VA = "0x4A37820")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FAE")]
		[Address(RVA = "0x4A37830", Offset = "0x4A37830", VA = "0x4A37830")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BA")]
	[Serialize]
	[Inspectable]
	public ColorEnum colorTheme
	{
		[Token(Token = "0x6000FAF")]
		[Address(RVA = "0x4A37840", Offset = "0x4A37840", VA = "0x4A37840")]
		[CompilerGenerated]
		get
		{
			return default(ColorEnum);
		}
		[Token(Token = "0x6000FB0")]
		[Address(RVA = "0x4A37850", Offset = "0x4A37850", VA = "0x4A37850")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000FA8")]
	[Address(RVA = "0x4A37780", Offset = "0x4A37780", VA = "0x4A37780")]
	public StickyNote()
	{
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x4A37860", Offset = "0x4A37860", VA = "0x4A37860")]
	public static Color GetStickyColor(ColorEnum enumValue)
	{
		return default(Color);
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x4A37900", Offset = "0x4A37900", VA = "0x4A37900")]
	public static Color GetFontColor(ColorEnum enumValue)
	{
		return default(Color);
	}
}
