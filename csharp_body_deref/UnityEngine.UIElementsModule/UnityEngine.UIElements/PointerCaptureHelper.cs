using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000247")]
public static class PointerCaptureHelper
{
	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x4D2A730", Offset = "0x4D2A730", VA = "0x4D2A730")]
	private static PointerDispatchState GetStateFor(IEventHandler handler)
	{
		return null;
	}

	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x4D25400", Offset = "0x4D25400", VA = "0x4D25400")]
	public static bool HasPointerCapture(this IEventHandler handler, int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x4D25530", Offset = "0x4D25530", VA = "0x4D25530")]
	public static void CapturePointer(this IEventHandler handler, int pointerId)
	{
	}

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x4D2A9B0", Offset = "0x4D2A9B0", VA = "0x4D2A9B0")]
	public static void ReleasePointer(this IEventHandler handler, int pointerId)
	{
	}

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x4D2AA50", Offset = "0x4D2AA50", VA = "0x4D2AA50")]
	public static IEventHandler GetCapturingElement(this IPanel panel, int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x4D12B90", Offset = "0x4D12B90", VA = "0x4D12B90")]
	public static void ReleasePointer(this IPanel panel, int pointerId)
	{
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x4D12CB0", Offset = "0x4D12CB0", VA = "0x4D12CB0")]
	internal static void ActivateCompatibilityMouseEvents(this IPanel panel, int pointerId)
	{
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x4D2ABA0", Offset = "0x4D2ABA0", VA = "0x4D2ABA0")]
	internal static void PreventCompatibilityMouseEvents(this IPanel panel, int pointerId)
	{
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x4D11FA0", Offset = "0x4D11FA0", VA = "0x4D11FA0")]
	internal static bool ShouldSendCompatibilityMouseEvents(this IPanel panel, IPointerEvent evt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x4D25560", Offset = "0x4D25560", VA = "0x4D25560")]
	internal static void ProcessPointerCapture(this IPanel panel, int pointerId)
	{
	}
}
