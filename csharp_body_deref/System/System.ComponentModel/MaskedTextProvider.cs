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
		[Address(RVA = "0x457A020", Offset = "0x457A020", VA = "0x457A020")]
		public CharDescriptor(int maskPos, CharType charType)
		{
		}

		[Token(Token = "0x60011B0")]
		[Address(RVA = "0x457A040", Offset = "0x457A040", VA = "0x457A040", Slot = "3")]
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
		[Address(RVA = "0x4574700", Offset = "0x4574700", VA = "0x4574700")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003E1")]
	public int AssignedEditPositionCount
	{
		[Token(Token = "0x6001147")]
		[Address(RVA = "0x4574760", Offset = "0x4574760", VA = "0x4574760")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001148")]
		[Address(RVA = "0x4574770", Offset = "0x4574770", VA = "0x4574770")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003E2")]
	public int AvailableEditPositionCount
	{
		[Token(Token = "0x6001149")]
		[Address(RVA = "0x4574780", Offset = "0x4574780", VA = "0x4574780")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003E3")]
	public CultureInfo Culture
	{
		[Token(Token = "0x600114B")]
		[Address(RVA = "0x4575590", Offset = "0x4575590", VA = "0x4575590")]
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
		[Address(RVA = "0x45755A0", Offset = "0x45755A0", VA = "0x45755A0")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x170003E5")]
	public int EditPositionCount
	{
		[Token(Token = "0x600114D")]
		[Address(RVA = "0x4574790", Offset = "0x4574790", VA = "0x4574790")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003E6")]
	public IEnumerator EditPositions
	{
		[Token(Token = "0x600114E")]
		[Address(RVA = "0x45755B0", Offset = "0x45755B0", VA = "0x45755B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E7")]
	public bool IncludeLiterals
	{
		[Token(Token = "0x600114F")]
		[Address(RVA = "0x45753F0", Offset = "0x45753F0", VA = "0x45753F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001150")]
		[Address(RVA = "0x4575450", Offset = "0x4575450", VA = "0x4575450")]
		set
		{
		}
	}

	[Token(Token = "0x170003E8")]
	public bool IncludePrompt
	{
		[Token(Token = "0x6001151")]
		[Address(RVA = "0x45754C0", Offset = "0x45754C0", VA = "0x45754C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001152")]
		[Address(RVA = "0x4575520", Offset = "0x4575520", VA = "0x4575520")]
		set
		{
		}
	}

	[Token(Token = "0x170003E9")]
	public bool AsciiOnly
	{
		[Token(Token = "0x6001153")]
		[Address(RVA = "0x4575100", Offset = "0x4575100", VA = "0x4575100")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003EA")]
	public bool IsPassword
	{
		[Token(Token = "0x6001154")]
		[Address(RVA = "0x4575900", Offset = "0x4575900", VA = "0x4575900")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001155")]
		[Address(RVA = "0x4575910", Offset = "0x4575910", VA = "0x4575910")]
		set
		{
		}
	}

	[Token(Token = "0x170003EB")]
	public static int InvalidIndex
	{
		[Token(Token = "0x6001156")]
		[Address(RVA = "0x4575980", Offset = "0x4575980", VA = "0x4575980")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003EC")]
	public int LastAssignedPosition
	{
		[Token(Token = "0x6001157")]
		[Address(RVA = "0x4575990", Offset = "0x4575990", VA = "0x4575990")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003ED")]
	public int Length
	{
		[Token(Token = "0x6001158")]
		[Address(RVA = "0x4575AA0", Offset = "0x4575AA0", VA = "0x4575AA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003EE")]
	public string Mask
	{
		[Token(Token = "0x6001159")]
		[Address(RVA = "0x4575AC0", Offset = "0x4575AC0", VA = "0x4575AC0")]
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
		[Address(RVA = "0x4575AD0", Offset = "0x4575AD0", VA = "0x4575AD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003F0")]
	public bool MaskFull
	{
		[Token(Token = "0x600115B")]
		[Address(RVA = "0x4575AE0", Offset = "0x4575AE0", VA = "0x4575AE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003F1")]
	public char PasswordChar
	{
		[Token(Token = "0x600115C")]
		[Address(RVA = "0x4575AF0", Offset = "0x4575AF0", VA = "0x4575AF0")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x600115D")]
		[Address(RVA = "0x4575B00", Offset = "0x4575B00", VA = "0x4575B00")]
		set
		{
		}
	}

	[Token(Token = "0x170003F2")]
	public char PromptChar
	{
		[Token(Token = "0x600115E")]
		[Address(RVA = "0x4575C80", Offset = "0x4575C80", VA = "0x4575C80")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x600115F")]
		[Address(RVA = "0x4575C90", Offset = "0x4575C90", VA = "0x4575C90")]
		set
		{
		}
	}

	[Token(Token = "0x170003F3")]
	public bool ResetOnPrompt
	{
		[Token(Token = "0x6001160")]
		[Address(RVA = "0x45752D0", Offset = "0x45752D0", VA = "0x45752D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001161")]
		[Address(RVA = "0x4575160", Offset = "0x4575160", VA = "0x4575160")]
		set
		{
		}
	}

	[Token(Token = "0x170003F4")]
	public bool ResetOnSpace
	{
		[Token(Token = "0x6001162")]
		[Address(RVA = "0x4575330", Offset = "0x4575330", VA = "0x4575330")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001163")]
		[Address(RVA = "0x45751D0", Offset = "0x45751D0", VA = "0x45751D0")]
		set
		{
		}
	}

	[Token(Token = "0x170003F5")]
	public bool SkipLiterals
	{
		[Token(Token = "0x6001164")]
		[Address(RVA = "0x4575390", Offset = "0x4575390", VA = "0x4575390")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001165")]
		[Address(RVA = "0x4575240", Offset = "0x4575240", VA = "0x4575240")]
		set
		{
		}
	}

	[Token(Token = "0x170003F6")]
	public char this[int index]
	{
		[Token(Token = "0x6001166")]
		[Address(RVA = "0x4575ED0", Offset = "0x4575ED0", VA = "0x4575ED0")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x600113E")]
	[Address(RVA = "0x4573BE0", Offset = "0x4573BE0", VA = "0x4573BE0")]
	public MaskedTextProvider(string mask)
	{
	}

	[Token(Token = "0x600113F")]
	[Address(RVA = "0x4574070", Offset = "0x4574070", VA = "0x4574070")]
	public MaskedTextProvider(string mask, bool restrictToAscii)
	{
	}

	[Token(Token = "0x6001140")]
	[Address(RVA = "0x45740A0", Offset = "0x45740A0", VA = "0x45740A0")]
	public MaskedTextProvider(string mask, CultureInfo culture)
	{
	}

	[Token(Token = "0x6001141")]
	[Address(RVA = "0x45740D0", Offset = "0x45740D0", VA = "0x45740D0")]
	public MaskedTextProvider(string mask, CultureInfo culture, bool restrictToAscii)
	{
	}

	[Token(Token = "0x6001142")]
	[Address(RVA = "0x45740F0", Offset = "0x45740F0", VA = "0x45740F0")]
	public MaskedTextProvider(string mask, char passwordChar, bool allowPromptAsInput)
	{
	}

	[Token(Token = "0x6001143")]
	[Address(RVA = "0x4574110", Offset = "0x4574110", VA = "0x4574110")]
	public MaskedTextProvider(string mask, CultureInfo culture, char passwordChar, bool allowPromptAsInput)
	{
	}

	[Token(Token = "0x6001144")]
	[Address(RVA = "0x4573C10", Offset = "0x4573C10", VA = "0x4573C10")]
	public MaskedTextProvider(string mask, CultureInfo culture, bool allowPromptAsInput, char promptChar, char passwordChar, bool restrictToAscii)
	{
	}

	[Token(Token = "0x6001145")]
	[Address(RVA = "0x45741D0", Offset = "0x45741D0", VA = "0x45741D0")]
	private void Initialize()
	{
	}

	[Token(Token = "0x600114A")]
	[Address(RVA = "0x45747A0", Offset = "0x45747A0", VA = "0x45747A0", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6001167")]
	[Address(RVA = "0x4575F80", Offset = "0x4575F80", VA = "0x4575F80")]
	public bool Add(char input)
	{
		return default(bool);
	}

	[Token(Token = "0x6001168")]
	[Address(RVA = "0x4575FA0", Offset = "0x4575FA0", VA = "0x4575FA0")]
	public bool Add(char input, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6001169")]
	[Address(RVA = "0x45761C0", Offset = "0x45761C0", VA = "0x45761C0")]
	public bool Add(string input)
	{
		return default(bool);
	}

	[Token(Token = "0x600116A")]
	[Address(RVA = "0x45761E0", Offset = "0x45761E0", VA = "0x45761E0")]
	public bool Add(string input, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x600116B")]
	[Address(RVA = "0x45762D0", Offset = "0x45762D0", VA = "0x45762D0")]
	public void Clear()
	{
	}

	[Token(Token = "0x600116C")]
	[Address(RVA = "0x4576320", Offset = "0x4576320", VA = "0x4576320")]
	public void Clear(out MaskedTextResultHint resultHint)
	{
	}

	[Token(Token = "0x600116D")]
	[Address(RVA = "0x4575A40", Offset = "0x4575A40", VA = "0x4575A40")]
	public int FindAssignedEditPositionFrom(int position, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x4576420", Offset = "0x4576420", VA = "0x4576420")]
	public int FindAssignedEditPositionInRange(int startPosition, int endPosition, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x600116F")]
	[Address(RVA = "0x45760E0", Offset = "0x45760E0", VA = "0x45760E0")]
	public int FindEditPositionFrom(int position, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6001170")]
	[Address(RVA = "0x4576660", Offset = "0x4576660", VA = "0x4576660")]
	public int FindEditPositionInRange(int startPosition, int endPosition, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6001171")]
	[Address(RVA = "0x45764E0", Offset = "0x45764E0", VA = "0x45764E0")]
	private int FindEditPositionInRange(int startPosition, int endPosition, bool direction, byte assignedStatus)
	{
		return default(int);
	}

	[Token(Token = "0x6001172")]
	[Address(RVA = "0x45767A0", Offset = "0x45767A0", VA = "0x45767A0")]
	public int FindNonEditPositionFrom(int position, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6001173")]
	[Address(RVA = "0x45767F0", Offset = "0x45767F0", VA = "0x45767F0")]
	public int FindNonEditPositionInRange(int startPosition, int endPosition, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6001174")]
	[Address(RVA = "0x4576670", Offset = "0x4576670", VA = "0x4576670")]
	private int FindPositionInRange(int startPosition, int endPosition, bool direction, CharType charTypeFlags)
	{
		return default(int);
	}

	[Token(Token = "0x6001175")]
	[Address(RVA = "0x4576800", Offset = "0x4576800", VA = "0x4576800")]
	public int FindUnassignedEditPositionFrom(int position, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6001176")]
	[Address(RVA = "0x45768E0", Offset = "0x45768E0", VA = "0x45768E0")]
	public int FindUnassignedEditPositionInRange(int startPosition, int endPosition, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6001177")]
	[Address(RVA = "0x4576A30", Offset = "0x4576A30", VA = "0x4576A30")]
	public static bool GetOperationResultFromHint(MaskedTextResultHint hint)
	{
		return default(bool);
	}

	[Token(Token = "0x6001178")]
	[Address(RVA = "0x4576A40", Offset = "0x4576A40", VA = "0x4576A40")]
	public bool InsertAt(char input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6001179")]
	[Address(RVA = "0x4576B00", Offset = "0x4576B00", VA = "0x4576B00")]
	public bool InsertAt(char input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x4576AE0", Offset = "0x4576AE0", VA = "0x4576AE0")]
	public bool InsertAt(string input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x600117B")]
	[Address(RVA = "0x4576B60", Offset = "0x4576B60", VA = "0x4576B60")]
	public bool InsertAt(string input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x600117C")]
	[Address(RVA = "0x4576C20", Offset = "0x4576C20", VA = "0x4576C20")]
	private bool InsertAtInt(string input, int position, out int testPosition, out MaskedTextResultHint resultHint, bool testOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x600117D")]
	[Address(RVA = "0x4577BB0", Offset = "0x4577BB0", VA = "0x4577BB0")]
	private static bool IsAscii(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600117E")]
	[Address(RVA = "0x4577BC0", Offset = "0x4577BC0", VA = "0x4577BC0")]
	private static bool IsAciiAlphanumeric(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x4577BE0", Offset = "0x4577BE0", VA = "0x4577BE0")]
	private static bool IsAlphanumeric(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001180")]
	[Address(RVA = "0x4577C50", Offset = "0x4577C50", VA = "0x4577C50")]
	private static bool IsAsciiLetter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001181")]
	[Address(RVA = "0x4577C70", Offset = "0x4577C70", VA = "0x4577C70")]
	public bool IsAvailablePosition(int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6001182")]
	[Address(RVA = "0x4575E20", Offset = "0x4575E20", VA = "0x4575E20")]
	public bool IsEditPosition(int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x45746E0", Offset = "0x45746E0", VA = "0x45746E0")]
	private static bool IsEditPosition(CharDescriptor charDescriptor)
	{
		return default(bool);
	}

	[Token(Token = "0x6001184")]
	[Address(RVA = "0x4577D20", Offset = "0x4577D20", VA = "0x4577D20")]
	private static bool IsLiteralPosition(CharDescriptor charDescriptor)
	{
		return default(bool);
	}

	[Token(Token = "0x6001185")]
	[Address(RVA = "0x4574140", Offset = "0x4574140", VA = "0x4574140")]
	private static bool IsPrintableChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001186")]
	[Address(RVA = "0x4577D40", Offset = "0x4577D40", VA = "0x4577D40")]
	public static bool IsValidInputChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001187")]
	[Address(RVA = "0x4577DA0", Offset = "0x4577DA0", VA = "0x4577DA0")]
	public static bool IsValidMaskChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001188")]
	[Address(RVA = "0x4575C30", Offset = "0x4575C30", VA = "0x4575C30")]
	public static bool IsValidPasswordChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001189")]
	[Address(RVA = "0x4577E00", Offset = "0x4577E00", VA = "0x4577E00")]
	public bool Remove()
	{
		return default(bool);
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x4577E20", Offset = "0x4577E20", VA = "0x4577E20")]
	public bool Remove(out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x4577E70", Offset = "0x4577E70", VA = "0x4577E70")]
	public bool RemoveAt(int position)
	{
		return default(bool);
	}

	[Token(Token = "0x600118C")]
	[Address(RVA = "0x4577EE0", Offset = "0x4577EE0", VA = "0x4577EE0")]
	public bool RemoveAt(int startPosition, int endPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x600118D")]
	[Address(RVA = "0x4577F60", Offset = "0x4577F60", VA = "0x4577F60")]
	public bool RemoveAt(int startPosition, int endPosition, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x600118E")]
	[Address(RVA = "0x4577FE0", Offset = "0x4577FE0", VA = "0x4577FE0")]
	private bool RemoveAtInt(int startPosition, int endPosition, out int testPosition, out MaskedTextResultHint resultHint, bool testOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x600118F")]
	[Address(RVA = "0x45752B0", Offset = "0x45752B0", VA = "0x45752B0")]
	public bool Replace(char input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6001190")]
	[Address(RVA = "0x4578620", Offset = "0x4578620", VA = "0x4578620")]
	public bool Replace(char input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6001191")]
	[Address(RVA = "0x4578800", Offset = "0x4578800", VA = "0x4578800")]
	public bool Replace(char input, int startPosition, int endPosition, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6001192")]
	[Address(RVA = "0x4578CC0", Offset = "0x4578CC0", VA = "0x4578CC0")]
	public bool Replace(string input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6001193")]
	[Address(RVA = "0x4578CE0", Offset = "0x4578CE0", VA = "0x4578CE0")]
	public bool Replace(string input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6001194")]
	[Address(RVA = "0x4578940", Offset = "0x4578940", VA = "0x4578940")]
	public bool Replace(string input, int startPosition, int endPosition, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6001195")]
	[Address(RVA = "0x4576380", Offset = "0x4576380", VA = "0x4576380")]
	private void ResetChar(int testPosition)
	{
	}

	[Token(Token = "0x6001196")]
	[Address(RVA = "0x45783E0", Offset = "0x45783E0", VA = "0x45783E0")]
	private void ResetString(int startPosition, int endPosition)
	{
	}

	[Token(Token = "0x6001197")]
	[Address(RVA = "0x4578DF0", Offset = "0x4578DF0", VA = "0x4578DF0")]
	public bool Set(string input)
	{
		return default(bool);
	}

	[Token(Token = "0x6001198")]
	[Address(RVA = "0x4578E10", Offset = "0x4578E10", VA = "0x4578E10")]
	public bool Set(string input, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6001199")]
	[Address(RVA = "0x4577A30", Offset = "0x4577A30", VA = "0x4577A30")]
	private void SetChar(char input, int position)
	{
	}

	[Token(Token = "0x600119A")]
	[Address(RVA = "0x4578FF0", Offset = "0x4578FF0", VA = "0x4578FF0")]
	private void SetChar(char input, int position, CharDescriptor charDescriptor)
	{
	}

	[Token(Token = "0x600119B")]
	[Address(RVA = "0x4577A90", Offset = "0x4577A90", VA = "0x4577A90")]
	private void SetString(string input, int testPosition)
	{
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x4577290", Offset = "0x4577290", VA = "0x4577290")]
	private bool TestChar(char input, int position, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x600119D")]
	[Address(RVA = "0x45787A0", Offset = "0x45787A0", VA = "0x45787A0")]
	private bool TestEscapeChar(char input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x600119E")]
	[Address(RVA = "0x45791A0", Offset = "0x45791A0", VA = "0x45791A0")]
	private bool TestEscapeChar(char input, int position, CharDescriptor charDex)
	{
		return default(bool);
	}

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x4576130", Offset = "0x4576130", VA = "0x4576130")]
	private bool TestSetChar(char input, int position, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x4576290", Offset = "0x4576290", VA = "0x4576290")]
	private bool TestSetString(string input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x45770A0", Offset = "0x45770A0", VA = "0x45770A0")]
	private bool TestString(string input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x4579370", Offset = "0x4579370", VA = "0x4579370")]
	public string ToDisplayString()
	{
		return null;
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x4579520", Offset = "0x4579520", VA = "0x4579520", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x4579A80", Offset = "0x4579A80", VA = "0x4579A80")]
	public string ToString(bool ignorePasswordChar)
	{
		return null;
	}

	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x4579B70", Offset = "0x4579B70", VA = "0x4579B70")]
	public string ToString(int startPosition, int length)
	{
		return null;
	}

	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x4579C50", Offset = "0x4579C50", VA = "0x4579C50")]
	public string ToString(bool ignorePasswordChar, int startPosition, int length)
	{
		return null;
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x4579D30", Offset = "0x4579D30", VA = "0x4579D30")]
	public string ToString(bool includePrompt, bool includeLiterals)
	{
		return null;
	}

	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x4579D80", Offset = "0x4579D80", VA = "0x4579D80")]
	public string ToString(bool includePrompt, bool includeLiterals, int startPosition, int length)
	{
		return null;
	}

	[Token(Token = "0x60011A9")]
	[Address(RVA = "0x4579600", Offset = "0x4579600", VA = "0x4579600")]
	public string ToString(bool ignorePasswordChar, bool includePrompt, bool includeLiterals, int startPosition, int length)
	{
		return null;
	}

	[Token(Token = "0x60011AA")]
	[Address(RVA = "0x4579DA0", Offset = "0x4579DA0", VA = "0x4579DA0")]
	public bool VerifyChar(char input, int position, out MaskedTextResultHint hint)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x4579E10", Offset = "0x4579E10", VA = "0x4579E10")]
	public bool VerifyEscapeChar(char input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x4579E90", Offset = "0x4579E90", VA = "0x4579E90")]
	public bool VerifyString(string input)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x4579ED0", Offset = "0x4579ED0", VA = "0x4579ED0")]
	public bool VerifyString(string input, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}
}
