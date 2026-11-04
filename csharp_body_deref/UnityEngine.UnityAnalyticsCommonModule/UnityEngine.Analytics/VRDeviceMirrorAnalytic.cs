// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Analytics.VRDeviceMirrorAnalytic
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
[Token(Token = "0x2000008")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[ExcludeFromDocs]
public class VRDeviceMirrorAnalytic : VRDeviceAnalyticBase
{
	[Token(Token = "0x4000007")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public bool vr_device_mirror_mode;

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x33088E0", Offset = "0x3306EE0", VA = "0x1833088E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static VRDeviceMirrorAnalytic CreateVRDeviceMirrorAnalytic()
	{
		return null;
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x33087E0", Offset = "0x3306DE0", VA = "0x1833087E0")]
	public VRDeviceMirrorAnalytic()
	{
	}
}
