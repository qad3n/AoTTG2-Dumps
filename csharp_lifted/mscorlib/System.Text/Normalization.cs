// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.Normalization
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x20002A3")]
internal class Normalization
{
	[Token(Token = "0x4000B6C")]
	[FieldOffset(Offset = "0x0")]
	private unsafe static byte* props;

	[Token(Token = "0x4000B6D")]
	[FieldOffset(Offset = "0x8")]
	private unsafe static int* mappedChars;

	[Token(Token = "0x4000B6E")]
	[FieldOffset(Offset = "0x10")]
	private unsafe static short* charMapIndex;

	[Token(Token = "0x4000B6F")]
	[FieldOffset(Offset = "0x18")]
	private unsafe static short* helperIndex;

	[Token(Token = "0x4000B70")]
	[FieldOffset(Offset = "0x20")]
	private unsafe static ushort* mapIdxToComposite;

	[Token(Token = "0x4000B71")]
	[FieldOffset(Offset = "0x28")]
	private unsafe static byte* combiningClass;

	[Token(Token = "0x4000B72")]
	[FieldOffset(Offset = "0x30")]
	private static object forLock;

	[Token(Token = "0x4000B73")]
	[FieldOffset(Offset = "0x38")]
	public static readonly bool isReady;

	[Token(Token = "0x6001788")]
	[Address(RVA = "0x5323C90", Offset = "0x5322C90", VA = "0x5323C90")]
	private static uint PropValue(int cp)
	{
		return default(uint);
	}

	[Token(Token = "0x6001789")]
	[Address(RVA = "0x5323D10", Offset = "0x5322D10", VA = "0x5323D10")]
	private static int CharMapIdx(int cp)
	{
		return default(int);
	}

	[Token(Token = "0x600178A")]
	[Address(RVA = "0x5323DA0", Offset = "0x5322DA0", VA = "0x5323DA0")]
	private static byte GetCombiningClass(int c)
	{
		return default(byte);
	}

	[Token(Token = "0x600178B")]
	[Address(RVA = "0x5323E40", Offset = "0x5322E40", VA = "0x5323E40")]
	private static int GetPrimaryCompositeFromMapIndex(int src)
	{
		return default(int);
	}

	[Token(Token = "0x600178C")]
	[Address(RVA = "0x5323EE0", Offset = "0x5322EE0", VA = "0x5323EE0")]
	private static int GetPrimaryCompositeHelperIndex(int cp)
	{
		return default(int);
	}

	[Token(Token = "0x600178D")]
	[Address(RVA = "0x5323F80", Offset = "0x5322F80", VA = "0x5323F80")]
	private static string Compose(string source, int checkType)
	{
		return null;
	}

	[Token(Token = "0x600178E")]
	[Address(RVA = "0x5324180", Offset = "0x5323180", VA = "0x5324180")]
	private static StringBuilder Combine(string source, int start, int checkType)
	{
		return null;
	}

	[Token(Token = "0x600178F")]
	[Address(RVA = "0x53242A0", Offset = "0x53232A0", VA = "0x53242A0")]
	private static void Combine(StringBuilder sb, int i, int checkType)
	{
	}

	[Token(Token = "0x6001790")]
	[Address(RVA = "0x5324740", Offset = "0x5323740", VA = "0x5324740")]
	private static int CombineHangul(StringBuilder sb, string s, int current)
	{
		return default(int);
	}

	[Token(Token = "0x6001791")]
	[Address(RVA = "0x5324DE0", Offset = "0x5323DE0", VA = "0x5324DE0")]
	private static int Fetch(StringBuilder sb, string s, int i)
	{
		return default(int);
	}

	[Token(Token = "0x6001792")]
	[Address(RVA = "0x53249A0", Offset = "0x53239A0", VA = "0x53249A0")]
	private static int TryComposeWithPreviousStarter(StringBuilder sb, string s, int current)
	{
		return default(int);
	}

	[Token(Token = "0x6001793")]
	[Address(RVA = "0x5324E10", Offset = "0x5323E10", VA = "0x5324E10")]
	private static int TryCompose(int i, int starter, int candidate)
	{
		return default(int);
	}

	[Token(Token = "0x6001794")]
	[Address(RVA = "0x5325010", Offset = "0x5324010", VA = "0x5325010")]
	private static string Decompose(string source, int checkType)
	{
		return null;
	}

	[Token(Token = "0x6001795")]
	[Address(RVA = "0x5324060", Offset = "0x5323060", VA = "0x5324060")]
	private static void Decompose(string source, ref StringBuilder sb, int checkType)
	{
	}

	[Token(Token = "0x6001796")]
	[Address(RVA = "0x5325280", Offset = "0x5324280", VA = "0x5325280")]
	private static void ReorderCanonical(string src, ref StringBuilder sb, int start)
	{
	}

	[Token(Token = "0x6001797")]
	[Address(RVA = "0x5325090", Offset = "0x5324090", VA = "0x5325090")]
	private static void DecomposeChar(ref StringBuilder sb, ref int[] buf, string s, int i, int checkType, ref int start)
	{
	}

	[Token(Token = "0x6001798")]
	[Address(RVA = "0x53243A0", Offset = "0x53233A0", VA = "0x53243A0")]
	public static System.Text.NormalizationCheck QuickCheck(char c, int type)
	{
		return default(System.Text.NormalizationCheck);
	}

	[Token(Token = "0x6001799")]
	[Address(RVA = "0x5325800", Offset = "0x5324800", VA = "0x5325800")]
	private static int GetCanonicalHangul(int s, int[] buf, int bufIdx)
	{
		return default(int);
	}

	[Token(Token = "0x600179A")]
	[Address(RVA = "0x5325580", Offset = "0x5324580", VA = "0x5325580")]
	private static int GetCanonical(int c, int[] buf, int bufIdx, int checkType)
	{
		return default(int);
	}

	[Token(Token = "0x600179B")]
	[Address(RVA = "0x53258E0", Offset = "0x53248E0", VA = "0x53258E0")]
	public static string Normalize(string source, NormalizationForm normalizationForm)
	{
		return null;
	}

	[Token(Token = "0x600179C")]
	[Address(RVA = "0x5325A60", Offset = "0x5324A60", VA = "0x5325A60")]
	public static string Normalize(string source, int type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600179D")]
	[Address(RVA = "0x5325B80", Offset = "0x5324B80", VA = "0x5325B80")]
	private static extern void load_normalization_resource(out IntPtr props, out IntPtr mappedChars, out IntPtr charMapIndex, out IntPtr helperIndex, out IntPtr mapIdxToComposite, out IntPtr combiningClass);

	[Token(Token = "0x600179E")]
	[Address(RVA = "0x5325B90", Offset = "0x5324B90", VA = "0x5325B90")]
	static Normalization()
	{
	}
}
