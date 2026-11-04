// ==================== AoTTG2 cross-reference ====================
// Type: Gilzoide.FlexUi.Yoga.YGConfig
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gilzoide/FlexUi/Yoga/YGConfig.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gilzoide.FlexUi.Yoga;

[Token(Token = "0x2000019")]
public struct YGConfig : IDisposable, IEquatable<YGConfig>
{
	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr _configPtr;

	[Token(Token = "0x1700002C")]
	public bool IsNull
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x187E270", Offset = "0x187C870", VA = "0x18187E270")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x187DF70", Offset = "0x187C570", VA = "0x18187DF70")]
	public static YGConfig GetDefaultConfig()
	{
		return default(YGConfig);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x187DFE0", Offset = "0x187C5E0", VA = "0x18187DFE0")]
	public void Instantiate()
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x187DE30", Offset = "0x187C430", VA = "0x18187DE30", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x187DED0", Offset = "0x187C4D0", VA = "0x18187DED0", Slot = "5")]
	public bool Equals(YGConfig other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x187E180", Offset = "0x187C780", VA = "0x18187E180")]
	public void SetExperimentalFeatures(ExperimentalFeatureFlags experimentalFeatures)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x187DEE0", Offset = "0x187C4E0", VA = "0x18187DEE0")]
	public void Free()
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x187E1D0", Offset = "0x187C7D0", VA = "0x18187E1D0")]
	public void SetPointScaleFactor(float enabled)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x187E050", Offset = "0x187C650", VA = "0x18187E050")]
	public void SetErrata(Errata errata)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x187E0E0", Offset = "0x187C6E0", VA = "0x18187E0E0")]
	public void SetExperimentalFeatureEnabled(ExperimentalFeature feature, bool enabled)
	{
	}
}
