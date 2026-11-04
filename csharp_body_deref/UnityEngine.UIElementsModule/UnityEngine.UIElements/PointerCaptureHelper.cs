// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PointerCaptureHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002C3")]
public static class PointerCaptureHelper
{
	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x32B45E0", Offset = "0x32B2BE0", VA = "0x1832B45E0")]
	private static PointerDispatchState GetStateFor(IEventHandler handler)
	{
		return null;
	}

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x32B4680", Offset = "0x32B2C80", VA = "0x1832B4680")]
	public static bool HasPointerCapture(this IEventHandler handler, int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x32B42F0", Offset = "0x32B28F0", VA = "0x1832B42F0")]
	public static void CapturePointer(this IEventHandler handler, int pointerId)
	{
	}

	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x32B4850", Offset = "0x32B2E50", VA = "0x1832B4850")]
	public static void ReleasePointer(this IEventHandler handler, int pointerId)
	{
	}

	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x32B4550", Offset = "0x32B2B50", VA = "0x1832B4550")]
	public static IEventHandler GetCapturingElement(this IPanel panel, int pointerId)
	{
		return null;
	}

	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x32B4930", Offset = "0x32B2F30", VA = "0x1832B4930")]
	public static void ReleasePointer(this IPanel panel, int pointerId)
	{
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x32B4270", Offset = "0x32B2870", VA = "0x1832B4270")]
	internal static void ActivateCompatibilityMouseEvents(this IPanel panel, int pointerId)
	{
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x32B4760", Offset = "0x32B2D60", VA = "0x1832B4760")]
	internal static void PreventCompatibilityMouseEvents(this IPanel panel, int pointerId)
	{
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x32B49A0", Offset = "0x32B2FA0", VA = "0x1832B49A0")]
	internal static bool ShouldSendCompatibilityMouseEvents(this IPanel panel, IPointerEvent evt)
	{
		return default(bool);
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x32B47E0", Offset = "0x32B2DE0", VA = "0x1832B47E0")]
	internal static void ProcessPointerCapture(this IPanel panel, int pointerId)
	{
	}
}
