// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.NavmeshBakingAnalytic
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Analytics;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEditor.Analytics;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000011")]
[ExcludeFromDocs]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
public class NavmeshBakingAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x4000032")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool new_nav_api;

	[Token(Token = "0x4000033")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
	private bool bake_at_runtime;

	[Token(Token = "0x4000034")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private int height_meshes_count;

	[Token(Token = "0x4000035")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private int offmesh_links_count;

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x3307310", Offset = "0x3305910", VA = "0x183307310")]
	public NavmeshBakingAnalytic()
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3307280", Offset = "0x3305880", VA = "0x183307280")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static NavmeshBakingAnalytic CreateNavmeshBakingAnalytic()
	{
		return null;
	}
}
