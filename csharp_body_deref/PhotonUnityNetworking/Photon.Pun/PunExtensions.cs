// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PunExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/PunClasses.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3F0E520", Offset = "0x3F0E520", VA = "0x3F0E520")]
	public static ParameterInfo[] GetCachedParemeters(this MethodInfo mo)
	{
		return null;
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x3F0E610", Offset = "0x3F0E610", VA = "0x3F0E610")]
	public static PhotonView[] GetPhotonViewsInChildren(this GameObject go)
	{
		return null;
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x3F0E660", Offset = "0x3F0E660", VA = "0x3F0E660")]
	public static PhotonView GetPhotonView(this GameObject go)
	{
		return null;
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x3F0E6A0", Offset = "0x3F0E6A0", VA = "0x3F0E6A0")]
	public static bool AlmostEquals(this Vector3 target, Vector3 second, float sqrMagnitudePrecision)
	{
		return default(bool);
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x3F0E6E0", Offset = "0x3F0E6E0", VA = "0x3F0E6E0")]
	public static bool AlmostEquals(this Vector2 target, Vector2 second, float sqrMagnitudePrecision)
	{
		return default(bool);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x3F0E700", Offset = "0x3F0E700", VA = "0x3F0E700")]
	public static bool AlmostEquals(this Quaternion target, Quaternion second, float maxAngle)
	{
		return default(bool);
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x3F0E770", Offset = "0x3F0E770", VA = "0x3F0E770")]
	public static bool AlmostEquals(this float target, float second, float floatDiff)
	{
		return default(bool);
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x3F0E790", Offset = "0x3F0E790", VA = "0x3F0E790")]
	public static bool CheckIsAssignableFrom(this Type to, Type from)
	{
		return default(bool);
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x3F0E7B0", Offset = "0x3F0E7B0", VA = "0x3F0E7B0")]
	public static bool CheckIsInterface(this Type to)
	{
		return default(bool);
	}
}
