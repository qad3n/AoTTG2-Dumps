// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SceneManagement.Scene
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.SceneManagement;

[Serializable]
[Token(Token = "0x200024B")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/SceneManager/Scene.bindings.h")]
public struct Scene
{
	[Token(Token = "0x4000754")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[SerializeField]
	[HideInInspector]
	private SceneHandle m_Handle;

	[Token(Token = "0x170002D3")]
	public SceneHandle handle
	{
		[Token(Token = "0x6001191")]
		[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930")]
		get
		{
			return default(SceneHandle);
		}
	}

	[Token(Token = "0x170002D4")]
	internal string guid
	{
		[Token(Token = "0x6001192")]
		[Address(RVA = "0x2F577B0", Offset = "0x2F55DB0", VA = "0x182F577B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D5")]
	public string name
	{
		[Token(Token = "0x6001194")]
		[Address(RVA = "0x2F57800", Offset = "0x2F55E00", VA = "0x182F57800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D6")]
	public bool isLoaded
	{
		[Token(Token = "0x6001195")]
		[Address(RVA = "0x2F577C0", Offset = "0x2F55DC0", VA = "0x182F577C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D7")]
	public int buildIndex
	{
		[Token(Token = "0x6001196")]
		[Address(RVA = "0x2F57770", Offset = "0x2F55D70", VA = "0x182F57770")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002D8")]
	public int rootCount
	{
		[Token(Token = "0x6001197")]
		[Address(RVA = "0x2F57810", Offset = "0x2F55E10", VA = "0x182F57810")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x2F576F0", Offset = "0x2F55CF0", VA = "0x182F576F0")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static bool IsValidInternal(SceneHandle sceneHandle)
	{
		return default(bool);
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x2F571B0", Offset = "0x2F557B0", VA = "0x182F571B0")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static string GetNameInternal(SceneHandle sceneHandle)
	{
		return null;
	}

	[Token(Token = "0x600118C")]
	[Address(RVA = "0x2F57040", Offset = "0x2F55640", VA = "0x182F57040")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static string GetGUIDInternal(SceneHandle sceneHandle)
	{
		return null;
	}

	[Token(Token = "0x600118D")]
	[Address(RVA = "0x2F57120", Offset = "0x2F55720", VA = "0x182F57120")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static bool GetIsLoadedInternal(SceneHandle sceneHandle)
	{
		return default(bool);
	}

	[Token(Token = "0x600118E")]
	[Address(RVA = "0x2F56FB0", Offset = "0x2F555B0", VA = "0x182F56FB0")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static int GetBuildIndexInternal(SceneHandle sceneHandle)
	{
		return default(int);
	}

	[Token(Token = "0x600118F")]
	[Address(RVA = "0x2F57280", Offset = "0x2F55880", VA = "0x182F57280")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static int GetRootCountInternal(SceneHandle sceneHandle)
	{
		return default(int);
	}

	[Token(Token = "0x6001190")]
	[Address(RVA = "0x2F57310", Offset = "0x2F55910", VA = "0x182F57310")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static void GetRootGameObjectsInternal(SceneHandle sceneHandle, object resultRootList)
	{
	}

	[Token(Token = "0x6001193")]
	[Address(RVA = "0x2F57730", Offset = "0x2F55D30", VA = "0x182F57730")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6001198")]
	[Address(RVA = "0x2F575E0", Offset = "0x2F55BE0", VA = "0x182F575E0")]
	public GameObject[] GetRootGameObjects()
	{
		return null;
	}

	[Token(Token = "0x6001199")]
	[Address(RVA = "0x2F57350", Offset = "0x2F55950", VA = "0x182F57350")]
	public void GetRootGameObjects(List<GameObject> rootGameObjects)
	{
	}

	[Token(Token = "0x600119A")]
	[Address(RVA = "0x2F57850", Offset = "0x2F55E50", VA = "0x182F57850")]
	public static bool operator ==(Scene lhs, Scene rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600119B")]
	[Address(RVA = "0x2F570D0", Offset = "0x2F556D0", VA = "0x182F570D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x2F56EE0", Offset = "0x2F554E0", VA = "0x182F56EE0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600119D")]
	[Address(RVA = "0x2F576B0", Offset = "0x2F55CB0", VA = "0x182F576B0")]
	private static extern bool IsValidInternal_Injected([In] ref SceneHandle sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600119E")]
	[Address(RVA = "0x2F57160", Offset = "0x2F55760", VA = "0x182F57160")]
	private static extern void GetNameInternal_Injected([In] ref SceneHandle sceneHandle, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600119F")]
	[Address(RVA = "0x2F56FF0", Offset = "0x2F555F0", VA = "0x182F56FF0")]
	private static extern void GetGUIDInternal_Injected([In] ref SceneHandle sceneHandle, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x2F570E0", Offset = "0x2F556E0", VA = "0x182F570E0")]
	private static extern bool GetIsLoadedInternal_Injected([In] ref SceneHandle sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x2F56F70", Offset = "0x2F55570", VA = "0x182F56F70")]
	private static extern int GetBuildIndexInternal_Injected([In] ref SceneHandle sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x2F57240", Offset = "0x2F55840", VA = "0x182F57240")]
	private static extern int GetRootCountInternal_Injected([In] ref SceneHandle sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x2F572C0", Offset = "0x2F558C0", VA = "0x182F572C0")]
	private static extern void GetRootGameObjectsInternal_Injected([In] ref SceneHandle sceneHandle, object resultRootList);
}
