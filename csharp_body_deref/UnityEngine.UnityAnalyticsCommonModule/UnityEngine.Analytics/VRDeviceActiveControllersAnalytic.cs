// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Analytics.VRDeviceActiveControllersAnalytic
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
[Token(Token = "0x200000A")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[ExcludeFromDocs]
public class VRDeviceActiveControllersAnalytic : VRDeviceAnalyticBase
{
	[Token(Token = "0x4000009")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string[] vr_active_controllers;

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x6D17570", Offset = "0x6D16570", VA = "0x6D17570")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static VRDeviceActiveControllersAnalytic CreateVRDeviceActiveControllersAnalytic()
	{
		return null;
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x6D17600", Offset = "0x6D16600", VA = "0x6D17600")]
	public VRDeviceActiveControllersAnalytic()
	{
	}
}
