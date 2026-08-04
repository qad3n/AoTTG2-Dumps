// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeBakingSet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000143")]
public sealed class ProbeVolumeBakingSet : ScriptableObject
{
	[Token(Token = "0x2000144")]
	internal enum Version
	{
		[Token(Token = "0x400059A")]
		Initial
	}

	[Token(Token = "0x400058E")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	internal bool singleSceneMode;

	[Token(Token = "0x400058F")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	internal ProbeVolumeBakingProcessSettings settings;

	[Token(Token = "0x4000590")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private List<string> m_SceneGUIDs;

	[Token(Token = "0x4000591")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	internal List<string> scenesToNotBake;

	[Token(Token = "0x4000592")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	internal List<string> lightingScenarios;

	[Token(Token = "0x4000593")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private Version version;

	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0x6C")]
	[SerializeField]
	internal bool freezePlacement;

	[Token(Token = "0x4000595")]
	[FieldOffset(Offset = "0x70")]
	[Range(2f, 5f)]
	public int simplificationLevels;

	[Token(Token = "0x4000596")]
	[FieldOffset(Offset = "0x74")]
	[Min(0.1f)]
	public float minDistanceBetweenProbes;

	[Token(Token = "0x4000597")]
	[FieldOffset(Offset = "0x78")]
	public LayerMask renderersLayerMask;

	[Token(Token = "0x4000598")]
	[FieldOffset(Offset = "0x7C")]
	[Min(0f)]
	public float minRendererVolumeSize;

	[Token(Token = "0x17000121")]
	internal IReadOnlyList<string> sceneGUIDs
	{
		[Token(Token = "0x6000A2C")]
		[Address(RVA = "0x4BCDFB0", Offset = "0x4BCDFB0", VA = "0x4BCDFB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000122")]
	public int cellSizeInBricks
	{
		[Token(Token = "0x6000A2D")]
		[Address(RVA = "0x4BCDFC0", Offset = "0x4BCDFC0", VA = "0x4BCDFC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000123")]
	public int maxSubdivision
	{
		[Token(Token = "0x6000A2E")]
		[Address(RVA = "0x4BCDFE0", Offset = "0x4BCDFE0", VA = "0x4BCDFE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000124")]
	public float minBrickSize
	{
		[Token(Token = "0x6000A2F")]
		[Address(RVA = "0x4BCDFF0", Offset = "0x4BCDFF0", VA = "0x4BCDFF0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000125")]
	public float cellSizeInMeters
	{
		[Token(Token = "0x6000A30")]
		[Address(RVA = "0x4BCE010", Offset = "0x4BCE010", VA = "0x4BCE010")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x4BCE050", Offset = "0x4BCE050", VA = "0x4BCE050")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000A32")]
	[Address(RVA = "0x4BCE7E0", Offset = "0x4BCE7E0", VA = "0x4BCE7E0")]
	internal void Migrate(ProbeVolumeSceneData.BakingSet set)
	{
	}

	[Token(Token = "0x6000A33")]
	[Address(RVA = "0x4BCE840", Offset = "0x4BCE840", VA = "0x4BCE840")]
	public bool IsEquivalent(ProbeVolumeBakingSet otherProfile)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x4BCE930", Offset = "0x4BCE930", VA = "0x4BCE930")]
	internal void RemoveScene(string guid)
	{
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x4BCEA60", Offset = "0x4BCEA60", VA = "0x4BCEA60")]
	internal void AddScene(string guid)
	{
	}

	[Token(Token = "0x6000A36")]
	[Address(RVA = "0x4BCEBC0", Offset = "0x4BCEBC0", VA = "0x4BCEBC0")]
	internal void SetScene(string guid, int index)
	{
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x4BCEE40", Offset = "0x4BCEE40", VA = "0x4BCEE40")]
	internal bool HasAnySceneWithProbeVolume()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x4BCF2B0", Offset = "0x4BCF2B0", VA = "0x4BCF2B0")]
	internal string CreateScenario(string name)
	{
		return null;
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x4BCF400", Offset = "0x4BCF400", VA = "0x4BCF400")]
	internal bool RemoveScenario(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x4BCF450", Offset = "0x4BCF450", VA = "0x4BCF450")]
	internal ProbeVolumeBakingSet Clone()
	{
		return null;
	}

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x4BCF520", Offset = "0x4BCF520", VA = "0x4BCF520")]
	public ProbeVolumeBakingSet()
	{
	}
}
