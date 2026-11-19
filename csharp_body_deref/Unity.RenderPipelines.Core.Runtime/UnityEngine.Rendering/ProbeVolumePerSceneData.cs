// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumePerSceneData
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x650DBC0", Offset = "0x650CBC0", VA = "0x650DBC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x650DBD0", Offset = "0x650CBD0", VA = "0x650DBD0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x650DCF0", Offset = "0x650CCF0", VA = "0x650DCF0")]
	internal void QueueSceneLoading()
	{
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x650DBF0", Offset = "0x650CBF0", VA = "0x650DBF0")]
	internal void QueueSceneRemoval()
	{
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x650DDF0", Offset = "0x650CDF0", VA = "0x650DDF0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x650DEC0", Offset = "0x650CEC0", VA = "0x650DEC0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x650DF80", Offset = "0x650CF80", VA = "0x650DF80")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x650DF90", Offset = "0x650CF90", VA = "0x650DF90")]
	internal void Initialize()
	{
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x650E080", Offset = "0x650D080", VA = "0x650E080")]
	internal bool ResolveCellData()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x650E110", Offset = "0x650D110", VA = "0x650E110")]
	public ProbeVolumePerSceneData()
	{
	}
}
