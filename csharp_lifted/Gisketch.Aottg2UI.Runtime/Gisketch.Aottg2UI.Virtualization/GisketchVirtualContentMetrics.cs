// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentMetrics.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Virtualization;

[Token(Token = "0x2000009")]
public readonly struct GisketchVirtualContentMetrics
{
	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x0")]
	public readonly GisketchVirtualContentMode Mode;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x4")]
	public readonly int Columns;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x8")]
	public readonly float ItemWidth;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0xC")]
	public readonly float ItemHeight;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x10")]
	public readonly float Gap;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x14")]
	public readonly float ViewportHeight;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x18")]
	public readonly int VirtualizationThreshold;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x1C")]
	public readonly int OverscanRows;

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x521E3C0", Offset = "0x521D3C0", VA = "0x521E3C0")]
	public GisketchVirtualContentMetrics(GisketchVirtualContentMode mode, float itemWidth, float itemHeight, float gap, float viewportHeight, int columns = 1, int virtualizationThreshold = 80, int overscanRows = 2)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentMetrics.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$.ctor): 10 lines keep C-only constructs
		int iVar1;
		byte[] auVar2 = new byte[16];

		this.Mode = mode;
		if (columns < 2) {
			columns = 1;
		}
		this.Columns = columns;
		auVar2._4_4_ = itemHeight;
		auVar2._0_4_ = itemWidth;
		auVar2._8_4_ = gap;
		auVar2._12_4_ = viewportHeight;
		auVar2 = maxps(_DAT_0100a430, auVar2);
		this.ItemWidth = (float)auVar2._0_4_;
		this.ItemHeight = (float)auVar2._4_4_;
		this.Gap = (float)auVar2._8_4_;
		this.ViewportHeight = (float)auVar2._12_4_;
		iVar1 = 1;
		if (1 < virtualizationThreshold) {
			iVar1 = virtualizationThreshold;
		}
		this.VirtualizationThreshold = iVar1;
		iVar1 = 0;
		if (0 < overscanRows) {
			iVar1 = overscanRows;
		}
		this.OverscanRows = iVar1;
		return;
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x521E400", Offset = "0x521D400", VA = "0x521E400")]
	public bool ShouldVirtualize(int itemCount)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentMetrics.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$ShouldVirtualize): clean
		return this.VirtualizationThreshold <= itemCount;
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x521E410", Offset = "0x521D410", VA = "0x521E410")]
	public int RowCount(int itemCount)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentMetrics.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$RowCount): clean
		int iVar1;
		float fVar2;

		if (itemCount < 1) {
			return 0;
		}
		iVar1 = this.Columns;
		fVar2 = (float)itemCount / (float)iVar1;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			fVar2 = ceilf(fVar2);
			return (int)fVar2;
		}
		fVar2 = ceilf(fVar2);
		return (int)fVar2;
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x521E4A0", Offset = "0x521D4A0", VA = "0x521E4A0")]
	public float ContentHeight(int itemCount)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentMetrics.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$ContentHeight): clean
		uint uVar1;
		uint uVar2;
		int iVar3;
		int iVar4;
		float fVar5;

		iVar3 = 0;
		if (0 < itemCount) {
			iVar3 = this.Columns;
			fVar5 = ceilf((float)itemCount / (float)iVar3);
			iVar3 = (int)fVar5;
		}
		iVar4 = 0;
		if (0 < iVar3 + -1) {
			iVar4 = iVar3 + -1;
		}
		uVar1 = this.ItemHeight;
		uVar2 = this.Gap;
		return (float)iVar4 * (float)uVar2 + (float)iVar3 * (float)uVar1;
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x521E550", Offset = "0x521D550", VA = "0x521E550")]
	public float ContentWidth()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentMetrics.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$ContentWidth): clean
		int iVar1;
		int iVar2;
		int iVar3;

		if (this.Mode == 0) {
			return -1.0;
		}
		iVar2 = this.Columns;
		iVar1 = iVar2 + -1;
		iVar3 = 0;
		if (0 < iVar1) {
			iVar3 = iVar1;
		}
		return (float)iVar3 * this.Gap + (float)iVar2 * this.ItemWidth;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x521E590", Offset = "0x521D590", VA = "0x521E590")]
	public GisketchVirtualRange RangeFor(int itemCount, float offset, float viewportHeight)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentMetrics.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$RangeFor): clean
		int iVar1;
		ulong uVar2;
		GisketchVirtualRange GVar3;
		int iVar4;
		uint uVar5;
		uint uVar6;
		int iVar7;
		uint uVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float local_40;

		if (itemCount < 1) {
			GVar3.Start = -1;
			GVar3.End = -1;
		}
		else {
			fVar11 = this.ItemHeight + this.Gap;
			fVar10 = 0.0;
			if (0.0 <= offset) {
				fVar10 = offset;
			}
			local_40 = 1.0;
			fVar9 = floorf(fVar10 / fVar11);
			iVar1 = (int)fVar9 - this.OverscanRows;
			iVar4 = this.Columns;
			iVar7 = 0;
			if (0 < iVar1) {
				iVar7 = iVar1;
			}
			if (1.0 <= viewportHeight) {
				local_40 = viewportHeight;
			}
			fVar9 = (float)itemCount / (float)iVar4;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				fVar9 = ceilf(fVar9);
			}
			else {
				fVar9 = ceilf(fVar9);
			}
			fVar10 = ceilf((fVar10 + local_40) / fVar11);
			iVar4 = (int)fVar10 + this.OverscanRows;
			if ((int)fVar9 + -1 < iVar4) {
				iVar4 = (int)fVar9 + -1;
			}
			iVar1 = this.Columns;
			uVar8 = iVar7 * iVar1;
			uVar6 = itemCount - 1;
			uVar5 = uVar6;
			if ((int)uVar8 < (int)uVar6) {
				uVar5 = uVar8;
			}
			uVar2 = 0;
			if (-1 < (int)uVar8) {
				uVar2 = (ulong)uVar5;
			}
			uVar5 = (iVar4 + 1) * iVar1 - 1;
			if ((int)uVar6 < (int)uVar5) {
				uVar5 = uVar6;
			}
			GVar3 = (GisketchVirtualRange)(uVar2 | (ulong)uVar5 << 0x20);
		}
		return (GisketchVirtualRange)GVar3;
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x521E790", Offset = "0x521D790", VA = "0x521E790")]
	public Vector2 PositionFor(int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentMetrics.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentMetrics$$PositionFor): clean
		uint uVar1;
		uint uVar2;
		int iVar3;
		Vector2 UVar4;

		iVar3 = this.Columns;
		uVar1 = this.ItemHeight;
		uVar2 = this.Gap;
		UVar4.x = (this.ItemWidth + (float)uVar2) * (float)(itemIndex % iVar3);
		UVar4.y = ((float)uVar2 + (float)uVar1) * (float)-(itemIndex / iVar3);
		return (Vector2)UVar4;
	}
}
