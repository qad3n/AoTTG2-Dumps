// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollMetrics.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Virtualization;

[Token(Token = "0x200000E")]
public readonly struct GisketchVirtualScrollMetrics
{
	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x0")]
	public readonly float ItemHeight;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x4")]
	public readonly float Gap;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x8")]
	public readonly float ViewportHeight;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0xC")]
	public readonly int VirtualizationThreshold;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x10")]
	public readonly int OverscanRows;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x14")]
	public readonly float PaddingLeft;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x18")]
	public readonly float PaddingRight;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x1C")]
	public readonly float PaddingTop;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x20")]
	public readonly float PaddingBottom;

	[Token(Token = "0x17000011")]
	public float Step
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x5220880", Offset = "0x521F880", VA = "0x5220880")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollMetrics.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$get_Step): clean
			return this.ItemHeight + this.Gap;
		}
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x5220820", Offset = "0x521F820", VA = "0x5220820")]
	public GisketchVirtualScrollMetrics(float itemHeight, float gap, float viewportHeight, int virtualizationThreshold = 80, int overscanRows = 2, float paddingLeft = 0f, float paddingRight = 0f, float paddingTop = 0f, float paddingBottom = 0f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollMetrics.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$.ctor): 32 lines keep C-only constructs
		byte[] auVar1 = new byte[16];
		int iVar2;
		int iVar3;
		byte[] auVar4 = new byte[12];
		byte[] in_register_00001204 = new byte[12];
		byte[] auVar6 = new byte[16];
		byte[] auVar5 = new byte[16];
		uint in_XMM1_Db;
		byte[] auVar7 = new byte[16];

		auVar7._4_12_ = in_register_00001204;
		auVar7._0_4_ = itemHeight;
		auVar6._0_8_ = auVar7._0_8_;
		auVar6._8_4_ = in_register_00001204._0_4_;
		auVar6._12_4_ = in_XMM1_Db;
		auVar5._8_8_ = auVar6._8_8_;
		auVar5._4_4_ = gap;
		auVar5._0_4_ = itemHeight;
		auVar7 = maxps(ZEXT816(0x3f800000), auVar5);
		this.ItemHeight = (float)auVar7._0_4_;
		this.Gap = (float)auVar7._4_4_;
		auVar4 = ZEXT812(0x3f800000);
		if (auVar4._0_4_ <= viewportHeight) {
			auVar4._4_8_ = auVar4._4_8_;
			auVar4._0_4_ = viewportHeight;
		}
		this.ViewportHeight = auVar4._0_4_;
		iVar2 = 1;
		if (1 < virtualizationThreshold) {
			iVar2 = virtualizationThreshold;
		}
		iVar3 = 0;
		if (0 < overscanRows) {
			iVar3 = overscanRows;
		}
		this.VirtualizationThreshold = iVar2;
		this.OverscanRows = iVar3;
		auVar1._4_4_ = paddingRight;
		auVar1._0_4_ = paddingLeft;
		auVar1._8_4_ = paddingTop;
		auVar1._12_4_ = paddingBottom;
		auVar7 = maxps(ZEXT816(0), auVar1);
		this.PaddingLeft = (float)auVar7._0_4_;
		this.PaddingRight = (float)auVar7._4_4_;
		this.PaddingTop = (float)auVar7._8_4_;
		this.PaddingBottom = (float)auVar7._12_4_;
		return;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x5220870", Offset = "0x521F870", VA = "0x5220870")]
	public bool ShouldVirtualize(int itemCount)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollMetrics.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$ShouldVirtualize): clean
		return this.VirtualizationThreshold <= itemCount;
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x5220890", Offset = "0x521F890", VA = "0x5220890")]
	public float ContentHeight(int itemCount)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollMetrics.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$ContentHeight): clean
		float fVar1;
		uint uVar2;
		uint uVar3;

		fVar1 = this.PaddingTop;
		if (itemCount < 1) {
			return fVar1 + this.PaddingBottom;
		}
		uVar2 = this.ItemHeight;
		uVar3 = this.Gap;
		return (float)(itemCount + -1) * (float)uVar3 + fVar1 + (float)itemCount * (float)uVar2 +this.PaddingBottom;
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x52208D0", Offset = "0x521F8D0", VA = "0x52208D0")]
	public GisketchVirtualRange RangeFor(int itemCount, float offset, float viewportHeight)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollMetrics.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$RangeFor): clean
		float fVar1;
		uint uVar2;
		int iVar3;
		GisketchVirtualRange GVar4;
		int iVar5;
		int iVar6;
		float fVar7;
		float fVar8;
		float fVar9;

		if (itemCount < 1) {
			GVar4.Start = -1;
			GVar4.End = -1;
		}
		else {
			fVar7 = offset - this.PaddingTop;
			fVar9 = 0.0;
			if (0.0 <= fVar7) {
				fVar9 = fVar7;
			}
			fVar7 = this.ItemHeight;
			fVar1 = this.Gap;
			fVar8 = 1.0;
			if (1.0 <= viewportHeight) {
				fVar8 = viewportHeight;
			}
			fVar7 = floorf(fVar9 / (fVar7 + fVar1));
			iVar3 = (int)fVar7 - this.OverscanRows;
			iVar6 = 0;
			if (0 < iVar3) {
				iVar6 = iVar3;
			}
			fVar7 = this.ItemHeight;
			fVar1 = this.Gap;
			if (Il2CppMethodInitialized_0753e7f9 == false) {
				Il2CppMethodInitialized_0753e7f9 = true;
				uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			fVar9 = ceilf((fVar8 + fVar9) / (fVar7 + fVar1));
			iVar5 = (int)fVar9 + this.OverscanRows;
			if (itemCount + -1 < iVar5) {
				iVar5 = itemCount + -1;
			}
			GVar4.End = iVar5;
			GVar4.Start = iVar6;
		}
		return (GisketchVirtualRange)GVar4;
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x5220A50", Offset = "0x521FA50", VA = "0x5220A50")]
	public float OffsetFor(int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollMetrics.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollMetrics$$OffsetFor): clean
		int iVar1;

		iVar1 = 0;
		if (0 < itemIndex) {
			iVar1 = itemIndex;
		}
		return (float)iVar1 * (this.ItemHeight + this.Gap) + this.PaddingTop;
	}
}
