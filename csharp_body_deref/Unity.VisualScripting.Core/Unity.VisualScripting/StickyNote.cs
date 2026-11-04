// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.StickyNote
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Token(Token = "0x40008C4")]
		Classic,
		[Token(Token = "0x40008C5")]
		Black,
		[Token(Token = "0x40008C6")]
		Dark,
		[Token(Token = "0x40008C7")]
		Orange,
		[Token(Token = "0x40008C8")]
		Green,
		[Token(Token = "0x40008C9")]
		Blue,
		[Token(Token = "0x40008CA")]
		Red,
		[Token(Token = "0x40008CB")]
		Purple,
		[Token(Token = "0x40008CC")]
		Teal
	}

	[Token(Token = "0x40008BE")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	public static readonly Color defaultColor;

	[Token(Token = "0x170001BA")]
	[Serialize]
	public Rect position
	{
		[Token(Token = "0x6000FB4")]
		[Address(RVA = "0x181CEB0", Offset = "0x181B4B0", VA = "0x18181CEB0")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000FB5")]
		[Address(RVA = "0x1B040F0", Offset = "0x1B026F0", VA = "0x181B040F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BB")]
	[Serialize]
	public string title
	{
		[Token(Token = "0x6000FB6")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FB7")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BC")]
	[Serialize]
	[InspectorTextArea(minLines = 1f)]
	public string body
	{
		[Token(Token = "0x6000FB8")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FB9")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BD")]
	[Serialize]
	[Inspectable]
	public ColorEnum colorTheme
	{
		[Token(Token = "0x6000FBA")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		[CompilerGenerated]
		get
		{
			return default(ColorEnum);
		}
		[Token(Token = "0x6000FBB")]
		[Address(RVA = "0xB3E0D0", Offset = "0xB3C6D0", VA = "0x180B3E0D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x2E3D670", Offset = "0x2E3BC70", VA = "0x182E3D670")]
	public StickyNote()
	{
	}

	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x2E3D4C0", Offset = "0x2E3BAC0", VA = "0x182E3D4C0")]
	public static Color GetStickyColor(ColorEnum enumValue)
	{
		return default(Color);
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x2E3D480", Offset = "0x2E3BA80", VA = "0x182E3D480")]
	public static Color GetFontColor(ColorEnum enumValue)
	{
		return default(Color);
	}
}
