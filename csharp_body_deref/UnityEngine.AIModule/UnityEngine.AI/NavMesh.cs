// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AI.NavMesh
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x2E98FC0", Offset = "0x2E975C0", VA = "0x182E98FC0")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
	private static void ClearPreUpdateListeners()
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x2E99270", Offset = "0x2E97870", VA = "0x182E99270")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallOnNavMeshPreUpdate()
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x2E98EC0", Offset = "0x2E974C0", VA = "0x182E98EC0")]
	public static NavMeshDataInstance AddNavMeshData(NavMeshData navMeshData)
	{
		return default(NavMeshDataInstance);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x2E98E50", Offset = "0x2E97450", VA = "0x182E98E50")]
	[UnityEngine.Bindings.NativeName("LoadData")]
	[UnityEngine.Bindings.StaticAccessor("GetNavMeshManager()")]
	internal static int AddNavMeshDataInternal(NavMeshData navMeshData)
	{
		return default(int);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x2E993D0", Offset = "0x2E979D0", VA = "0x182E993D0")]
	public static bool SamplePosition(Vector3 sourcePosition, out NavMeshHit hit, float maxDistance, NavMeshQueryFilter filter)
	{
		return default(bool);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x2E99360", Offset = "0x2E97960", VA = "0x182E99360")]
	private static bool SamplePositionFilter(Vector3 sourcePosition, out NavMeshHit hit, float maxDistance, int type, int mask)
	{
		return default(bool);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x2E99050", Offset = "0x2E97650", VA = "0x182E99050")]
	public static NavMeshBuildSettings GetSettingsByID(int agentTypeID)
	{
		return default(NavMeshBuildSettings);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x2E99150", Offset = "0x2E97750", VA = "0x182E99150")]
	[UnityEngine.Bindings.StaticAccessor("GetNavMeshProjectSettings()")]
	public static extern int GetSettingsCount();

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x2E990F0", Offset = "0x2E976F0", VA = "0x182E990F0")]
	public static NavMeshBuildSettings GetSettingsByIndex(int index)
	{
		return default(NavMeshBuildSettings);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x2E991C0", Offset = "0x2E977C0", VA = "0x182E991C0")]
	public static string GetSettingsNameFromID(int agentTypeID)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x2E992C0", Offset = "0x2E978C0", VA = "0x182E992C0")]
	[UnityEngine.Bindings.NativeName("CleanupAfterCarving")]
	[UnityEngine.Bindings.StaticAccessor("GetNavMeshManager()")]
	public static extern void RemoveAllNavMeshData();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x2E98E10", Offset = "0x2E97410", VA = "0x182E98E10")]
	private static extern int AddNavMeshDataInternal_Injected(IntPtr navMeshData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x2E992F0", Offset = "0x2E978F0", VA = "0x182E992F0")]
	private static extern bool SamplePositionFilter_Injected([In] ref Vector3 sourcePosition, out NavMeshHit hit, float maxDistance, int type, int mask);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000064")]
	[Address(RVA = "0x2E99010", Offset = "0x2E97610", VA = "0x182E99010")]
	private static extern void GetSettingsByID_Injected(int agentTypeID, out NavMeshBuildSettings ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x2E990B0", Offset = "0x2E976B0", VA = "0x182E990B0")]
	private static extern void GetSettingsByIndex_Injected(int index, out NavMeshBuildSettings ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000066")]
	[Address(RVA = "0x2E99180", Offset = "0x2E97780", VA = "0x182E99180")]
	private static extern void GetSettingsNameFromID_Injected(int agentTypeID, out UnityEngine.Bindings.ManagedSpanWrapper ret);
}
