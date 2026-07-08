using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.SceneManagement;

[Serializable]
[Token(Token = "0x20001F8")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/SceneManager/Scene.bindings.h")]
public struct Scene
{
	[Token(Token = "0x40006AB")]
	[FieldOffset(Offset = "0x0")]
	[HideInInspector]
	[SerializeField]
	private int m_Handle;

	[Token(Token = "0x1700024E")]
	public int handle
	{
		[Token(Token = "0x6000D9B")]
		[Address(RVA = "0x4AEC4B0", Offset = "0x4AEC4B0", VA = "0x4AEC4B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700024F")]
	internal string guid
	{
		[Token(Token = "0x6000D9C")]
		[Address(RVA = "0x4AEC4C0", Offset = "0x4AEC4C0", VA = "0x4AEC4C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000250")]
	public string name
	{
		[Token(Token = "0x6000D9E")]
		[Address(RVA = "0x4AEC520", Offset = "0x4AEC520", VA = "0x4AEC520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000251")]
	public bool isLoaded
	{
		[Token(Token = "0x6000D9F")]
		[Address(RVA = "0x4AEC550", Offset = "0x4AEC550", VA = "0x4AEC550")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000252")]
	public int buildIndex
	{
		[Token(Token = "0x6000DA0")]
		[Address(RVA = "0x4AEC580", Offset = "0x4AEC580", VA = "0x4AEC580")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000253")]
	public int rootCount
	{
		[Token(Token = "0x6000DA1")]
		[Address(RVA = "0x4AEC5B0", Offset = "0x4AEC5B0", VA = "0x4AEC5B0")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x4AEC350", Offset = "0x4AEC350", VA = "0x4AEC350")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern bool IsValidInternal(int sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x4AEC380", Offset = "0x4AEC380", VA = "0x4AEC380")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern string GetNameInternal(int sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x4AEC3B0", Offset = "0x4AEC3B0", VA = "0x4AEC3B0")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern string GetGUIDInternal(int sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x4AEC3E0", Offset = "0x4AEC3E0", VA = "0x4AEC3E0")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern bool GetIsLoadedInternal(int sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x4AEC410", Offset = "0x4AEC410", VA = "0x4AEC410")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern int GetBuildIndexInternal(int sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x4AEC440", Offset = "0x4AEC440", VA = "0x4AEC440")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern int GetRootCountInternal(int sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x4AEC470", Offset = "0x4AEC470", VA = "0x4AEC470")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void GetRootGameObjectsInternal(int sceneHandle, object resultRootList);

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x4AEC4F0", Offset = "0x4AEC4F0", VA = "0x4AEC4F0")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x4AEC5E0", Offset = "0x4AEC5E0", VA = "0x4AEC5E0")]
	public GameObject[] GetRootGameObjects()
	{
		return null;
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x4AEC6A0", Offset = "0x4AEC6A0", VA = "0x4AEC6A0")]
	public void GetRootGameObjects(List<GameObject> rootGameObjects)
	{
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x4AEC910", Offset = "0x4AEC910", VA = "0x4AEC910")]
	public static bool operator ==(Scene lhs, Scene rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x4AEC920", Offset = "0x4AEC920", VA = "0x4AEC920", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x4AEC930", Offset = "0x4AEC930", VA = "0x4AEC930", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}
}
