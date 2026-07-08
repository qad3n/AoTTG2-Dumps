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
		[Address(RVA = "0x4B77B70", Offset = "0x4B77B70", VA = "0x4B77B70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public bool allowAutoConnect
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x4B77C40", Offset = "0x4B77C40", VA = "0x4B77C40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000003")]
	public int groupingID
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4B77D10", Offset = "0x4B77D10", VA = "0x4B77D10")]
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
		[Address(RVA = "0x4B78070", Offset = "0x4B78070", VA = "0x4B78070")]
		get;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4B77DE0", Offset = "0x4B77DE0", VA = "0x4B77DE0")]
	public void SetNeighbors(Terrain left, Terrain top, Terrain right, Terrain bottom)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4B780A0", Offset = "0x4B780A0", VA = "0x4B780A0")]
	public Terrain()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4B77C10", Offset = "0x4B77C10", VA = "0x4B77C10")]
	private static extern TerrainData get_terrainData_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4B77CE0", Offset = "0x4B77CE0", VA = "0x4B77CE0")]
	private static extern bool get_allowAutoConnect_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4B77DB0", Offset = "0x4B77DB0", VA = "0x4B77DB0")]
	private static extern int get_groupingID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4B78010", Offset = "0x4B78010", VA = "0x4B78010")]
	private static extern void SetNeighbors_Injected(IntPtr _unity_self, IntPtr left, IntPtr top, IntPtr right, IntPtr bottom);
}
