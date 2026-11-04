// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.PackageManagerResolvePackageAnalytic
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEditor.Analytics;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000018")]
[ExcludeFromDocs]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
public class PackageManagerResolvePackageAnalytic : PackageManagerBaseAnalytic
{
	[Token(Token = "0x400003F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public string[] packages;

	[Token(Token = "0x4000040")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public string[] package_registries;

	[Token(Token = "0x4000041")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public string[] package_signatures;

	[Token(Token = "0x4000042")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public string[] package_sources;

	[Token(Token = "0x4000043")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public string[] package_types;

	[Token(Token = "0x4000044")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public string[] package_compliance_statuses;

	[Token(Token = "0x4000045")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public string[] package_signature_errorCodes;

	[Token(Token = "0x4000046")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	public string[] package_publishing_channels;

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x3307A80", Offset = "0x3306080", VA = "0x183307A80")]
	public PackageManagerResolvePackageAnalytic()
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x33079D0", Offset = "0x3305FD0", VA = "0x1833079D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static PackageManagerResolvePackageAnalytic CreatePackageManagerResolvePackageAnalytic()
	{
		return null;
	}
}
