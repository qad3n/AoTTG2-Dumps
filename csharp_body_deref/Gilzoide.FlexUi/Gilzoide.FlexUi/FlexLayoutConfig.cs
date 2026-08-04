// ==================== AoTTG2 cross-reference ====================
// Type: Gilzoide.FlexUi.FlexLayoutConfig
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gilzoide/FlexUi/FlexLayoutConfig.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gilzoide.FlexUi.Yoga;
using Il2CppDummyDll;
using UnityEngine;

namespace Gilzoide.FlexUi;

[Token(Token = "0x2000006")]
[CreateAssetMenu]
public class FlexLayoutConfig : ScriptableObject
{
	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x18")]
	[Tooltip("If true, this configuration will be used by FlexLayout nodes that do not have a configuration set explicitly.")]
	[SerializeField]
	private bool _isDefaultConfig;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x1C")]
	[Tooltip("Yoga will by default round final layout positions and dimensions to the nearst point.\n'Point Scale Factor' controls the density of the grid used for layout rounding (e.g. to round to the closest display pixel).\nSet this to 0 to avoid rounding the layout results.")]
	[SerializeField]
	[Min(0f)]
	private float _pointScaleFactor;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x20")]
	[Tooltip("Configures how Yoga balances W3C conformance vs compatibility with layouts created against earlier versions of Yoga.")]
	[SerializeField]
	private Errata _errata;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x24")]
	[Tooltip("Turn experimental Yoga features on or off")]
	[SerializeField]
	private ExperimentalFeatureFlags _experimentalFeatures;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x28")]
	private YGConfig _config;

	[Token(Token = "0x17000027")]
	public float PointScaleFactor
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x3A25680", Offset = "0x3A25680", VA = "0x3A25680")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x3A25690", Offset = "0x3A25690", VA = "0x3A25690")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public Errata Errata
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x3A257B0", Offset = "0x3A257B0", VA = "0x3A257B0")]
		get
		{
			return default(Errata);
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x3A257C0", Offset = "0x3A257C0", VA = "0x3A257C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public ExperimentalFeatureFlags ExperimentalFeatures
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x3A258E0", Offset = "0x3A258E0", VA = "0x3A258E0")]
		get
		{
			return default(ExperimentalFeatureFlags);
		}
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x3A258F0", Offset = "0x3A258F0", VA = "0x3A258F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public YGConfig Config
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x3A1E4B0", Offset = "0x3A1E4B0", VA = "0x3A1E4B0")]
		get
		{
			return default(YGConfig);
		}
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x3A25DE0", Offset = "0x3A25DE0", VA = "0x3A25DE0")]
	protected void OnDisable()
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x3A25BC0", Offset = "0x3A25BC0", VA = "0x3A25BC0")]
	protected void RefreshConfig()
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x3A25F80", Offset = "0x3A25F80", VA = "0x3A25F80")]
	public FlexLayoutConfig()
	{
	}
}
