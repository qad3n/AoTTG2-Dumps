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
		[Address(RVA = "0x52164E0", Offset = "0x52154E0", VA = "0x52164E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x520F260", Offset = "0x520E260", VA = "0x520F260")]
	public static YGConfig GetDefaultConfig()
	{
		return default(YGConfig);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x52164F0", Offset = "0x52154F0", VA = "0x52164F0")]
	public void Instantiate()
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x5216890", Offset = "0x5215890", VA = "0x5216890", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x5216880", Offset = "0x5215880", VA = "0x5216880", Slot = "5")]
	public bool Equals(YGConfig other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x52163D0", Offset = "0x52153D0", VA = "0x52163D0")]
	public void SetExperimentalFeatures(ExperimentalFeatureFlags experimentalFeatures)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x5216A90", Offset = "0x5215A90", VA = "0x5216A90")]
	public void Free()
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x52160F0", Offset = "0x52150F0", VA = "0x52160F0")]
	public void SetPointScaleFactor(float enabled)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x5216220", Offset = "0x5215220", VA = "0x5216220")]
	public void SetErrata(Errata errata)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x5216B10", Offset = "0x5215B10", VA = "0x5216B10")]
	public void SetExperimentalFeatureEnabled(ExperimentalFeature feature, bool enabled)
	{
	}
}
