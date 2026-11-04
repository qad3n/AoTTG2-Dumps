// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_TextUtilities
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x200009F")]
public static class TMP_TextUtilities
{
	[Token(Token = "0x20000A0")]
	private struct LineSegment
	{
		[Token(Token = "0x4000585")]
		[FieldOffset(Offset = "0x0")]
		public Vector3 Point1;

		[Token(Token = "0x4000586")]
		[FieldOffset(Offset = "0xC")]
		public Vector3 Point2;

		[Token(Token = "0x600060F")]
		[Address(RVA = "0x565080", Offset = "0x563680", VA = "0x180565080")]
		public LineSegment(Vector3 p1, Vector3 p2)
		{
		}
	}

	[Token(Token = "0x4000582")]
	[FieldOffset(Offset = "0x0")]
	private static Vector3[] m_rectWorldCorners;

	[Token(Token = "0x4000583")]
	private const string k_lookupStringL = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-";

	[Token(Token = "0x4000584")]
	private const string k_lookupStringU = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-";

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x2D658E0", Offset = "0x2D63EE0", VA = "0x182D658E0")]
	public static int GetCursorIndexFromPosition(TMP_Text textComponent, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x2D65B30", Offset = "0x2D64130", VA = "0x182D65B30")]
	public static int GetCursorIndexFromPosition(TMP_Text textComponent, Vector3 position, Camera camera, out CaretPosition cursor)
	{
		return default(int);
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x2D63DF0", Offset = "0x2D623F0", VA = "0x182D63DF0")]
	public static int FindNearestLine(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x2D63310", Offset = "0x2D61910", VA = "0x182D63310")]
	public static int FindNearestCharacterOnLine(TMP_Text text, Vector3 position, int line, Camera camera, bool visibleOnly)
	{
		return default(int);
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x2D663A0", Offset = "0x2D649A0", VA = "0x182D663A0")]
	public static bool IsIntersectingRectTransform(RectTransform rectTransform, Vector3 position, Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x2D61D50", Offset = "0x2D60350", VA = "0x182D61D50")]
	public static int FindIntersectingCharacter(TMP_Text text, Vector3 position, Camera camera, bool visibleOnly)
	{
		return default(int);
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x2D638B0", Offset = "0x2D61EB0", VA = "0x182D638B0")]
	public static int FindNearestCharacter(TMP_Text text, Vector3 position, Camera camera, bool visibleOnly)
	{
		return default(int);
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x2D62A60", Offset = "0x2D61060", VA = "0x182D62A60")]
	public static int FindIntersectingWord(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x2D64C50", Offset = "0x2D63250", VA = "0x182D64C50")]
	public static int FindNearestWord(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x2D62100", Offset = "0x2D60700", VA = "0x182D62100")]
	public static int FindIntersectingLine(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x2D622E0", Offset = "0x2D608E0", VA = "0x182D622E0")]
	public static int FindIntersectingLink(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x2D64040", Offset = "0x2D62640", VA = "0x182D64040")]
	public static int FindNearestLink(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x2D66560", Offset = "0x2D64B60", VA = "0x182D66560")]
	private static bool PointIntersectRectangle(Vector3 m, Vector3 a, Vector3 b, Vector3 c, Vector3 d)
	{
		return default(bool);
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x2D66770", Offset = "0x2D64D70", VA = "0x182D66770")]
	public static bool ScreenPointToWorldPointInRectangle(Transform transform, Vector2 screenPoint, Camera cam, out Vector3 worldPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x2D66220", Offset = "0x2D64820", VA = "0x182D66220")]
	private static bool IntersectLinePlane(LineSegment line, Vector3 point, Vector3 normal, out Vector3 intersectingPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x2D61B40", Offset = "0x2D60140", VA = "0x182D61B40")]
	public static float DistanceToLine(Vector3 a, Vector3 b, Vector3 point)
	{
		return default(float);
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x2D66DA0", Offset = "0x2D653A0", VA = "0x182D66DA0")]
	public static char ToLowerFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x2D66E60", Offset = "0x2D65460", VA = "0x182D66E60")]
	public static char ToUpperFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x2D66E00", Offset = "0x2D65400", VA = "0x182D66E00")]
	internal static uint ToUpperASCIIFast(uint c)
	{
		return default(uint);
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x2D65F30", Offset = "0x2D64530", VA = "0x182D65F30")]
	public static int GetHashCode(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x2D472D0", Offset = "0x2D458D0", VA = "0x182D472D0")]
	public static int GetSimpleHashCode(string s)
	{
		return default(int);
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x2D66020", Offset = "0x2D64620", VA = "0x182D66020")]
	public static uint GetSimpleHashCodeLowercase(string s)
	{
		return default(uint);
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x2D65E50", Offset = "0x2D64450", VA = "0x182D65E50")]
	public static uint GetHashCodeCaseInSensitive(string s)
	{
		return default(uint);
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x2D66100", Offset = "0x2D64700", VA = "0x182D66100")]
	public static int HexToInt(char hex)
	{
		return default(int);
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x2D66BA0", Offset = "0x2D651A0", VA = "0x182D66BA0")]
	public static int StringHexToInt(string s)
	{
		return default(int);
	}
}
