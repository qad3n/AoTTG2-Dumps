// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Terrain
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000002")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Terrain/Public/Terrain.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Interfaces/ITerrainManager.h")]
[UnityEngine.Bindings.NativeHeader("TerrainScriptingClasses.h")]
[UnityEngine.Bindings.StaticAccessor("GetITerrainManager()", UnityEngine.Bindings.StaticAccessorType.Arrow)]
public sealed class Terrain : Behaviour
{
	[Token(Token = "0x17000001")]
	public TerrainData terrainData
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x69F31B0", Offset = "0x69F21B0", VA = "0x69F31B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public Material materialTemplate
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x69F3280", Offset = "0x69F2280", VA = "0x69F3280")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x69F3350", Offset = "0x69F2350", VA = "0x69F3350")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public bool allowAutoConnect
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x69F3460", Offset = "0x69F2460", VA = "0x69F3460")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public int groupingID
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x69F3510", Offset = "0x69F2510", VA = "0x69F3510")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000005")]
	public bool drawInstanced
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x69F35C0", Offset = "0x69F25C0", VA = "0x69F35C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	[UnityEngine.Bindings.NativeProperty("ActiveTerrainsScriptingArray")]
	public static extern Terrain[] activeTerrains
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x69F38B0", Offset = "0x69F28B0", VA = "0x69F38B0")]
		get;
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x69F3680", Offset = "0x69F2680", VA = "0x69F3680")]
	public void SetNeighbors(Terrain left, Terrain top, Terrain right, Terrain bottom)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x69F38E0", Offset = "0x69F28E0", VA = "0x69F38E0")]
	public Terrain()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x69F3250", Offset = "0x69F2250", VA = "0x69F3250")]
	private static extern IntPtr get_terrainData_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000B")]
	[Address(RVA = "0x69F3320", Offset = "0x69F2320", VA = "0x69F3320")]
	private static extern IntPtr get_materialTemplate_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000C")]
	[Address(RVA = "0x69F3420", Offset = "0x69F2420", VA = "0x69F3420")]
	private static extern void set_materialTemplate_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000D")]
	[Address(RVA = "0x69F34E0", Offset = "0x69F24E0", VA = "0x69F34E0")]
	private static extern bool get_allowAutoConnect_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000E")]
	[Address(RVA = "0x69F3590", Offset = "0x69F2590", VA = "0x69F3590")]
	private static extern int get_groupingID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000F")]
	[Address(RVA = "0x69F3640", Offset = "0x69F2640", VA = "0x69F3640")]
	private static extern void set_drawInstanced_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000010")]
	[Address(RVA = "0x69F3850", Offset = "0x69F2850", VA = "0x69F3850")]
	private static extern void SetNeighbors_Injected(IntPtr _unity_self, IntPtr left, IntPtr top, IntPtr right, IntPtr bottom);
}
