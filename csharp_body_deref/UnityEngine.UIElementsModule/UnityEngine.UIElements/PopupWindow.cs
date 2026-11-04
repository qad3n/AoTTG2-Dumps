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
		[Address(RVA = "0x3224CA0", Offset = "0x32232A0", VA = "0x183224CA0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200012D")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextElement.UxmlTraits
	{
		[Token(Token = "0x60008B8")]
		[Address(RVA = "0x32261C0", Offset = "0x32247C0", VA = "0x1832261C0")]
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
		[Address(RVA = "0x31CF190", Offset = "0x31CD790", VA = "0x1831CF190", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x3220AD0", Offset = "0x321F0D0", VA = "0x183220AD0")]
	public PopupWindow()
	{
	}
}
