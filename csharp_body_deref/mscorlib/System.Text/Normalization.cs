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

[Token(Token = "0x200029B")]
internal class Normalization
{
	[Token(Token = "0x4000BFC")]
	[FieldOffset(Offset = "0x0")]
	private unsafe static byte* props;

	[Token(Token = "0x4000BFD")]
	[FieldOffset(Offset = "0x8")]
	private unsafe static int* mappedChars;

	[Token(Token = "0x4000BFE")]
	[FieldOffset(Offset = "0x10")]
	private unsafe static short* charMapIndex;

	[Token(Token = "0x4000BFF")]
	[FieldOffset(Offset = "0x18")]
	private unsafe static short* helperIndex;

	[Token(Token = "0x4000C00")]
	[FieldOffset(Offset = "0x20")]
	private unsafe static ushort* mapIdxToComposite;

	[Token(Token = "0x4000C01")]
	[FieldOffset(Offset = "0x28")]
	private unsafe static byte* combiningClass;

	[Token(Token = "0x4000C02")]
	[FieldOffset(Offset = "0x30")]
	private static object forLock;

	[Token(Token = "0x4000C03")]
	[FieldOffset(Offset = "0x38")]
	public static readonly bool isReady;

	[Token(Token = "0x6001743")]
	[Address(RVA = "0x3B19A80", Offset = "0x3B19A80", VA = "0x3B19A80")]
	private static uint PropValue(int cp)
	{
		return default(uint);
	}

	[Token(Token = "0x6001744")]
	[Address(RVA = "0x3B19B00", Offset = "0x3B19B00", VA = "0x3B19B00")]
	private static int CharMapIdx(int cp)
	{
		return default(int);
	}

	[Token(Token = "0x6001745")]
	[Address(RVA = "0x3B19B90", Offset = "0x3B19B90", VA = "0x3B19B90")]
	private static byte GetCombiningClass(int c)
	{
		return default(byte);
	}

	[Token(Token = "0x6001746")]
	[Address(RVA = "0x3B19C30", Offset = "0x3B19C30", VA = "0x3B19C30")]
	private static int GetPrimaryCompositeFromMapIndex(int src)
	{
		return default(int);
	}

	[Token(Token = "0x6001747")]
	[Address(RVA = "0x3B19CD0", Offset = "0x3B19CD0", VA = "0x3B19CD0")]
	private static int GetPrimaryCompositeHelperIndex(int cp)
	{
		return default(int);
	}

	[Token(Token = "0x6001748")]
	[Address(RVA = "0x3B19D70", Offset = "0x3B19D70", VA = "0x3B19D70")]
	private static string Compose(string source, int checkType)
	{
		return null;
	}

	[Token(Token = "0x6001749")]
	[Address(RVA = "0x3B19F70", Offset = "0x3B19F70", VA = "0x3B19F70")]
	private static StringBuilder Combine(string source, int start, int checkType)
	{
		return null;
	}

	[Token(Token = "0x600174A")]
	[Address(RVA = "0x3B1A090", Offset = "0x3B1A090", VA = "0x3B1A090")]
	private static void Combine(StringBuilder sb, int i, int checkType)
	{
	}

	[Token(Token = "0x600174B")]
	[Address(RVA = "0x3B1A530", Offset = "0x3B1A530", VA = "0x3B1A530")]
	private static int CombineHangul(StringBuilder sb, string s, int current)
	{
		return default(int);
	}

	[Token(Token = "0x600174C")]
	[Address(RVA = "0x3B1ACA0", Offset = "0x3B1ACA0", VA = "0x3B1ACA0")]
	private static int Fetch(StringBuilder sb, string s, int i)
	{
		return default(int);
	}

	[Token(Token = "0x600174D")]
	[Address(RVA = "0x3B1A850", Offset = "0x3B1A850", VA = "0x3B1A850")]
	private static int TryComposeWithPreviousStarter(StringBuilder sb, string s, int current)
	{
		return default(int);
	}

	[Token(Token = "0x600174E")]
	[Address(RVA = "0x3B1ACD0", Offset = "0x3B1ACD0", VA = "0x3B1ACD0")]
	private static int TryCompose(int i, int starter, int candidate)
	{
		return default(int);
	}

	[Token(Token = "0x600174F")]
	[Address(RVA = "0x3B1AEA0", Offset = "0x3B1AEA0", VA = "0x3B1AEA0")]
	private static string Decompose(string source, int checkType)
	{
		return null;
	}

	[Token(Token = "0x6001750")]
	[Address(RVA = "0x3B19E50", Offset = "0x3B19E50", VA = "0x3B19E50")]
	private static void Decompose(string source, ref StringBuilder sb, int checkType)
	{
	}

	[Token(Token = "0x6001751")]
	[Address(RVA = "0x3B1B110", Offset = "0x3B1B110", VA = "0x3B1B110")]
	private static void ReorderCanonical(string src, ref StringBuilder sb, int start)
	{
	}

	[Token(Token = "0x6001752")]
	[Address(RVA = "0x3B1AF20", Offset = "0x3B1AF20", VA = "0x3B1AF20")]
	private static void DecomposeChar(ref StringBuilder sb, ref int[] buf, string s, int i, int checkType, ref int start)
	{
	}

	[Token(Token = "0x6001753")]
	[Address(RVA = "0x3B1A190", Offset = "0x3B1A190", VA = "0x3B1A190")]
	public static System.Text.NormalizationCheck QuickCheck(char c, int type)
	{
		return default(System.Text.NormalizationCheck);
	}

	[Token(Token = "0x6001754")]
	[Address(RVA = "0x3B1B760", Offset = "0x3B1B760", VA = "0x3B1B760")]
	private static int GetCanonicalHangul(int s, int[] buf, int bufIdx)
	{
		return default(int);
	}

	[Token(Token = "0x6001755")]
	[Address(RVA = "0x3B1B3F0", Offset = "0x3B1B3F0", VA = "0x3B1B3F0")]
	private static int GetCanonical(int c, int[] buf, int bufIdx, int checkType)
	{
		return default(int);
	}

	[Token(Token = "0x6001756")]
	[Address(RVA = "0x3B1B840", Offset = "0x3B1B840", VA = "0x3B1B840")]
	public static string Normalize(string source, NormalizationForm normalizationForm)
	{
		return null;
	}

	[Token(Token = "0x6001757")]
	[Address(RVA = "0x3B1B9C0", Offset = "0x3B1B9C0", VA = "0x3B1B9C0")]
	public static string Normalize(string source, int type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001758")]
	[Address(RVA = "0x3B1BAE0", Offset = "0x3B1BAE0", VA = "0x3B1BAE0")]
	private static extern void load_normalization_resource(out IntPtr props, out IntPtr mappedChars, out IntPtr charMapIndex, out IntPtr helperIndex, out IntPtr mapIdxToComposite, out IntPtr combiningClass);

	[Token(Token = "0x6001759")]
	[Address(RVA = "0x3B1BAF0", Offset = "0x3B1BAF0", VA = "0x3B1BAF0")]
	static Normalization()
	{
	}
}
