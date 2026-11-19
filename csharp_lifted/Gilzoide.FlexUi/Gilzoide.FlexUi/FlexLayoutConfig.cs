// ==================== AoTTG2 cross-reference ====================
// Type: Gilzoide.FlexUi.FlexLayoutConfig
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gilzoide/FlexUi/FlexLayoutConfig.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayoutConfig.c (Gilzoide.FlexUi.FlexLayoutConfig$$get_PointScaleFactor): clean
			return this._pointScaleFactor;
		}
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x5216060", Offset = "0x5215060", VA = "0x5216060")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayoutConfig.c (Gilzoide.FlexUi.FlexLayoutConfig$$set_PointScaleFactor): 2 lines keep C-only constructs
			long lVar1;
			sbyte local_38;
			sbyte local_28;

			this._pointScaleFactor = value;
			lVar1 = this._config._configPtr;
			if (lVar1 != 0) {
				if (g_data_075425d8 == null) {
					local_38 = "flex-ui";
					local_28 = "FlexUi_ConfigSetPointScaleFactor";
					g_data_075425d8 = (code)il2cpp_runtime_helper_03123230(&local_38);
				}
				(*g_data_075425d8)(value,lVar1);
			}
			return;
		}
	}

	[Token(Token = "0x17000028")]
	public Errata Errata
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x5216180", Offset = "0x5215180", VA = "0x5216180")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayoutConfig.c (Gilzoide.FlexUi.FlexLayoutConfig$$get_Errata): clean
			return this._errata;
		}
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x5216190", Offset = "0x5215190", VA = "0x5216190")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayoutConfig.c (Gilzoide.FlexUi.FlexLayoutConfig$$set_Errata): 5 lines keep C-only constructs
			long lVar1;
			byte[] auVar2 = new byte[16];
			sbyte pcStack_40;
			sbyte pcStack_30;

			this._errata = value;
			lVar1 = this._config._configPtr;
			if (lVar1 != 0) {
				if (g_data_075425e0 == null) {
					pcStack_40 = "flex-ui";
					pcStack_30 = "FlexUi_ConfigSetErrata";
					auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
					method = auVar2._8_8_;
					g_data_075425e0 = auVar2._0_8_;
				}
				(*g_data_075425e0)(lVar1,value,method);
			}
			return;
		}
	}

	[Token(Token = "0x17000029")]
	public ExperimentalFeatureFlags ExperimentalFeatures
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x52162B0", Offset = "0x52152B0", VA = "0x52162B0")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayoutConfig.c (Gilzoide.FlexUi.FlexLayoutConfig$$get_ExperimentalFeatures): clean
			return this._experimentalFeatures;
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x52162C0", Offset = "0x52152C0", VA = "0x52162C0")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayoutConfig.c (Gilzoide.FlexUi.FlexLayoutConfig$$set_ExperimentalFeatures): 4 lines keep C-only constructs
			long lVar1;
			sbyte pcStack_48;
			sbyte pcStack_38;

			this._experimentalFeatures = value;
			lVar1 = this._config._configPtr;
			if (lVar1 != 0) {
				if (g_data_075425e8 == null) {
					pcStack_48 = "flex-ui";
					pcStack_38 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
					g_data_075425e8 = (code)il2cpp_runtime_helper_03123230(&pcStack_48);
				}
				(*g_data_075425e8)(lVar1,0,value & 1);
				lVar1 = this._config._configPtr;
				if (lVar1 != 0) {
					if (g_data_075425e8 == null) {
						pcStack_48 = "flex-ui";
						pcStack_38 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
						g_data_075425e8 = (code)il2cpp_runtime_helper_03123230(&pcStack_48);
					}
					(*g_data_075425e8)(lVar1,1,(byte)value >> 1 & 1);
				}
			}
			return;
		}
	}

	[Token(Token = "0x1700002A")]
	public YGConfig Config
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x520F070", Offset = "0x520E070", VA = "0x520F070")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayoutConfig.c (Gilzoide.FlexUi.FlexLayoutConfig$$get_Config): 3 lines keep C-only constructs
			YGConfig GVar1;
			code *pcVar2;
			IntPtr iVar3;
			sbyte local_38;
			sbyte local_28;

			GVar1._configPtr = this._config._configPtr;
			if (GVar1._configPtr != 0) {
				return (YGConfig)(YGConfig)GVar1._configPtr;
			}
			if (this._isDefaultConfig == false) {
				pcVar2 = g_data_075425c0;
				if (g_data_075425c0 == null) {
					local_38 = "flex-ui";
					local_28 = "FlexUi_ConfigNew";
					pcVar2 = (code)il2cpp_runtime_helper_03123230(&local_38);
					g_data_075425c0 = pcVar2;
				}
			}
			else {
				pcVar2 = g_data_075425d0;
				if (g_data_075425d0 == null) {
					local_38 = "flex-ui";
					local_28 = "FlexUi_ConfigGetDefault";
					pcVar2 = (code)il2cpp_runtime_helper_03123230(&local_38);
					g_data_075425d0 = pcVar2;
				}
			}
			iVar3 = (*pcVar2)();
			this._config._configPtr = iVar3;
			this.RefreshConfig();
			return (YGConfig)(YGConfig)this._config._configPtr;
		}
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x5216780", Offset = "0x5215780", VA = "0x5216780")]
	protected void OnDisable()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayoutConfig.c (Gilzoide.FlexUi.FlexLayoutConfig$$OnDisable): 4 lines keep C-only constructs
		long lVar1;
		long lVar2;
		sbyte pcStack_40;
		sbyte pcStack_30;

		if (g_data_075425d0 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_ConfigGetDefault";
			g_data_075425d0 = (code)il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		lVar2 = (*g_data_075425d0)();
		lVar1 = this._config._configPtr;
		if ((lVar1 != lVar2) && (lVar1 != 0)) {
			if (g_data_075425c8 == null) {
				pcStack_40 = "flex-ui";
				pcStack_30 = "FlexUi_ConfigFree";
				g_data_075425c8 = (code)il2cpp_runtime_helper_03123230(&pcStack_40);
			}
			(*g_data_075425c8)(lVar1);
			this._config._configPtr = 0;
		}
		return;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x5216570", Offset = "0x5215570", VA = "0x5216570")]
	protected void RefreshConfig()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayoutConfig.c (Gilzoide.FlexUi.FlexLayoutConfig$$RefreshConfig): 8 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		long lVar3;
		float fVar4;
		sbyte local_58;
		sbyte local_48;
		float local_24;

		lVar3 = this._config._configPtr;
		if (lVar3 != 0) {
			fVar4 = this._pointScaleFactor;
			if (g_data_075425d8 == null) {
				local_58 = "flex-ui";
				local_48 = "FlexUi_ConfigSetPointScaleFactor";
				local_24 = fVar4;
				g_data_075425d8 = (code)il2cpp_runtime_helper_03123230(&local_58);
				fVar4 = local_24;
			}
			(*g_data_075425d8)(fVar4,lVar3);
			lVar3 = this._config._configPtr;
			if (lVar3 != 0) {
				iVar1 = this._errata;
				if (g_data_075425e0 == null) {
					local_58 = "flex-ui";
					local_48 = "FlexUi_ConfigSetErrata";
					g_data_075425e0 = (code)il2cpp_runtime_helper_03123230(&local_58);
				}
				(*g_data_075425e0)(lVar3,iVar1);
				lVar3 = this._config._configPtr;
				if (lVar3 != 0) {
					uVar2 = this._experimentalFeatures;
					if (g_data_075425e8 == null) {
						local_58 = "flex-ui";
						local_48 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
						g_data_075425e8 = (code)il2cpp_runtime_helper_03123230(&local_58);
					}
					(*g_data_075425e8)(lVar3,0,uVar2 & 1);
					lVar3 = this._config._configPtr;
					if (lVar3 != 0) {
						if (g_data_075425e8 == null) {
							local_58 = "flex-ui";
							local_48 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
							g_data_075425e8 = (code)il2cpp_runtime_helper_03123230(&local_58);
						}
						(*g_data_075425e8)(lVar3,1,(byte)uVar2 >> 1 & 1);
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x5216920", Offset = "0x5215920", VA = "0x5216920")]
	public FlexLayoutConfig()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayoutConfig.c (Gilzoide.FlexUi.FlexLayoutConfig$$.ctor): clean
		this._pointScaleFactor = 1.0;
		base();
		return;
	}
}
