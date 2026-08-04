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
		[Address(RVA = "0x3A25B30", Offset = "0x3A25B30", VA = "0x3A25B30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x3A1E6A0", Offset = "0x3A1E6A0", VA = "0x3A1E6A0")]
	public static YGConfig GetDefaultConfig()
	{
		return default(YGConfig);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x3A25B40", Offset = "0x3A25B40", VA = "0x3A25B40")]
	public void Instantiate()
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x3A25EF0", Offset = "0x3A25EF0", VA = "0x3A25EF0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x3A25EE0", Offset = "0x3A25EE0", VA = "0x3A25EE0", Slot = "5")]
	public bool Equals(YGConfig other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x3A25A10", Offset = "0x3A25A10", VA = "0x3A25A10")]
	public void SetExperimentalFeatures(ExperimentalFeatureFlags experimentalFeatures)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x3A260F0", Offset = "0x3A260F0", VA = "0x3A260F0")]
	public void Free()
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x3A25720", Offset = "0x3A25720", VA = "0x3A25720")]
	public void SetPointScaleFactor(float enabled)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x3A25850", Offset = "0x3A25850", VA = "0x3A25850")]
	public void SetErrata(Errata errata)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x3A26170", Offset = "0x3A26170", VA = "0x3A26170")]
	public void SetExperimentalFeatureEnabled(ExperimentalFeature feature, bool enabled)
	{
	}
}
