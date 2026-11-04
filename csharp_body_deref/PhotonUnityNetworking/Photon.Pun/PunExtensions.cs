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

[Token(Token = "0x2000023")]
public static class PunExtensions
{
	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x0")]
	public static Dictionary<MethodInfo, ParameterInfo[]> ParametersOfMethods;

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x1D67660", Offset = "0x1D65C60", VA = "0x181D67660")]
	public static ParameterInfo[] GetCachedParemeters(this MethodInfo mo)
	{
		return null;
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x1D677C0", Offset = "0x1D65DC0", VA = "0x181D677C0")]
	public static PhotonView[] GetPhotonViewsInChildren(this GameObject go)
	{
		return null;
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x1D67770", Offset = "0x1D65D70", VA = "0x181D67770")]
	public static PhotonView GetPhotonView(this GameObject go)
	{
		return null;
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x1D67540", Offset = "0x1D65B40", VA = "0x181D67540")]
	public static bool AlmostEquals(this Vector3 target, Vector3 second, float sqrMagnitudePrecision)
	{
		return default(bool);
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x1D67500", Offset = "0x1D65B00", VA = "0x181D67500")]
	public static bool AlmostEquals(this Vector2 target, Vector2 second, float sqrMagnitudePrecision)
	{
		return default(bool);
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x1D675A0", Offset = "0x1D65BA0", VA = "0x181D675A0")]
	public static bool AlmostEquals(this Quaternion target, Quaternion second, float maxAngle)
	{
		return default(bool);
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x1D67580", Offset = "0x1D65B80", VA = "0x181D67580")]
	public static bool AlmostEquals(this float target, float second, float floatDiff)
	{
		return default(bool);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x1D67630", Offset = "0x1D65C30", VA = "0x181D67630")]
	public static bool CheckIsAssignableFrom(this Type to, Type from)
	{
		return default(bool);
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x1C53BB0", Offset = "0x1C521B0", VA = "0x181C53BB0")]
	public static bool CheckIsInterface(this Type to)
	{
		return default(bool);
	}
}
