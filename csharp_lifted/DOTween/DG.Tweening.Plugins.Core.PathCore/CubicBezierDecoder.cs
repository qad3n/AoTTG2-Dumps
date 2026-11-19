// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Core.PathCore.CubicBezierDecoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins.Core.PathCore;

[Token(Token = "0x2000099")]
internal class CubicBezierDecoder : ABSPathDecoder
{
	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ControlPoint[] _PartialControlPs;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector3[] _PartialWps;

	[Token(Token = "0x1700000C")]
	internal override int minInputWaypoints
	{
		[Token(Token = "0x600038F")]
		[Address(RVA = "0x31904E0", Offset = "0x318F4E0", VA = "0x31904E0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x31904F0", Offset = "0x318F4F0", VA = "0x31904F0", Slot = "4")]
	internal override void FinalizePath(Path p, Vector3[] wps, bool isClosedPath)
	{
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x31913B0", Offset = "0x31903B0", VA = "0x31913B0", Slot = "5")]
	internal override Vector3 GetPoint(float perc, Vector3[] wps, Path p, ControlPoint[] controlPoints)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x3190BF0", Offset = "0x318FBF0", VA = "0x3190BF0")]
	internal void SetTimeToLengthTables(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x3190FE0", Offset = "0x318FFE0", VA = "0x3190FE0")]
	internal void SetWaypointsLengths(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x3191570", Offset = "0x3190570", VA = "0x3191570")]
	public CubicBezierDecoder()
	{
	}
}
