// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PointerCaptureHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000247")]
public static class PointerCaptureHelper
{
	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x5052060", Offset = "0x5052060", VA = "0x5052060")]
	private static PointerDispatchState GetStateFor(IEventHandler handler)
	{
		return null;
	}

	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x504CD30", Offset = "0x504CD30", VA = "0x504CD30")]
	public static bool HasPointerCapture(this IEventHandler handler, int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x504CE60", Offset = "0x504CE60", VA = "0x504CE60")]
	public static void CapturePointer(this IEventHandler handler, int pointerId)
	{
	}

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x50522E0", Offset = "0x50522E0", VA = "0x50522E0")]
	public static void ReleasePointer(this IEventHandler handler, int pointerId)
	{
	}

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x5052380", Offset = "0x5052380", VA = "0x5052380")]
	public static IEventHandler GetCapturingElement(this IPanel panel, int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x503A4C0", Offset = "0x503A4C0", VA = "0x503A4C0")]
	public static void ReleasePointer(this IPanel panel, int pointerId)
	{
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x503A5E0", Offset = "0x503A5E0", VA = "0x503A5E0")]
	internal static void ActivateCompatibilityMouseEvents(this IPanel panel, int pointerId)
	{
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x50524D0", Offset = "0x50524D0", VA = "0x50524D0")]
	internal static void PreventCompatibilityMouseEvents(this IPanel panel, int pointerId)
	{
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x50398D0", Offset = "0x50398D0", VA = "0x50398D0")]
	internal static bool ShouldSendCompatibilityMouseEvents(this IPanel panel, IPointerEvent evt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x504CE90", Offset = "0x504CE90", VA = "0x504CE90")]
	internal static void ProcessPointerCapture(this IPanel panel, int pointerId)
	{
	}
}
