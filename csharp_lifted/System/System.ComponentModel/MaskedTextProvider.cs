// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.MaskedTextProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000189")]
public class MaskedTextProvider : ICloneable
{
	[Token(Token = "0x200018A")]
	private enum CaseConversion
	{
		[Token(Token = "0x400062B")]
		None,
		[Token(Token = "0x400062C")]
		ToLower,
		[Token(Token = "0x400062D")]
		ToUpper
	}

	[Token(Token = "0x200018B")]
	[Flags]
	private enum CharType
	{
		[Token(Token = "0x400062F")]
		EditOptional = 1,
		[Token(Token = "0x4000630")]
		EditRequired = 2,
		[Token(Token = "0x4000631")]
		Separator = 4,
		[Token(Token = "0x4000632")]
		Literal = 8,
		[Token(Token = "0x4000633")]
		Modifier = 0x10
	}

	[Token(Token = "0x200018C")]
	private class CharDescriptor
	{
		[Token(Token = "0x4000634")]
		[FieldOffset(Offset = "0x10")]
		public int MaskPosition;

		[Token(Token = "0x4000635")]
		[FieldOffset(Offset = "0x14")]
		public CaseConversion CaseConversion;

		[Token(Token = "0x4000636")]
		[FieldOffset(Offset = "0x18")]
		public CharType CharType;

		[Token(Token = "0x4000637")]
		[FieldOffset(Offset = "0x1C")]
		public bool IsAssigned;

		[Token(Token = "0x6000A37")]
		[Address(RVA = "0x623ED50", Offset = "0x623DD50", VA = "0x623ED50")]
		public CharDescriptor(int maskPos, CharType charType)
		{
		}

