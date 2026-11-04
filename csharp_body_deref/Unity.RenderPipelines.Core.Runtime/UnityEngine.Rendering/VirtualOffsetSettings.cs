// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VirtualOffsetSettings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000128")]
internal struct VirtualOffsetSettings
{
	[Token(Token = "0x4000570")]
	[FieldOffset(Offset = "0x0")]
	public bool useVirtualOffset;

	[Token(Token = "0x4000571")]
	[FieldOffset(Offset = "0x4")]
	[Range(0f, 0.95f)]
	public float validityThreshold;

	[Token(Token = "0x4000572")]
	[FieldOffset(Offset = "0x8")]
	[Range(0f, 1f)]
	public float outOfGeoOffset;

	[Token(Token = "0x4000573")]
	[FieldOffset(Offset = "0xC")]
	[Range(0f, 2f)]
	public float searchMultiplier;

	[Token(Token = "0x4000574")]
	[FieldOffset(Offset = "0x10")]
	[Range(-0.05f, 0f)]
	public float rayOriginBias;

	[Token(Token = "0x4000575")]
	[FieldOffset(Offset = "0x14")]
	public LayerMask collisionMask;

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x2B1A670", Offset = "0x2B18C70", VA = "0x182B1A670")]
	internal void SetDefaults()
	{
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x2B1A6B0", Offset = "0x2B18CB0", VA = "0x182B1A6B0")]
	internal void UpgradeFromTo(ProbeVolumeBakingProcessSettings.SettingsVersion from, ProbeVolumeBakingProcessSettings.SettingsVersion to)
	{
	}
}
