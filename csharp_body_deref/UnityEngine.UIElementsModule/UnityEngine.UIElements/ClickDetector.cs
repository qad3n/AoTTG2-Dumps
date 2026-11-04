// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ClickDetector
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000050")]
internal class ClickDetector
{
	[Token(Token = "0x2000051")]
	private class ButtonClickStatus
	{
		[Token(Token = "0x40000F9")]
		[FieldOffset(Offset = "0x10")]
		public VisualElement m_Target;

		[Token(Token = "0x40000FA")]
		[FieldOffset(Offset = "0x18")]
		public Vector3 m_PointerDownPosition;

		[Token(Token = "0x40000FB")]
		[FieldOffset(Offset = "0x28")]
		public long m_LastPointerDownTime;

		[Token(Token = "0x40000FC")]
		[FieldOffset(Offset = "0x30")]
		public int m_ClickCount;

		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x30886E0", Offset = "0x3086CE0", VA = "0x1830886E0")]
		public void Reset()
		{
		}

		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public ButtonClickStatus()
		{
		}
	}

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x10")]
	private List<ButtonClickStatus> m_ClickStatus;

	[Token(Token = "0x17000057")]
	internal static int s_DoubleClickTime
	{
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x30895D0", Offset = "0x3087BD0", VA = "0x1830895D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x3089620", Offset = "0x3087C20", VA = "0x183089620")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x3089370", Offset = "0x3087970", VA = "0x183089370")]
	public ClickDetector()
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x3089130", Offset = "0x3087730", VA = "0x183089130")]
	private void StartClickTracking(EventBase evt)
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x3088F20", Offset = "0x3087520", VA = "0x183088F20")]
	private void SendClickEvent(EventBase evt)
	{
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x3088A90", Offset = "0x3087090", VA = "0x183088A90")]
	private void CancelClickTracking(EventBase evt)
	{
	}

	[Token(Token = "0x60001C8")]
	public void ProcessEvent<TEvent>(PointerEventBase<TEvent> evt) where TEvent : PointerEventBase<TEvent>, new()
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x3088CA0", Offset = "0x30872A0", VA = "0x183088CA0")]
	private static bool ContainsPointer(VisualElement element, IPointerEvent pe)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x3088B30", Offset = "0x3087130", VA = "0x183088B30")]
	internal void Cleanup(List<VisualElement> elements)
	{
	}
}
