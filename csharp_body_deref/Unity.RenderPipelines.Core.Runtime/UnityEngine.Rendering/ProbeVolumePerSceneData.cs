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

namespace UnityEngine.Rendering;

[Token(Token = "0x2000148")]
[ExecuteAlways]
[AddComponentMenu("")]
public class ProbeVolumePerSceneData : MonoBehaviour, ISerializationCallbackReceiver
{
	[Serializable]
	[Token(Token = "0x2000149")]
	internal struct PerScenarioData
	{
		[Token(Token = "0x40005B0")]
		[FieldOffset(Offset = "0x0")]
		public int sceneHash;

		[Token(Token = "0x40005B1")]
		[FieldOffset(Offset = "0x8")]
		public TextAsset cellDataAsset;

		[Token(Token = "0x40005B2")]
		[FieldOffset(Offset = "0x10")]
		public TextAsset cellOptionalDataAsset;
	}

	[Serializable]
	[Token(Token = "0x200014A")]
	private struct SerializablePerScenarioDataItem
	{
		[Token(Token = "0x40005B3")]
		[FieldOffset(Offset = "0x0")]
		public string scenario;

		[Token(Token = "0x40005B4")]
		[FieldOffset(Offset = "0x8")]
		public PerScenarioData data;
	}

	[Token(Token = "0x40005A7")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	internal ProbeVolumeAsset asset;

	[Token(Token = "0x40005A8")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal string sceneGUID;

	[Token(Token = "0x40005A9")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	internal TextAsset cellSharedDataAsset;

	[Token(Token = "0x40005AA")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	internal TextAsset cellSupportDataAsset;

	[Token(Token = "0x40005AB")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private List<SerializablePerScenarioDataItem> serializedScenarios;

	[Token(Token = "0x40005AC")]
	[FieldOffset(Offset = "0x48")]
	internal Dictionary<string, PerScenarioData> scenarios;

	[Token(Token = "0x40005AD")]
	[FieldOffset(Offset = "0x50")]
	private bool assetLoaded;

	[Token(Token = "0x40005AE")]
	[FieldOffset(Offset = "0x58")]
	private string activeScenario;

	[Token(Token = "0x40005AF")]
	[FieldOffset(Offset = "0x60")]
	private string otherScenario;

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x4BD0D20", Offset = "0x4BD0D20", VA = "0x4BD0D20", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x4BD0F20", Offset = "0x4BD0F20", VA = "0x4BD0F20", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x4BD12A0", Offset = "0x4BD12A0", VA = "0x4BD12A0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x4BD13F0", Offset = "0x4BD13F0", VA = "0x4BD13F0")]
	internal void RemoveScenario(string scenario)
	{
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x4BD1440", Offset = "0x4BD1440", VA = "0x4BD1440")]
	internal void RenameScenario(string scenario, string newName)
	{
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x4BD1530", Offset = "0x4BD1530", VA = "0x4BD1530")]
	internal bool ResolveCells()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x4BD15C0", Offset = "0x4BD15C0", VA = "0x4BD15C0")]
	internal bool ResolveSharedCellData()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x4BD1640", Offset = "0x4BD1640", VA = "0x4BD1640")]
	private bool ResolvePerScenarioCellData(bool verbose = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x4BD1850", Offset = "0x4BD1850", VA = "0x4BD1850")]
	internal void QueueAssetLoading()
	{
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x4BD12F0", Offset = "0x4BD12F0", VA = "0x4BD12F0")]
	internal void QueueAssetRemoval()
	{
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x4BD1980", Offset = "0x4BD1980", VA = "0x4BD1980")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x4BD1CD0", Offset = "0x4BD1CD0", VA = "0x4BD1CD0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x4BD1AD0", Offset = "0x4BD1AD0", VA = "0x4BD1AD0")]
	internal void Initialize()
	{
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x4BD1DC0", Offset = "0x4BD1DC0", VA = "0x4BD1DC0")]
	internal void UpdateActiveScenario(string activeScenario, string otherScenario, bool verbose)
	{
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x4BD1E70", Offset = "0x4BD1E70", VA = "0x4BD1E70")]
	public ProbeVolumePerSceneData()
	{
	}
}
