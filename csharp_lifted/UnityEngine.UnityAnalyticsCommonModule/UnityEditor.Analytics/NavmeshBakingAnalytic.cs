// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.NavmeshBakingAnalytic
// Update status: unchanged since the previous dump
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
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[ExcludeFromDocs]
public class NavmeshBakingAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x4000032")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private bool new_nav_api;

	[Token(Token = "0x4000033")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2D")]
	private bool bake_at_runtime;

	[Token(Token = "0x4000034")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int height_meshes_count;

	[Token(Token = "0x4000035")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private int offmesh_links_count;

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x6D17C00", Offset = "0x6D16C00", VA = "0x6D17C00")]
	public NavmeshBakingAnalytic()
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x6D17C60", Offset = "0x6D16C60", VA = "0x6D17C60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static NavmeshBakingAnalytic CreateNavmeshBakingAnalytic()
	{
		return null;
	}
}
