// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AI.NavMesh
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
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.AI;

[Token(Token = "0x200000A")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/NavMeshManager.h")]
[MovedFrom("UnityEngine")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/NavMesh/NavMesh.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("NavMeshBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public static class NavMesh
{
	[Token(Token = "0x200000B")]
	public delegate void OnNavMeshPreUpdate();

	[Token(Token = "0x4000010")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static OnNavMeshPreUpdate onPreUpdate;

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4D91AF0", Offset = "0x4D91AF0", VA = "0x4D91AF0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallOnNavMeshPreUpdate()
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4D91B40", Offset = "0x4D91B40", VA = "0x4D91B40")]
	public static bool SamplePosition(Vector3 sourcePosition, out NavMeshHit hit, float maxDistance, int areaMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4D91BF0", Offset = "0x4D91BF0", VA = "0x4D91BF0")]
	public static NavMeshDataInstance AddNavMeshData(NavMeshData navMeshData)
	{
		return default(NavMeshDataInstance);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4D91D30", Offset = "0x4D91D30", VA = "0x4D91D30")]
	[UnityEngine.Bindings.StaticAccessor("GetNavMeshManager()")]
	[UnityEngine.Bindings.NativeName("LoadData")]
	internal static int AddNavMeshDataInternal(NavMeshData navMeshData)
	{
		return default(int);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4D91E10", Offset = "0x4D91E10", VA = "0x4D91E10")]
	public static NavMeshBuildSettings GetSettingsByID(int agentTypeID)
	{
		return default(NavMeshBuildSettings);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4D91ED0", Offset = "0x4D91ED0", VA = "0x4D91ED0")]
	[UnityEngine.Bindings.StaticAccessor("GetNavMeshProjectSettings()")]
	public static extern int GetSettingsCount();

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4D91F00", Offset = "0x4D91F00", VA = "0x4D91F00")]
	public static NavMeshBuildSettings GetSettingsByIndex(int index)
	{
		return default(NavMeshBuildSettings);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4D91FC0", Offset = "0x4D91FC0", VA = "0x4D91FC0")]
	public static extern string GetSettingsNameFromID(int agentTypeID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4D91FF0", Offset = "0x4D91FF0", VA = "0x4D91FF0")]
	[UnityEngine.Bindings.StaticAccessor("GetNavMeshManager()")]
	[UnityEngine.Bindings.NativeName("CleanupAfterCarving")]
	public static extern void RemoveAllNavMeshData();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4D91BA0", Offset = "0x4D91BA0", VA = "0x4D91BA0")]
	private static extern bool SamplePosition_Injected([In] ref Vector3 sourcePosition, out NavMeshHit hit, float maxDistance, int areaMask);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4D91DE0", Offset = "0x4D91DE0", VA = "0x4D91DE0")]
	private static extern int AddNavMeshDataInternal_Injected(IntPtr navMeshData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4D91E90", Offset = "0x4D91E90", VA = "0x4D91E90")]
	private static extern void GetSettingsByID_Injected(int agentTypeID, out NavMeshBuildSettings ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4D91F80", Offset = "0x4D91F80", VA = "0x4D91F80")]
	private static extern void GetSettingsByIndex_Injected(int index, out NavMeshBuildSettings ret);
}
