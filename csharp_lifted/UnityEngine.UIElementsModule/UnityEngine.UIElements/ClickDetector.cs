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

[Token(Token = "0x200004F")]
internal class ClickDetector
{
	[Token(Token = "0x2000050")]
	private class ButtonClickStatus
	{
		[Token(Token = "0x40000EF")]
		[FieldOffset(Offset = "0x10")]
		public VisualElement m_Target;

		[Token(Token = "0x40000F0")]
		[FieldOffset(Offset = "0x18")]
		public Vector3 m_PointerDownPosition;

		[Token(Token = "0x40000F1")]
		[FieldOffset(Offset = "0x28")]
		public long m_LastPointerDownTime;

		[Token(Token = "0x40000F2")]
		[FieldOffset(Offset = "0x30")]
		public int m_ClickCount;

		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x6A8E6A0", Offset = "0x6A8D6A0", VA = "0x6A8E6A0")]
		public void Reset()
		{
		}

		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x6A8E3D0", Offset = "0x6A8D3D0", VA = "0x6A8E3D0")]
		public ButtonClickStatus()
		{
		}
	}

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x10")]
	private List<ButtonClickStatus> m_ClickStatus;

	[Token(Token = "0x17000053")]
	internal static int s_DoubleClickTime
	{
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x6A8E080", Offset = "0x6A8D080", VA = "0x6A8E080")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x6A8E0F0", Offset = "0x6A8D0F0", VA = "0x6A8E0F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x6A8E140", Offset = "0x6A8D140", VA = "0x6A8E140")]
	public ClickDetector()
	{
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x6A8E3E0", Offset = "0x6A8D3E0", VA = "0x6A8E3E0")]
	private void StartClickTracking(EventBase evt)
	{
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x6A8E710", Offset = "0x6A8D710", VA = "0x6A8E710")]
	private void SendClickEvent(EventBase evt)
	{
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x6A8EC40", Offset = "0x6A8DC40", VA = "0x6A8EC40")]
	private void CancelClickTracking(EventBase evt)
	{
	}

	[Token(Token = "0x60001A9")]
	public void ProcessEvent<TEvent>(PointerEventBase<TEvent> evt) where TEvent : PointerEventBase<TEvent>, new()
	{
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x6A8E9D0", Offset = "0x6A8D9D0", VA = "0x6A8E9D0")]
	private static bool ContainsPointer(VisualElement element, IPointerEvent pe)
	{
		return default(bool);
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x6A8ED90", Offset = "0x6A8DD90", VA = "0x6A8ED90")]
	internal void Cleanup(List<VisualElement> elements)
	{
	}
}
