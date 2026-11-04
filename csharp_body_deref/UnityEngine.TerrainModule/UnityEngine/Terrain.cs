// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Terrain
// Update status: CHANGED in this game update
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
[UnityEngine.Bindings.StaticAccessor("GetITerrainManager()", UnityEngine.Bindings.StaticAccessorType.Arrow)]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("TerrainScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Interfaces/ITerrainManager.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Terrain/Public/Terrain.h")]
public sealed class Terrain : Behaviour
{
	[Token(Token = "0x17000001")]
	public TerrainData terrainData
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x2FFC4B0", Offset = "0x2FFAAB0", VA = "0x182FFC4B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public Material materialTemplate
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x2FFC3D0", Offset = "0x2FFA9D0", VA = "0x182FFC3D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x2FFC680", Offset = "0x2FFAC80", VA = "0x182FFC680")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public bool allowAutoConnect
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x2FFC250", Offset = "0x2FFA850", VA = "0x182FFC250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public int groupingID
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x2FFC310", Offset = "0x2FFA910", VA = "0x182FFC310")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000005")]
	public bool drawInstanced
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x2FFC5A0", Offset = "0x2FFABA0", VA = "0x182FFC5A0")]
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
		[Address(RVA = "0x2FFC1E0", Offset = "0x2FFA7E0", VA = "0x182FFC1E0")]
		get;
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x2FFC0A0", Offset = "0x2FFA6A0", VA = "0x182FFC0A0")]
	public void SetNeighbors(Terrain left, Terrain top, Terrain right, Terrain bottom)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public Terrain()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x2FFC470", Offset = "0x2FFAA70", VA = "0x182FFC470")]
	private static extern IntPtr get_terrainData_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000B")]
	[Address(RVA = "0x2FFC390", Offset = "0x2FFA990", VA = "0x182FFC390")]
	private static extern IntPtr get_materialTemplate_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000C")]
	[Address(RVA = "0x2FFC630", Offset = "0x2FFAC30", VA = "0x182FFC630")]
	private static extern void set_materialTemplate_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000D")]
	[Address(RVA = "0x2FFC210", Offset = "0x2FFA810", VA = "0x182FFC210")]
	private static extern bool get_allowAutoConnect_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000E")]
	[Address(RVA = "0x2FFC2D0", Offset = "0x2FFA8D0", VA = "0x182FFC2D0")]
	private static extern int get_groupingID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000F")]
	[Address(RVA = "0x2FFC550", Offset = "0x2FFAB50", VA = "0x182FFC550")]
	private static extern void set_drawInstanced_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000010")]
	[Address(RVA = "0x2FFC050", Offset = "0x2FFA650", VA = "0x182FFC050")]
	private static extern void SetNeighbors_Injected(IntPtr _unity_self, IntPtr left, IntPtr top, IntPtr right, IntPtr bottom);
}
