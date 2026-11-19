// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PopupWindow
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200012B")]
public class PopupWindow : TextElement
{
	[Token(Token = "0x200012C")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<PopupWindow, UxmlTraits>
	{
		[Token(Token = "0x60008B7")]
		[Address(RVA = "0x6C267B0", Offset = "0x6C257B0", VA = "0x6C267B0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200012D")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextElement.UxmlTraits
	{
		[Token(Token = "0x60008B8")]
		[Address(RVA = "0x6C267F0", Offset = "0x6C257F0", VA = "0x6C267F0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x400053F")]
	[FieldOffset(Offset = "0x3D0")]
	private VisualElement m_ContentContainer;

	[Token(Token = "0x4000540")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000541")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string contentUssClassName;

	[Token(Token = "0x1700019B")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x60008B5")]
		[Address(RVA = "0x6C26700", Offset = "0x6C25700", VA = "0x6C26700", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x6C265C0", Offset = "0x6C255C0", VA = "0x6C265C0")]
	public PopupWindow()
	{
	}
}
