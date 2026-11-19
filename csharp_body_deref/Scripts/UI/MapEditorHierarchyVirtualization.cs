// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorHierarchyVirtualization
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorHierarchyVirtualization.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
		return default(int);
	}

	[Token(Token = "0x60052CD")]
	[Address(RVA = "0x5C79080", Offset = "0x5C78080", VA = "0x5C79080")]
	public static int ComputeStartIndex(float contentAnchoredY, float stride, int buffer, int totalRows, int poolSize)
	{
		return default(int);
	}

	[Token(Token = "0x60052CE")]
	[Address(RVA = "0x5C79130", Offset = "0x5C78130", VA = "0x5C79130")]
	public static int ComputeStartIndexFromNormalized(float verticalNormalizedPosition, int maxStart)
	{
		return default(int);
	}

	[Token(Token = "0x60052CF")]
	[Address(RVA = "0x5C79270", Offset = "0x5C78270", VA = "0x5C79270")]
	public static float ComputeTopSpacerHeight(int start, float stride)
	{
		return default(float);
	}

	[Token(Token = "0x60052D0")]
	[Address(RVA = "0x5C79290", Offset = "0x5C78290", VA = "0x5C79290")]
	public static float ComputeBottomSpacerHeight(int totalRows, int start, int visible, float stride)
	{
		return default(float);
	}

	[Token(Token = "0x60052D1")]
	[Address(RVA = "0x5C7DE10", Offset = "0x5C7CE10", VA = "0x5C7DE10")]
	public static float ComputeContentYForStart(int start, float headerOffset, float stride)
	{
		return default(float);
	}

	[Token(Token = "0x60052D2")]
	[Address(RVA = "0x5C7BA10", Offset = "0x5C7AA10", VA = "0x5C7BA10")]
	public static float ComputeFocusScrollY(float currentScrollY, int rowIndex, float stride, float viewportHeight, int totalRows, float upperMargin, float lowerMargin)
	{
		return default(float);
	}

	[Token(Token = "0x60052D3")]
	[Address(RVA = "0x5C7DE40", Offset = "0x5C7CE40", VA = "0x5C7DE40")]
	public static float ComputeNormalizedForStart(int start, int maxStart)
	{
		return default(float);
	}
}
