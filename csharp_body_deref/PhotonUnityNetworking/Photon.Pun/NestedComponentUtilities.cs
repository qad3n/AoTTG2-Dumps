// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.NestedComponentUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/Utilities/NestedComponentUtilities.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000027")]
public static class NestedComponentUtilities
{
	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x0")]
	private static Queue<Transform> nodesQueue;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<Type, ICollection> searchLists;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x10")]
	private static Stack<Transform> nodeStack;

	[Token(Token = "0x6000187")]
	public static T EnsureRootComponentExists<T, NestedT>(this Transform transform) where T : Component where NestedT : Component
	{
		return null;
	}

	[Token(Token = "0x6000188")]
	public static T GetParentComponent<T>(this Transform t) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000189")]
	public static void GetNestedComponentsInParents<T>(this Transform t, List<T> list) where T : Component
	{
	}

	[Token(Token = "0x600018A")]
	public static T GetNestedComponentInChildren<T, NestedT>(this Transform t, bool includeInactive) where T : class where NestedT : class
	{
		return null;
	}

	[Token(Token = "0x600018B")]
	public static T GetNestedComponentInParent<T, NestedT>(this Transform t) where T : class where NestedT : class
	{
		return null;
	}

	[Token(Token = "0x600018C")]
	public static T GetNestedComponentInParents<T, NestedT>(this Transform t) where T : class where NestedT : class
	{
		return null;
	}

	[Token(Token = "0x600018D")]
	public static void GetNestedComponentsInParents<T, NestedT>(this Transform t, List<T> list) where T : class where NestedT : class
	{
	}

	[Token(Token = "0x600018E")]
	public static List<T> GetNestedComponentsInChildren<T, NestedT>(this Transform t, List<T> list, bool includeInactive = true) where T : class where NestedT : class
	{
		return null;
	}

	[Token(Token = "0x600018F")]
	public static List<T> GetNestedComponentsInChildren<T>(this Transform t, List<T> list, bool includeInactive = true, params Type[] stopOn) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000190")]
	public static void GetNestedComponentsInChildren<T, SearchT, NestedT>(this Transform t, bool includeInactive, List<T> list) where T : class where SearchT : class
	{
	}
}