		[Token(Token = "0x6000A38")]
		[Address(RVA = "0x623ED70", Offset = "0x623DD70", VA = "0x623ED70", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x400060D")]
	private const char SPACE_CHAR = ' ';

	[Token(Token = "0x400060E")]
	private const char DEFAULT_PROMPT_CHAR = '_';

	[Token(Token = "0x400060F")]
	private const char NULL_PASSWORD_CHAR = '\0';

	[Token(Token = "0x4000610")]
	private const bool DEFAULT_ALLOW_PROMPT = true;

	[Token(Token = "0x4000611")]
	private const int INVALID_INDEX = -1;

	[Token(Token = "0x4000612")]
	private const byte EDIT_ANY = 0;

	[Token(Token = "0x4000613")]
	private const byte EDIT_UNASSIGNED = 1;

	[Token(Token = "0x4000614")]
	private const byte EDIT_ASSIGNED = 2;

	[Token(Token = "0x4000615")]
	private const bool FORWARD = true;

	[Token(Token = "0x4000616")]
	private const bool BACKWARD = false;

	[Token(Token = "0x4000617")]
	[FieldOffset(Offset = "0x0")]
	private static int s_ASCII_ONLY;

	[Token(Token = "0x4000618")]
	[FieldOffset(Offset = "0x4")]
	private static int s_ALLOW_PROMPT_AS_INPUT;

	[Token(Token = "0x4000619")]
	[FieldOffset(Offset = "0x8")]
	private static int s_INCLUDE_PROMPT;

	[Token(Token = "0x400061A")]
	[FieldOffset(Offset = "0xC")]
	private static int s_INCLUDE_LITERALS;

	[Token(Token = "0x400061B")]
	[FieldOffset(Offset = "0x10")]
	private static int s_RESET_ON_PROMPT;

	[Token(Token = "0x400061C")]
	[FieldOffset(Offset = "0x14")]
	private static int s_RESET_ON_LITERALS;

	[Token(Token = "0x400061D")]
	[FieldOffset(Offset = "0x18")]
	private static int s_SKIP_SPACE;

	[Token(Token = "0x400061E")]
	[FieldOffset(Offset = "0x20")]
	private static Type s_maskTextProviderType;

	[Token(Token = "0x400061F")]
	[FieldOffset(Offset = "0x10")]
	private BitVector32 _flagState;

	[Token(Token = "0x4000620")]
	[FieldOffset(Offset = "0x18")]
	private StringBuilder _testString;

	[Token(Token = "0x4000621")]
	[FieldOffset(Offset = "0x20")]
	private int _requiredCharCount;

	[Token(Token = "0x4000622")]
	[FieldOffset(Offset = "0x24")]
	private int _requiredEditChars;

	[Token(Token = "0x4000623")]
	[FieldOffset(Offset = "0x28")]
	private int _optionalEditChars;

	[Token(Token = "0x4000624")]
	[FieldOffset(Offset = "0x2C")]
	private char _passwordChar;

	[Token(Token = "0x4000625")]
	[FieldOffset(Offset = "0x2E")]
	private char _promptChar;

	[Token(Token = "0x4000626")]
	[FieldOffset(Offset = "0x30")]
	private List<CharDescriptor> _stringDescriptor;

	[Token(Token = "0x17000220")]
	public bool AllowPromptAsInput
	{
		[Token(Token = "0x60009CE")]
		[Address(RVA = "0x6239690", Offset = "0x6238690", VA = "0x6239690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000221")]
	public int AssignedEditPositionCount
	{
		[Token(Token = "0x60009CF")]
		[Address(RVA = "0x62396F0", Offset = "0x62386F0", VA = "0x62396F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60009D0")]
		[Address(RVA = "0x6239700", Offset = "0x6238700", VA = "0x6239700")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000222")]
	public int AvailableEditPositionCount
	{
		[Token(Token = "0x60009D1")]
		[Address(RVA = "0x6239710", Offset = "0x6238710", VA = "0x6239710")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000223")]
	public CultureInfo Culture
	{
		[Token(Token = "0x60009D3")]
		[Address(RVA = "0x623A510", Offset = "0x6239510", VA = "0x623A510")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000224")]
	public static char DefaultPasswordChar
	{
		[Token(Token = "0x60009D4")]
		[Address(RVA = "0x623A520", Offset = "0x6239520", VA = "0x623A520")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000225")]
	public int EditPositionCount
	{
		[Token(Token = "0x60009D5")]
		[Address(RVA = "0x6239720", Offset = "0x6238720", VA = "0x6239720")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000226")]
	public IEnumerator EditPositions
	{
		[Token(Token = "0x60009D6")]
		[Address(RVA = "0x623A530", Offset = "0x6239530", VA = "0x623A530")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000227")]
	public bool IncludeLiterals
	{
		[Token(Token = "0x60009D7")]
		[Address(RVA = "0x623A370", Offset = "0x6239370", VA = "0x623A370")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009D8")]
		[Address(RVA = "0x623A3D0", Offset = "0x62393D0", VA = "0x623A3D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000228")]
	public bool IncludePrompt
	{
		[Token(Token = "0x60009D9")]
		[Address(RVA = "0x623A440", Offset = "0x6239440", VA = "0x623A440")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009DA")]
		[Address(RVA = "0x623A4A0", Offset = "0x62394A0", VA = "0x623A4A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000229")]
	public bool AsciiOnly
	{
		[Token(Token = "0x60009DB")]
		[Address(RVA = "0x623A080", Offset = "0x6239080", VA = "0x623A080")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700022A")]
	public bool IsPassword
	{
		[Token(Token = "0x60009DC")]
		[Address(RVA = "0x623A840", Offset = "0x6239840", VA = "0x623A840")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009DD")]
		[Address(RVA = "0x623A850", Offset = "0x6239850", VA = "0x623A850")]
		set
		{
		}
	}

	[Token(Token = "0x1700022B")]
	public static int InvalidIndex
	{
		[Token(Token = "0x60009DE")]
		[Address(RVA = "0x623A8D0", Offset = "0x62398D0", VA = "0x623A8D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022C")]
	public int LastAssignedPosition
	{
		[Token(Token = "0x60009DF")]
		[Address(RVA = "0x623A8E0", Offset = "0x62398E0", VA = "0x623A8E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022D")]
	public int Length
	{
		[Token(Token = "0x60009E0")]
		[Address(RVA = "0x623A9F0", Offset = "0x62399F0", VA = "0x623A9F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022E")]
	public string Mask
	{
		[Token(Token = "0x60009E1")]
		[Address(RVA = "0x623AA10", Offset = "0x6239A10", VA = "0x623AA10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022F")]
	public bool MaskCompleted
	{
		[Token(Token = "0x60009E2")]
		[Address(RVA = "0x623AA20", Offset = "0x6239A20", VA = "0x623AA20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000230")]
	public bool MaskFull
	{
		[Token(Token = "0x60009E3")]
		[Address(RVA = "0x623AA30", Offset = "0x6239A30", VA = "0x623AA30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000231")]
	public char PasswordChar
	{
		[Token(Token = "0x60009E4")]
		[Address(RVA = "0x623AA40", Offset = "0x6239A40", VA = "0x623AA40")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60009E5")]
		[Address(RVA = "0x623AA50", Offset = "0x6239A50", VA = "0x623AA50")]
		set
		{
		}
	}

	[Token(Token = "0x17000232")]
	public char PromptChar
	{
		[Token(Token = "0x60009E6")]
		[Address(RVA = "0x623ABD0", Offset = "0x6239BD0", VA = "0x623ABD0")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60009E7")]
		[Address(RVA = "0x623ABE0", Offset = "0x6239BE0", VA = "0x623ABE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000233")]
	public bool ResetOnPrompt
	{
		[Token(Token = "0x60009E8")]
		[Address(RVA = "0x623A250", Offset = "0x6239250", VA = "0x623A250")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009E9")]
		[Address(RVA = "0x623A0E0", Offset = "0x62390E0", VA = "0x623A0E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000234")]
	public bool ResetOnSpace
	{
		[Token(Token = "0x60009EA")]
		[Address(RVA = "0x623A2B0", Offset = "0x62392B0", VA = "0x623A2B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009EB")]
		[Address(RVA = "0x623A150", Offset = "0x6239150", VA = "0x623A150")]
		set
		{
		}
	}

	[Token(Token = "0x17000235")]
	public bool SkipLiterals
	{
		[Token(Token = "0x60009EC")]
		[Address(RVA = "0x623A310", Offset = "0x6239310", VA = "0x623A310")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009ED")]
		[Address(RVA = "0x623A1C0", Offset = "0x62391C0", VA = "0x623A1C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000236")]
	public char this[int index]
	{
		[Token(Token = "0x60009EE")]
		[Address(RVA = "0x623AE00", Offset = "0x6239E00", VA = "0x623AE00")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x6238BB0", Offset = "0x6237BB0", VA = "0x6238BB0")]
	public MaskedTextProvider(string mask)
	{
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x6239030", Offset = "0x6238030", VA = "0x6239030")]
	public MaskedTextProvider(string mask, bool restrictToAscii)
	{
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x6239060", Offset = "0x6238060", VA = "0x6239060")]
	public MaskedTextProvider(string mask, CultureInfo culture)
	{
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x6239090", Offset = "0x6238090", VA = "0x6239090")]
	public MaskedTextProvider(string mask, CultureInfo culture, bool restrictToAscii)
	{
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x62390B0", Offset = "0x62380B0", VA = "0x62390B0")]
	public MaskedTextProvider(string mask, char passwordChar, bool allowPromptAsInput)
	{
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x62390D0", Offset = "0x62380D0", VA = "0x62390D0")]
	public MaskedTextProvider(string mask, CultureInfo culture, char passwordChar, bool allowPromptAsInput)
	{
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x6238BE0", Offset = "0x6237BE0", VA = "0x6238BE0")]
	public MaskedTextProvider(string mask, CultureInfo culture, bool allowPromptAsInput, char promptChar, char passwordChar, bool restrictToAscii)
	{
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x6239190", Offset = "0x6238190", VA = "0x6239190")]
	private void Initialize()
	{
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x6239730", Offset = "0x6238730", VA = "0x6239730", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x60009EF")]
	[Address(RVA = "0x623AEB0", Offset = "0x6239EB0", VA = "0x623AEB0")]
	public bool Add(char input)
	{
		return default(bool);
	}

	[Token(Token = "0x60009F0")]
	[Address(RVA = "0x623AED0", Offset = "0x6239ED0", VA = "0x623AED0")]
	public bool Add(char input, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x60009F1")]
	[Address(RVA = "0x623B0F0", Offset = "0x623A0F0", VA = "0x623B0F0")]
	public bool Add(string input)
	{
		return default(bool);
	}

	[Token(Token = "0x60009F2")]
	[Address(RVA = "0x623B110", Offset = "0x623A110", VA = "0x623B110")]
	public bool Add(string input, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x60009F3")]
	[Address(RVA = "0x623B200", Offset = "0x623A200", VA = "0x623B200")]
	public void Clear()
	{
	}

	[Token(Token = "0x60009F4")]
	[Address(RVA = "0x623B250", Offset = "0x623A250", VA = "0x623B250")]
	public void Clear(out MaskedTextResultHint resultHint)
	{
	}

	[Token(Token = "0x60009F5")]
	[Address(RVA = "0x623A990", Offset = "0x6239990", VA = "0x623A990")]
	public int FindAssignedEditPositionFrom(int position, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x60009F6")]
	[Address(RVA = "0x623B340", Offset = "0x623A340", VA = "0x623B340")]
	public int FindAssignedEditPositionInRange(int startPosition, int endPosition, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x60009F7")]
	[Address(RVA = "0x623B010", Offset = "0x623A010", VA = "0x623B010")]
	public int FindEditPositionFrom(int position, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x60009F8")]
	[Address(RVA = "0x623B570", Offset = "0x623A570", VA = "0x623B570")]
	public int FindEditPositionInRange(int startPosition, int endPosition, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x623B3F0", Offset = "0x623A3F0", VA = "0x623B3F0")]
	private int FindEditPositionInRange(int startPosition, int endPosition, bool direction, byte assignedStatus)
	{
		return default(int);
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x623B670", Offset = "0x623A670", VA = "0x623B670")]
	public int FindNonEditPositionFrom(int position, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x623B6C0", Offset = "0x623A6C0", VA = "0x623B6C0")]
	public int FindNonEditPositionInRange(int startPosition, int endPosition, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x623B580", Offset = "0x623A580", VA = "0x623B580")]
	private int FindPositionInRange(int startPosition, int endPosition, bool direction, CharType charTypeFlags)
	{
		return default(int);
	}

	[Token(Token = "0x60009FD")]
	[Address(RVA = "0x623B6D0", Offset = "0x623A6D0", VA = "0x623B6D0")]
	public int FindUnassignedEditPositionFrom(int position, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x623B7B0", Offset = "0x623A7B0", VA = "0x623B7B0")]
	public int FindUnassignedEditPositionInRange(int startPosition, int endPosition, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x623B900", Offset = "0x623A900", VA = "0x623B900")]
	public static bool GetOperationResultFromHint(MaskedTextResultHint hint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x623B910", Offset = "0x623A910", VA = "0x623B910")]
	public bool InsertAt(char input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x623B9D0", Offset = "0x623A9D0", VA = "0x623B9D0")]
	public bool InsertAt(char input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x623B9B0", Offset = "0x623A9B0", VA = "0x623B9B0")]
	public bool InsertAt(string input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x623BA30", Offset = "0x623AA30", VA = "0x623BA30")]
	public bool InsertAt(string input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x623BAF0", Offset = "0x623AAF0", VA = "0x623BAF0")]
	private bool InsertAtInt(string input, int position, out int testPosition, out MaskedTextResultHint resultHint, bool testOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x623C8E0", Offset = "0x623B8E0", VA = "0x623C8E0")]
	private static bool IsAscii(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x623C8F0", Offset = "0x623B8F0", VA = "0x623C8F0")]
	private static bool IsAciiAlphanumeric(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x623C910", Offset = "0x623B910", VA = "0x623C910")]
	private static bool IsAlphanumeric(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x623C980", Offset = "0x623B980", VA = "0x623C980")]
	private static bool IsAsciiLetter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x623C990", Offset = "0x623B990", VA = "0x623C990")]
	public bool IsAvailablePosition(int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x623AD60", Offset = "0x6239D60", VA = "0x623AD60")]
	public bool IsEditPosition(int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x6239670", Offset = "0x6238670", VA = "0x6239670")]
	private static bool IsEditPosition(CharDescriptor charDescriptor)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x623CA40", Offset = "0x623BA40", VA = "0x623CA40")]
	private static bool IsLiteralPosition(CharDescriptor charDescriptor)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x6239100", Offset = "0x6238100", VA = "0x6239100")]
	private static bool IsPrintableChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x623CA60", Offset = "0x623BA60", VA = "0x623CA60")]
	public static bool IsValidInputChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x623CAC0", Offset = "0x623BAC0", VA = "0x623CAC0")]
	public static bool IsValidMaskChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x623AB80", Offset = "0x6239B80", VA = "0x623AB80")]
	public static bool IsValidPasswordChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x623CB20", Offset = "0x623BB20", VA = "0x623CB20")]
	public bool Remove()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x623CB40", Offset = "0x623BB40", VA = "0x623CB40")]
	public bool Remove(out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A13")]
	[Address(RVA = "0x623CB90", Offset = "0x623BB90", VA = "0x623CB90")]
	public bool RemoveAt(int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A14")]
	[Address(RVA = "0x623CBF0", Offset = "0x623BBF0", VA = "0x623CBF0")]
	public bool RemoveAt(int startPosition, int endPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x623CC60", Offset = "0x623BC60", VA = "0x623CC60")]
	public bool RemoveAt(int startPosition, int endPosition, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x623CCE0", Offset = "0x623BCE0", VA = "0x623CCE0")]
	private bool RemoveAtInt(int startPosition, int endPosition, out int testPosition, out MaskedTextResultHint resultHint, bool testOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x623A230", Offset = "0x6239230", VA = "0x623A230")]
	public bool Replace(char input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x623D380", Offset = "0x623C380", VA = "0x623D380")]
	public bool Replace(char input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x623D550", Offset = "0x623C550", VA = "0x623D550")]
	public bool Replace(char input, int startPosition, int endPosition, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x623DA00", Offset = "0x623CA00", VA = "0x623DA00")]
	public bool Replace(string input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x623DA20", Offset = "0x623CA20", VA = "0x623DA20")]
	public bool Replace(string input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1C")]
	[Address(RVA = "0x623D690", Offset = "0x623C690", VA = "0x623D690")]
	public bool Replace(string input, int startPosition, int endPosition, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x623B2B0", Offset = "0x623A2B0", VA = "0x623B2B0")]
	private void ResetChar(int testPosition)
	{
	}

	[Token(Token = "0x6000A1E")]
	[Address(RVA = "0x623D0E0", Offset = "0x623C0E0", VA = "0x623D0E0")]
	private void ResetString(int startPosition, int endPosition)
	{
	}

	[Token(Token = "0x6000A1F")]
	[Address(RVA = "0x623DB30", Offset = "0x623CB30", VA = "0x623DB30")]
	public bool Set(string input)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x623DB50", Offset = "0x623CB50", VA = "0x623DB50")]
	public bool Set(string input, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x623C770", Offset = "0x623B770", VA = "0x623C770")]
	private void SetChar(char input, int position)
	{
	}

	[Token(Token = "0x6000A22")]
	[Address(RVA = "0x623DD30", Offset = "0x623CD30", VA = "0x623DD30")]
	private void SetChar(char input, int position, CharDescriptor charDescriptor)
	{
	}

	[Token(Token = "0x6000A23")]
	[Address(RVA = "0x623C7D0", Offset = "0x623B7D0", VA = "0x623C7D0")]
	private void SetString(string input, int testPosition)
	{
	}

	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x623C130", Offset = "0x623B130", VA = "0x623C130")]
	private bool TestChar(char input, int position, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A25")]
	[Address(RVA = "0x623D4F0", Offset = "0x623C4F0", VA = "0x623D4F0")]
	private bool TestEscapeChar(char input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A26")]
	[Address(RVA = "0x623DEF0", Offset = "0x623CEF0", VA = "0x623DEF0")]
	private bool TestEscapeChar(char input, int position, CharDescriptor charDex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A27")]
	[Address(RVA = "0x623B060", Offset = "0x623A060", VA = "0x623B060")]
	private bool TestSetChar(char input, int position, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A28")]
	[Address(RVA = "0x623B1C0", Offset = "0x623A1C0", VA = "0x623B1C0")]
	private bool TestSetString(string input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x623BF50", Offset = "0x623AF50", VA = "0x623BF50")]
	private bool TestString(string input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A2A")]
	[Address(RVA = "0x623E0A0", Offset = "0x623D0A0", VA = "0x623E0A0")]
	public string ToDisplayString()
	{
		return null;
	}

	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x623E220", Offset = "0x623D220", VA = "0x623E220", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A2C")]
	[Address(RVA = "0x623E7C0", Offset = "0x623D7C0", VA = "0x623E7C0")]
	public string ToString(bool ignorePasswordChar)
	{
		return null;
	}

	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x623E8B0", Offset = "0x623D8B0", VA = "0x623E8B0")]
	public string ToString(int startPosition, int length)
	{
		return null;
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x623E990", Offset = "0x623D990", VA = "0x623E990")]
	public string ToString(bool ignorePasswordChar, int startPosition, int length)
	{
		return null;
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x623EA70", Offset = "0x623DA70", VA = "0x623EA70")]
	public string ToString(bool includePrompt, bool includeLiterals)
	{
		return null;
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x623EAC0", Offset = "0x623DAC0", VA = "0x623EAC0")]
	public string ToString(bool includePrompt, bool includeLiterals, int startPosition, int length)
	{
		return null;
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x623E300", Offset = "0x623D300", VA = "0x623E300")]
	public string ToString(bool ignorePasswordChar, bool includePrompt, bool includeLiterals, int startPosition, int length)
	{
		return null;
	}

	[Token(Token = "0x6000A32")]
	[Address(RVA = "0x623EAE0", Offset = "0x623DAE0", VA = "0x623EAE0")]
	public bool VerifyChar(char input, int position, out MaskedTextResultHint hint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A33")]
	[Address(RVA = "0x623EB50", Offset = "0x623DB50", VA = "0x623EB50")]
	public bool VerifyEscapeChar(char input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x623EBD0", Offset = "0x623DBD0", VA = "0x623EBD0")]
	public bool VerifyString(string input)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x623EC00", Offset = "0x623DC00", VA = "0x623EC00")]
	public bool VerifyString(string input, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}
}
