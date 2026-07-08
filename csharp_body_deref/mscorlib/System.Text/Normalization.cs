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
	[Address(RVA = "0x4E33F60", Offset = "0x4E33F60", VA = "0x4E33F60")]
	private static uint PropValue(int cp)
	{
		return default(uint);
	}

	[Token(Token = "0x6001744")]
	[Address(RVA = "0x4E33FE0", Offset = "0x4E33FE0", VA = "0x4E33FE0")]
	private static int CharMapIdx(int cp)
	{
		return default(int);
	}

	[Token(Token = "0x6001745")]
	[Address(RVA = "0x4E34070", Offset = "0x4E34070", VA = "0x4E34070")]
	private static byte GetCombiningClass(int c)
	{
		return default(byte);
	}

	[Token(Token = "0x6001746")]
	[Address(RVA = "0x4E34110", Offset = "0x4E34110", VA = "0x4E34110")]
	private static int GetPrimaryCompositeFromMapIndex(int src)
	{
		return default(int);
	}

	[Token(Token = "0x6001747")]
	[Address(RVA = "0x4E341B0", Offset = "0x4E341B0", VA = "0x4E341B0")]
	private static int GetPrimaryCompositeHelperIndex(int cp)
	{
		return default(int);
	}

	[Token(Token = "0x6001748")]
	[Address(RVA = "0x4E34250", Offset = "0x4E34250", VA = "0x4E34250")]
	private static string Compose(string source, int checkType)
	{
		return null;
	}

	[Token(Token = "0x6001749")]
	[Address(RVA = "0x4E34450", Offset = "0x4E34450", VA = "0x4E34450")]
	private static StringBuilder Combine(string source, int start, int checkType)
	{
		return null;
	}

	[Token(Token = "0x600174A")]
	[Address(RVA = "0x4E34570", Offset = "0x4E34570", VA = "0x4E34570")]
	private static void Combine(StringBuilder sb, int i, int checkType)
	{
	}

	[Token(Token = "0x600174B")]
	[Address(RVA = "0x4E34A10", Offset = "0x4E34A10", VA = "0x4E34A10")]
	private static int CombineHangul(StringBuilder sb, string s, int current)
	{
		return default(int);
	}

	[Token(Token = "0x600174C")]
	[Address(RVA = "0x4E35180", Offset = "0x4E35180", VA = "0x4E35180")]
	private static int Fetch(StringBuilder sb, string s, int i)
	{
		return default(int);
	}

	[Token(Token = "0x600174D")]
	[Address(RVA = "0x4E34D30", Offset = "0x4E34D30", VA = "0x4E34D30")]
	private static int TryComposeWithPreviousStarter(StringBuilder sb, string s, int current)
	{
		return default(int);
	}

	[Token(Token = "0x600174E")]
	[Address(RVA = "0x4E351B0", Offset = "0x4E351B0", VA = "0x4E351B0")]
	private static int TryCompose(int i, int starter, int candidate)
	{
		return default(int);
	}

	[Token(Token = "0x600174F")]
	[Address(RVA = "0x4E35380", Offset = "0x4E35380", VA = "0x4E35380")]
	private static string Decompose(string source, int checkType)
	{
		return null;
	}

	[Token(Token = "0x6001750")]
	[Address(RVA = "0x4E34330", Offset = "0x4E34330", VA = "0x4E34330")]
	private static void Decompose(string source, ref StringBuilder sb, int checkType)
	{
	}

	[Token(Token = "0x6001751")]
	[Address(RVA = "0x4E355F0", Offset = "0x4E355F0", VA = "0x4E355F0")]
	private static void ReorderCanonical(string src, ref StringBuilder sb, int start)
	{
	}

	[Token(Token = "0x6001752")]
	[Address(RVA = "0x4E35400", Offset = "0x4E35400", VA = "0x4E35400")]
	private static void DecomposeChar(ref StringBuilder sb, ref int[] buf, string s, int i, int checkType, ref int start)
	{
	}

	[Token(Token = "0x6001753")]
	[Address(RVA = "0x4E34670", Offset = "0x4E34670", VA = "0x4E34670")]
	public static System.Text.NormalizationCheck QuickCheck(char c, int type)
	{
		return default(System.Text.NormalizationCheck);
	}

	[Token(Token = "0x6001754")]
	[Address(RVA = "0x4E35C40", Offset = "0x4E35C40", VA = "0x4E35C40")]
	private static int GetCanonicalHangul(int s, int[] buf, int bufIdx)
	{
		return default(int);
	}

	[Token(Token = "0x6001755")]
	[Address(RVA = "0x4E358D0", Offset = "0x4E358D0", VA = "0x4E358D0")]
	private static int GetCanonical(int c, int[] buf, int bufIdx, int checkType)
	{
		return default(int);
	}

	[Token(Token = "0x6001756")]
	[Address(RVA = "0x4E35D20", Offset = "0x4E35D20", VA = "0x4E35D20")]
	public static string Normalize(string source, NormalizationForm normalizationForm)
	{
		return null;
	}

	[Token(Token = "0x6001757")]
	[Address(RVA = "0x4E35EA0", Offset = "0x4E35EA0", VA = "0x4E35EA0")]
	public static string Normalize(string source, int type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001758")]
	[Address(RVA = "0x4E35FC0", Offset = "0x4E35FC0", VA = "0x4E35FC0")]
	private static extern void load_normalization_resource(out IntPtr props, out IntPtr mappedChars, out IntPtr charMapIndex, out IntPtr helperIndex, out IntPtr mapIdxToComposite, out IntPtr combiningClass);

	[Token(Token = "0x6001759")]
	[Address(RVA = "0x4E35FD0", Offset = "0x4E35FD0", VA = "0x4E35FD0")]
	static Normalization()
	{
	}
}
