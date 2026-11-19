// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.AssetImportAnalytic
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
[Token(Token = "0x200001E")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[ExcludeFromDocs]
internal class AssetImportAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x4000053")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string package_name;

	[Token(Token = "0x4000054")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public int package_import_choice;

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x6D18890", Offset = "0x6D17890", VA = "0x6D18890")]
	public AssetImportAnalytic()
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x6D188F0", Offset = "0x6D178F0", VA = "0x6D188F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static AssetImportAnalytic CreateAssetImportAnalytic()
	{
		return null;
	}
}
