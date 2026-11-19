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

[Token(Token = "0x200000B")]
[MovedFrom("UnityEngine")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/NavMesh/NavMesh.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/NavMeshManager.h")]
[UnityEngine.Bindings.StaticAccessor("NavMeshBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public static class NavMesh
{
	[Token(Token = "0x200000C")]
	public delegate void OnNavMeshPreUpdate();

	[Token(Token = "0x4000013")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static OnNavMeshPreUpdate onPreUpdate;

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x6895860", Offset = "0x6894860", VA = "0x6895860")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
	private static void ClearPreUpdateListeners()
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x68958B0", Offset = "0x68948B0", VA = "0x68958B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallOnNavMeshPreUpdate()
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x6895900", Offset = "0x6894900", VA = "0x6895900")]
	public static NavMeshDataInstance AddNavMeshData(NavMeshData navMeshData)
	{
		return default(NavMeshDataInstance);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x6895A20", Offset = "0x6894A20", VA = "0x6895A20")]
	[UnityEngine.Bindings.NativeName("LoadData")]
	[UnityEngine.Bindings.StaticAccessor("GetNavMeshManager()")]
	internal static int AddNavMeshDataInternal(NavMeshData navMeshData)
	{
		return default(int);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x6895AE0", Offset = "0x6894AE0", VA = "0x6895AE0")]
	public static bool SamplePosition(Vector3 sourcePosition, out NavMeshHit hit, float maxDistance, NavMeshQueryFilter filter)
	{
		return default(bool);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x6895B50", Offset = "0x6894B50", VA = "0x6895B50")]
	private static bool SamplePositionFilter(Vector3 sourcePosition, out NavMeshHit hit, float maxDistance, int type, int mask)
	{
		return default(bool);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x6895C20", Offset = "0x6894C20", VA = "0x6895C20")]
	public static NavMeshBuildSettings GetSettingsByID(int agentTypeID)
	{
		return default(NavMeshBuildSettings);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x6895CE0", Offset = "0x6894CE0", VA = "0x6895CE0")]
	[UnityEngine.Bindings.StaticAccessor("GetNavMeshProjectSettings()")]
	public static extern int GetSettingsCount();

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x6895D10", Offset = "0x6894D10", VA = "0x6895D10")]
	public static NavMeshBuildSettings GetSettingsByIndex(int index)
	{
		return default(NavMeshBuildSettings);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x6895DD0", Offset = "0x6894DD0", VA = "0x6895DD0")]
	public static string GetSettingsNameFromID(int agentTypeID)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x6895EE0", Offset = "0x6894EE0", VA = "0x6895EE0")]
	[UnityEngine.Bindings.NativeName("CleanupAfterCarving")]
	[UnityEngine.Bindings.StaticAccessor("GetNavMeshManager()")]
	public static extern void RemoveAllNavMeshData();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x6895AB0", Offset = "0x6894AB0", VA = "0x6895AB0")]
	private static extern int AddNavMeshDataInternal_Injected(IntPtr navMeshData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x6895BC0", Offset = "0x6894BC0", VA = "0x6895BC0")]
	private static extern bool SamplePositionFilter_Injected([In] ref Vector3 sourcePosition, out NavMeshHit hit, float maxDistance, int type, int mask);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000064")]
	[Address(RVA = "0x6895CA0", Offset = "0x6894CA0", VA = "0x6895CA0")]
	private static extern void GetSettingsByID_Injected(int agentTypeID, out NavMeshBuildSettings ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x6895D90", Offset = "0x6894D90", VA = "0x6895D90")]
	private static extern void GetSettingsByIndex_Injected(int index, out NavMeshBuildSettings ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000066")]
	[Address(RVA = "0x6895EA0", Offset = "0x6894EA0", VA = "0x6895EA0")]
	private static extern void GetSettingsNameFromID_Injected(int agentTypeID, out UnityEngine.Bindings.ManagedSpanWrapper ret);
}
