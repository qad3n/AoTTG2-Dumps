// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AI.NavMeshObstacle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.AI;

[Token(Token = "0x2000006")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/Components/NavMeshObstacle.bindings.h")]
[HelpURL("https://docs.unity3d.com/Packages/com.unity.ai.navigation@2.0/manual/NavMeshObstacle.html")]
[MovedFrom("UnityEngine")]
public sealed class NavMeshObstacle : Behaviour
{
	[Token(Token = "0x17000013")]
	public float height
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x2E98510", Offset = "0x2E96B10", VA = "0x182E98510")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x2E98AF0", Offset = "0x2E970F0", VA = "0x182E98AF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public float radius
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x2E985D0", Offset = "0x2E96BD0", VA = "0x182E985D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x2E98BD0", Offset = "0x2E971D0", VA = "0x182E98BD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public bool carving
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x2E98360", Offset = "0x2E96960", VA = "0x182E98360")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x2E98930", Offset = "0x2E96F30", VA = "0x182E98930")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public bool carveOnlyStationary
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x2E982A0", Offset = "0x2E968A0", VA = "0x182E982A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x2E98850", Offset = "0x2E96E50", VA = "0x182E98850")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public NavMeshObstacleShape shape
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x2E98690", Offset = "0x2E96C90", VA = "0x182E98690")]
		get
		{
			return default(NavMeshObstacleShape);
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x2E98CA0", Offset = "0x2E972A0", VA = "0x182E98CA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Vector3 center
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x2E98430", Offset = "0x2E96A30", VA = "0x182E98430")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x2E98A10", Offset = "0x2E97010", VA = "0x182E98A10")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public Vector3 size
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x2E98760", Offset = "0x2E96D60", VA = "0x182E98760")]
		[UnityEngine.Bindings.FreeFunction("NavMeshObstacleScriptBindings::GetSize", HasExplicitThis = true)]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x2E98D80", Offset = "0x2E97380", VA = "0x182E98D80")]
		[UnityEngine.Bindings.FreeFunction("NavMeshObstacleScriptBindings::SetSize", HasExplicitThis = true)]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x2E984D0", Offset = "0x2E96AD0", VA = "0x182E984D0")]
	private static extern float get_height_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x2E98AA0", Offset = "0x2E970A0", VA = "0x182E98AA0")]
	private static extern void set_height_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x2E98590", Offset = "0x2E96B90", VA = "0x182E98590")]
	private static extern float get_radius_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x2E98B80", Offset = "0x2E97180", VA = "0x182E98B80")]
	private static extern void set_radius_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x2E98320", Offset = "0x2E96920", VA = "0x182E98320")]
	private static extern bool get_carving_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x2E988E0", Offset = "0x2E96EE0", VA = "0x182E988E0")]
	private static extern void set_carving_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2E98260", Offset = "0x2E96860", VA = "0x182E98260")]
	private static extern bool get_carveOnlyStationary_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x2E98800", Offset = "0x2E96E00", VA = "0x182E98800")]
	private static extern void set_carveOnlyStationary_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x2E98650", Offset = "0x2E96C50", VA = "0x182E98650")]
	private static extern NavMeshObstacleShape get_shape_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x2E98C60", Offset = "0x2E97260", VA = "0x182E98C60")]
	private static extern void set_shape_Injected(IntPtr _unity_self, NavMeshObstacleShape value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x2E983E0", Offset = "0x2E969E0", VA = "0x182E983E0")]
	private static extern void get_center_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x2E989C0", Offset = "0x2E96FC0", VA = "0x182E989C0")]
	private static extern void set_center_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x2E98710", Offset = "0x2E96D10", VA = "0x182E98710")]
	private static extern void get_size_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x2E98D30", Offset = "0x2E97330", VA = "0x182E98D30")]
	private static extern void set_size_Injected(IntPtr _unity_self, [In] ref Vector3 value);
}
