// ==================== AoTTG2 cross-reference ====================
// Type: Gilzoide.FlexUi.Yoga.YGConfig
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gilzoide/FlexUi/Yoga/YGConfig.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGConfig.c (Gilzoide.FlexUi.Yoga.YGConfig$$get_IsNull): clean
			return this._configPtr == 0;
		}
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x520F260", Offset = "0x520E260", VA = "0x520F260")]
	public static YGConfig GetDefaultConfig()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGConfig.c (Gilzoide.FlexUi.Yoga.YGConfig$$GetDefaultConfig): 3 lines keep C-only constructs
		YGConfig GVar1;
		sbyte local_30;
		sbyte local_20;

		if (g_data_075425d0 == null) {
			local_30 = "flex-ui";
			local_20 = "FlexUi_ConfigGetDefault";
			g_data_075425d0 = (code)il2cpp_runtime_helper_03123230(&local_30);
			GVar1._configPtr = (YGConfig)(*g_data_075425d0)();
			return (YGConfig)GVar1._configPtr;
		}
		GVar1._configPtr = (YGConfig)(*g_data_075425d0)();
		return (YGConfig)GVar1._configPtr;
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x52164F0", Offset = "0x52154F0", VA = "0x52164F0")]
	public void Instantiate()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGConfig.c (Gilzoide.FlexUi.Yoga.YGConfig$$Instantiate): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		if (g_data_075425c0 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_ConfigNew";
			g_data_075425c0 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		iVar1 = (*g_data_075425c0)();
		this._configPtr = iVar1;
		return;
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x5216890", Offset = "0x5215890", VA = "0x5216890", Slot = "4")]
	public void Dispose()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGConfig.c (Gilzoide.FlexUi.Yoga.YGConfig$$Dispose): 2 lines keep C-only constructs
		long lVar1;
		sbyte pcStack_40;
		sbyte pcStack_30;

		lVar1 = this._configPtr;
		if (lVar1 != 0) {
			if (g_data_075425c8 == null) {
				pcStack_40 = "flex-ui";
				pcStack_30 = "FlexUi_ConfigFree";
				g_data_075425c8 = (code)il2cpp_runtime_helper_03123230(&pcStack_40);
			}
			(*g_data_075425c8)(lVar1);
			this._configPtr = 0;
		}
		return;
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x5216880", Offset = "0x5215880", VA = "0x5216880", Slot = "5")]
	public bool Equals(YGConfig other)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGConfig.c (Gilzoide.FlexUi.Yoga.YGConfig$$Equals): clean
		return (YGConfig)this._configPtr == other._configPtr;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x52163D0", Offset = "0x52153D0", VA = "0x52163D0")]
	public void SetExperimentalFeatures(ExperimentalFeatureFlags experimentalFeatures)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGConfig.c (Gilzoide.FlexUi.Yoga.YGConfig$$SetExperimentalFeatures): 4 lines keep C-only constructs
		long lVar1;
		sbyte pcStack_48;
		sbyte pcStack_38;

		lVar1 = this._configPtr;
		if (lVar1 != 0) {
			if (g_data_075425e8 == null) {
				pcStack_48 = "flex-ui";
				pcStack_38 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
				g_data_075425e8 = (code)il2cpp_runtime_helper_03123230(&pcStack_48);
			}
			(*g_data_075425e8)(lVar1,0,experimentalFeatures & 1);
			lVar1 = this._configPtr;
			if (lVar1 != 0) {
				if (g_data_075425e8 == null) {
					pcStack_48 = "flex-ui";
					pcStack_38 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
					g_data_075425e8 = (code)il2cpp_runtime_helper_03123230(&pcStack_48);
				}
				(*g_data_075425e8)(lVar1,1,(byte)experimentalFeatures >> 1 & 1);
			}
		}
		return;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x5216A90", Offset = "0x5215A90", VA = "0x5216A90")]
	public void Free()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGConfig.c (Gilzoide.FlexUi.Yoga.YGConfig$$Free): 2 lines keep C-only constructs
		long lVar1;
		sbyte local_38;
		sbyte local_28;

		lVar1 = this._configPtr;
		if (lVar1 != 0) {
			if (g_data_075425c8 == null) {
				local_38 = "flex-ui";
				local_28 = "FlexUi_ConfigFree";
				g_data_075425c8 = (code)il2cpp_runtime_helper_03123230(&local_38);
			}
			(*g_data_075425c8)(lVar1);
		}
		return;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x52160F0", Offset = "0x52150F0", VA = "0x52160F0")]
	public void SetPointScaleFactor(float enabled)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGConfig.c (Gilzoide.FlexUi.Yoga.YGConfig$$SetPointScaleFactor): 2 lines keep C-only constructs
		long lVar1;
		sbyte local_38;
		sbyte local_28;

		lVar1 = this._configPtr;
		if (lVar1 != 0) {
			if (g_data_075425d8 == null) {
				local_38 = "flex-ui";
				local_28 = "FlexUi_ConfigSetPointScaleFactor";
				g_data_075425d8 = (code)il2cpp_runtime_helper_03123230(&local_38);
			}
			(*g_data_075425d8)(enabled,lVar1);
		}
		return;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x5216220", Offset = "0x5215220", VA = "0x5216220")]
	public void SetErrata(Errata errata)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGConfig.c (Gilzoide.FlexUi.Yoga.YGConfig$$SetErrata): 6 lines keep C-only constructs
		long lVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_075425e0;
		lVar1 = this._configPtr;
		if (lVar1 != 0) {
			if (g_data_075425e0 == null) {
				pcStack_40 = "flex-ui";
				pcStack_30 = "FlexUi_ConfigSetErrata";
				auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
			}
			g_data_075425e0 = auVar2._0_8_;
			(*g_data_075425e0)(lVar1,errata,auVar2._8_8_);
		}
		return;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x5216B10", Offset = "0x5215B10", VA = "0x5216B10")]
	public void SetExperimentalFeatureEnabled(ExperimentalFeature feature, bool enabled)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGConfig.c (Gilzoide.FlexUi.Yoga.YGConfig$$SetExperimentalFeatureEnabled): 2 lines keep C-only constructs
		long lVar1;
		sbyte pcStack_48;
		sbyte pcStack_38;

		lVar1 = this._configPtr;
		if (lVar1 != 0) {
			if (g_data_075425e8 == null) {
				pcStack_48 = "flex-ui";
				pcStack_38 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
				g_data_075425e8 = (code)il2cpp_runtime_helper_03123230(&pcStack_48);
			}
			(*g_data_075425e8)(lVar1,feature,enabled);
		}
		return;
	}
}
