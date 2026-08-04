// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_TextUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x20000A3")]
public static class TMP_TextUtilities
{
	[Token(Token = "0x20000A4")]
	private struct LineSegment
	{
		[Token(Token = "0x40005F8")]
		[FieldOffset(Offset = "0x0")]
		public Vector3 Point1;

		[Token(Token = "0x40005F9")]
		[FieldOffset(Offset = "0xC")]
		public Vector3 Point2;

		[Token(Token = "0x6000633")]
		[Address(RVA = "0x4C9C4F0", Offset = "0x4C9C4F0", VA = "0x4C9C4F0")]
		public LineSegment(Vector3 p1, Vector3 p2)
		{
		}
	}

	[Token(Token = "0x40005F5")]
	[FieldOffset(Offset = "0x0")]
	private static Vector3[] m_rectWorldCorners;

	[Token(Token = "0x40005F6")]
	private const string k_lookupStringL = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-";

	[Token(Token = "0x40005F7")]
	private const string k_lookupStringU = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-";

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x4C95770", Offset = "0x4C95770", VA = "0x4C95770")]
	public static int GetCursorIndexFromPosition(TMP_Text textComponent, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x4C96750", Offset = "0x4C96750", VA = "0x4C96750")]
	public static int GetCursorIndexFromPosition(TMP_Text textComponent, Vector3 position, Camera camera, out CaretPosition cursor)
	{
		return default(int);
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x4C96940", Offset = "0x4C96940", VA = "0x4C96940")]
	public static int FindNearestLine(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x4C96B30", Offset = "0x4C96B30", VA = "0x4C96B30")]
	public static int FindNearestCharacterOnLine(TMP_Text text, Vector3 position, int line, Camera camera, bool visibleOnly)
	{
		return default(int);
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x4C977C0", Offset = "0x4C977C0", VA = "0x4C977C0")]
	public static bool IsIntersectingRectTransform(RectTransform rectTransform, Vector3 position, Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x4C97990", Offset = "0x4C97990", VA = "0x4C97990")]
	public static int FindIntersectingCharacter(TMP_Text text, Vector3 position, Camera camera, bool visibleOnly)
	{
		return default(int);
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x4C958F0", Offset = "0x4C958F0", VA = "0x4C958F0")]
	public static int FindNearestCharacter(TMP_Text text, Vector3 position, Camera camera, bool visibleOnly)
	{
		return default(int);
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x4C97C90", Offset = "0x4C97C90", VA = "0x4C97C90")]
	public static int FindIntersectingWord(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x4C985C0", Offset = "0x4C985C0", VA = "0x4C985C0")]
	public static int FindNearestWord(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x4C99B20", Offset = "0x4C99B20", VA = "0x4C99B20")]
	public static int FindIntersectingLine(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x4C99CD0", Offset = "0x4C99CD0", VA = "0x4C99CD0")]
	public static int FindIntersectingLink(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x4C9A210", Offset = "0x4C9A210", VA = "0x4C9A210")]
	public static int FindNearestLink(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x4C975F0", Offset = "0x4C975F0", VA = "0x4C975F0")]
	private static bool PointIntersectRectangle(Vector3 m, Vector3 a, Vector3 b, Vector3 c, Vector3 d)
	{
		return default(bool);
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x4C963A0", Offset = "0x4C963A0", VA = "0x4C963A0")]
	public static bool ScreenPointToWorldPointInRectangle(Transform transform, Vector2 screenPoint, Camera cam, out Vector3 worldPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x4C9BE90", Offset = "0x4C9BE90", VA = "0x4C9BE90")]
	private static bool IntersectLinePlane(LineSegment line, Vector3 point, Vector3 normal, out Vector3 intersectingPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x4C976C0", Offset = "0x4C976C0", VA = "0x4C976C0")]
	public static float DistanceToLine(Vector3 a, Vector3 b, Vector3 point)
	{
		return default(float);
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x4C9C070", Offset = "0x4C9C070", VA = "0x4C9C070")]
	public static char ToLowerFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x4C9C0C0", Offset = "0x4C9C0C0", VA = "0x4C9C0C0")]
	public static char ToUpperFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x4C9C110", Offset = "0x4C9C110", VA = "0x4C9C110")]
	internal static uint ToUpperASCIIFast(uint c)
	{
		return default(uint);
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x4C9C170", Offset = "0x4C9C170", VA = "0x4C9C170")]
	public static int GetHashCode(string s)
	{
		return default(int);
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x4C8F560", Offset = "0x4C8F560", VA = "0x4C8F560")]
	public static int GetSimpleHashCode(string s)
	{
		return default(int);
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x4C9C280", Offset = "0x4C9C280", VA = "0x4C9C280")]
	public static uint GetSimpleHashCodeLowercase(string s)
	{
		return default(uint);
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x4C9C390", Offset = "0x4C9C390", VA = "0x4C9C390")]
	public static int HexToInt(char hex)
	{
		return default(int);
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x4C9C3B0", Offset = "0x4C9C3B0", VA = "0x4C9C3B0")]
	public static int StringHexToInt(string s)
	{
		return default(int);
	}
}
