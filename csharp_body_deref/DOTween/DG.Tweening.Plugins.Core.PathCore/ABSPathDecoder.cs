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
	[Address(RVA = "0x231A6B0", Offset = "0x231A6B0", VA = "0x231A6B0")]
	protected ABSPathDecoder()
	{
	}
}
