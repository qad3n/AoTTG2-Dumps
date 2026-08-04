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
		[Address(RVA = "0x4D5C3B0", Offset = "0x4D5C3B0", VA = "0x4D5C3B0")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000FAA")]
		[Address(RVA = "0x4D5C3C0", Offset = "0x4D5C3C0", VA = "0x4D5C3C0")]
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
		[Address(RVA = "0x4D5C3D0", Offset = "0x4D5C3D0", VA = "0x4D5C3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FAC")]
		[Address(RVA = "0x4D5C3E0", Offset = "0x4D5C3E0", VA = "0x4D5C3E0")]
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
		[Address(RVA = "0x4D5C3F0", Offset = "0x4D5C3F0", VA = "0x4D5C3F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FAE")]
		[Address(RVA = "0x4D5C400", Offset = "0x4D5C400", VA = "0x4D5C400")]
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
		[Address(RVA = "0x4D5C410", Offset = "0x4D5C410", VA = "0x4D5C410")]
		[CompilerGenerated]
		get
		{
			return default(ColorEnum);
		}
		[Token(Token = "0x6000FB0")]
		[Address(RVA = "0x4D5C420", Offset = "0x4D5C420", VA = "0x4D5C420")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000FA8")]
	[Address(RVA = "0x4D5C350", Offset = "0x4D5C350", VA = "0x4D5C350")]
	public StickyNote()
	{
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x4D5C430", Offset = "0x4D5C430", VA = "0x4D5C430")]
	public static Color GetStickyColor(ColorEnum enumValue)
	{
		return default(Color);
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x4D5C4D0", Offset = "0x4D5C4D0", VA = "0x4D5C4D0")]
	public static Color GetFontColor(ColorEnum enumValue)
	{
		return default(Color);
	}
}
