using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x200008D")]
public static class TMP_TextUtilities
{
	[Token(Token = "0x200008E")]
	private struct LineSegment
	{
		[Token(Token = "0x4000504")]
		[FieldOffset(Offset = "0x0")]
		public Vector3 Point1;

		[Token(Token = "0x4000505")]
		[FieldOffset(Offset = "0xC")]
		public Vector3 Point2;

		[Token(Token = "0x6000542")]
		[Address(RVA = "0x49641B0", Offset = "0x49641B0", VA = "0x49641B0")]
		public LineSegment(Vector3 p1, Vector3 p2)
		{
		}
	}

	[Token(Token = "0x4000501")]
	[FieldOffset(Offset = "0x0")]
	private static Vector3[] m_rectWorldCorners;

	[Token(Token = "0x4000502")]
	private const string k_lookupStringL = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-";

	[Token(Token = "0x4000503")]
	private const string k_lookupStringU = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-";

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x49481F0", Offset = "0x49481F0", VA = "0x49481F0")]
	public static int GetCursorIndexFromPosition(TMP_Text textComponent, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x49491D0", Offset = "0x49491D0", VA = "0x49491D0")]
	public static int GetCursorIndexFromPosition(TMP_Text textComponent, Vector3 position, Camera camera, out CaretPosition cursor)
	{
		return default(int);
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x49493C0", Offset = "0x49493C0", VA = "0x49493C0")]
	public static int FindNearestLine(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x49495B0", Offset = "0x49495B0", VA = "0x49495B0")]
	public static int FindNearestCharacterOnLine(TMP_Text text, Vector3 position, int line, Camera camera, bool visibleOnly)
	{
		return default(int);
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x494A240", Offset = "0x494A240", VA = "0x494A240")]
	public static bool IsIntersectingRectTransform(RectTransform rectTransform, Vector3 position, Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x494A410", Offset = "0x494A410", VA = "0x494A410")]
	public static int FindIntersectingCharacter(TMP_Text text, Vector3 position, Camera camera, bool visibleOnly)
	{
		return default(int);
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x4948370", Offset = "0x4948370", VA = "0x4948370")]
	public static int FindNearestCharacter(TMP_Text text, Vector3 position, Camera camera, bool visibleOnly)
	{
		return default(int);
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x494A710", Offset = "0x494A710", VA = "0x494A710")]
	public static int FindIntersectingWord(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x494B040", Offset = "0x494B040", VA = "0x494B040")]
	public static int FindNearestWord(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x494C5A0", Offset = "0x494C5A0", VA = "0x494C5A0")]
	public static int FindIntersectingLine(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x494C750", Offset = "0x494C750", VA = "0x494C750")]
	public static int FindIntersectingLink(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x494CC90", Offset = "0x494CC90", VA = "0x494CC90")]
	public static int FindNearestLink(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x494A070", Offset = "0x494A070", VA = "0x494A070")]
	private static bool PointIntersectRectangle(Vector3 m, Vector3 a, Vector3 b, Vector3 c, Vector3 d)
	{
		return default(bool);
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x4948E20", Offset = "0x4948E20", VA = "0x4948E20")]
	public static bool ScreenPointToWorldPointInRectangle(Transform transform, Vector2 screenPoint, Camera cam, out Vector3 worldPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x494E910", Offset = "0x494E910", VA = "0x494E910")]
	private static bool IntersectLinePlane(LineSegment line, Vector3 point, Vector3 normal, out Vector3 intersectingPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x494A140", Offset = "0x494A140", VA = "0x494A140")]
	public static float DistanceToLine(Vector3 a, Vector3 b, Vector3 point)
	{
		return default(float);
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x494EAF0", Offset = "0x494EAF0", VA = "0x494EAF0")]
	public static char ToLowerFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x494EB40", Offset = "0x494EB40", VA = "0x494EB40")]
	public static char ToUpperFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x494EB90", Offset = "0x494EB90", VA = "0x494EB90")]
	internal static uint ToUpperASCIIFast(uint c)
	{
		return default(uint);
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x494EBF0", Offset = "0x494EBF0", VA = "0x494EBF0")]
	public static int GetHashCode(string s)
	{
		return default(int);
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x4941FE0", Offset = "0x4941FE0", VA = "0x4941FE0")]
	public static int GetSimpleHashCode(string s)
	{
		return default(int);
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x494ED00", Offset = "0x494ED00", VA = "0x494ED00")]
	public static uint GetSimpleHashCodeLowercase(string s)
	{
		return default(uint);
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x494EE10", Offset = "0x494EE10", VA = "0x494EE10")]
	public static int HexToInt(char hex)
	{
		return default(int);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x494EE30", Offset = "0x494EE30", VA = "0x494EE30")]
	public static int StringHexToInt(string s)
	{
		return default(int);
	}
}
