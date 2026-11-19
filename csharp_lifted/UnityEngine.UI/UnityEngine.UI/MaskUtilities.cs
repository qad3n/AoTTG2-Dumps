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
	[Address(RVA = "0x6CE6960", Offset = "0x6CE5960", VA = "0x6CE6960")]
	public static void Notify2DMaskStateChanged(Component mask)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x6CE5840", Offset = "0x6CE4840", VA = "0x6CE5840")]
	public static void NotifyStencilStateChanged(Component mask)
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x6CE6450", Offset = "0x6CE5450", VA = "0x6CE6450")]
	public static Transform FindRootSortOverrideCanvas(Transform start)
	{
		return null;
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x6CE65F0", Offset = "0x6CE55F0", VA = "0x6CE65F0")]
	public static int GetStencilDepth(Transform transform, Transform stopAfter)
	{
		return default(int);
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x6CE6BD0", Offset = "0x6CE5BD0", VA = "0x6CE6BD0")]
	public static bool IsDescendantOrSelf(Transform father, Transform child)
	{
		return default(bool);
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x6CE6D00", Offset = "0x6CE5D00", VA = "0x6CE6D00")]
	public static RectMask2D GetRectMaskForClippable(IClippable clippable)
	{
		return null;
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x6CE7140", Offset = "0x6CE6140", VA = "0x6CE7140")]
	public static void GetRectMasksForClip(RectMask2D clipper, List<RectMask2D> masks)
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x6CE7530", Offset = "0x6CE6530", VA = "0x6CE7530")]
	public MaskUtilities()
	{
	}
}
