// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Core.DOTweenUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Core;

[Token(Token = "0x20000B8")]
public static class DOTweenUtils
{
	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x0")]
	private static Assembly[] _loadedAssemblies;

	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] _defAssembliesToQuery;

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x577DA0", Offset = "0x5763A0", VA = "0x180577DA0")]
	internal static Vector3 Vector3FromAngle(float degrees, float magnitude)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x577720", Offset = "0x575D20", VA = "0x180577720")]
	internal static float Angle2D(Vector3 from, Vector3 to)
	{
		return default(float);
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x577CB0", Offset = "0x5762B0", VA = "0x180577CB0")]
	internal static Vector3 RotateAroundPivot(Vector3 point, Vector3 pivot, Quaternion rotation)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x577C20", Offset = "0x576220", VA = "0x180577C20")]
	public static Vector2 GetPointOnCircle(Vector2 center, float radius, float degrees)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x577D30", Offset = "0x576330", VA = "0x180577D30")]
	internal static bool Vector3AreApproximatelyEqual(Vector3 a, Vector3 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x577940", Offset = "0x575F40", VA = "0x180577940")]
	internal static Type GetLooseScriptType(string typeName)
	{
		return null;
	}
}
