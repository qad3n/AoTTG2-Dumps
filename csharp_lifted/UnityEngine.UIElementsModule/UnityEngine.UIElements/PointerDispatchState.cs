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
	[Address(RVA = "0x6CBABD0", Offset = "0x6CB9BD0", VA = "0x6CBABD0")]
	public PointerDispatchState()
	{
	}

	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x6CBACC0", Offset = "0x6CB9CC0", VA = "0x6CBACC0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x6CB9D30", Offset = "0x6CB8D30", VA = "0x6CB9D30")]
	public IEventHandler GetCapturingElement(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x6CB99C0", Offset = "0x6CB89C0", VA = "0x6CB99C0")]
	public bool HasPointerCapture(IEventHandler handler, int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x6CB99F0", Offset = "0x6CB89F0", VA = "0x6CB99F0")]
	public void CapturePointer(IEventHandler handler, int pointerId)
	{
	}

	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x6CB9E30", Offset = "0x6CB8E30", VA = "0x6CB9E30")]
	public void ReleasePointer(int pointerId)
	{
	}

	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x6CB9C20", Offset = "0x6CB8C20", VA = "0x6CB9C20")]
	public void ReleasePointer(IEventHandler handler, int pointerId)
	{
	}

	[Token(Token = "0x60012CA")]
	[Address(RVA = "0x6CBA360", Offset = "0x6CB9360", VA = "0x6CBA360")]
	public void ProcessPointerCapture(int pointerId)
	{
	}

	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x6CB9FC0", Offset = "0x6CB8FC0", VA = "0x6CB9FC0")]
	public void ActivateCompatibilityMouseEvents(int pointerId)
	{
	}

	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x6CBA0D0", Offset = "0x6CB90D0", VA = "0x6CBA0D0")]
	public void PreventCompatibilityMouseEvents(int pointerId)
	{
	}

	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x6CBA220", Offset = "0x6CB9220", VA = "0x6CBA220")]
	public bool ShouldSendCompatibilityMouseEvents(IPointerEvent evt)
	{
		return default(bool);
	}
}
