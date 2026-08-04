// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.FastApproximateAntialiasing
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000029")]
[Preserve]
public sealed class FastApproximateAntialiasing
{
	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x10")]
	[FormerlySerializedAs("mobileOptimized")]
	[Tooltip("Boost performances by lowering the effect quality. This setting is meant to be used on mobile and other low-end platforms but can also provide a nice performance boost on desktops and consoles.")]
	public bool fastMode;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x11")]
	[Tooltip("Keep alpha channel. This will slightly lower the effect quality but allows rendering against a transparent background.\nThis setting has no effect if the camera render target has no alpha channel.")]
	public bool keepAlpha;

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4B3C3E0", Offset = "0x4B3C3E0", VA = "0x4B3C3E0")]
	public FastApproximateAntialiasing()
	{
	}
}
