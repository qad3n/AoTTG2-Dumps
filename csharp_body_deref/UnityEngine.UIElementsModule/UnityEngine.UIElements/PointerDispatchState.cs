// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PointerDispatchState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x50531F0", Offset = "0x50531F0", VA = "0x50531F0")]
	public PointerDispatchState()
	{
	}

	[Token(Token = "0x6000F0A")]
	[Address(RVA = "0x50532E0", Offset = "0x50532E0", VA = "0x50532E0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x6000F0B")]
	[Address(RVA = "0x504AF40", Offset = "0x504AF40", VA = "0x504AF40")]
	public IEventHandler GetCapturingElement(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x5052180", Offset = "0x5052180", VA = "0x5052180")]
	public bool HasPointerCapture(IEventHandler handler, int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x50521B0", Offset = "0x50521B0", VA = "0x50521B0")]
	public void CapturePointer(IEventHandler handler, int pointerId)
	{
	}

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x5052460", Offset = "0x5052460", VA = "0x5052460")]
	public void ReleasePointer(int pointerId)
	{
	}

	[Token(Token = "0x6000F0F")]
	[Address(RVA = "0x5052340", Offset = "0x5052340", VA = "0x5052340")]
	public void ReleasePointer(IEventHandler handler, int pointerId)
	{
	}

	[Token(Token = "0x6000F10")]
	[Address(RVA = "0x5052720", Offset = "0x5052720", VA = "0x5052720")]
	public void ProcessPointerCapture(int pointerId)
	{
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x50524A0", Offset = "0x50524A0", VA = "0x50524A0")]
	public void ActivateCompatibilityMouseEvents(int pointerId)
	{
	}

	[Token(Token = "0x6000F12")]
	[Address(RVA = "0x50525B0", Offset = "0x50525B0", VA = "0x50525B0")]
	public void PreventCompatibilityMouseEvents(int pointerId)
	{
	}

	[Token(Token = "0x6000F13")]
	[Address(RVA = "0x50525E0", Offset = "0x50525E0", VA = "0x50525E0")]
	public bool ShouldSendCompatibilityMouseEvents(IPointerEvent evt)
	{
		return default(bool);
	}
}
