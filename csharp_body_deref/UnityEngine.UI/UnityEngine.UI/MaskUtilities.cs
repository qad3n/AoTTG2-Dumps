// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.MaskUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000058")]
public class MaskUtilities
{
	[Token(Token = "0x6000358")]
	[Address(RVA = "0x50D78A0", Offset = "0x50D78A0", VA = "0x50D78A0")]
	public static void Notify2DMaskStateChanged(Component mask)
	{
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x50D5720", Offset = "0x50D5720", VA = "0x50D5720")]
	public static void NotifyStencilStateChanged(Component mask)
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x50D6330", Offset = "0x50D6330", VA = "0x50D6330")]
	public static Transform FindRootSortOverrideCanvas(Transform start)
	{
		return null;
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x50D64C0", Offset = "0x50D64C0", VA = "0x50D64C0")]
	public static int GetStencilDepth(Transform transform, Transform stopAfter)
	{
		return default(int);
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x50D7B10", Offset = "0x50D7B10", VA = "0x50D7B10")]
	public static bool IsDescendantOrSelf(Transform father, Transform child)
	{
		return default(bool);
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x50D7240", Offset = "0x50D7240", VA = "0x50D7240")]
	public static RectMask2D GetRectMaskForClippable(IClippable clippable)
	{
		return null;
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x50D7C60", Offset = "0x50D7C60", VA = "0x50D7C60")]
	public static void GetRectMasksForClip(RectMask2D clipper, List<RectMask2D> masks)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x50D8050", Offset = "0x50D8050", VA = "0x50D8050")]
	public MaskUtilities()
	{
	}
}
