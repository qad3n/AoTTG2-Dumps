// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins.Core.PathCore;

[Token(Token = "0x200009B")]
internal abstract class ABSPathDecoder
{
	[Token(Token = "0x1700000D")]
	internal abstract int minInputWaypoints
	{
		[Token(Token = "0x600039B")]
		get;
	}

	[Token(Token = "0x6000399")]
	internal abstract void FinalizePath(Path p, Vector3[] wps, bool isClosedPath);

	[Token(Token = "0x600039A")]
	internal abstract Vector3 GetPoint(float perc, Vector3[] wps, Path p, ControlPoint[] controlPoints);

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x2380F90", Offset = "0x2380F90", VA = "0x2380F90")]
	protected ABSPathDecoder()
	{
	}
}
