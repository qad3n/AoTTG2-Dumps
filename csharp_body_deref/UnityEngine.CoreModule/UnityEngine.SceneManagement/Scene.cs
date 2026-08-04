// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SceneManagement.Scene
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.SceneManagement;

[Serializable]
[Token(Token = "0x20001FB")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/SceneManager/Scene.bindings.h")]
public struct Scene
{
	[Token(Token = "0x40006AB")]
	[FieldOffset(Offset = "0x0")]
	[HideInInspector]
	[SerializeField]
	private int m_Handle;

	[Token(Token = "0x1700024F")]
	public int handle
	{
		[Token(Token = "0x6000D9D")]
		[Address(RVA = "0x4E13DE0", Offset = "0x4E13DE0", VA = "0x4E13DE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000250")]
	internal string guid
	{
		[Token(Token = "0x6000D9E")]
		[Address(RVA = "0x4E13DF0", Offset = "0x4E13DF0", VA = "0x4E13DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000251")]
	public string name
	{
		[Token(Token = "0x6000DA0")]
		[Address(RVA = "0x4E13E50", Offset = "0x4E13E50", VA = "0x4E13E50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000252")]
	public bool isLoaded
	{
		[Token(Token = "0x6000DA1")]
		[Address(RVA = "0x4E13E80", Offset = "0x4E13E80", VA = "0x4E13E80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000253")]
	public int buildIndex
	{
		[Token(Token = "0x6000DA2")]
		[Address(RVA = "0x4E13EB0", Offset = "0x4E13EB0", VA = "0x4E13EB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000254")]
	public int rootCount
	{
		[Token(Token = "0x6000DA3")]
		[Address(RVA = "0x4E13EE0", Offset = "0x4E13EE0", VA = "0x4E13EE0")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x4E13C80", Offset = "0x4E13C80", VA = "0x4E13C80")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern bool IsValidInternal(int sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x4E13CB0", Offset = "0x4E13CB0", VA = "0x4E13CB0")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern string GetNameInternal(int sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x4E13CE0", Offset = "0x4E13CE0", VA = "0x4E13CE0")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern string GetGUIDInternal(int sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x4E13D10", Offset = "0x4E13D10", VA = "0x4E13D10")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern bool GetIsLoadedInternal(int sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x4E13D40", Offset = "0x4E13D40", VA = "0x4E13D40")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern int GetBuildIndexInternal(int sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x4E13D70", Offset = "0x4E13D70", VA = "0x4E13D70")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern int GetRootCountInternal(int sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x4E13DA0", Offset = "0x4E13DA0", VA = "0x4E13DA0")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void GetRootGameObjectsInternal(int sceneHandle, object resultRootList);

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x4E13E20", Offset = "0x4E13E20", VA = "0x4E13E20")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x4E13F10", Offset = "0x4E13F10", VA = "0x4E13F10")]
	public GameObject[] GetRootGameObjects()
	{
		return null;
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x4E13FD0", Offset = "0x4E13FD0", VA = "0x4E13FD0")]
	public void GetRootGameObjects(List<GameObject> rootGameObjects)
	{
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x4E14240", Offset = "0x4E14240", VA = "0x4E14240")]
	public static bool operator ==(Scene lhs, Scene rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x4E14250", Offset = "0x4E14250", VA = "0x4E14250", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x4E14260", Offset = "0x4E14260", VA = "0x4E14260", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}
}
