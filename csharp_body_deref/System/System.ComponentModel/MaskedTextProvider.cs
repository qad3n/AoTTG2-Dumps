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

[Token(Token = "0x20002BD")]
public class MaskedTextProvider : ICloneable
{
	[Token(Token = "0x20002BE")]
	private enum CaseConversion
	{
		[Token(Token = "0x4000DC3")]
		None,
		[Token(Token = "0x4000DC4")]
		ToLower,
		[Token(Token = "0x4000DC5")]
		ToUpper
	}

	[Token(Token = "0x20002BF")]
	[Flags]
	private enum CharType
	{
		[Token(Token = "0x4000DC7")]
		EditOptional = 1,
		[Token(Token = "0x4000DC8")]
		EditRequired = 2,
		[Token(Token = "0x4000DC9")]
		Separator = 4,
		[Token(Token = "0x4000DCA")]
		Literal = 8,
		[Token(Token = "0x4000DCB")]
		Modifier = 0x10
	}

	[Token(Token = "0x20002C0")]
	private class CharDescriptor
	{
		[Token(Token = "0x4000DCC")]
		[FieldOffset(Offset = "0x10")]
		public int MaskPosition;

		[Token(Token = "0x4000DCD")]
		[FieldOffset(Offset = "0x14")]
		public CaseConversion CaseConversion;

		[Token(Token = "0x4000DCE")]
		[FieldOffset(Offset = "0x18")]
		public CharType CharType;

		[Token(Token = "0x4000DCF")]
		[FieldOffset(Offset = "0x1C")]
		public bool IsAssigned;

		[Token(Token = "0x60011AF")]
		[Address(RVA = "0x489F120", Offset = "0x489F120", VA = "0x489F120")]
		public CharDescriptor(int maskPos, CharType charType)
		{
		}

