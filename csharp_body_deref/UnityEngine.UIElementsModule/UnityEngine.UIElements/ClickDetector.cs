using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200001F")]
internal class ClickDetector
{
	[Token(Token = "0x2000020")]
	private class ButtonClickStatus
	{
		[Token(Token = "0x400004A")]
		[FieldOffset(Offset = "0x10")]
		public VisualElement m_Target;

		[Token(Token = "0x400004B")]
		[FieldOffset(Offset = "0x18")]
		public Vector3 m_PointerDownPosition;

		[Token(Token = "0x400004C")]
		[FieldOffset(Offset = "0x28")]
		public long m_LastPointerDownTime;

		[Token(Token = "0x400004D")]
		[FieldOffset(Offset = "0x30")]
		public int m_ClickCount;

		[Token(Token = "0x600008B")]
		[Address(RVA = "0x4BE8F50", Offset = "0x4BE8F50", VA = "0x4BE8F50")]
		public void Reset()
		{
		}

		[Token(Token = "0x600008C")]
		[Address(RVA = "0x4BE8C80", Offset = "0x4BE8C80", VA = "0x4BE8C80")]
		public ButtonClickStatus()
		{
		}
	}

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x10")]
	private List<ButtonClickStatus> m_ClickStatus;

	[Token(Token = "0x1700001A")]
	internal static int s_DoubleClickTime
	{
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x4BE8900", Offset = "0x4BE8900", VA = "0x4BE8900")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x4BE8970", Offset = "0x4BE8970", VA = "0x4BE8970")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4BE89C0", Offset = "0x4BE89C0", VA = "0x4BE89C0")]
	public ClickDetector()
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4BE8C90", Offset = "0x4BE8C90", VA = "0x4BE8C90")]
	private void StartClickTracking(EventBase evt)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4BE8FC0", Offset = "0x4BE8FC0", VA = "0x4BE8FC0")]
	private void SendClickEvent(EventBase evt)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4BE94E0", Offset = "0x4BE94E0", VA = "0x4BE94E0")]
	private void CancelClickTracking(EventBase evt)
	{
	}

	[Token(Token = "0x6000087")]
	public void ProcessEvent<TEvent>(PointerEventBase<TEvent> evt) where TEvent : PointerEventBase<TEvent>, new()
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4BE9390", Offset = "0x4BE9390", VA = "0x4BE9390")]
	private static bool ContainsPointer(VisualElement element, Vector2 position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4BE9630", Offset = "0x4BE9630", VA = "0x4BE9630")]
	internal void Cleanup(List<VisualElement> elements)
	{
	}
}
