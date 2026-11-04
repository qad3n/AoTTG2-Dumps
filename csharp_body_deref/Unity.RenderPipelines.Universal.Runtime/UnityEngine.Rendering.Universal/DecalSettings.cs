// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalSettings
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x2000173")]
internal class DecalSettings
{
	[Token(Token = "0x400086A")]
	[FieldOffset(Offset = "0x10")]
	public DecalTechniqueOption technique;

	[Token(Token = "0x400086B")]
	[FieldOffset(Offset = "0x14")]
	public float maxDrawDistance;

	[Token(Token = "0x400086C")]
	[FieldOffset(Offset = "0x18")]
	public bool decalLayers;

	[Token(Token = "0x400086D")]
	[FieldOffset(Offset = "0x20")]
	public DBufferSettings dBufferSettings;

	[Token(Token = "0x400086E")]
	[FieldOffset(Offset = "0x28")]
	public DecalScreenSpaceSettings screenSpaceSettings;

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x2C70450", Offset = "0x2C6EA50", VA = "0x182C70450")]
	public DecalSettings()
	{
	}
}
