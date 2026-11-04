// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Analytics.VRDeviceAnalyticAspect
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
[Token(Token = "0x2000007")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[ExcludeFromDocs]
public class VRDeviceAnalyticAspect : VRDeviceAnalyticBase
{
	[Token(Token = "0x4000006")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public float vr_aspect_ratio;

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x3308850", Offset = "0x3306E50", VA = "0x183308850")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static VRDeviceAnalyticAspect CreateVRDeviceAnalyticAspect()
	{
		return null;
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x33087E0", Offset = "0x3306DE0", VA = "0x1833087E0")]
	public VRDeviceAnalyticAspect()
	{
	}
}
