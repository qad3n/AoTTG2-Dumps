// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ClickDetector
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F10880", Offset = "0x4F10880", VA = "0x4F10880")]
		public void Reset()
		{
		}

		[Token(Token = "0x600008C")]
		[Address(RVA = "0x4F105B0", Offset = "0x4F105B0", VA = "0x4F105B0")]
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
		[Address(RVA = "0x4F10230", Offset = "0x4F10230", VA = "0x4F10230")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x4F102A0", Offset = "0x4F102A0", VA = "0x4F102A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4F102F0", Offset = "0x4F102F0", VA = "0x4F102F0")]
	public ClickDetector()
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4F105C0", Offset = "0x4F105C0", VA = "0x4F105C0")]
	private void StartClickTracking(EventBase evt)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4F108F0", Offset = "0x4F108F0", VA = "0x4F108F0")]
	private void SendClickEvent(EventBase evt)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4F10E10", Offset = "0x4F10E10", VA = "0x4F10E10")]
	private void CancelClickTracking(EventBase evt)
	{
	}

	[Token(Token = "0x6000087")]
	public void ProcessEvent<TEvent>(PointerEventBase<TEvent> evt) where TEvent : PointerEventBase<TEvent>, new()
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4F10CC0", Offset = "0x4F10CC0", VA = "0x4F10CC0")]
	private static bool ContainsPointer(VisualElement element, Vector2 position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4F10F60", Offset = "0x4F10F60", VA = "0x4F10F60")]
	internal void Cleanup(List<VisualElement> elements)
	{
	}
}
