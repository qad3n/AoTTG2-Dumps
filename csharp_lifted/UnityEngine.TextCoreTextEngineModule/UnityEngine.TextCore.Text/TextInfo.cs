// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000066")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
internal class TextInfo
{
	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x0")]
	private static Vector2 s_InfinityVectorPositive;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x8")]
	private static Vector2 s_InfinityVectorNegative;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x10")]
	public int characterCount;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x14")]
	public int spriteCount;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x18")]
	public int spaceCount;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x1C")]
	public int wordCount;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x20")]
	public int linkCount;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x24")]
	public int lineCount;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x28")]
	public int materialCount;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x30")]
	public TextElementInfo[] textElementInfo;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x38")]
	public WordInfo[] wordInfo;

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x40")]
	public LinkInfo[] linkInfo;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x48")]
	public LineInfo[] lineInfo;

	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x50")]
	public MeshInfo[] meshInfo;

	[Token(Token = "0x40003CE")]
	[FieldOffset(Offset = "0x58")]
	public bool hasMultipleColors;

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x6A53060", Offset = "0x6A52060", VA = "0x6A53060")]
	public TextInfo()
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x6A54660", Offset = "0x6A53660", VA = "0x6A54660")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x6A54720", Offset = "0x6A53720", VA = "0x6A54720")]
	internal void ClearMeshInfo(bool updateMesh)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x6A54790", Offset = "0x6A53790", VA = "0x6A54790")]
	internal void ClearLineInfo()
	{
	}

	[Token(Token = "0x6000324")]
	internal static void Resize<T>(ref T[] array, int size)
	{
	}

	[Token(Token = "0x6000325")]
	internal static void Resize<T>(ref T[] array, int size, bool isBlockAllocated)
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x6A54920", Offset = "0x6A53920", VA = "0x6A54920", Slot = "4")]
	public virtual Vector2 GetCursorPositionFromStringIndexUsingCharacterHeight(int index, Rect screenRect, float lineHeight, bool inverseYAxis = true)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x6A54A70", Offset = "0x6A53A70", VA = "0x6A54A70")]
	public Vector2 GetCursorPositionFromStringIndexUsingLineHeight(int index, Rect screenRect, float lineHeight, bool useXAdvance = false, bool inverseYAxis = true)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x6A54BF0", Offset = "0x6A53BF0", VA = "0x6A54BF0")]
	public int GetCursorIndexFromPosition(Vector2 position, Rect screenRect, bool inverseYAxis = true)
	{
		return default(int);
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x6A55210", Offset = "0x6A54210", VA = "0x6A55210")]
	public int LineDownCharacterPosition(int originalPos)
	{
		return default(int);
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x6A55370", Offset = "0x6A54370", VA = "0x6A55370")]
	public int LineUpCharacterPosition(int originalPos)
	{
		return default(int);
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x6A54D80", Offset = "0x6A53D80", VA = "0x6A54D80")]
	public int FindNearestLine(Vector2 position)
	{
		return default(int);
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x6A54E20", Offset = "0x6A53E20", VA = "0x6A54E20")]
	public int FindNearestCharacterOnLine(Vector2 position, int line, bool visibleOnly)
	{
		return default(int);
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x6A558A0", Offset = "0x6A548A0", VA = "0x6A558A0")]
	public int FindIntersectingLink(Vector3 position, Rect screenRect, bool inverseYAxis = true)
	{
		return default(int);
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x6A56040", Offset = "0x6A55040", VA = "0x6A56040")]
	public int GetCorrespondingStringIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x6A56080", Offset = "0x6A55080", VA = "0x6A56080")]
	public LineInfo GetLineInfoFromCharacterIndex(int index)
	{
		return default(LineInfo);
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x6A554E0", Offset = "0x6A544E0", VA = "0x6A554E0")]
	private static bool PointIntersectRectangle(Vector3 m, Vector3 a, Vector3 b, Vector3 c, Vector3 d)
	{
		return default(bool);
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x6A55730", Offset = "0x6A54730", VA = "0x6A55730")]
	private static float DistanceToLine(Vector3 a, Vector3 b, Vector3 point)
	{
		return default(float);
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x6A56120", Offset = "0x6A55120", VA = "0x6A56120")]
	public int GetLineNumber(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x6A56170", Offset = "0x6A55170", VA = "0x6A56170")]
	public float GetLineHeight(int lineNumber)
	{
		return default(float);
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x6A561C0", Offset = "0x6A551C0", VA = "0x6A561C0")]
	public float GetLineHeightFromCharacterIndex(int index)
	{
		return default(float);
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x6A56250", Offset = "0x6A55250", VA = "0x6A56250")]
	public float GetCharacterHeightFromIndex(int index)
	{
		return default(float);
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x6A562B0", Offset = "0x6A552B0", VA = "0x6A562B0")]
	public string Substring(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x6A56430", Offset = "0x6A55430", VA = "0x6A56430")]
	public int IndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x6A564D0", Offset = "0x6A554D0", VA = "0x6A564D0")]
	public int LastIndexOf(char value, int startIndex)
	{
		return default(int);
	}
}