		[Token(Token = "0x60011B0")]
		[Address(RVA = "0x489F140", Offset = "0x489F140", VA = "0x489F140", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x4000DA5")]
	private const char SPACE_CHAR = ' ';

	[Token(Token = "0x4000DA6")]
	private const char DEFAULT_PROMPT_CHAR = '_';

	[Token(Token = "0x4000DA7")]
	private const char NULL_PASSWORD_CHAR = '\0';

	[Token(Token = "0x4000DA8")]
	private const bool DEFAULT_ALLOW_PROMPT = true;

	[Token(Token = "0x4000DA9")]
	private const int INVALID_INDEX = -1;

	[Token(Token = "0x4000DAA")]
	private const byte EDIT_ANY = 0;

	[Token(Token = "0x4000DAB")]
	private const byte EDIT_UNASSIGNED = 1;

	[Token(Token = "0x4000DAC")]
	private const byte EDIT_ASSIGNED = 2;

	[Token(Token = "0x4000DAD")]
	private const bool FORWARD = true;

	[Token(Token = "0x4000DAE")]
	private const bool BACKWARD = false;

	[Token(Token = "0x4000DAF")]
	[FieldOffset(Offset = "0x0")]
	private static int s_ASCII_ONLY;

	[Token(Token = "0x4000DB0")]
	[FieldOffset(Offset = "0x4")]
	private static int s_ALLOW_PROMPT_AS_INPUT;

	[Token(Token = "0x4000DB1")]
	[FieldOffset(Offset = "0x8")]
	private static int s_INCLUDE_PROMPT;

	[Token(Token = "0x4000DB2")]
	[FieldOffset(Offset = "0xC")]
	private static int s_INCLUDE_LITERALS;

	[Token(Token = "0x4000DB3")]
	[FieldOffset(Offset = "0x10")]
	private static int s_RESET_ON_PROMPT;

	[Token(Token = "0x4000DB4")]
	[FieldOffset(Offset = "0x14")]
	private static int s_RESET_ON_LITERALS;

	[Token(Token = "0x4000DB5")]
	[FieldOffset(Offset = "0x18")]
	private static int s_SKIP_SPACE;

	[Token(Token = "0x4000DB6")]
	[FieldOffset(Offset = "0x20")]
	private static Type s_maskTextProviderType;

	[Token(Token = "0x4000DB7")]
	[FieldOffset(Offset = "0x10")]
	private BitVector32 _flagState;

	[Token(Token = "0x4000DB8")]
	[FieldOffset(Offset = "0x18")]
	private StringBuilder _testString;

	[Token(Token = "0x4000DB9")]
	[FieldOffset(Offset = "0x20")]
	private int _requiredCharCount;

	[Token(Token = "0x4000DBA")]
	[FieldOffset(Offset = "0x24")]
	private int _requiredEditChars;

	[Token(Token = "0x4000DBB")]
	[FieldOffset(Offset = "0x28")]
	private int _optionalEditChars;

	[Token(Token = "0x4000DBC")]
	[FieldOffset(Offset = "0x2C")]
	private char _passwordChar;

	[Token(Token = "0x4000DBD")]
	[FieldOffset(Offset = "0x2E")]
	private char _promptChar;

	[Token(Token = "0x4000DBE")]
	[FieldOffset(Offset = "0x30")]
	private List<CharDescriptor> _stringDescriptor;

	[Token(Token = "0x170003E0")]
	public bool AllowPromptAsInput
	{
		[Token(Token = "0x6001146")]
		[Address(RVA = "0x4899800", Offset = "0x4899800", VA = "0x4899800")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003E1")]
	public int AssignedEditPositionCount
	{
		[Token(Token = "0x6001147")]
		[Address(RVA = "0x4899860", Offset = "0x4899860", VA = "0x4899860")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001148")]
		[Address(RVA = "0x4899870", Offset = "0x4899870", VA = "0x4899870")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003E2")]
	public int AvailableEditPositionCount
	{
		[Token(Token = "0x6001149")]
		[Address(RVA = "0x4899880", Offset = "0x4899880", VA = "0x4899880")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003E3")]
	public CultureInfo Culture
	{
		[Token(Token = "0x600114B")]
		[Address(RVA = "0x489A690", Offset = "0x489A690", VA = "0x489A690")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E4")]
	public static char DefaultPasswordChar
	{
		[Token(Token = "0x600114C")]
		[Address(RVA = "0x489A6A0", Offset = "0x489A6A0", VA = "0x489A6A0")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x170003E5")]
	public int EditPositionCount
	{
		[Token(Token = "0x600114D")]
		[Address(RVA = "0x4899890", Offset = "0x4899890", VA = "0x4899890")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003E6")]
	public IEnumerator EditPositions
	{
		[Token(Token = "0x600114E")]
		[Address(RVA = "0x489A6B0", Offset = "0x489A6B0", VA = "0x489A6B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E7")]
	public bool IncludeLiterals
	{
		[Token(Token = "0x600114F")]
		[Address(RVA = "0x489A4F0", Offset = "0x489A4F0", VA = "0x489A4F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001150")]
		[Address(RVA = "0x489A550", Offset = "0x489A550", VA = "0x489A550")]
		set
		{
		}
	}

	[Token(Token = "0x170003E8")]
	public bool IncludePrompt
	{
		[Token(Token = "0x6001151")]
		[Address(RVA = "0x489A5C0", Offset = "0x489A5C0", VA = "0x489A5C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001152")]
		[Address(RVA = "0x489A620", Offset = "0x489A620", VA = "0x489A620")]
		set
		{
		}
	}

	[Token(Token = "0x170003E9")]
	public bool AsciiOnly
	{
		[Token(Token = "0x6001153")]
		[Address(RVA = "0x489A200", Offset = "0x489A200", VA = "0x489A200")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003EA")]
	public bool IsPassword
	{
		[Token(Token = "0x6001154")]
		[Address(RVA = "0x489AA00", Offset = "0x489AA00", VA = "0x489AA00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001155")]
		[Address(RVA = "0x489AA10", Offset = "0x489AA10", VA = "0x489AA10")]
		set
		{
		}
	}

	[Token(Token = "0x170003EB")]
	public static int InvalidIndex
	{
		[Token(Token = "0x6001156")]
		[Address(RVA = "0x489AA80", Offset = "0x489AA80", VA = "0x489AA80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003EC")]
	public int LastAssignedPosition
	{
		[Token(Token = "0x6001157")]
		[Address(RVA = "0x489AA90", Offset = "0x489AA90", VA = "0x489AA90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003ED")]
	public int Length
	{
		[Token(Token = "0x6001158")]
		[Address(RVA = "0x489ABA0", Offset = "0x489ABA0", VA = "0x489ABA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003EE")]
	public string Mask
	{
		[Token(Token = "0x6001159")]
		[Address(RVA = "0x489ABC0", Offset = "0x489ABC0", VA = "0x489ABC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EF")]
	public bool MaskCompleted
	{
		[Token(Token = "0x600115A")]
		[Address(RVA = "0x489ABD0", Offset = "0x489ABD0", VA = "0x489ABD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003F0")]
	public bool MaskFull
	{
		[Token(Token = "0x600115B")]
		[Address(RVA = "0x489ABE0", Offset = "0x489ABE0", VA = "0x489ABE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003F1")]
	public char PasswordChar
	{
		[Token(Token = "0x600115C")]
		[Address(RVA = "0x489ABF0", Offset = "0x489ABF0", VA = "0x489ABF0")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x600115D")]
		[Address(RVA = "0x489AC00", Offset = "0x489AC00", VA = "0x489AC00")]
		set
		{
		}
	}

	[Token(Token = "0x170003F2")]
	public char PromptChar
	{
		[Token(Token = "0x600115E")]
		[Address(RVA = "0x489AD80", Offset = "0x489AD80", VA = "0x489AD80")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x600115F")]
		[Address(RVA = "0x489AD90", Offset = "0x489AD90", VA = "0x489AD90")]
		set
		{
		}
	}

	[Token(Token = "0x170003F3")]
	public bool ResetOnPrompt
	{
		[Token(Token = "0x6001160")]
		[Address(RVA = "0x489A3D0", Offset = "0x489A3D0", VA = "0x489A3D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001161")]
		[Address(RVA = "0x489A260", Offset = "0x489A260", VA = "0x489A260")]
		set
		{
		}
	}

	[Token(Token = "0x170003F4")]
	public bool ResetOnSpace
	{
		[Token(Token = "0x6001162")]
		[Address(RVA = "0x489A430", Offset = "0x489A430", VA = "0x489A430")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001163")]
		[Address(RVA = "0x489A2D0", Offset = "0x489A2D0", VA = "0x489A2D0")]
		set
		{
		}
	}

	[Token(Token = "0x170003F5")]
	public bool SkipLiterals
	{
		[Token(Token = "0x6001164")]
		[Address(RVA = "0x489A490", Offset = "0x489A490", VA = "0x489A490")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001165")]
		[Address(RVA = "0x489A340", Offset = "0x489A340", VA = "0x489A340")]
		set
		{
		}
	}

	[Token(Token = "0x170003F6")]
	public char this[int index]
	{
		[Token(Token = "0x6001166")]
		[Address(RVA = "0x489AFD0", Offset = "0x489AFD0", VA = "0x489AFD0")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x600113E")]
	[Address(RVA = "0x4898CE0", Offset = "0x4898CE0", VA = "0x4898CE0")]
	public MaskedTextProvider(string mask)
	{
	}

	[Token(Token = "0x600113F")]
	[Address(RVA = "0x4899170", Offset = "0x4899170", VA = "0x4899170")]
	public MaskedTextProvider(string mask, bool restrictToAscii)
	{
	}

	[Token(Token = "0x6001140")]
	[Address(RVA = "0x48991A0", Offset = "0x48991A0", VA = "0x48991A0")]
	public MaskedTextProvider(string mask, CultureInfo culture)
	{
	}

	[Token(Token = "0x6001141")]
	[Address(RVA = "0x48991D0", Offset = "0x48991D0", VA = "0x48991D0")]
	public MaskedTextProvider(string mask, CultureInfo culture, bool restrictToAscii)
	{
	}

	[Token(Token = "0x6001142")]
	[Address(RVA = "0x48991F0", Offset = "0x48991F0", VA = "0x48991F0")]
	public MaskedTextProvider(string mask, char passwordChar, bool allowPromptAsInput)
	{
	}

	[Token(Token = "0x6001143")]
	[Address(RVA = "0x4899210", Offset = "0x4899210", VA = "0x4899210")]
	public MaskedTextProvider(string mask, CultureInfo culture, char passwordChar, bool allowPromptAsInput)
	{
	}

	[Token(Token = "0x6001144")]
	[Address(RVA = "0x4898D10", Offset = "0x4898D10", VA = "0x4898D10")]
	public MaskedTextProvider(string mask, CultureInfo culture, bool allowPromptAsInput, char promptChar, char passwordChar, bool restrictToAscii)
	{
	}

	[Token(Token = "0x6001145")]
	[Address(RVA = "0x48992D0", Offset = "0x48992D0", VA = "0x48992D0")]
	private void Initialize()
	{
	}

	[Token(Token = "0x600114A")]
	[Address(RVA = "0x48998A0", Offset = "0x48998A0", VA = "0x48998A0", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6001167")]
	[Address(RVA = "0x489B080", Offset = "0x489B080", VA = "0x489B080")]
	public bool Add(char input)
	{
		return default(bool);
	}

	[Token(Token = "0x6001168")]
	[Address(RVA = "0x489B0A0", Offset = "0x489B0A0", VA = "0x489B0A0")]
	public bool Add(char input, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6001169")]
	[Address(RVA = "0x489B2C0", Offset = "0x489B2C0", VA = "0x489B2C0")]
	public bool Add(string input)
	{
		return default(bool);
	}

	[Token(Token = "0x600116A")]
	[Address(RVA = "0x489B2E0", Offset = "0x489B2E0", VA = "0x489B2E0")]
	public bool Add(string input, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x600116B")]
	[Address(RVA = "0x489B3D0", Offset = "0x489B3D0", VA = "0x489B3D0")]
	public void Clear()
	{
	}

	[Token(Token = "0x600116C")]
	[Address(RVA = "0x489B420", Offset = "0x489B420", VA = "0x489B420")]
	public void Clear(out MaskedTextResultHint resultHint)
	{
	}

	[Token(Token = "0x600116D")]
	[Address(RVA = "0x489AB40", Offset = "0x489AB40", VA = "0x489AB40")]
	public int FindAssignedEditPositionFrom(int position, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x489B520", Offset = "0x489B520", VA = "0x489B520")]
	public int FindAssignedEditPositionInRange(int startPosition, int endPosition, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x600116F")]
	[Address(RVA = "0x489B1E0", Offset = "0x489B1E0", VA = "0x489B1E0")]
	public int FindEditPositionFrom(int position, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6001170")]
	[Address(RVA = "0x489B760", Offset = "0x489B760", VA = "0x489B760")]
	public int FindEditPositionInRange(int startPosition, int endPosition, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6001171")]
	[Address(RVA = "0x489B5E0", Offset = "0x489B5E0", VA = "0x489B5E0")]
	private int FindEditPositionInRange(int startPosition, int endPosition, bool direction, byte assignedStatus)
	{
		return default(int);
	}

	[Token(Token = "0x6001172")]
	[Address(RVA = "0x489B8A0", Offset = "0x489B8A0", VA = "0x489B8A0")]
	public int FindNonEditPositionFrom(int position, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6001173")]
	[Address(RVA = "0x489B8F0", Offset = "0x489B8F0", VA = "0x489B8F0")]
	public int FindNonEditPositionInRange(int startPosition, int endPosition, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6001174")]
	[Address(RVA = "0x489B770", Offset = "0x489B770", VA = "0x489B770")]
	private int FindPositionInRange(int startPosition, int endPosition, bool direction, CharType charTypeFlags)
	{
		return default(int);
	}

	[Token(Token = "0x6001175")]
	[Address(RVA = "0x489B900", Offset = "0x489B900", VA = "0x489B900")]
	public int FindUnassignedEditPositionFrom(int position, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6001176")]
	[Address(RVA = "0x489B9E0", Offset = "0x489B9E0", VA = "0x489B9E0")]
	public int FindUnassignedEditPositionInRange(int startPosition, int endPosition, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6001177")]
	[Address(RVA = "0x489BB30", Offset = "0x489BB30", VA = "0x489BB30")]
	public static bool GetOperationResultFromHint(MaskedTextResultHint hint)
	{
		return default(bool);
	}

	[Token(Token = "0x6001178")]
	[Address(RVA = "0x489BB40", Offset = "0x489BB40", VA = "0x489BB40")]
	public bool InsertAt(char input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6001179")]
	[Address(RVA = "0x489BC00", Offset = "0x489BC00", VA = "0x489BC00")]
	public bool InsertAt(char input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x489BBE0", Offset = "0x489BBE0", VA = "0x489BBE0")]
	public bool InsertAt(string input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x600117B")]
	[Address(RVA = "0x489BC60", Offset = "0x489BC60", VA = "0x489BC60")]
	public bool InsertAt(string input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x600117C")]
	[Address(RVA = "0x489BD20", Offset = "0x489BD20", VA = "0x489BD20")]
	private bool InsertAtInt(string input, int position, out int testPosition, out MaskedTextResultHint resultHint, bool testOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x600117D")]
	[Address(RVA = "0x489CCB0", Offset = "0x489CCB0", VA = "0x489CCB0")]
	private static bool IsAscii(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600117E")]
	[Address(RVA = "0x489CCC0", Offset = "0x489CCC0", VA = "0x489CCC0")]
	private static bool IsAciiAlphanumeric(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x489CCE0", Offset = "0x489CCE0", VA = "0x489CCE0")]
	private static bool IsAlphanumeric(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001180")]
	[Address(RVA = "0x489CD50", Offset = "0x489CD50", VA = "0x489CD50")]
	private static bool IsAsciiLetter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001181")]
	[Address(RVA = "0x489CD70", Offset = "0x489CD70", VA = "0x489CD70")]
	public bool IsAvailablePosition(int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6001182")]
	[Address(RVA = "0x489AF20", Offset = "0x489AF20", VA = "0x489AF20")]
	public bool IsEditPosition(int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x48997E0", Offset = "0x48997E0", VA = "0x48997E0")]
	private static bool IsEditPosition(CharDescriptor charDescriptor)
	{
		return default(bool);
	}

	[Token(Token = "0x6001184")]
	[Address(RVA = "0x489CE20", Offset = "0x489CE20", VA = "0x489CE20")]
	private static bool IsLiteralPosition(CharDescriptor charDescriptor)
	{
		return default(bool);
	}

	[Token(Token = "0x6001185")]
	[Address(RVA = "0x4899240", Offset = "0x4899240", VA = "0x4899240")]
	private static bool IsPrintableChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001186")]
	[Address(RVA = "0x489CE40", Offset = "0x489CE40", VA = "0x489CE40")]
	public static bool IsValidInputChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001187")]
	[Address(RVA = "0x489CEA0", Offset = "0x489CEA0", VA = "0x489CEA0")]
	public static bool IsValidMaskChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001188")]
	[Address(RVA = "0x489AD30", Offset = "0x489AD30", VA = "0x489AD30")]
	public static bool IsValidPasswordChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001189")]
	[Address(RVA = "0x489CF00", Offset = "0x489CF00", VA = "0x489CF00")]
	public bool Remove()
	{
		return default(bool);
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x489CF20", Offset = "0x489CF20", VA = "0x489CF20")]
	public bool Remove(out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x489CF70", Offset = "0x489CF70", VA = "0x489CF70")]
	public bool RemoveAt(int position)
	{
		return default(bool);
	}

	[Token(Token = "0x600118C")]
	[Address(RVA = "0x489CFE0", Offset = "0x489CFE0", VA = "0x489CFE0")]
	public bool RemoveAt(int startPosition, int endPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x600118D")]
	[Address(RVA = "0x489D060", Offset = "0x489D060", VA = "0x489D060")]
	public bool RemoveAt(int startPosition, int endPosition, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x600118E")]
	[Address(RVA = "0x489D0E0", Offset = "0x489D0E0", VA = "0x489D0E0")]
	private bool RemoveAtInt(int startPosition, int endPosition, out int testPosition, out MaskedTextResultHint resultHint, bool testOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x600118F")]
	[Address(RVA = "0x489A3B0", Offset = "0x489A3B0", VA = "0x489A3B0")]
	public bool Replace(char input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6001190")]
	[Address(RVA = "0x489D720", Offset = "0x489D720", VA = "0x489D720")]
	public bool Replace(char input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6001191")]
	[Address(RVA = "0x489D900", Offset = "0x489D900", VA = "0x489D900")]
	public bool Replace(char input, int startPosition, int endPosition, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6001192")]
	[Address(RVA = "0x489DDC0", Offset = "0x489DDC0", VA = "0x489DDC0")]
	public bool Replace(string input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6001193")]
	[Address(RVA = "0x489DDE0", Offset = "0x489DDE0", VA = "0x489DDE0")]
	public bool Replace(string input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6001194")]
	[Address(RVA = "0x489DA40", Offset = "0x489DA40", VA = "0x489DA40")]
	public bool Replace(string input, int startPosition, int endPosition, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6001195")]
	[Address(RVA = "0x489B480", Offset = "0x489B480", VA = "0x489B480")]
	private void ResetChar(int testPosition)
	{
	}

	[Token(Token = "0x6001196")]
	[Address(RVA = "0x489D4E0", Offset = "0x489D4E0", VA = "0x489D4E0")]
	private void ResetString(int startPosition, int endPosition)
	{
	}

	[Token(Token = "0x6001197")]
	[Address(RVA = "0x489DEF0", Offset = "0x489DEF0", VA = "0x489DEF0")]
	public bool Set(string input)
	{
		return default(bool);
	}

	[Token(Token = "0x6001198")]
	[Address(RVA = "0x489DF10", Offset = "0x489DF10", VA = "0x489DF10")]
	public bool Set(string input, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6001199")]
	[Address(RVA = "0x489CB30", Offset = "0x489CB30", VA = "0x489CB30")]
	private void SetChar(char input, int position)
	{
	}

	[Token(Token = "0x600119A")]
	[Address(RVA = "0x489E0F0", Offset = "0x489E0F0", VA = "0x489E0F0")]
	private void SetChar(char input, int position, CharDescriptor charDescriptor)
	{
	}

	[Token(Token = "0x600119B")]
	[Address(RVA = "0x489CB90", Offset = "0x489CB90", VA = "0x489CB90")]
	private void SetString(string input, int testPosition)
	{
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x489C390", Offset = "0x489C390", VA = "0x489C390")]
	private bool TestChar(char input, int position, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x600119D")]
	[Address(RVA = "0x489D8A0", Offset = "0x489D8A0", VA = "0x489D8A0")]
	private bool TestEscapeChar(char input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x600119E")]
	[Address(RVA = "0x489E2A0", Offset = "0x489E2A0", VA = "0x489E2A0")]
	private bool TestEscapeChar(char input, int position, CharDescriptor charDex)
	{
		return default(bool);
	}

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x489B230", Offset = "0x489B230", VA = "0x489B230")]
	private bool TestSetChar(char input, int position, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x489B390", Offset = "0x489B390", VA = "0x489B390")]
	private bool TestSetString(string input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x489C1A0", Offset = "0x489C1A0", VA = "0x489C1A0")]
	private bool TestString(string input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x489E470", Offset = "0x489E470", VA = "0x489E470")]
	public string ToDisplayString()
	{
		return null;
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x489E620", Offset = "0x489E620", VA = "0x489E620", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x489EB80", Offset = "0x489EB80", VA = "0x489EB80")]
	public string ToString(bool ignorePasswordChar)
	{
		return null;
	}

	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x489EC70", Offset = "0x489EC70", VA = "0x489EC70")]
	public string ToString(int startPosition, int length)
	{
		return null;
	}

	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x489ED50", Offset = "0x489ED50", VA = "0x489ED50")]
	public string ToString(bool ignorePasswordChar, int startPosition, int length)
	{
		return null;
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x489EE30", Offset = "0x489EE30", VA = "0x489EE30")]
	public string ToString(bool includePrompt, bool includeLiterals)
	{
		return null;
	}

	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x489EE80", Offset = "0x489EE80", VA = "0x489EE80")]
	public string ToString(bool includePrompt, bool includeLiterals, int startPosition, int length)
	{
		return null;
	}

	[Token(Token = "0x60011A9")]
	[Address(RVA = "0x489E700", Offset = "0x489E700", VA = "0x489E700")]
	public string ToString(bool ignorePasswordChar, bool includePrompt, bool includeLiterals, int startPosition, int length)
	{
		return null;
	}

	[Token(Token = "0x60011AA")]
	[Address(RVA = "0x489EEA0", Offset = "0x489EEA0", VA = "0x489EEA0")]
	public bool VerifyChar(char input, int position, out MaskedTextResultHint hint)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x489EF10", Offset = "0x489EF10", VA = "0x489EF10")]
	public bool VerifyEscapeChar(char input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x489EF90", Offset = "0x489EF90", VA = "0x489EF90")]
	public bool VerifyString(string input)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x489EFD0", Offset = "0x489EFD0", VA = "0x489EFD0")]
	public bool VerifyString(string input, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}
}
