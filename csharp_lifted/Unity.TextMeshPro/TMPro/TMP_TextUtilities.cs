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
		[Address(RVA = "0x675D5A0", Offset = "0x675C5A0", VA = "0x675D5A0")]
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
	[Address(RVA = "0x6758BC0", Offset = "0x6757BC0", VA = "0x6758BC0")]
	public static int GetCursorIndexFromPosition(TMP_Text textComponent, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x6759660", Offset = "0x6758660", VA = "0x6759660")]
	public static int GetCursorIndexFromPosition(TMP_Text textComponent, Vector3 position, Camera camera, out CaretPosition cursor)
	{
		return default(int);
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x6759880", Offset = "0x6758880", VA = "0x6759880")]
	public static int FindNearestLine(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x6759A90", Offset = "0x6758A90", VA = "0x6759A90")]
	public static int FindNearestCharacterOnLine(TMP_Text text, Vector3 position, int line, Camera camera, bool visibleOnly)
	{
		return default(int);
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x675A420", Offset = "0x6759420", VA = "0x675A420")]
	public static bool IsIntersectingRectTransform(RectTransform rectTransform, Vector3 position, Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x675A760", Offset = "0x6759760", VA = "0x675A760")]
	public static int FindIntersectingCharacter(TMP_Text text, Vector3 position, Camera camera, bool visibleOnly)
	{
		return default(int);
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x6758D40", Offset = "0x6757D40", VA = "0x6758D40")]
	public static int FindNearestCharacter(TMP_Text text, Vector3 position, Camera camera, bool visibleOnly)
	{
		return default(int);
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x675AC00", Offset = "0x6759C00", VA = "0x675AC00")]
	public static int FindIntersectingWord(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x675B580", Offset = "0x675A580", VA = "0x675B580")]
	public static int FindNearestWord(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x675BD00", Offset = "0x675AD00", VA = "0x675BD00")]
	public static int FindIntersectingLine(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x675BED0", Offset = "0x675AED0", VA = "0x675BED0")]
	public static int FindIntersectingLink(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x675C520", Offset = "0x675B520", VA = "0x675C520")]
	public static int FindNearestLink(TMP_Text text, Vector3 position, Camera camera)
	{
		return default(int);
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x675A060", Offset = "0x6759060", VA = "0x675A060")]
	private static bool PointIntersectRectangle(Vector3 m, Vector3 a, Vector3 b, Vector3 c, Vector3 d)
	{
		return default(bool);
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x67592D0", Offset = "0x67582D0", VA = "0x67592D0")]
	public static bool ScreenPointToWorldPointInRectangle(Transform transform, Vector2 screenPoint, Camera cam, out Vector3 worldPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x675CE00", Offset = "0x675BE00", VA = "0x675CE00")]
	private static bool IntersectLinePlane(LineSegment line, Vector3 point, Vector3 normal, out Vector3 intersectingPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x675A2B0", Offset = "0x67592B0", VA = "0x675A2B0")]
	public static float DistanceToLine(Vector3 a, Vector3 b, Vector3 point)
	{
		return default(float);
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x675CFB0", Offset = "0x675BFB0", VA = "0x675CFB0")]
	public static char ToLowerFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x675D000", Offset = "0x675C000", VA = "0x675D000")]
	public static char ToUpperFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x675D050", Offset = "0x675C050", VA = "0x675D050")]
	internal static uint ToUpperASCIIFast(uint c)
	{
		return default(uint);
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x675D0B0", Offset = "0x675C0B0", VA = "0x675D0B0")]
	public static int GetHashCode(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x675D1D0", Offset = "0x675C1D0", VA = "0x675D1D0")]
	public static int GetSimpleHashCode(string s)
	{
		return default(int);
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x675D220", Offset = "0x675C220", VA = "0x675D220")]
	public static uint GetSimpleHashCodeLowercase(string s)
	{
		return default(uint);
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x675D330", Offset = "0x675C330", VA = "0x675D330")]
	public static uint GetHashCodeCaseInSensitive(string s)
	{
		return default(uint);
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x675D440", Offset = "0x675C440", VA = "0x675D440")]
	public static int HexToInt(char hex)
	{
		return default(int);
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x675D460", Offset = "0x675C460", VA = "0x675D460")]
	public static int StringHexToInt(string s)
	{
		return default(int);
	}
}
