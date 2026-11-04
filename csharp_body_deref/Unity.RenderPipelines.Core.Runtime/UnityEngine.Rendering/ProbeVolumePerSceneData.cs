// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumePerSceneData
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000139")]
[ExecuteAlways]
[AddComponentMenu("")]
public class ProbeVolumePerSceneData : MonoBehaviour
{
	[Serializable]
	[Token(Token = "0x200013A")]
	internal struct ObsoletePerScenarioData
	{
		[Token(Token = "0x40005F7")]
		[FieldOffset(Offset = "0x0")]
		public int sceneHash;

		[Token(Token = "0x40005F8")]
		[FieldOffset(Offset = "0x8")]
		public TextAsset cellDataAsset;

		[Token(Token = "0x40005F9")]
		[FieldOffset(Offset = "0x10")]
		public TextAsset cellOptionalDataAsset;
	}

	[Serializable]
	[Token(Token = "0x200013B")]
	private struct ObsoleteSerializablePerScenarioDataItem
	{
		[Token(Token = "0x40005FA")]
		[FieldOffset(Offset = "0x0")]
		public string scenario;

		[Token(Token = "0x40005FB")]
		[FieldOffset(Offset = "0x8")]
		public ObsoletePerScenarioData data;
	}

	[Token(Token = "0x40005F1")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[FormerlySerializedAs("bakingSet")]
	internal ProbeVolumeBakingSet serializedBakingSet;

	[Token(Token = "0x40005F2")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal string sceneGUID;

	[Token(Token = "0x40005F3")]
	[FieldOffset(Offset = "0x30")]
	[FormerlySerializedAs("asset")]
	[SerializeField]
	internal ObsoleteProbeVolumeAsset obsoleteAsset;

	[Token(Token = "0x40005F4")]
	[FieldOffset(Offset = "0x38")]
	[FormerlySerializedAs("cellSharedDataAsset")]
	[SerializeField]
	internal TextAsset obsoleteCellSharedDataAsset;

	[Token(Token = "0x40005F5")]
	[FieldOffset(Offset = "0x40")]
	[FormerlySerializedAs("cellSupportDataAsset")]
	[SerializeField]
	internal TextAsset obsoleteCellSupportDataAsset;

	[Token(Token = "0x40005F6")]
	[FieldOffset(Offset = "0x48")]
	[FormerlySerializedAs("serializedScenarios")]
	[SerializeField]
	private List<ObsoleteSerializablePerScenarioDataItem> obsoleteSerializedScenarios;

	[Token(Token = "0x1700013B")]
	public ProbeVolumeBakingSet bakingSet
	{
		[Token(Token = "0x6000AAA")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x2B2AC50", Offset = "0x2B29250", VA = "0x182B2AC50")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x2B2AF50", Offset = "0x2B29550", VA = "0x182B2AF50")]
	internal void QueueSceneLoading()
	{
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x2B2B030", Offset = "0x2B29630", VA = "0x182B2B030")]
	internal void QueueSceneRemoval()
	{
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x2B2AEB0", Offset = "0x2B294B0", VA = "0x182B2AEB0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x2B2AE00", Offset = "0x2B29400", VA = "0x182B2AE00")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x2B2AC80", Offset = "0x2B29280", VA = "0x182B2AC80")]
	internal void Initialize()
	{
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x2B2B110", Offset = "0x2B29710", VA = "0x182B2B110")]
	internal bool ResolveCellData()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x2B2B1B0", Offset = "0x2B297B0", VA = "0x182B2B1B0")]
	public ProbeVolumePerSceneData()
	{
	}
}
