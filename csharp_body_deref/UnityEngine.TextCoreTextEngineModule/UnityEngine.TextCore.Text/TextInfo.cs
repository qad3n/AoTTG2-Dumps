// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextInfo
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x305A550", Offset = "0x3058B50", VA = "0x18305A550")]
	public TextInfo()
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x30583E0", Offset = "0x30569E0", VA = "0x1830583E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x3058360", Offset = "0x3056960", VA = "0x183058360")]
	internal void ClearMeshInfo(bool updateMesh)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x3058050", Offset = "0x3056650", VA = "0x183058050")]
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
	[Address(RVA = "0x3059390", Offset = "0x3057990", VA = "0x183059390", Slot = "4")]
	public virtual Vector2 GetCursorPositionFromStringIndexUsingCharacterHeight(int index, Rect screenRect, float lineHeight, bool inverseYAxis = true)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x3059570", Offset = "0x3057B70", VA = "0x183059570")]
	public Vector2 GetCursorPositionFromStringIndexUsingLineHeight(int index, Rect screenRect, float lineHeight, bool useXAdvance = false, bool inverseYAxis = true)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x3059110", Offset = "0x3057710", VA = "0x183059110")]
	public int GetCursorIndexFromPosition(Vector2 position, Rect screenRect, bool inverseYAxis = true)
	{
		return default(int);
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x3059B00", Offset = "0x3058100", VA = "0x183059B00")]
	public int LineDownCharacterPosition(int originalPos)
	{
		return default(int);
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x3059E20", Offset = "0x3058420", VA = "0x183059E20")]
	public int LineUpCharacterPosition(int originalPos)
	{
		return default(int);
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x3058ED0", Offset = "0x30574D0", VA = "0x183058ED0")]
	public int FindNearestLine(Vector2 position)
	{
		return default(int);
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x3058A10", Offset = "0x3057010", VA = "0x183058A10")]
	public int FindNearestCharacterOnLine(Vector2 position, int line, bool visibleOnly)
	{
		return default(int);
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x3058460", Offset = "0x3056A60", VA = "0x183058460")]
	public int FindIntersectingLink(Vector3 position, Rect screenRect, bool inverseYAxis = true)
	{
		return default(int);
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x30590B0", Offset = "0x30576B0", VA = "0x1830590B0")]
	public int GetCorrespondingStringIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x30598A0", Offset = "0x3057EA0", VA = "0x1830598A0")]
	public LineInfo GetLineInfoFromCharacterIndex(int index)
	{
		return default(LineInfo);
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x305A140", Offset = "0x3058740", VA = "0x18305A140")]
	private static bool PointIntersectRectangle(Vector3 m, Vector3 a, Vector3 b, Vector3 c, Vector3 d)
	{
		return default(bool);
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x2D61B40", Offset = "0x2D60140", VA = "0x182D61B40")]
	private static float DistanceToLine(Vector3 a, Vector3 b, Vector3 point)
	{
		return default(float);
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x3059970", Offset = "0x3057F70", VA = "0x183059970")]
	public int GetLineNumber(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x3059840", Offset = "0x3057E40", VA = "0x183059840")]
	public float GetLineHeight(int lineNumber)
	{
		return default(float);
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x30597B0", Offset = "0x3057DB0", VA = "0x1830597B0")]
	public float GetLineHeightFromCharacterIndex(int index)
	{
		return default(float);
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x3058FA0", Offset = "0x30575A0", VA = "0x183058FA0")]
	public float GetCharacterHeightFromIndex(int index)
	{
		return default(float);
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x305A350", Offset = "0x3058950", VA = "0x18305A350")]
	public string Substring(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x30599C0", Offset = "0x3057FC0", VA = "0x1830599C0")]
	public int IndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x3059A60", Offset = "0x3058060", VA = "0x183059A60")]
	public int LastIndexOf(char value, int startIndex)
	{
		return default(int);
	}
}
