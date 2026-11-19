// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorHierarchyVirtualization
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorHierarchyVirtualization.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20008AE")]
public static class MapEditorHierarchyVirtualization
{
	[Token(Token = "0x60052CC")]
	[Address(RVA = "0x5C78D70", Offset = "0x5C77D70", VA = "0x5C78D70")]
	public static int ComputePoolSize(float viewportHeight, float rowHeight, float spacing, int buffer, int minPool, int totalRows)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyVirtualization.c (UI.MapEditorHierarchyVirtualization$$ComputePoolSize): clean
		uint uVar1;
		int iVar2;
		int iVar3;
		float fVar4;
		float fVar5;

		if (Il2CppMethodInitialized_0753e7f9 == false) {
			Il2CppMethodInitialized_0753e7f9 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		fVar4 = 1.0;
		if (1.0 <= viewportHeight) {
			fVar4 = viewportHeight;
		}
		fVar5 = 1.0;
		if (1.0 <= rowHeight + spacing) {
			fVar5 = rowHeight + spacing;
		}
		fVar4 = ceilf(fVar4 / fVar5);
		iVar2 = 0;
		if (0 < buffer) {
			iVar2 = buffer;
		}
		iVar3 = iVar2 + (int)fVar4;
		if (iVar2 + (int)fVar4 < minPool) {
			iVar3 = minPool;
		}
		if (totalRows < 2) {
			totalRows = 1;
		}
		if (iVar3 < totalRows) {
			totalRows = iVar3;
		}
		if (iVar3 < 1) {
			totalRows = 1;
		}
		return totalRows;
	}

	[Token(Token = "0x60052CD")]
	[Address(RVA = "0x5C79080", Offset = "0x5C78080", VA = "0x5C79080")]
	public static int ComputeStartIndex(float contentAnchoredY, float stride, int buffer, int totalRows, int poolSize)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyVirtualization.c (UI.MapEditorHierarchyVirtualization$$ComputeStartIndex): clean
		int iVar1;
		int iVar2;
		int iVar3;
		float fVar4;
		float fVar5;

