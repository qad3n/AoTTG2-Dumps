// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.RepeatButton
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000139")]
public class RepeatButton : TextElement
{
	[Token(Token = "0x200013A")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<RepeatButton, UxmlTraits>
	{
		[Token(Token = "0x6000901")]
		[Address(RVA = "0x6C2B130", Offset = "0x6C2A130", VA = "0x6C2B130")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200013B")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextElement.UxmlTraits
	{
		[Token(Token = "0x4000577")]
		[FieldOffset(Offset = "0xD0")]
		private UxmlLongAttributeDescription m_Delay;

		[Token(Token = "0x4000578")]
		[FieldOffset(Offset = "0xD8")]
		private UxmlLongAttributeDescription m_Interval;

		[Token(Token = "0x6000902")]
		[Address(RVA = "0x6C2B170", Offset = "0x6C2A170", VA = "0x6C2B170", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000903")]
		[Address(RVA = "0x6C2B340", Offset = "0x6C2A340", VA = "0x6C2B340")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000574")]
	[FieldOffset(Offset = "0x3D0")]
	private Clickable m_Clickable;

	[Token(Token = "0x4000575")]
	[FieldOffset(Offset = "0x3D8")]
	private bool m_AcceptClicksIfDisabled;

	[Token(Token = "0x4000576")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x170001A6")]
	internal bool acceptClicksIfDisabled
	{
		[Token(Token = "0x60008FB")]
		[Address(RVA = "0x6C2AE90", Offset = "0x6C29E90", VA = "0x6C2AE90")]
		set
		{
		}
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x6C2AEC0", Offset = "0x6C29EC0", VA = "0x6C2AEC0")]
	public RepeatButton()
	{
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x6C2AF50", Offset = "0x6C29F50", VA = "0x6C2AF50")]
	public RepeatButton(Action clickEvent, long delay, long interval)
	{
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x6C2B000", Offset = "0x6C2A000", VA = "0x6C2B000")]
	public void SetAction(Action clickEvent, long delay, long interval)
	{
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x6C2B0B0", Offset = "0x6C2A0B0", VA = "0x6C2B0B0")]
	internal void AddAction(Action clickEvent)
	{
	}
}
