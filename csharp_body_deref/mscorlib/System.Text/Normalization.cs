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

[Token(Token = "0x20002CA")]
internal class Normalization
{
	[Token(Token = "0x4000C0C")]
	[FieldOffset(Offset = "0x0")]
	private unsafe static byte* props;

	[Token(Token = "0x4000C0D")]
	[FieldOffset(Offset = "0x8")]
	private unsafe static int* mappedChars;

	[Token(Token = "0x4000C0E")]
	[FieldOffset(Offset = "0x10")]
	private unsafe static short* charMapIndex;

	[Token(Token = "0x4000C0F")]
	[FieldOffset(Offset = "0x18")]
	private unsafe static short* helperIndex;

	[Token(Token = "0x4000C10")]
	[FieldOffset(Offset = "0x20")]
	private unsafe static ushort* mapIdxToComposite;

	[Token(Token = "0x4000C11")]
	[FieldOffset(Offset = "0x28")]
	private unsafe static byte* combiningClass;

	[Token(Token = "0x4000C12")]
	[FieldOffset(Offset = "0x30")]
	private static object forLock;

	[Token(Token = "0x4000C13")]
	[FieldOffset(Offset = "0x38")]
	public static readonly bool isReady;

	[Token(Token = "0x60017AB")]
	[Address(RVA = "0x19944C0", Offset = "0x1992AC0", VA = "0x1819944C0")]
	private static uint PropValue(int cp)
	{
		return default(uint);
	}

	[Token(Token = "0x60017AC")]
	[Address(RVA = "0x1992A70", Offset = "0x1991070", VA = "0x181992A70")]
	private static int CharMapIdx(int cp)
	{
		return default(int);
	}

	[Token(Token = "0x60017AD")]
	[Address(RVA = "0x1994140", Offset = "0x1992740", VA = "0x181994140")]
	private static byte GetCombiningClass(int c)
	{
		return default(byte);
	}

	[Token(Token = "0x60017AE")]
	[Address(RVA = "0x19941F0", Offset = "0x19927F0", VA = "0x1819941F0")]
	private static int GetPrimaryCompositeFromMapIndex(int src)
	{
		return default(int);
	}

	[Token(Token = "0x60017AF")]
	[Address(RVA = "0x19942A0", Offset = "0x19928A0", VA = "0x1819942A0")]
	private static int GetPrimaryCompositeHelperIndex(int cp)
	{
		return default(int);
	}

	[Token(Token = "0x60017B0")]
	[Address(RVA = "0x1993060", Offset = "0x1991660", VA = "0x181993060")]
	private static string Compose(string source, int checkType)
	{
		return null;
	}

	[Token(Token = "0x60017B1")]
	[Address(RVA = "0x1992CF0", Offset = "0x19912F0", VA = "0x181992CF0")]
	private static StringBuilder Combine(string source, int start, int checkType)
	{
		return null;
	}

	[Token(Token = "0x60017B2")]
	[Address(RVA = "0x1992E20", Offset = "0x1991420", VA = "0x181992E20")]
	private static void Combine(StringBuilder sb, int i, int checkType)
	{
	}

	[Token(Token = "0x60017B3")]
	[Address(RVA = "0x1992B00", Offset = "0x1991100", VA = "0x181992B00")]
	private static int CombineHangul(StringBuilder sb, string s, int current)
	{
		return default(int);
	}

	[Token(Token = "0x60017B4")]
	[Address(RVA = "0x1993CB0", Offset = "0x19922B0", VA = "0x181993CB0")]
	private static int Fetch(StringBuilder sb, string s, int i)
	{
		return default(int);
	}

	[Token(Token = "0x60017B5")]
	[Address(RVA = "0x1994910", Offset = "0x1992F10", VA = "0x181994910")]
	private static int TryComposeWithPreviousStarter(StringBuilder sb, string s, int current)
	{
		return default(int);
	}

	[Token(Token = "0x60017B6")]
	[Address(RVA = "0x1994CA0", Offset = "0x19932A0", VA = "0x181994CA0")]
	private static int TryCompose(int i, int starter, int candidate)
	{
		return default(int);
	}

	[Token(Token = "0x60017B7")]
	[Address(RVA = "0x1993440", Offset = "0x1991A40", VA = "0x181993440")]
	private static string Decompose(string source, int checkType)
	{
		return null;
	}

	[Token(Token = "0x60017B8")]
	[Address(RVA = "0x19939C0", Offset = "0x1991FC0", VA = "0x1819939C0")]
	private static void Decompose(string source, ref StringBuilder sb, int checkType)
	{
	}

	[Token(Token = "0x60017B9")]
	[Address(RVA = "0x19946A0", Offset = "0x1992CA0", VA = "0x1819946A0")]
	private static void ReorderCanonical(string src, ref StringBuilder sb, int start)
	{
	}

	[Token(Token = "0x60017BA")]
	[Address(RVA = "0x1993250", Offset = "0x1991850", VA = "0x181993250")]
	private static void DecomposeChar(ref StringBuilder sb, ref int[] buf, string s, int i, int checkType, ref int start)
	{
	}

	[Token(Token = "0x60017BB")]
	[Address(RVA = "0x1994550", Offset = "0x1992B50", VA = "0x181994550")]
	public static System.Text.NormalizationCheck QuickCheck(char c, int type)
	{
		return default(System.Text.NormalizationCheck);
	}

	[Token(Token = "0x60017BC")]
	[Address(RVA = "0x1993D00", Offset = "0x1992300", VA = "0x181993D00")]
	private static int GetCanonicalHangul(int s, int[] buf, int bufIdx)
	{
		return default(int);
	}

	[Token(Token = "0x60017BD")]
	[Address(RVA = "0x1993E20", Offset = "0x1992420", VA = "0x181993E20")]
	private static int GetCanonical(int c, int[] buf, int bufIdx, int checkType)
	{
		return default(int);
	}

	[Token(Token = "0x60017BE")]
	[Address(RVA = "0x1994350", Offset = "0x1992950", VA = "0x181994350")]
	public static string Normalize(string source, NormalizationForm normalizationForm)
	{
		return null;
	}

	[Token(Token = "0x60017BF")]
	[Address(RVA = "0x1994420", Offset = "0x1992A20", VA = "0x181994420")]
	public static string Normalize(string source, int type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017C0")]
	[Address(RVA = "0x1995050", Offset = "0x1993650", VA = "0x181995050")]
	private static extern void load_normalization_resource(out IntPtr props, out IntPtr mappedChars, out IntPtr charMapIndex, out IntPtr helperIndex, out IntPtr mapIdxToComposite, out IntPtr combiningClass);

	[Token(Token = "0x60017C1")]
	[Address(RVA = "0x1994DF0", Offset = "0x19933F0", VA = "0x181994DF0")]
	static Normalization()
	{
	}
}
