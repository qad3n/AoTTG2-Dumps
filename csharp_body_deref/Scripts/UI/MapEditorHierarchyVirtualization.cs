// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorHierarchyVirtualization
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapEditorHierarchyVirtualization.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000830")]
public static class MapEditorHierarchyVirtualization
{
	[Token(Token = "0x6004F2E")]
	[Address(RVA = "0x22B9850", Offset = "0x22B7E50", VA = "0x1822B9850")]
	public static int ComputePoolSize(float viewportHeight, float rowHeight, float spacing, int buffer, int minPool, int totalRows)
	{
		return default(int);
	}

	[Token(Token = "0x6004F2F")]
	[Address(RVA = "0x22B9A30", Offset = "0x22B8030", VA = "0x1822B9A30")]
	public static int ComputeStartIndex(float contentAnchoredY, float stride, int buffer, int totalRows, int poolSize)
	{
		return default(int);
	}

	[Token(Token = "0x6004F30")]
	[Address(RVA = "0x22B9900", Offset = "0x22B7F00", VA = "0x1822B9900")]
	public static int ComputeStartIndexFromNormalized(float verticalNormalizedPosition, int maxStart)
	{
		return default(int);
	}

	[Token(Token = "0x6004F31")]
	[Address(RVA = "0x22B9AF0", Offset = "0x22B80F0", VA = "0x1822B9AF0")]
	public static float ComputeTopSpacerHeight(int start, float stride)
	{
		return default(float);
	}

	[Token(Token = "0x6004F32")]
	[Address(RVA = "0x22B96A0", Offset = "0x22B7CA0", VA = "0x1822B96A0")]
	public static float ComputeBottomSpacerHeight(int totalRows, int start, int visible, float stride)
	{
		return default(float);
	}

	[Token(Token = "0x6004F33")]
	[Address(RVA = "0x22B96D0", Offset = "0x22B7CD0", VA = "0x1822B96D0")]
	public static float ComputeContentYForStart(int start, float headerOffset, float stride)
	{
		return default(float);
	}

	[Token(Token = "0x6004F34")]
	[Address(RVA = "0x22B9700", Offset = "0x22B7D00", VA = "0x1822B9700")]
	public static float ComputeFocusScrollY(float currentScrollY, int rowIndex, float stride, float viewportHeight, int totalRows, float upperMargin, float lowerMargin)
	{
		return default(float);
	}

	[Token(Token = "0x6004F35")]
	[Address(RVA = "0x22B97F0", Offset = "0x22B7DF0", VA = "0x1822B97F0")]
	public static float ComputeNormalizedForStart(int start, int maxStart)
	{
		return default(float);
	}
}
