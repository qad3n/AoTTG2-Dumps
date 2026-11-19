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

[Token(Token = "0x2000004")]
[CreateAssetMenu]
public class FlexLayoutConfig : ScriptableObject
{
	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x18")]
	[Tooltip("If true, this configuration will be used by FlexLayout nodes that do not have a configuration set explicitly.")]
	[SerializeField]
	private bool _isDefaultConfig;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x1C")]
	[Tooltip("Yoga will by default round final layout positions and dimensions to the nearst point.\n'Point Scale Factor' controls the density of the grid used for layout rounding (e.g. to round to the closest display pixel).\nSet this to 0 to avoid rounding the layout results.")]
	[SerializeField]
	[Min(0f)]
	private float _pointScaleFactor;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x20")]
	[Tooltip("Configures how Yoga balances W3C conformance vs compatibility with layouts created against earlier versions of Yoga.")]
	[SerializeField]
	private Errata _errata;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x24")]
	[Tooltip("Turn experimental Yoga features on or off")]
	[SerializeField]
	private ExperimentalFeatureFlags _experimentalFeatures;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x28")]
	private YGConfig _config;

	[Token(Token = "0x17000027")]
	public float PointScaleFactor
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x5216050", Offset = "0x5215050", VA = "0x5216050")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x5216060", Offset = "0x5215060", VA = "0x5216060")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public Errata Errata
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x5216180", Offset = "0x5215180", VA = "0x5216180")]
		get
		{
			return default(Errata);
		}
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x5216190", Offset = "0x5215190", VA = "0x5216190")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public ExperimentalFeatureFlags ExperimentalFeatures
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x52162B0", Offset = "0x52152B0", VA = "0x52162B0")]
		get
		{
			return default(ExperimentalFeatureFlags);
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x52162C0", Offset = "0x52152C0", VA = "0x52162C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public YGConfig Config
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x520F070", Offset = "0x520E070", VA = "0x520F070")]
		get
		{
			return default(YGConfig);
		}
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x5216780", Offset = "0x5215780", VA = "0x5216780")]
	protected void OnDisable()
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x5216570", Offset = "0x5215570", VA = "0x5216570")]
	protected void RefreshConfig()
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x5216920", Offset = "0x5215920", VA = "0x5216920")]
	public FlexLayoutConfig()
	{
	}
}
