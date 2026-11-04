// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.AssetImportStatusAnalytic
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
[Token(Token = "0x200001D")]
[ExcludeFromDocs]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
internal class AssetImportStatusAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x4000049")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string package_name;

	[Token(Token = "0x400004A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public int package_items_count;

	[Token(Token = "0x400004B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	public int package_import_status;

	[Token(Token = "0x400004C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public string error_message;

	[Token(Token = "0x400004D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public int project_assets_count;

	[Token(Token = "0x400004E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	public int unselected_assets_count;

	[Token(Token = "0x400004F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public int selected_new_assets_count;

	[Token(Token = "0x4000050")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	public int selected_changed_assets_count;

	[Token(Token = "0x4000051")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public int unchanged_assets_count;

	[Token(Token = "0x4000052")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public string[] selected_asset_extensions;

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x3306D10", Offset = "0x3305310", VA = "0x183306D10")]
	public AssetImportStatusAnalytic()
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x3306C70", Offset = "0x3305270", VA = "0x183306C70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static AssetImportStatusAnalytic CreateAssetImportStatusAnalytic()
	{
		return null;
	}
}
