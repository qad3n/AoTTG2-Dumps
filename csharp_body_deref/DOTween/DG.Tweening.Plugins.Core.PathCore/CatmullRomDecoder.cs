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
		[Address(RVA = "0x231A8D0", Offset = "0x231A8D0", VA = "0x231A8D0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x231A8E0", Offset = "0x231A8E0", VA = "0x231A8E0", Slot = "4")]
	internal override void FinalizePath(Path p, Vector3[] wps, bool isClosedPath)
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x231B3B0", Offset = "0x231B3B0", VA = "0x231B3B0", Slot = "5")]
	internal override Vector3 GetPoint(float perc, Vector3[] wps, Path p, ControlPoint[] controlPoints)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x231AB70", Offset = "0x231AB70", VA = "0x231AB70")]
	internal void SetTimeToLengthTables(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x231AEE0", Offset = "0x231AEE0", VA = "0x231AEE0")]
	internal void SetWaypointsLengths(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x231B650", Offset = "0x231B650", VA = "0x231B650")]
	public CatmullRomDecoder()
	{
	}
}
