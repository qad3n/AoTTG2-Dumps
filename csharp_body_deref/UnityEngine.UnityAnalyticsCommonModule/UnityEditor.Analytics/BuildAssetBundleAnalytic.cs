// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.BuildAssetBundleAnalytic
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
[Token(Token = "0x200000C")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[ExcludeFromDocs]
public class BuildAssetBundleAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x400001F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public bool success;

	[Token(Token = "0x4000020")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public string error;

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x3306E10", Offset = "0x3305410", VA = "0x183306E10")]
	public BuildAssetBundleAnalytic()
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x3306D80", Offset = "0x3305380", VA = "0x183306D80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static BuildAssetBundleAnalytic CreateBuildAssetBundleAnalytic()
	{
		return null;
	}
}
