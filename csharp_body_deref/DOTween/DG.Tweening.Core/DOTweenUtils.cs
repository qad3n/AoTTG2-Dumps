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
	[Address(RVA = "0x2326420", Offset = "0x2326420", VA = "0x2326420")]
	internal static Vector3 Vector3FromAngle(float degrees, float magnitude)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x2326470", Offset = "0x2326470", VA = "0x2326470")]
	internal static float Angle2D(Vector3 from, Vector3 to)
	{
		return default(float);
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x2326640", Offset = "0x2326640", VA = "0x2326640")]
	internal static Vector3 RotateAroundPivot(Vector3 point, Vector3 pivot, Quaternion rotation)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x2326680", Offset = "0x2326680", VA = "0x2326680")]
	public static Vector2 GetPointOnCircle(Vector2 center, float radius, float degrees)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x23266E0", Offset = "0x23266E0", VA = "0x23266E0")]
	internal static bool Vector3AreApproximatelyEqual(Vector3 a, Vector3 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x23267E0", Offset = "0x23267E0", VA = "0x23267E0")]
	internal static Type GetLooseScriptType(string typeName)
	{
		return null;
	}
}
