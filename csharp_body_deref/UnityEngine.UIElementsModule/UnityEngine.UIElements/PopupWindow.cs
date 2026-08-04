// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PopupWindow
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000F0")]
public class PopupWindow : TextElement
{
	[Token(Token = "0x20000F1")]
	public new class UxmlFactory : UxmlFactory<PopupWindow, UxmlTraits>
	{
		[Token(Token = "0x600068A")]
		[Address(RVA = "0x4FF0E80", Offset = "0x4FF0E80", VA = "0x4FF0E80")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000F2")]
	public new class UxmlTraits : TextElement.UxmlTraits
	{
		[Token(Token = "0x600068B")]
		[Address(RVA = "0x4FF0EC0", Offset = "0x4FF0EC0", VA = "0x4FF0EC0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40003E0")]
	[FieldOffset(Offset = "0x4D8")]
	private VisualElement m_ContentContainer;

	[Token(Token = "0x40003E1")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40003E2")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string contentUssClassName;

	[Token(Token = "0x17000122")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x6000688")]
		[Address(RVA = "0x4FF0DD0", Offset = "0x4FF0DD0", VA = "0x4FF0DD0", Slot = "97")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x4FF0C90", Offset = "0x4FF0C90", VA = "0x4FF0C90")]
	public PopupWindow()
	{
	}
}
