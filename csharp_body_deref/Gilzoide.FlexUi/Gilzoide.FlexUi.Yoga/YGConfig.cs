using System;
using Il2CppDummyDll;

namespace Gilzoide.FlexUi.Yoga;

[Token(Token = "0x200001B")]
public struct YGConfig : IDisposable, IEquatable<YGConfig>
{
	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr _configPtr;

	[Token(Token = "0x1700002C")]
	public bool IsNull
	{
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x39BC8E0", Offset = "0x39BC8E0", VA = "0x39BC8E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x39B5450", Offset = "0x39B5450", VA = "0x39B5450")]
	public static YGConfig GetDefaultConfig()
	{
		return default(YGConfig);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x39BC8F0", Offset = "0x39BC8F0", VA = "0x39BC8F0")]
	public void Instantiate()
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x39BCCA0", Offset = "0x39BCCA0", VA = "0x39BCCA0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x39BCC90", Offset = "0x39BCC90", VA = "0x39BCC90", Slot = "5")]
	public bool Equals(YGConfig other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x39BC7C0", Offset = "0x39BC7C0", VA = "0x39BC7C0")]
	public void SetExperimentalFeatures(ExperimentalFeatureFlags experimentalFeatures)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x39BCEA0", Offset = "0x39BCEA0", VA = "0x39BCEA0")]
	public void Free()
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x39BC4D0", Offset = "0x39BC4D0", VA = "0x39BC4D0")]
	public void SetPointScaleFactor(float enabled)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x39BC600", Offset = "0x39BC600", VA = "0x39BC600")]
	public void SetErrata(Errata errata)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x39BCF20", Offset = "0x39BCF20", VA = "0x39BCF20")]
	public void SetExperimentalFeatureEnabled(ExperimentalFeature feature, bool enabled)
	{
	}
}
