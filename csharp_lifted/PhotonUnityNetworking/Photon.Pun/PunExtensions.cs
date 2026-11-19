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
	[Address(RVA = "0x56F94C0", Offset = "0x56F84C0", VA = "0x56F94C0")]
	public static ParameterInfo[] GetCachedParemeters(this MethodInfo mo)
	{
		return null;
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x56F95B0", Offset = "0x56F85B0", VA = "0x56F95B0")]
	public static PhotonView[] GetPhotonViewsInChildren(this GameObject go)
	{
		return null;
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x56F9600", Offset = "0x56F8600", VA = "0x56F9600")]
	public static PhotonView GetPhotonView(this GameObject go)
	{
		return null;
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x56F9640", Offset = "0x56F8640", VA = "0x56F9640")]
	public static bool AlmostEquals(this Vector3 target, Vector3 second, float sqrMagnitudePrecision)
	{
		return default(bool);
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x56F9670", Offset = "0x56F8670", VA = "0x56F9670")]
	public static bool AlmostEquals(this Vector2 target, Vector2 second, float sqrMagnitudePrecision)
	{
		return default(bool);
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x56F9690", Offset = "0x56F8690", VA = "0x56F9690")]
	public static bool AlmostEquals(this Quaternion target, Quaternion second, float maxAngle)
	{
		return default(bool);
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x56F9700", Offset = "0x56F8700", VA = "0x56F9700")]
	public static bool AlmostEquals(this float target, float second, float floatDiff)
	{
		return default(bool);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x56F9720", Offset = "0x56F8720", VA = "0x56F9720")]
	public static bool CheckIsAssignableFrom(this Type to, Type from)
	{
		return default(bool);
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x56F9740", Offset = "0x56F8740", VA = "0x56F9740")]
	public static bool CheckIsInterface(this Type to)
	{
		return default(bool);
	}
}
