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

[Token(Token = "0x2000054")]
public class MaskUtilities
{
	[Token(Token = "0x600034B")]
	[Address(RVA = "0x32D6C00", Offset = "0x32D5200", VA = "0x1832D6C00")]
	public static void Notify2DMaskStateChanged(Component mask)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x32D6E10", Offset = "0x32D5410", VA = "0x1832D6E10")]
	public static void NotifyStencilStateChanged(Component mask)
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x32D6000", Offset = "0x32D4600", VA = "0x1832D6000")]
	public static Transform FindRootSortOverrideCanvas(Transform start)
	{
		return null;
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x32D6800", Offset = "0x32D4E00", VA = "0x1832D6800")]
	public static int GetStencilDepth(Transform transform, Transform stopAfter)
	{
		return default(int);
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x32D6A90", Offset = "0x32D5090", VA = "0x1832D6A90")]
	public static bool IsDescendantOrSelf(Transform father, Transform child)
	{
		return default(bool);
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x32D6180", Offset = "0x32D4780", VA = "0x1832D6180")]
	public static RectMask2D GetRectMaskForClippable(IClippable clippable)
	{
		return null;
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x32D64B0", Offset = "0x32D4AB0", VA = "0x1832D64B0")]
	public static void GetRectMasksForClip(RectMask2D clipper, List<RectMask2D> masks)
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public MaskUtilities()
	{
	}
}
