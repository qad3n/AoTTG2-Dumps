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
		[Address(RVA = "0x39BC430", Offset = "0x39BC430", VA = "0x39BC430")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x39BC440", Offset = "0x39BC440", VA = "0x39BC440")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public Errata Errata
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x39BC560", Offset = "0x39BC560", VA = "0x39BC560")]
		get
		{
			return default(Errata);
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x39BC570", Offset = "0x39BC570", VA = "0x39BC570")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public ExperimentalFeatureFlags ExperimentalFeatures
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x39BC690", Offset = "0x39BC690", VA = "0x39BC690")]
		get
		{
			return default(ExperimentalFeatureFlags);
		}
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x39BC6A0", Offset = "0x39BC6A0", VA = "0x39BC6A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public YGConfig Config
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x39B5260", Offset = "0x39B5260", VA = "0x39B5260")]
		get
		{
			return default(YGConfig);
		}
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x39BCB90", Offset = "0x39BCB90", VA = "0x39BCB90")]
	protected void OnDisable()
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x39BC970", Offset = "0x39BC970", VA = "0x39BC970")]
	protected void RefreshConfig()
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x39BCD30", Offset = "0x39BCD30", VA = "0x39BCD30")]
	public FlexLayoutConfig()
	{
	}
}
