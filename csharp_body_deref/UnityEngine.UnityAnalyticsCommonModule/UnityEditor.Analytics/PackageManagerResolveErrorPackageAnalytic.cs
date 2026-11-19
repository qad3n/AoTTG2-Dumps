// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.PackageManagerResolveErrorPackageAnalytic
// Update status: unchanged since the previous dump
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
[Token(Token = "0x200001B")]
[ExcludeFromDocs]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
public class PackageManagerResolveErrorPackageAnalytic : PackageManagerBaseAnalytic
{
	[Token(Token = "0x4000047")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public string reason;

	[Token(Token = "0x4000048")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public string action;

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x6D18580", Offset = "0x6D17580", VA = "0x6D18580")]
	public PackageManagerResolveErrorPackageAnalytic()
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x6D185F0", Offset = "0x6D175F0", VA = "0x6D185F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static PackageManagerResolveErrorPackageAnalytic CreatePackageManagerResolveErrorPackageAnalytic()
	{
		return null;
	}
}
