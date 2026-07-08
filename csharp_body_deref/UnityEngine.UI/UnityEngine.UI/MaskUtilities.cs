using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000056")]
public class MaskUtilities
{
	[Token(Token = "0x6000341")]
	[Address(RVA = "0x4DAEED0", Offset = "0x4DAEED0", VA = "0x4DAEED0")]
	public static void Notify2DMaskStateChanged(Component mask)
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x4DADDF0", Offset = "0x4DADDF0", VA = "0x4DADDF0")]
	public static void NotifyStencilStateChanged(Component mask)
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x4DAEA00", Offset = "0x4DAEA00", VA = "0x4DAEA00")]
	public static Transform FindRootSortOverrideCanvas(Transform start)
	{
		return null;
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x4DAEB90", Offset = "0x4DAEB90", VA = "0x4DAEB90")]
	public static int GetStencilDepth(Transform transform, Transform stopAfter)
	{
		return default(int);
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x4DAF140", Offset = "0x4DAF140", VA = "0x4DAF140")]
	public static bool IsDescendantOrSelf(Transform father, Transform child)
	{
		return default(bool);
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x4DAF290", Offset = "0x4DAF290", VA = "0x4DAF290")]
	public static RectMask2D GetRectMaskForClippable(IClippable clippable)
	{
		return null;
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x4DAF700", Offset = "0x4DAF700", VA = "0x4DAF700")]
	public static void GetRectMasksForClip(RectMask2D clipper, List<RectMask2D> masks)
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x4DAFAF0", Offset = "0x4DAFAF0", VA = "0x4DAFAF0")]
	public MaskUtilities()
	{
	}
}
