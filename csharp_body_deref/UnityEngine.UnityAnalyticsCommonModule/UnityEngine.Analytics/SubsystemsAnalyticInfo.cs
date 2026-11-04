// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Analytics.SubsystemsAnalyticInfo
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

namespace UnityEngine.Analytics;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000005")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[ExcludeFromDocs]
public class SubsystemsAnalyticInfo : SubsystemsAnalyticBase
{
	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string id;

	[Token(Token = "0x4000003")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string plugin_name;

	[Token(Token = "0x4000004")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string version;

	[Token(Token = "0x4000005")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string library_name;

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x3308270", Offset = "0x3306870", VA = "0x183308270")]
	public SubsystemsAnalyticInfo()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x33081C0", Offset = "0x33067C0", VA = "0x1833081C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static SubsystemsAnalyticInfo CreateSubsystemsAnalyticInfo()
	{
		return null;
	}
}
