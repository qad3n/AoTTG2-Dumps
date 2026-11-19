// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchArabicText
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchArabicText.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000023")]
public static class GisketchArabicText
{
	[Token(Token = "0x2000024")]
	private struct Unit
	{
		[Token(Token = "0x40000A7")]
		[FieldOffset(Offset = "0x0")]
		public int Start;

		[Token(Token = "0x40000A8")]
		[FieldOffset(Offset = "0x4")]
		public int Length;

		[Token(Token = "0x40000A9")]
		[FieldOffset(Offset = "0x8")]
		public char Character;

		[Token(Token = "0x40000AA")]
		[FieldOffset(Offset = "0xA")]
		public byte Type;

		[Token(Token = "0x40000AB")]
		[FieldOffset(Offset = "0xB")]
		public byte Level;

		[Token(Token = "0x40000AC")]
		[FieldOffset(Offset = "0xC")]
		public bool Skip;

		[Token(Token = "0x40000AD")]
		[FieldOffset(Offset = "0x10")]
		public string[] Tags;
	}

	[Token(Token = "0x4000098")]
	private const byte TypeL = 0;

	[Token(Token = "0x4000099")]
	private const byte TypeR = 1;

	[Token(Token = "0x400009A")]
	private const byte TypeEN = 2;

	[Token(Token = "0x400009B")]
	private const byte TypeN = 3;

	[Token(Token = "0x400009C")]
	private const byte TypeNSM = 4;

	[Token(Token = "0x400009D")]
	private const byte JoinNone = 0;

	[Token(Token = "0x400009E")]
	private const byte JoinRight = 1;

	[Token(Token = "0x400009F")]
	private const byte JoinDual = 2;

	[Token(Token = "0x40000A0")]
	private const byte JoinCausing = 3;

	[Token(Token = "0x40000A1")]
	private const byte JoinTransparent = 4;

	[Token(Token = "0x40000A2")]
	private const string FormLetters = "ءآأؤإئابةتثجحخدذرزسشصضطظعغفقكلمنهوىي";

	[Token(Token = "0x40000A3")]
	private const string RightJoiningLetters = "آأؤإاةدذرزوىٱژ";

	[Token(Token = "0x40000A4")]
	private const string Mirrors = "()[]{}<>«»";

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<char, int> FormBases;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] NoTags;

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x522B170", Offset = "0x522A170", VA = "0x522B170")]
	public static string ToVisual(string text, bool rightToLeftBase = false)
	{
		return null;
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x522C7C0", Offset = "0x522B7C0", VA = "0x522C7C0")]
	public static string Join(string first, string separator, string second)
	{
		return null;
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x522B570", Offset = "0x522A570", VA = "0x522B570")]
	public static bool NeedsVisualOrder(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x522B610", Offset = "0x522A610", VA = "0x522B610")]
	public static bool HasPresentationForms(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x522CA70", Offset = "0x522BA70", VA = "0x522CA70")]
	public static bool IsRightToLeft(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x522CBF0", Offset = "0x522BBF0", VA = "0x522CBF0")]
	public static bool IsStrong(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x522CC70", Offset = "0x522BC70", VA = "0x522CC70")]
	public static bool EndsRightToLeft(string text, int start, int end)
	{
		return default(bool);
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x522B6F0", Offset = "0x522A6F0", VA = "0x522B6F0")]
	private static void Tokenize(string text, List<Unit> units, List<int> breaks, bool alreadyVisual)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x522C070", Offset = "0x522B070", VA = "0x522C070")]
	private static void AppendParagraph(StringBuilder builder, string text, List<Unit> units, int start, int end, bool rightToLeftBase, List<string> emitted)
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x522D260", Offset = "0x522C260", VA = "0x522D260")]
	private static void Shape(List<Unit> units, int start, int end)
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x522E880", Offset = "0x522D880", VA = "0x522E880")]
	private static int Neighbor(byte[] joining, int index, int step)
	{
		return default(int);
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x522E760", Offset = "0x522D760", VA = "0x522E760")]
	private static byte Joining(Unit unit)
	{
		return default(byte);
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x522E8D0", Offset = "0x522D8D0", VA = "0x522E8D0")]
	private static bool CanJoinNext(byte joining)
	{
		return default(bool);
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x522E930", Offset = "0x522D930", VA = "0x522E930")]
	private static bool CanJoinPrevious(byte joining)
	{
		return default(bool);
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x522E8E0", Offset = "0x522D8E0", VA = "0x522E8E0")]
	private static bool LamAlef(char alef, out char isolated)
	{
		return default(bool);
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x522D910", Offset = "0x522C910", VA = "0x522D910")]
	private static bool ParagraphIsRightToLeft(List<Unit> units, int start, int end, bool rightToLeftBase)
	{
		return default(bool);
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x522D9F0", Offset = "0x522C9F0", VA = "0x522D9F0")]
	private static void ResolveWeakTypes(List<Unit> units, int start, int end, bool rightToLeft)
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x522E180", Offset = "0x522D180", VA = "0x522E180")]
	private static void ResolveNeutrals(List<Unit> units, int start, int end, bool rightToLeft)
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x522EA10", Offset = "0x522DA10", VA = "0x522EA10")]
	private static byte Direction(byte type)
	{
		return default(byte);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x522E480", Offset = "0x522D480", VA = "0x522E480")]
	private static void AssignLevels(List<Unit> units, int start, int end, bool rightToLeft)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x522E620", Offset = "0x522D620", VA = "0x522E620")]
	private static void ReverseRuns(List<Unit> units, int[] order, int level)
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x522C500", Offset = "0x522B500", VA = "0x522C500")]
	private static void TransitionTags(StringBuilder builder, List<string> emitted, string[] target)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x522D0D0", Offset = "0x522C0D0", VA = "0x522D0D0")]
	private static byte CharacterType(char character, bool alreadyVisual)
	{
		return default(byte);
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x522CDF0", Offset = "0x522BDF0", VA = "0x522CDF0")]
	private static int TagEnd(string text, int start)
	{
		return default(int);
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x522CF20", Offset = "0x522BF20", VA = "0x522CF20")]
	private static string TagName(string tag)
	{
		return null;
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x522D010", Offset = "0x522C010", VA = "0x522D010")]
	private static int PlaceholderEnd(string text, int start)
	{
		return default(int);
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x522E970", Offset = "0x522D970", VA = "0x522E970")]
	private static bool IsDigitUnit(Unit unit)
	{
		return default(bool);
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x522CB80", Offset = "0x522BB80", VA = "0x522CB80")]
	private static bool IsDigit(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x522CBB0", Offset = "0x522BBB0", VA = "0x522CBB0")]
	private static bool IsMark(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x522CA40", Offset = "0x522BA40", VA = "0x522CA40")]
	private static bool IsPresentationForm(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x522E940", Offset = "0x522D940", VA = "0x522E940")]
	private static bool IsNumberSeparator(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x522E9F0", Offset = "0x522D9F0", VA = "0x522E9F0")]
	private static bool IsNumberSuffix(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x522C9D0", Offset = "0x522B9D0", VA = "0x522C9D0")]
	private static char Mirror(char character)
	{
		return default(char);
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x522EA20", Offset = "0x522DA20", VA = "0x522EA20")]
	private static Dictionary<char, int> BuildFormBases()
	{
		return null;
	}
}
