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
	[Address(RVA = "0x48ABC70", Offset = "0x48ABC70", VA = "0x48ABC70", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x48ABE70", Offset = "0x48ABE70", VA = "0x48ABE70", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x48AC1F0", Offset = "0x48AC1F0", VA = "0x48AC1F0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x48AC340", Offset = "0x48AC340", VA = "0x48AC340")]
	internal void RemoveScenario(string scenario)
	{
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x48AC390", Offset = "0x48AC390", VA = "0x48AC390")]
	internal void RenameScenario(string scenario, string newName)
	{
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x48AC480", Offset = "0x48AC480", VA = "0x48AC480")]
	internal bool ResolveCells()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x48AC510", Offset = "0x48AC510", VA = "0x48AC510")]
	internal bool ResolveSharedCellData()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x48AC590", Offset = "0x48AC590", VA = "0x48AC590")]
	private bool ResolvePerScenarioCellData(bool verbose = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x48AC7A0", Offset = "0x48AC7A0", VA = "0x48AC7A0")]
	internal void QueueAssetLoading()
	{
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x48AC240", Offset = "0x48AC240", VA = "0x48AC240")]
	internal void QueueAssetRemoval()
	{
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x48AC8D0", Offset = "0x48AC8D0", VA = "0x48AC8D0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x48ACC20", Offset = "0x48ACC20", VA = "0x48ACC20")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x48ACA20", Offset = "0x48ACA20", VA = "0x48ACA20")]
	internal void Initialize()
	{
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x48ACD10", Offset = "0x48ACD10", VA = "0x48ACD10")]
	internal void UpdateActiveScenario(string activeScenario, string otherScenario, bool verbose)
	{
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x48ACDC0", Offset = "0x48ACDC0", VA = "0x48ACDC0")]
	public ProbeVolumePerSceneData()
	{
	}
}
