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
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.SceneManagement;

[Serializable]
[Token(Token = "0x200024B")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/SceneManager/Scene.bindings.h")]
public struct Scene
{
	[Token(Token = "0x4000752")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[HideInInspector]
	[SerializeField]
	private SceneHandle m_Handle;

	[Token(Token = "0x170002D8")]
	public SceneHandle handle
	{
		[Token(Token = "0x60011A5")]
		[Address(RVA = "0x6936250", Offset = "0x6935250", VA = "0x6936250")]
		get
		{
			return default(SceneHandle);
		}
	}

	[Token(Token = "0x170002D9")]
	internal string guid
	{
		[Token(Token = "0x60011A6")]
		[Address(RVA = "0x6936260", Offset = "0x6935260", VA = "0x6936260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DA")]
	public string name
	{
		[Token(Token = "0x60011A8")]
		[Address(RVA = "0x69362B0", Offset = "0x69352B0", VA = "0x69362B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DB")]
	public bool isLoaded
	{
		[Token(Token = "0x60011A9")]
		[Address(RVA = "0x69362C0", Offset = "0x69352C0", VA = "0x69362C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002DC")]
	public int buildIndex
	{
		[Token(Token = "0x60011AA")]
		[Address(RVA = "0x6936300", Offset = "0x6935300", VA = "0x6936300")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002DD")]
	public int rootCount
	{
		[Token(Token = "0x60011AB")]
		[Address(RVA = "0x6936340", Offset = "0x6935340", VA = "0x6936340")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600119E")]
	[Address(RVA = "0x6935D10", Offset = "0x6934D10", VA = "0x6935D10")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static bool IsValidInternal(SceneHandle sceneHandle)
	{
		return default(bool);
	}

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x6935D80", Offset = "0x6934D80", VA = "0x6935D80")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static string GetNameInternal(SceneHandle sceneHandle)
	{
		return null;
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x6935F00", Offset = "0x6934F00", VA = "0x6935F00")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static string GetGUIDInternal(SceneHandle sceneHandle)
	{
		return null;
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x6936080", Offset = "0x6935080", VA = "0x6936080")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static bool GetIsLoadedInternal(SceneHandle sceneHandle)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x69360F0", Offset = "0x69350F0", VA = "0x69360F0")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static int GetBuildIndexInternal(SceneHandle sceneHandle)
	{
		return default(int);
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x6936160", Offset = "0x6935160", VA = "0x6936160")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static int GetRootCountInternal(SceneHandle sceneHandle)
	{
		return default(int);
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x69361D0", Offset = "0x69351D0", VA = "0x69361D0")]
	[UnityEngine.Bindings.StaticAccessor("SceneBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static void GetRootGameObjectsInternal(SceneHandle sceneHandle, object resultRootList)
	{
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x6936270", Offset = "0x6935270", VA = "0x6936270")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x6936380", Offset = "0x6935380", VA = "0x6936380")]
	public GameObject[] GetRootGameObjects()
	{
		return null;
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x6936450", Offset = "0x6935450", VA = "0x6936450")]
	public void GetRootGameObjects(List<GameObject> rootGameObjects)
	{
	}

	[Token(Token = "0x60011AE")]
	[Address(RVA = "0x69366E0", Offset = "0x69356E0", VA = "0x69366E0")]
	public static bool operator ==(Scene lhs, Scene rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x6936700", Offset = "0x6935700", VA = "0x6936700", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x6936720", Offset = "0x6935720", VA = "0x6936720", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B1")]
	[Address(RVA = "0x6935D50", Offset = "0x6934D50", VA = "0x6935D50")]
	private static extern bool IsValidInternal_Injected([In] ref SceneHandle sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B2")]
	[Address(RVA = "0x6935EC0", Offset = "0x6934EC0", VA = "0x6935EC0")]
	private static extern void GetNameInternal_Injected([In] ref SceneHandle sceneHandle, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B3")]
	[Address(RVA = "0x6936040", Offset = "0x6935040", VA = "0x6936040")]
	private static extern void GetGUIDInternal_Injected([In] ref SceneHandle sceneHandle, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B4")]
	[Address(RVA = "0x69360C0", Offset = "0x69350C0", VA = "0x69360C0")]
	private static extern bool GetIsLoadedInternal_Injected([In] ref SceneHandle sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B5")]
	[Address(RVA = "0x6936130", Offset = "0x6935130", VA = "0x6936130")]
	private static extern int GetBuildIndexInternal_Injected([In] ref SceneHandle sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B6")]
	[Address(RVA = "0x69361A0", Offset = "0x69351A0", VA = "0x69361A0")]
	private static extern int GetRootCountInternal_Injected([In] ref SceneHandle sceneHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011B7")]
	[Address(RVA = "0x6936210", Offset = "0x6935210", VA = "0x6936210")]
	private static extern void GetRootGameObjectsInternal_Injected([In] ref SceneHandle sceneHandle, object resultRootList);
}
