// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.AssetExportAnalytic
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
[Token(Token = "0x200001F")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[ExcludeFromDocs]
internal class AssetExportAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x4000055")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string package_name;

	[Token(Token = "0x4000056")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public string error_message;

	[Token(Token = "0x4000057")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public int items_count;

	[Token(Token = "0x4000058")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public string[] asset_extensions;

	[Token(Token = "0x4000059")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public bool include_upm_dependencies;

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x6D18980", Offset = "0x6D17980", VA = "0x6D18980")]
	public AssetExportAnalytic()
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x6D189E0", Offset = "0x6D179E0", VA = "0x6D189E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static AssetExportAnalytic CreateAssetExportAnalytic()
	{
		return null;
	}
}
