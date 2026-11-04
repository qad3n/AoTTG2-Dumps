// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PointerDispatchState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002C4")]
internal class PointerDispatchState
{
	[Token(Token = "0x4000AAC")]
	[FieldOffset(Offset = "0x10")]
	private IEventHandler[] m_PendingPointerCapture;

	[Token(Token = "0x4000AAD")]
	[FieldOffset(Offset = "0x18")]
	private IEventHandler[] m_PointerCapture;

	[Token(Token = "0x4000AAE")]
	[FieldOffset(Offset = "0x20")]
	private bool[] m_ShouldSendCompatibilityMouseEvents;

	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x32B54C0", Offset = "0x32B3AC0", VA = "0x1832B54C0")]
	public PointerDispatchState()
	{
	}

	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x32B5360", Offset = "0x32B3960", VA = "0x1832B5360")]
	internal void Reset()
	{
	}

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x277EF80", Offset = "0x277D580", VA = "0x18277EF80")]
	public IEventHandler GetCapturingElement(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x32B4CF0", Offset = "0x32B32F0", VA = "0x1832B4CF0")]
	public bool HasPointerCapture(IEventHandler handler, int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x32B4B20", Offset = "0x32B3120", VA = "0x1832B4B20")]
	public void CapturePointer(IEventHandler handler, int pointerId)
	{
	}

	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x32B5260", Offset = "0x32B3860", VA = "0x1832B5260")]
	public void ReleasePointer(int pointerId)
	{
	}

	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x32B5320", Offset = "0x32B3920", VA = "0x1832B5320")]
	public void ReleasePointer(IEventHandler handler, int pointerId)
	{
	}

	[Token(Token = "0x60012CA")]
	[Address(RVA = "0x32B4D50", Offset = "0x32B3350", VA = "0x1832B4D50")]
	public void ProcessPointerCapture(int pointerId)
	{
	}

	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x32B4AF0", Offset = "0x32B30F0", VA = "0x1832B4AF0")]
	public void ActivateCompatibilityMouseEvents(int pointerId)
	{
	}

	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x32B4D20", Offset = "0x32B3320", VA = "0x1832B4D20")]
	public void PreventCompatibilityMouseEvents(int pointerId)
	{
	}

	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x32B5420", Offset = "0x32B3A20", VA = "0x1832B5420")]
	public bool ShouldSendCompatibilityMouseEvents(IPointerEvent evt)
	{
		return default(bool);
	}
}