		iVar2 = totalRows - poolSize;
		if (0 < iVar2) {
			fVar5 = 0.0;
			if (0.0 <= contentAnchoredY) {
				fVar5 = contentAnchoredY;
			}
			fVar4 = 1.0;
			if (1.0 <= stride) {
				fVar4 = stride;
			}
			fVar5 = floorf(fVar5 / fVar4);
			if (buffer < 1) {
				buffer = 0;
			}
			iVar1 = (int)fVar5 - ((uint)buffer >> 1);
			if (iVar1 < iVar2) {
			}
			if (iVar1 < 0) {
			}
		}
		return iVar3;
	}

	[Token(Token = "0x60052CE")]
	[Address(RVA = "0x5C79130", Offset = "0x5C78130", VA = "0x5C79130")]
	public static int ComputeStartIndexFromNormalized(float verticalNormalizedPosition, int maxStart)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyVirtualization.c (UI.MapEditorHierarchyVirtualization$$ComputeStartIndexFromNormalized): 12 lines keep C-only constructs
		int iVar1;
		int iVar2;
		MethodInfo method_00;
		double x;
		double dVar3;
		float fVar4;
		Il2CppMethodPointer pIStack_20;
		byte[] auStack_18 = new byte[16];

		if (maxStart < 1) {
			return 0;
		}
		fVar4 = 1.0 - verticalNormalizedPosition;
		auStack_18._0_4_ = 1.0;
		if (fVar4 <= 1.0) {
			auStack_18._0_4_ = fVar4;
		}
		auStack_18._0_4_ = -(uint)(0.0 <= fVar4) & auStack_18._0_4_;
		auStack_18._4_4_ = 0;
		auStack_18._8_4_ = 0;
		auStack_18._12_4_ = 0;
		if (g_data_07541320 == false) {
			auStack_18 = ZEXT416((uint)auStack_18._0_4_);
			g_data_07541320 = true;
		}
		auStack_18._0_4_ = (float)auStack_18._0_4_ * (float)maxStart;
		fVar4 = (float)auStack_18._0_4_;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			fVar4 = (float)auStack_18._0_4_;
		}
		x = (double)fVar4;
		method_00 = (MethodInfo)&pIStack_20;
		dVar3 = modf(x, (double)method_00, method);
		if (0.0 <= (float)auStack_18._0_4_) {
			if ((dVar3 != 0.5) || (NAN(dVar3))) {
				pIStack_20 = (Il2CppMethodPointer)floor(x + 0.5, method_00);
			}
			else if (((long)(double)pIStack_20 & 1U) != 0) {
				pIStack_20 = (Il2CppMethodPointer)((double)pIStack_20 + 1.0);
			}
		}
		else if ((dVar3 != -0.5) || (NAN(dVar3))) {
			pIStack_20 = (Il2CppMethodPointer)ceil(x + -0.5, method_00);
		}
		else if (((long)(double)pIStack_20 & 1U) != 0) {
			pIStack_20 = (Il2CppMethodPointer)((double)pIStack_20 + -1.0);
		}
		iVar2 = (int)(double)pIStack_20;
		if (iVar2 < maxStart) {
			maxStart = iVar2;
		}
		if (-1 < iVar2) {
		}
		return iVar1;
	}

	[Token(Token = "0x60052CF")]
	[Address(RVA = "0x5C79270", Offset = "0x5C78270", VA = "0x5C79270")]
	public static float ComputeTopSpacerHeight(int start, float stride)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyVirtualization.c (UI.MapEditorHierarchyVirtualization$$ComputeTopSpacerHeight): clean
		float fVar1;
		float fVar2;

		fVar2 = 1.0;
		if (1.0 <= stride) {
			fVar2 = stride;
		}
		if (0.0 <= (float)start * fVar2) {
			fVar1 = (float)start * fVar2;
		}
		return fVar1;
	}

	[Token(Token = "0x60052D0")]
	[Address(RVA = "0x5C79290", Offset = "0x5C78290", VA = "0x5C79290")]
	public static float ComputeBottomSpacerHeight(int totalRows, int start, int visible, float stride)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyVirtualization.c (UI.MapEditorHierarchyVirtualization$$ComputeBottomSpacerHeight): clean
		int iVar1;
		int iVar2;
		float fVar3;
		float fVar4;

		iVar2 = totalRows - (start + visible);
		iVar1 = 0;
		if (0 < iVar2) {
			iVar1 = iVar2;
		}
		fVar4 = 1.0;
		if (1.0 <= stride) {
			fVar4 = stride;
		}
		if (0.0 <= (float)iVar1 * fVar4) {
			fVar3 = (float)iVar1 * fVar4;
		}
		return fVar3;
	}

	[Token(Token = "0x60052D1")]
	[Address(RVA = "0x5C7DE10", Offset = "0x5C7CE10", VA = "0x5C7DE10")]
	public static float ComputeContentYForStart(int start, float headerOffset, float stride)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyVirtualization.c (UI.MapEditorHierarchyVirtualization$$ComputeContentYForStart): clean
		int iVar1;
		float fVar2;
		float fVar3;

		iVar1 = 0;
		if (0 < start) {
			iVar1 = start;
		}
		fVar2 = 1.0;
		if (1.0 <= stride) {
			fVar2 = stride;
		}
		fVar3 = (float)iVar1 * fVar2 + headerOffset;
		fVar2 = 0.0;
		if (0.0 <= fVar3) {
			fVar2 = fVar3;
		}
		return fVar2;
	}

	[Token(Token = "0x60052D2")]
	[Address(RVA = "0x5C7BA10", Offset = "0x5C7AA10", VA = "0x5C7BA10")]
	public static float ComputeFocusScrollY(float currentScrollY, int rowIndex, float stride, float viewportHeight, int totalRows, float upperMargin, float lowerMargin)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyVirtualization.c (UI.MapEditorHierarchyVirtualization$$ComputeFocusScrollY): clean
		int iVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;

		fVar3 = 1.0;
		if (1.0 <= stride) {
			fVar3 = stride;
		}
		if (rowIndex < 1) {
			rowIndex = 0;
		}
		fVar8 = 1.0;
		if (1.0 <= viewportHeight) {
			fVar8 = viewportHeight;
		}
		fVar4 = ((float)rowIndex + 0.5) * fVar3;
		fVar2 = 0.0;
		if (0.0 <= currentScrollY) {
			fVar2 = currentScrollY;
		}
		fVar5 = fVar4 - fVar2;
		fVar6 = 1.0;
		if (upperMargin <= 1.0) {
			fVar6 = upperMargin;
		}
		fVar6 = (float)(-(uint)(0.0 <= upperMargin) & (uint)fVar6) * fVar8;
		if (fVar6 <= fVar5) {
			fVar7 = 1.0;
			if (lowerMargin <= 1.0) {
				fVar7 = lowerMargin;
			}
			if (fVar5 <= (float)(-(uint)(0.0 <= lowerMargin) & (uint)fVar7) * fVar8) {
				return fVar2;
			}
		}
		iVar1 = 0;
		if (0 < totalRows) {
			iVar1 = totalRows;
		}
		fVar8 = fVar3 * (float)iVar1 - fVar8;
		fVar3 = 0.0;
		if (0.0 <= fVar8) {
			fVar3 = fVar8;
		}
		fVar4 = fVar4 - fVar6;
		if (fVar4 <= fVar3) {
			fVar3 = fVar4;
		}
		return (float)(-(uint)(0.0 <= fVar4) & (uint)fVar3);
	}

	[Token(Token = "0x60052D3")]
	[Address(RVA = "0x5C7DE40", Offset = "0x5C7CE40", VA = "0x5C7DE40")]
	public static float ComputeNormalizedForStart(int start, int maxStart)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyVirtualization.c (UI.MapEditorHierarchyVirtualization$$ComputeNormalizedForStart): clean
		int iVar1;
		float fVar2;
		float fVar3;

		if (maxStart < 1) {
			return 1.0;
		}
		fVar2 = (float)maxStart;
		if (start < maxStart) {
			maxStart = start;
		}
		iVar1 = 0;
		if (-1 < start) {
			iVar1 = maxStart;
		}
		fVar2 = (float)iVar1 / fVar2;
		fVar3 = 1.0;
		if (fVar2 <= 1.0) {
			fVar3 = fVar2;
		}
		return (float)(~-(uint)(0.0 <= fVar2) & 0x3f800000 | (uint)(1.0 - fVar3) & -(uint)(0.0 <= fVar2));
	}
}
