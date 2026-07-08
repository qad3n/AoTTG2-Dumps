using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000025")]
public static class PunExtensions
{
	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x0")]
	public static Dictionary<MethodInfo, ParameterInfo[]> ParametersOfMethods;

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x3C18BD0", Offset = "0x3C18BD0", VA = "0x3C18BD0")]
	public static ParameterInfo[] GetCachedParemeters(this MethodInfo mo)
	{
		return null;
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x3C18CC0", Offset = "0x3C18CC0", VA = "0x3C18CC0")]
	public static PhotonView[] GetPhotonViewsInChildren(this GameObject go)
	{
		return null;
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x3C18D10", Offset = "0x3C18D10", VA = "0x3C18D10")]
	public static PhotonView GetPhotonView(this GameObject go)
	{
		return null;
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x3C18D50", Offset = "0x3C18D50", VA = "0x3C18D50")]
	public static bool AlmostEquals(this Vector3 target, Vector3 second, float sqrMagnitudePrecision)
	{
		return default(bool);
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x3C18D90", Offset = "0x3C18D90", VA = "0x3C18D90")]
	public static bool AlmostEquals(this Vector2 target, Vector2 second, float sqrMagnitudePrecision)
	{
		return default(bool);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x3C18DB0", Offset = "0x3C18DB0", VA = "0x3C18DB0")]
	public static bool AlmostEquals(this Quaternion target, Quaternion second, float maxAngle)
	{
		return default(bool);
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x3C18E20", Offset = "0x3C18E20", VA = "0x3C18E20")]
	public static bool AlmostEquals(this float target, float second, float floatDiff)
	{
		return default(bool);
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x3C18E40", Offset = "0x3C18E40", VA = "0x3C18E40")]
	public static bool CheckIsAssignableFrom(this Type to, Type from)
	{
		return default(bool);
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x3C18E60", Offset = "0x3C18E60", VA = "0x3C18E60")]
	public static bool CheckIsInterface(this Type to)
	{
		return default(bool);
	}
}
