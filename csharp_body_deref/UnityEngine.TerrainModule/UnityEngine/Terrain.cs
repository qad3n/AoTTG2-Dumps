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
[UnityEngine.Bindings.NativeHeader("Runtime/Interfaces/ITerrainManager.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Terrain/Public/Terrain.h")]
[UnityEngine.Bindings.StaticAccessor("GetITerrainManager()", UnityEngine.Bindings.StaticAccessorType.Arrow)]
[UnityEngine.Bindings.NativeHeader("TerrainScriptingClasses.h")]
public sealed class Terrain : Behaviour
{
	[Token(Token = "0x17000001")]
	public TerrainData terrainData
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x4E9F4A0", Offset = "0x4E9F4A0", VA = "0x4E9F4A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public bool allowAutoConnect
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x4E9F570", Offset = "0x4E9F570", VA = "0x4E9F570")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000003")]
	public int groupingID
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4E9F640", Offset = "0x4E9F640", VA = "0x4E9F640")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000004")]
	[UnityEngine.Bindings.NativeProperty("ActiveTerrainsScriptingArray")]
	public static extern Terrain[] activeTerrains
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4E9F9A0", Offset = "0x4E9F9A0", VA = "0x4E9F9A0")]
		get;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4E9F710", Offset = "0x4E9F710", VA = "0x4E9F710")]
	public void SetNeighbors(Terrain left, Terrain top, Terrain right, Terrain bottom)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4E9F9D0", Offset = "0x4E9F9D0", VA = "0x4E9F9D0")]
	public Terrain()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4E9F540", Offset = "0x4E9F540", VA = "0x4E9F540")]
	private static extern TerrainData get_terrainData_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4E9F610", Offset = "0x4E9F610", VA = "0x4E9F610")]
	private static extern bool get_allowAutoConnect_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4E9F6E0", Offset = "0x4E9F6E0", VA = "0x4E9F6E0")]
	private static extern int get_groupingID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4E9F940", Offset = "0x4E9F940", VA = "0x4E9F940")]
	private static extern void SetNeighbors_Injected(IntPtr _unity_self, IntPtr left, IntPtr top, IntPtr right, IntPtr bottom);
}
