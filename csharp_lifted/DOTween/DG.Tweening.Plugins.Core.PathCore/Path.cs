// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Core.PathCore.Path
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins.Core.PathCore;

[Serializable]
[Token(Token = "0x200009E")]
public class Path
{
	[Token(Token = "0x40001AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static CatmullRomDecoder _catmullRomDecoder;

	[Token(Token = "0x40001AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static LinearDecoder _linearDecoder;

	[Token(Token = "0x40001AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static CubicBezierDecoder _cubicBezierDecoder;

	[Token(Token = "0x40001AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public float[] wpLengths;

	[Token(Token = "0x40001AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[SerializeField]
	public Vector3[] wps;

	[Token(Token = "0x40001B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[SerializeField]
	internal PathType type;

	[Token(Token = "0x40001B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	[SerializeField]
	internal int subdivisionsXSegment;

	[Token(Token = "0x40001B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal int subdivisions;

	[Token(Token = "0x40001B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[SerializeField]
	internal ControlPoint[] controlPoints;

	[Token(Token = "0x40001B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[SerializeField]
	internal float length;

	[Token(Token = "0x40001B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	[SerializeField]
	internal bool isFinalized;

	[Token(Token = "0x40001B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[SerializeField]
	internal float[] timesTable;

	[Token(Token = "0x40001B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[SerializeField]
	internal float[] lengthsTable;

	[Token(Token = "0x40001B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	internal int linearWPIndex;

	[Token(Token = "0x40001B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	internal bool addedExtraStartWp;

	[Token(Token = "0x40001BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x55")]
	internal bool addedExtraEndWp;

	[Token(Token = "0x40001BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	internal PathOptions plugOptions;

	[Token(Token = "0x40001BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Path _incrementalClone;

	[Token(Token = "0x40001BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private int _incrementalIndex;

	[Token(Token = "0x40001BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private ABSPathDecoder _decoder;

	[Token(Token = "0x40001BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private bool _changed;

	[Token(Token = "0x40001C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	internal Vector3[] nonLinearDrawWps;

	[Token(Token = "0x40001C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	internal Vector3 targetPosition;

	[Token(Token = "0x40001C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xFC")]
	internal Vector3? lookAtPosition;

	[Token(Token = "0x40001C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10C")]
	internal Color gizmoColor;

	[Token(Token = "0x17000010")]
	internal int minInputWaypoints
	{
		[Token(Token = "0x60003AA")]
		[Address(RVA = "0x3184BC0", Offset = "0x3183BC0", VA = "0x3184BC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x3192D00", Offset = "0x3191D00", VA = "0x3192D00")]
	public Path(PathType type, Vector3[] waypoints, int subdivisionsXSegment, [Optional] Color? gizmoColor)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x3193170", Offset = "0x3192170", VA = "0x3193170")]
	internal Path()
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x3184BF0", Offset = "0x3183BF0", VA = "0x3184BF0")]
	internal void FinalizePath(bool isClosedPath, AxisConstraint lockPositionAxes, Vector3 currTargetVal)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x3185880", Offset = "0x3184880", VA = "0x3185880")]
	internal Vector3 GetPoint(float perc, bool convertToConstantPerc = false)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x3185740", Offset = "0x3184740", VA = "0x3185740")]
	internal float ConvertToConstantPathPerc(float perc)
	{
		return default(float);
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x3186550", Offset = "0x3185550", VA = "0x3186550")]
	internal int GetWaypointIndexFromPerc(float perc, bool isMovingForward)
	{
		return default(int);
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x3193190", Offset = "0x3192190", VA = "0x3193190")]
	internal static Vector3[] GetDrawPoints(Path p, int drawSubdivisionsXSegment)
	{
		return null;
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x31932B0", Offset = "0x31922B0", VA = "0x31932B0")]
	internal static void RefreshNonLinearDrawWps(Path p)
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x3184320", Offset = "0x3183320", VA = "0x3184320")]
	internal void Destroy()
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x3185140", Offset = "0x3184140", VA = "0x3185140")]
	internal Path CloneIncremental(int loopIncrement)
	{
		return null;
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x3192EE0", Offset = "0x3191EE0", VA = "0x3192EE0")]
	internal void AssignWaypoints(Vector3[] newWps, bool cloneWps = false)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x3192FD0", Offset = "0x3191FD0", VA = "0x3192FD0")]
	internal void AssignDecoder(PathType pathType)
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x31933E0", Offset = "0x31923E0", VA = "0x31933E0")]
	internal void Draw()
	{
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x31933F0", Offset = "0x31923F0", VA = "0x31933F0")]
	private static void Draw(Path p)
	{
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x3193A60", Offset = "0x3192A60", VA = "0x3193A60")]
	private static Vector3 ConvertToDrawPoint(Vector3 wp, PathOptions plugOptions)
	{
		return default(Vector3);
	}
}
