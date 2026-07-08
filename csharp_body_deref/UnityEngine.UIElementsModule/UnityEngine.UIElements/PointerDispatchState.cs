using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000248")]
internal class PointerDispatchState
{
	[Token(Token = "0x4000864")]
	[FieldOffset(Offset = "0x10")]
	private IEventHandler[] m_PendingPointerCapture;

	[Token(Token = "0x4000865")]
	[FieldOffset(Offset = "0x18")]
	private IEventHandler[] m_PointerCapture;

	[Token(Token = "0x4000866")]
	[FieldOffset(Offset = "0x20")]
	private bool[] m_ShouldSendCompatibilityMouseEvents;

	[Token(Token = "0x6000F09")]
	[Address(RVA = "0x4D2B8C0", Offset = "0x4D2B8C0", VA = "0x4D2B8C0")]
	public PointerDispatchState()
	{
	}

	[Token(Token = "0x6000F0A")]
	[Address(RVA = "0x4D2B9B0", Offset = "0x4D2B9B0", VA = "0x4D2B9B0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x6000F0B")]
	[Address(RVA = "0x4D23610", Offset = "0x4D23610", VA = "0x4D23610")]
	public IEventHandler GetCapturingElement(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x4D2A850", Offset = "0x4D2A850", VA = "0x4D2A850")]
	public bool HasPointerCapture(IEventHandler handler, int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x4D2A880", Offset = "0x4D2A880", VA = "0x4D2A880")]
	public void CapturePointer(IEventHandler handler, int pointerId)
	{
	}

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x4D2AB30", Offset = "0x4D2AB30", VA = "0x4D2AB30")]
	public void ReleasePointer(int pointerId)
	{
	}

	[Token(Token = "0x6000F0F")]
	[Address(RVA = "0x4D2AA10", Offset = "0x4D2AA10", VA = "0x4D2AA10")]
	public void ReleasePointer(IEventHandler handler, int pointerId)
	{
	}

	[Token(Token = "0x6000F10")]
	[Address(RVA = "0x4D2ADF0", Offset = "0x4D2ADF0", VA = "0x4D2ADF0")]
	public void ProcessPointerCapture(int pointerId)
	{
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x4D2AB70", Offset = "0x4D2AB70", VA = "0x4D2AB70")]
	public void ActivateCompatibilityMouseEvents(int pointerId)
	{
	}

	[Token(Token = "0x6000F12")]
	[Address(RVA = "0x4D2AC80", Offset = "0x4D2AC80", VA = "0x4D2AC80")]
	public void PreventCompatibilityMouseEvents(int pointerId)
	{
	}

	[Token(Token = "0x6000F13")]
	[Address(RVA = "0x4D2ACB0", Offset = "0x4D2ACB0", VA = "0x4D2ACB0")]
	public bool ShouldSendCompatibilityMouseEvents(IPointerEvent evt)
	{
		return default(bool);
	}
}
