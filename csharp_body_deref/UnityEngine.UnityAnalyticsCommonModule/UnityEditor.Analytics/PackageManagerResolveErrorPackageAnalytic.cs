// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.PackageManagerResolveErrorPackageAnalytic
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
	[Address(RVA = "0x3307950", Offset = "0x3305F50", VA = "0x183307950")]
	public PackageManagerResolveErrorPackageAnalytic()
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x33078A0", Offset = "0x3305EA0", VA = "0x1833078A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static PackageManagerResolveErrorPackageAnalytic CreatePackageManagerResolveErrorPackageAnalytic()
	{
		return null;
	}
}
