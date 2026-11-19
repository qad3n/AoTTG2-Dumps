// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins.Core.PathCore;

[Token(Token = "0x200009C")]
internal class CatmullRomDecoder : ABSPathDecoder
{
	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ControlPoint[] _PartialControlPs;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector3[] _PartialWps;

	[Token(Token = "0x1700000E")]
	internal override int minInputWaypoints
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x31917B0", Offset = "0x31907B0", VA = "0x31917B0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x31917C0", Offset = "0x31907C0", VA = "0x31917C0", Slot = "4")]
	internal override void FinalizePath(Path p, Vector3[] wps, bool isClosedPath)
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x3192370", Offset = "0x3191370", VA = "0x3192370", Slot = "5")]
	internal override Vector3 GetPoint(float perc, Vector3[] wps, Path p, ControlPoint[] controlPoints)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x3191A90", Offset = "0x3190A90", VA = "0x3191A90")]
	internal void SetTimeToLengthTables(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x3191E80", Offset = "0x3190E80", VA = "0x3191E80")]
	internal void SetWaypointsLengths(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x31925F0", Offset = "0x31915F0", VA = "0x31925F0")]
	public CatmullRomDecoder()
	{
	}
}
