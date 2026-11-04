// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.AssetDatabaseRefreshAnalytic
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEditor.Analytics;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x200000B")]
[ExcludeFromDocs]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
public class AssetDatabaseRefreshAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x400000A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[SerializeField]
	public bool isV2;

	[Token(Token = "0x400000B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[SerializeField]
	public long Imports_Imported;

	[Token(Token = "0x400000C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[SerializeField]
	public long Imports_ImportedInProcess;

	[Token(Token = "0x400000D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[SerializeField]
	public long Imports_ImportedOutOfProcess;

	[Token(Token = "0x400000E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[SerializeField]
	public long Imports_Refresh;

	[Token(Token = "0x400000F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[SerializeField]
	public long Imports_DomainReload;

	[Token(Token = "0x4000010")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[SerializeField]
	public long CacheServer_MetadataRequested;

	[Token(Token = "0x4000011")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[SerializeField]
	public long CacheServer_MetadataDownloaded;

	[Token(Token = "0x4000012")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[SerializeField]
	public long CacheServer_MetadataFailedToDownload;

	[Token(Token = "0x4000013")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	[SerializeField]
	public long CacheServer_MetadataUploaded;

	[Token(Token = "0x4000014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	[SerializeField]
	public long CacheServer_ArtifactsFailedToUpload;

	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	[SerializeField]
	public long CacheServer_MetadataVersionsDownloaded;

	[Token(Token = "0x4000016")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	[SerializeField]
	public long CacheServer_MetadataMatched;

	[Token(Token = "0x4000017")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	[SerializeField]
	public long CacheServer_ArtifactsDownloaded;

	[Token(Token = "0x4000018")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	[SerializeField]
	public long CacheServer_ArtifactFilesDownloaded;

	[Token(Token = "0x4000019")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	[SerializeField]
	public long CacheServer_ArtifactFilesFailedToDownload;

	[Token(Token = "0x400001A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	[SerializeField]
	public long CacheServer_ArtifactsUploaded;

	[Token(Token = "0x400001B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	[SerializeField]
	public long CacheServer_ArtifactFilesUploaded;

	[Token(Token = "0x400001C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	[SerializeField]
	public long CacheServer_ArtifactFilesFailedToUpload;

	[Token(Token = "0x400001D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	[SerializeField]
	public long CacheServer_Connects;

	[Token(Token = "0x400001E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	[SerializeField]
	public long CacheServer_Disconnects;

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x3306A00", Offset = "0x3305000", VA = "0x183306A00")]
	public AssetDatabaseRefreshAnalytic()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x3306970", Offset = "0x3304F70", VA = "0x183306970")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static AssetDatabaseRefreshAnalytic CreateAssetDatabaseRefreshAnalytic()
	{
		return null;
	}
}
