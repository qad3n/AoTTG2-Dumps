// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.RepeatButton
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x323AF80", Offset = "0x3239580", VA = "0x18323AF80")]
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
		[Address(RVA = "0x323B3D0", Offset = "0x32399D0", VA = "0x18323B3D0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000903")]
		[Address(RVA = "0x323DB10", Offset = "0x323C110", VA = "0x18323DB10")]
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
		[Address(RVA = "0x3226DC0", Offset = "0x32253C0", VA = "0x183226DC0")]
		set
		{
		}
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x3226D30", Offset = "0x3225330", VA = "0x183226D30")]
	public RepeatButton()
	{
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x3226C70", Offset = "0x3225270", VA = "0x183226C70")]
	public RepeatButton(Action clickEvent, long delay, long interval)
	{
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x3226B60", Offset = "0x3225160", VA = "0x183226B60")]
	public void SetAction(Action clickEvent, long delay, long interval)
	{
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x3226B30", Offset = "0x3225130", VA = "0x183226B30")]
	internal void AddAction(Action clickEvent)
	{
	}
}
