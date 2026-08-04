// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VirtualOffsetSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000140")]
internal struct VirtualOffsetSettings
{
	[Token(Token = "0x4000580")]
	[FieldOffset(Offset = "0x0")]
	public bool useVirtualOffset;

	[Token(Token = "0x4000581")]
	[FieldOffset(Offset = "0x4")]
	[Range(0f, 1f)]
	public float outOfGeoOffset;

	[Token(Token = "0x4000582")]
	[FieldOffset(Offset = "0x8")]
	[Range(0f, 2f)]
	public float searchMultiplier;

	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0xC")]
	[Range(-0.05f, 0f)]
	public float rayOriginBias;

	[Token(Token = "0x4000584")]
	[FieldOffset(Offset = "0x10")]
	[Range(4f, 24f)]
	public int maxHitsPerRay;

	[Token(Token = "0x4000585")]
	[FieldOffset(Offset = "0x14")]
	public LayerMask collisionMask;

	[Token(Token = "0x6000A26")]
	[Address(RVA = "0x4BCDE20", Offset = "0x4BCDE20", VA = "0x4BCDE20")]
	internal void SetDefaults()
	{
	}

	[Token(Token = "0x6000A27")]
	[Address(RVA = "0x4BCDE50", Offset = "0x4BCDE50", VA = "0x4BCDE50")]
	internal void UpgradeFromTo(ProbeVolumeBakingProcessSettings.SettingsVersion from, ProbeVolumeBakingProcessSettings.SettingsVersion to)
	{
	}
}
