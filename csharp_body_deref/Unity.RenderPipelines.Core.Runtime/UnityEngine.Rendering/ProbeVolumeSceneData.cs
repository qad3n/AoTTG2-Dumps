// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeSceneData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.SceneManagement;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x200014C")]
public class ProbeVolumeSceneData : ISerializationCallbackReceiver
{
	[Serializable]
	[Token(Token = "0x200014D")]
	private struct SerializableBoundItem
	{
		[Token(Token = "0x40005C1")]
		[FieldOffset(Offset = "0x0")]
		[SerializeField]
		public string sceneGUID;

		[Token(Token = "0x40005C2")]
		[FieldOffset(Offset = "0x8")]
		[SerializeField]
		public Bounds bounds;
	}

	[Serializable]
	[Token(Token = "0x200014E")]
	private struct SerializableHasPVItem
	{
		[Token(Token = "0x40005C3")]
		[FieldOffset(Offset = "0x0")]
		[SerializeField]
		public string sceneGUID;

		[Token(Token = "0x40005C4")]
		[FieldOffset(Offset = "0x8")]
		[SerializeField]
		public bool hasProbeVolumes;
	}

	[Serializable]
	[Token(Token = "0x200014F")]
	internal class BakingSet
	{
		[Token(Token = "0x40005C5")]
		[FieldOffset(Offset = "0x10")]
		public ProbeVolumeBakingSet profile;

		[Token(Token = "0x40005C6")]
		[FieldOffset(Offset = "0x18")]
		public ProbeVolumeBakingProcessSettings settings;

		[Token(Token = "0x40005C7")]
		[FieldOffset(Offset = "0x48")]
		public List<string> sceneGUIDs;

		[Token(Token = "0x40005C8")]
		[FieldOffset(Offset = "0x50")]
		public List<string> lightingScenarios;

		[Token(Token = "0x6000A61")]
		[Address(RVA = "0x4BD35C0", Offset = "0x4BD35C0", VA = "0x4BD35C0")]
		public BakingSet()
		{
		}
	}

	[Token(Token = "0x40005B6")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private List<SerializableBoundItem> serializedBounds;

	[Token(Token = "0x40005B7")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private List<SerializableHasPVItem> serializedHasVolumes;

	[Token(Token = "0x40005B8")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private List<ProbeVolumeBakingSet> bakingSets;

	[Token(Token = "0x40005B9")]
	[FieldOffset(Offset = "0x28")]
	internal Object parentAsset;

	[Token(Token = "0x40005BA")]
	[FieldOffset(Offset = "0x30")]
	internal string parentSceneDataPropertyName;

	[Token(Token = "0x40005BB")]
	[FieldOffset(Offset = "0x38")]
	public Dictionary<string, Bounds> sceneBounds;

	[Token(Token = "0x40005BC")]
	[FieldOffset(Offset = "0x40")]
	internal Dictionary<string, bool> hasProbeVolumes;

	[Token(Token = "0x40005BD")]
	[FieldOffset(Offset = "0x48")]
	internal Dictionary<string, ProbeVolumeBakingSet> sceneToBakingSet;

	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private string m_LightingScenario;

	[Token(Token = "0x40005BF")]
	[FieldOffset(Offset = "0x58")]
	private string m_OtherScenario;

	[Token(Token = "0x40005C0")]
	[FieldOffset(Offset = "0x60")]
	private float m_ScenarioBlendingFactor;

	[Token(Token = "0x17000127")]
	internal string lightingScenario
	{
		[Token(Token = "0x6000A55")]
		[Address(RVA = "0x4BCC3A0", Offset = "0x4BCC3A0", VA = "0x4BCC3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000128")]
	internal string otherScenario
	{
		[Token(Token = "0x6000A56")]
		[Address(RVA = "0x4BD20C0", Offset = "0x4BD20C0", VA = "0x4BD20C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000129")]
	internal float scenarioBlendingFactor
	{
		[Token(Token = "0x6000A57")]
		[Address(RVA = "0x4BD20D0", Offset = "0x4BD20D0", VA = "0x4BD20D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x4BCC620", Offset = "0x4BCC620", VA = "0x4BCC620")]
	internal static string GetSceneGUID(Scene scene)
	{
		return null;
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x4BD20E0", Offset = "0x4BD20E0", VA = "0x4BD20E0")]
	internal void SetActiveScenario(string scenario, bool verbose = true)
	{
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x4BCC720", Offset = "0x4BCC720", VA = "0x4BCC720")]
	internal void BlendLightingScenario(string otherScenario, float blendingFactor)
	{
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x4BD2590", Offset = "0x4BD2590", VA = "0x4BD2590")]
	public ProbeVolumeSceneData(Object parentAsset, string parentSceneDataPropertyName)
	{
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x4BD26B0", Offset = "0x4BD26B0", VA = "0x4BD26B0")]
	public void SetParentObject(Object parent, string parentSceneDataPropertyName)
	{
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x4BD28E0", Offset = "0x4BD28E0", VA = "0x4BD28E0", Slot = "5")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x4BD28D0", Offset = "0x4BD28D0", VA = "0x4BD28D0")]
	private void MigrateBakingSets()
	{
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x4BD2F30", Offset = "0x4BD2F30", VA = "0x4BD2F30", Slot = "4")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x4BCE360", Offset = "0x4BCE360", VA = "0x4BCE360")]
	internal void SyncBakingSets()
	{
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x4BCE370", Offset = "0x4BCE370", VA = "0x4BCE370")]
	internal void AddBakingSet(ProbeVolumeBakingSet set)
	{
	}
}
