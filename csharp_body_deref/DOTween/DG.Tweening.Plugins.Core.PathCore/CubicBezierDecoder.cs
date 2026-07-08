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
		[Address(RVA = "0x2319610", Offset = "0x2319610", VA = "0x2319610", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x2319620", Offset = "0x2319620", VA = "0x2319620", Slot = "4")]
	internal override void FinalizePath(Path p, Vector3[] wps, bool isClosedPath)
	{
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x231A4E0", Offset = "0x231A4E0", VA = "0x231A4E0", Slot = "5")]
	internal override Vector3 GetPoint(float perc, Vector3[] wps, Path p, ControlPoint[] controlPoints)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x2319D60", Offset = "0x2319D60", VA = "0x2319D60")]
	internal void SetTimeToLengthTables(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x231A0D0", Offset = "0x231A0D0", VA = "0x231A0D0")]
	internal void SetWaypointsLengths(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x231A6A0", Offset = "0x231A6A0", VA = "0x231A6A0")]
	public CubicBezierDecoder()
	{
	}
}
