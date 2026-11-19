// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/State/GisketchButtonWidthMeasure.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.State;

[Token(Token = "0x2000033")]
internal sealed class GisketchButtonWidthMeasure : MonoBehaviour
{
	[Token(Token = "0x17000021")]
	public float MinWidthFloor
	{
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x5243C30", Offset = "0x5242C30", VA = "0x5243C30")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchButtonWidthMeasure.c (Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$get_MinWidthFloor): clean
			return this._MinWidthFloor_k__BackingField;
		}
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x5243C40", Offset = "0x5242C40", VA = "0x5243C40")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchButtonWidthMeasure.c (Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$set_MinWidthFloor): clean
			this._MinWidthFloor_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000022")]
	public float HorizontalPadding
	{
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x5243C50", Offset = "0x5242C50", VA = "0x5243C50")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchButtonWidthMeasure.c (Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$get_HorizontalPadding): clean
			return this._HorizontalPadding_k__BackingField;
		}
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x5243C60", Offset = "0x5242C60", VA = "0x5243C60")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchButtonWidthMeasure.c (Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$set_HorizontalPadding): clean
			this._HorizontalPadding_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x5243C70", Offset = "0x5242C70", VA = "0x5243C70")]
	public void Setup(float minWidthFloor, float horizontalPadding = 0f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchButtonWidthMeasure.c (Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$Setup): 10 lines keep C-only constructs
		uint in_XMM0_Db;
		uint in_XMM1_Db;
		byte[] auVar1 = new byte[16];

		auVar1._4_4_ = horizontalPadding;
		auVar1._0_4_ = minWidthFloor;
		auVar1._8_4_ = in_XMM0_Db;
		auVar1._12_4_ = in_XMM1_Db;
		auVar1 = maxps(ZEXT816(0), auVar1);
		this._MinWidthFloor_k__BackingField = (float)auVar1._0_4_;
		this._HorizontalPadding_k__BackingField = (float)auVar1._4_4_;
		return;
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x5243C80", Offset = "0x5242C80", VA = "0x5243C80")]
	public GisketchButtonWidthMeasure()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchButtonWidthMeasure.c (Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$.ctor): clean
		base();
		return;
	}
}
