// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeSceneData
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x200013D")]
[Obsolete("This class is no longer necessary for APV implementation. #from(2023.3)")]
public class ProbeVolumeSceneData
{
	[Token(Token = "0x40005FE")]
	[FieldOffset(Offset = "0x10")]
	internal Object parentAsset;

	[Token(Token = "0x40005FF")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[FormerlySerializedAs("sceneBounds")]
	[Obsolete("This data is now serialized directly in the baking set asset. #from(2023.3)")]
	internal SerializedDictionary<string, Bounds> obsoleteSceneBounds;

	[Token(Token = "0x4000600")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[FormerlySerializedAs("hasProbeVolumes")]
	[Obsolete("This data is now serialized directly in the baking set asset. #from(2023.3)")]
	internal SerializedDictionary<string, bool> obsoleteHasProbeVolumes;

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public ProbeVolumeSceneData(Object parentAsset)
	{
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
	[Obsolete("#from(2023.3)")]
	public void SetParentObject(Object parent)
	{
	}
}
