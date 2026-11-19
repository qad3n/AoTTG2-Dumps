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
	[Address(RVA = "0x6CB98B0", Offset = "0x6CB88B0", VA = "0x6CB98B0")]
	private static PointerDispatchState GetStateFor(IEventHandler handler)
	{
		return null;
	}

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x6CB2400", Offset = "0x6CB1400", VA = "0x6CB2400")]
	public static bool HasPointerCapture(this IEventHandler handler, int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x6CB2520", Offset = "0x6CB1520", VA = "0x6CB2520")]
	public static void CapturePointer(this IEventHandler handler, int pointerId)
	{
	}

	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x6CB9BD0", Offset = "0x6CB8BD0", VA = "0x6CB9BD0")]
	public static void ReleasePointer(this IEventHandler handler, int pointerId)
	{
	}

	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x6CB9C50", Offset = "0x6CB8C50", VA = "0x6CB9C50")]
	public static IEventHandler GetCapturingElement(this IPanel panel, int pointerId)
	{
		return null;
	}

	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x6CB9D60", Offset = "0x6CB8D60", VA = "0x6CB9D60")]
	public static void ReleasePointer(this IPanel panel, int pointerId)
	{
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x6CB9EE0", Offset = "0x6CB8EE0", VA = "0x6CB9EE0")]
	internal static void ActivateCompatibilityMouseEvents(this IPanel panel, int pointerId)
	{
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x6CB9FF0", Offset = "0x6CB8FF0", VA = "0x6CB9FF0")]
	internal static void PreventCompatibilityMouseEvents(this IPanel panel, int pointerId)
	{
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x6CBA100", Offset = "0x6CB9100", VA = "0x6CBA100")]
	internal static bool ShouldSendCompatibilityMouseEvents(this IPanel panel, IPointerEvent evt)
	{
		return default(bool);
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x6CB2550", Offset = "0x6CB1550", VA = "0x6CB2550")]
	internal static void ProcessPointerCapture(this IPanel panel, int pointerId)
	{
	}
}
