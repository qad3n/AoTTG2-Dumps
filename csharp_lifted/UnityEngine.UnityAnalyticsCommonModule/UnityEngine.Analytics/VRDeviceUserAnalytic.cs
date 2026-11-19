// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Analytics.VRDeviceUserAnalytic
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

namespace UnityEngine.Analytics;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000009")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[ExcludeFromDocs]
public class VRDeviceUserAnalytic : VRDeviceAnalyticBase
{
	[Token(Token = "0x4000008")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	public int vr_user_presence;

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x6D17480", Offset = "0x6D16480", VA = "0x6D17480")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static VRDeviceUserAnalytic CreateVRDeviceUserAnalytic()
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x6D17510", Offset = "0x6D16510", VA = "0x6D17510")]
	public VRDeviceUserAnalytic()
	{
	}
}
