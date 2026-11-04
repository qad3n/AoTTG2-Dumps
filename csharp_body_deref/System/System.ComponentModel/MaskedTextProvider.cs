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

[Token(Token = "0x20001C8")]
public class MaskedTextProvider : ICloneable
{
	[Token(Token = "0x20001C9")]
	private enum CaseConversion
	{
		[Token(Token = "0x40006FA")]
		None,
		[Token(Token = "0x40006FB")]
		ToLower,
		[Token(Token = "0x40006FC")]
		ToUpper
	}

	[Token(Token = "0x20001CA")]
	[Flags]
	private enum CharType
	{
		[Token(Token = "0x40006FE")]
		EditOptional = 1,
		[Token(Token = "0x40006FF")]
		EditRequired = 2,
		[Token(Token = "0x4000700")]
		Separator = 4,
		[Token(Token = "0x4000701")]
		Literal = 8,
		[Token(Token = "0x4000702")]
		Modifier = 0x10
	}

	[Token(Token = "0x20001CB")]
	private class CharDescriptor
	{
		[Token(Token = "0x4000703")]
		[FieldOffset(Offset = "0x10")]
		public int MaskPosition;

		[Token(Token = "0x4000704")]
		[FieldOffset(Offset = "0x14")]
		public CaseConversion CaseConversion;

		[Token(Token = "0x4000705")]
		[FieldOffset(Offset = "0x18")]
		public CharType CharType;

		[Token(Token = "0x4000706")]
		[FieldOffset(Offset = "0x1C")]
		public bool IsAssigned;

		[Token(Token = "0x6000BF7")]
		[Address(RVA = "0x2893AA0", Offset = "0x28920A0", VA = "0x182893AA0")]
		public CharDescriptor(int maskPos, CharType charType)
		{
		}

		[Token(Token = "0x6000BF8")]
		[Address(RVA = "0x2893850", Offset = "0x2891E50", VA = "0x182893850", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x40006DC")]
	private const char SPACE_CHAR = ' ';

	[Token(Token = "0x40006DD")]
	private const char DEFAULT_PROMPT_CHAR = '_';

	[Token(Token = "0x40006DE")]
	private const char NULL_PASSWORD_CHAR = '\0';

	[Token(Token = "0x40006DF")]
	private const bool DEFAULT_ALLOW_PROMPT = true;

	[Token(Token = "0x40006E0")]
	private const int INVALID_INDEX = -1;

	[Token(Token = "0x40006E1")]
	private const byte EDIT_ANY = 0;

	[Token(Token = "0x40006E2")]
	private const byte EDIT_UNASSIGNED = 1;

	[Token(Token = "0x40006E3")]
	private const byte EDIT_ASSIGNED = 2;

	[Token(Token = "0x40006E4")]
	private const bool FORWARD = true;

	[Token(Token = "0x40006E5")]
	private const bool BACKWARD = false;

	[Token(Token = "0x40006E6")]
	[FieldOffset(Offset = "0x0")]
	private static int s_ASCII_ONLY;

	[Token(Token = "0x40006E7")]
	[FieldOffset(Offset = "0x4")]
	private static int s_ALLOW_PROMPT_AS_INPUT;

	[Token(Token = "0x40006E8")]
	[FieldOffset(Offset = "0x8")]
	private static int s_INCLUDE_PROMPT;

	[Token(Token = "0x40006E9")]
	[FieldOffset(Offset = "0xC")]
	private static int s_INCLUDE_LITERALS;

	[Token(Token = "0x40006EA")]
	[FieldOffset(Offset = "0x10")]
	private static int s_RESET_ON_PROMPT;

	[Token(Token = "0x40006EB")]
	[FieldOffset(Offset = "0x14")]
	private static int s_RESET_ON_LITERALS;

	[Token(Token = "0x40006EC")]
	[FieldOffset(Offset = "0x18")]
	private static int s_SKIP_SPACE;

	[Token(Token = "0x40006ED")]
	[FieldOffset(Offset = "0x20")]
	private static Type s_maskTextProviderType;

	[Token(Token = "0x40006EE")]
	[FieldOffset(Offset = "0x10")]
	private BitVector32 _flagState;

	[Token(Token = "0x40006EF")]
	[FieldOffset(Offset = "0x18")]
	private StringBuilder _testString;

	[Token(Token = "0x40006F0")]
	[FieldOffset(Offset = "0x20")]
	private int _requiredCharCount;

	[Token(Token = "0x40006F1")]
	[FieldOffset(Offset = "0x24")]
	private int _requiredEditChars;

	[Token(Token = "0x40006F2")]
	[FieldOffset(Offset = "0x28")]
	private int _optionalEditChars;

	[Token(Token = "0x40006F3")]
	[FieldOffset(Offset = "0x2C")]
	private char _passwordChar;

	[Token(Token = "0x40006F4")]
	[FieldOffset(Offset = "0x2E")]
	private char _promptChar;

	[Token(Token = "0x40006F5")]
	[FieldOffset(Offset = "0x30")]
	private List<CharDescriptor> _stringDescriptor;

	[Token(Token = "0x1700024F")]
	public bool AllowPromptAsInput
	{
		[Token(Token = "0x6000B8E")]
		[Address(RVA = "0x28A8B20", Offset = "0x28A7120", VA = "0x1828A8B20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000250")]
	public int AssignedEditPositionCount
	{
		[Token(Token = "0x6000B8F")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B90")]
		[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000251")]
	public int AvailableEditPositionCount
	{
		[Token(Token = "0x6000B91")]
		[Address(RVA = "0x28A8BE0", Offset = "0x28A71E0", VA = "0x1828A8BE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000252")]
	public CultureInfo Culture
	{
		[Token(Token = "0x6000B93")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000253")]
	public static char DefaultPasswordChar
	{
		[Token(Token = "0x6000B94")]
		[Address(RVA = "0x27A0540", Offset = "0x279EB40", VA = "0x1827A0540")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000254")]
	public int EditPositionCount
	{
		[Token(Token = "0x6000B95")]
		[Address(RVA = "0x28A8BF0", Offset = "0x28A71F0", VA = "0x1828A8BF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000255")]
	public IEnumerator EditPositions
	{
		[Token(Token = "0x6000B96")]
		[Address(RVA = "0x28A8C00", Offset = "0x28A7200", VA = "0x1828A8C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000256")]
	public bool IncludeLiterals
	{
		[Token(Token = "0x6000B97")]
		[Address(RVA = "0x28A8DD0", Offset = "0x28A73D0", VA = "0x1828A8DD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B98")]
		[Address(RVA = "0x28A9200", Offset = "0x28A7800", VA = "0x1828A9200")]
		set
		{
		}
	}

	[Token(Token = "0x17000257")]
	public bool IncludePrompt
	{
		[Token(Token = "0x6000B99")]
		[Address(RVA = "0x28A8E30", Offset = "0x28A7430", VA = "0x1828A8E30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B9A")]
		[Address(RVA = "0x28A9270", Offset = "0x28A7870", VA = "0x1828A9270")]
		set
		{
		}
	}

	[Token(Token = "0x17000258")]
	public bool AsciiOnly
	{
		[Token(Token = "0x6000B9B")]
		[Address(RVA = "0x28A8B80", Offset = "0x28A7180", VA = "0x1828A8B80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000259")]
	public bool IsPassword
	{
		[Token(Token = "0x6000B9C")]
		[Address(RVA = "0x28A8E90", Offset = "0x28A7490", VA = "0x1828A8E90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B9D")]
		[Address(RVA = "0x28A92E0", Offset = "0x28A78E0", VA = "0x1828A92E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700025A")]
	public static int InvalidIndex
	{
		[Token(Token = "0x6000B9E")]
		[Address(RVA = "0x1A5F1E0", Offset = "0x1A5D7E0", VA = "0x181A5F1E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700025B")]
	public int LastAssignedPosition
	{
		[Token(Token = "0x6000B9F")]
		[Address(RVA = "0x28A8F70", Offset = "0x28A7570", VA = "0x1828A8F70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700025C")]
	public int Length
	{
		[Token(Token = "0x6000BA0")]
		[Address(RVA = "0x28A9080", Offset = "0x28A7680", VA = "0x1828A9080")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700025D")]
	public string Mask
	{
		[Token(Token = "0x6000BA1")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025E")]
	public bool MaskCompleted
	{
		[Token(Token = "0x6000BA2")]
		[Address(RVA = "0x28A90A0", Offset = "0x28A76A0", VA = "0x1828A90A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700025F")]
	public bool MaskFull
	{
		[Token(Token = "0x6000BA3")]
		[Address(RVA = "0x28A90B0", Offset = "0x28A76B0", VA = "0x1828A90B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000260")]
	public char PasswordChar
	{
		[Token(Token = "0x6000BA4")]
		[Address(RVA = "0x28A90C0", Offset = "0x28A76C0", VA = "0x1828A90C0")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x6000BA5")]
		[Address(RVA = "0x28A9360", Offset = "0x28A7960", VA = "0x1828A9360")]
		set
		{
		}
	}

	[Token(Token = "0x17000261")]
	public char PromptChar
	{
		[Token(Token = "0x6000BA6")]
		[Address(RVA = "0x28A90D0", Offset = "0x28A76D0", VA = "0x1828A90D0")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x6000BA7")]
		[Address(RVA = "0x28A94A0", Offset = "0x28A7AA0", VA = "0x1828A94A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000262")]
	public bool ResetOnPrompt
	{
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x28A90E0", Offset = "0x28A76E0", VA = "0x1828A90E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BA9")]
		[Address(RVA = "0x28A9650", Offset = "0x28A7C50", VA = "0x1828A9650")]
		set
		{
		}
	}

	[Token(Token = "0x17000263")]
	public bool ResetOnSpace
	{
		[Token(Token = "0x6000BAA")]
		[Address(RVA = "0x28A9140", Offset = "0x28A7740", VA = "0x1828A9140")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BAB")]
		[Address(RVA = "0x28A96C0", Offset = "0x28A7CC0", VA = "0x1828A96C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000264")]
	public bool SkipLiterals
	{
		[Token(Token = "0x6000BAC")]
		[Address(RVA = "0x28A91A0", Offset = "0x28A77A0", VA = "0x1828A91A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BAD")]
		[Address(RVA = "0x28A9730", Offset = "0x28A7D30", VA = "0x1828A9730")]
		set
		{
		}
	}

	[Token(Token = "0x17000265")]
	public char this[int index]
	{
		[Token(Token = "0x6000BAE")]
		[Address(RVA = "0x28A8EA0", Offset = "0x28A74A0", VA = "0x1828A8EA0")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x28A8AF0", Offset = "0x28A70F0", VA = "0x1828A8AF0")]
	public MaskedTextProvider(string mask)
	{
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x28A8A60", Offset = "0x28A7060", VA = "0x1828A8A60")]
	public MaskedTextProvider(string mask, bool restrictToAscii)
	{
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x28A85D0", Offset = "0x28A6BD0", VA = "0x1828A85D0")]
	public MaskedTextProvider(string mask, CultureInfo culture)
	{
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x28A8600", Offset = "0x28A6C00", VA = "0x1828A8600")]
	public MaskedTextProvider(string mask, CultureInfo culture, bool restrictToAscii)
	{
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x28A8A90", Offset = "0x28A7090", VA = "0x1828A8A90")]
	public MaskedTextProvider(string mask, char passwordChar, bool allowPromptAsInput)
	{
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x28A8AC0", Offset = "0x28A70C0", VA = "0x1828A8AC0")]
	public MaskedTextProvider(string mask, CultureInfo culture, char passwordChar, bool allowPromptAsInput)
	{
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x28A8630", Offset = "0x28A6C30", VA = "0x1828A8630")]
	public MaskedTextProvider(string mask, CultureInfo culture, bool allowPromptAsInput, char promptChar, char passwordChar, bool restrictToAscii)
	{
	}

	[Token(Token = "0x6000B8D")]
	[Address(RVA = "0x28A3EC0", Offset = "0x28A24C0", VA = "0x1828A3EC0")]
	private void Initialize()
	{
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x28A2DC0", Offset = "0x28A13C0", VA = "0x1828A2DC0", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x28A2C70", Offset = "0x28A1270", VA = "0x1828A2C70")]
	public bool Add(char input)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x28A2AC0", Offset = "0x28A10C0", VA = "0x1828A2AC0")]
	public bool Add(char input, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x28A29E0", Offset = "0x28A0FE0", VA = "0x1828A29E0")]
	public bool Add(string input)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x28A28F0", Offset = "0x28A0EF0", VA = "0x1828A28F0")]
	public bool Add(string input, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x28A2DA0", Offset = "0x28A13A0", VA = "0x1828A2DA0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x28A2CA0", Offset = "0x28A12A0", VA = "0x1828A2CA0")]
	public void Clear(out MaskedTextResultHint resultHint)
	{
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x28A3830", Offset = "0x28A1E30", VA = "0x1828A3830")]
	public int FindAssignedEditPositionFrom(int position, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x28A38B0", Offset = "0x28A1EB0", VA = "0x1828A38B0")]
	public int FindAssignedEditPositionInRange(int startPosition, int endPosition, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x28A3990", Offset = "0x28A1F90", VA = "0x1828A3990")]
	public int FindEditPositionFrom(int position, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x28A3A00", Offset = "0x28A2000", VA = "0x1828A3A00")]
	public int FindEditPositionInRange(int startPosition, int endPosition, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x28A3A20", Offset = "0x28A2020", VA = "0x1828A3A20")]
	private int FindEditPositionInRange(int startPosition, int endPosition, bool direction, byte assignedStatus)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x28A3B30", Offset = "0x28A2130", VA = "0x1828A3B30")]
	public int FindNonEditPositionFrom(int position, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x28A3BA0", Offset = "0x28A21A0", VA = "0x1828A3BA0")]
	public int FindNonEditPositionInRange(int startPosition, int endPosition, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x28A3BC0", Offset = "0x28A21C0", VA = "0x1828A3BC0")]
	private int FindPositionInRange(int startPosition, int endPosition, bool direction, CharType charTypeFlags)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x28A3CB0", Offset = "0x28A22B0", VA = "0x1828A3CB0")]
	public int FindUnassignedEditPositionFrom(int position, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x28A3DB0", Offset = "0x28A23B0", VA = "0x1828A3DB0")]
	public int FindUnassignedEditPositionInRange(int startPosition, int endPosition, bool direction)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x28A3EB0", Offset = "0x28A24B0", VA = "0x1828A3EB0")]
	public static bool GetOperationResultFromHint(MaskedTextResultHint hint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x28A4920", Offset = "0x28A2F20", VA = "0x1828A4920")]
	public bool InsertAt(char input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x28A4A50", Offset = "0x28A3050", VA = "0x1828A4A50")]
	public bool InsertAt(char input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x28A4C30", Offset = "0x28A3230", VA = "0x1828A4C30")]
	public bool InsertAt(string input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x28A4B50", Offset = "0x28A3150", VA = "0x1828A4B50")]
	public bool InsertAt(string input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x28A4360", Offset = "0x28A2960", VA = "0x1828A4360")]
	private bool InsertAtInt(string input, int position, out int testPosition, out MaskedTextResultHint resultHint, bool testOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x28A4DB0", Offset = "0x28A33B0", VA = "0x1828A4DB0")]
	private static bool IsAscii(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x28A4D20", Offset = "0x28A3320", VA = "0x1828A4D20")]
	private static bool IsAciiAlphanumeric(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x28A4D50", Offset = "0x28A3350", VA = "0x1828A4D50")]
	private static bool IsAlphanumeric(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x1AD98C0", Offset = "0x1AD7EC0", VA = "0x181AD98C0")]
	private static bool IsAsciiLetter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x28A4DD0", Offset = "0x28A33D0", VA = "0x1828A4DD0")]
	public bool IsAvailablePosition(int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x28A4EC0", Offset = "0x28A34C0", VA = "0x1828A4EC0")]
	public bool IsEditPosition(int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x28A4E90", Offset = "0x28A3490", VA = "0x1828A4E90")]
	private static bool IsEditPosition(CharDescriptor charDescriptor)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x28A4F80", Offset = "0x28A3580", VA = "0x1828A4F80")]
	private static bool IsLiteralPosition(CharDescriptor charDescriptor)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x28A4FB0", Offset = "0x28A35B0", VA = "0x1828A4FB0")]
	private static bool IsPrintableChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x28A5040", Offset = "0x28A3640", VA = "0x1828A5040")]
	public static bool IsValidInputChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x28A5090", Offset = "0x28A3690", VA = "0x1828A5090")]
	public static bool IsValidMaskChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x28A50E0", Offset = "0x28A36E0", VA = "0x1828A50E0")]
	public static bool IsValidPasswordChar(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x28A5A00", Offset = "0x28A4000", VA = "0x1828A5A00")]
	public bool Remove()
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x28A59A0", Offset = "0x28A3FA0", VA = "0x1828A59A0")]
	public bool Remove(out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x28A5880", Offset = "0x28A3E80", VA = "0x1828A5880")]
	public bool RemoveAt(int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x28A5900", Offset = "0x28A3F00", VA = "0x1828A5900")]
	public bool RemoveAt(int startPosition, int endPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x28A57F0", Offset = "0x28A3DF0", VA = "0x1828A57F0")]
	public bool RemoveAt(int startPosition, int endPosition, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x28A5140", Offset = "0x28A3740", VA = "0x1828A5140")]
	private bool RemoveAtInt(int startPosition, int endPosition, out int testPosition, out MaskedTextResultHint resultHint, bool testOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x28A6270", Offset = "0x28A4870", VA = "0x1828A6270")]
	public bool Replace(char input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x28A5FD0", Offset = "0x28A45D0", VA = "0x1828A5FD0")]
	public bool Replace(char input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x28A6390", Offset = "0x28A4990", VA = "0x1828A6390")]
	public bool Replace(char input, int startPosition, int endPosition, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x28A6180", Offset = "0x28A4780", VA = "0x1828A6180")]
	public bool Replace(string input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x28A62A0", Offset = "0x28A48A0", VA = "0x1828A62A0")]
	public bool Replace(string input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x28A5A30", Offset = "0x28A4030", VA = "0x1828A5A30")]
	public bool Replace(string input, int startPosition, int endPosition, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x28A64F0", Offset = "0x28A4AF0", VA = "0x1828A64F0")]
	private void ResetChar(int testPosition)
	{
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x28A65A0", Offset = "0x28A4BA0", VA = "0x1828A65A0")]
	private void ResetString(int startPosition, int endPosition)
	{
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x28A6CF0", Offset = "0x28A52F0", VA = "0x1828A6CF0")]
	public bool Set(string input)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x28A6D20", Offset = "0x28A5320", VA = "0x1828A6D20")]
	public bool Set(string input, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x28A6B70", Offset = "0x28A5170", VA = "0x1828A6B70")]
	private void SetChar(char input, int position)
	{
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x28A69D0", Offset = "0x28A4FD0", VA = "0x1828A69D0")]
	private void SetChar(char input, int position, CharDescriptor charDescriptor)
	{
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x28A6BF0", Offset = "0x28A51F0", VA = "0x1828A6BF0")]
	private void SetString(string input, int testPosition)
	{
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x28A6F70", Offset = "0x28A5570", VA = "0x1828A6F70")]
	private bool TestChar(char input, int position, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x28A7680", Offset = "0x28A5C80", VA = "0x1828A7680")]
	private bool TestEscapeChar(char input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x28A74D0", Offset = "0x28A5AD0", VA = "0x1828A74D0")]
	private bool TestEscapeChar(char input, int position, CharDescriptor charDex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x28A7700", Offset = "0x28A5D00", VA = "0x1828A7700")]
	private bool TestSetChar(char input, int position, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x28A7760", Offset = "0x28A5D60", VA = "0x1828A7760")]
	private bool TestSetString(string input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x28A77D0", Offset = "0x28A5DD0", VA = "0x1828A77D0")]
	private bool TestString(string input, int position, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x28A7930", Offset = "0x28A5F30", VA = "0x1828A7930")]
	public string ToDisplayString()
	{
		return null;
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x28A8150", Offset = "0x28A6750", VA = "0x1828A8150", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x28A7AF0", Offset = "0x28A60F0", VA = "0x1828A7AF0")]
	public string ToString(bool ignorePasswordChar)
	{
		return null;
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x28A7BF0", Offset = "0x28A61F0", VA = "0x1828A7BF0")]
	public string ToString(int startPosition, int length)
	{
		return null;
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x28A8060", Offset = "0x28A6660", VA = "0x1828A8060")]
	public string ToString(bool ignorePasswordChar, int startPosition, int length)
	{
		return null;
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x28A8260", Offset = "0x28A6860", VA = "0x1828A8260")]
	public string ToString(bool includePrompt, bool includeLiterals)
	{
		return null;
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x28A7AC0", Offset = "0x28A60C0", VA = "0x1828A7AC0")]
	public string ToString(bool includePrompt, bool includeLiterals, int startPosition, int length)
	{
		return null;
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x28A7CE0", Offset = "0x28A62E0", VA = "0x1828A7CE0")]
	public string ToString(bool ignorePasswordChar, bool includePrompt, bool includeLiterals, int startPosition, int length)
	{
		return null;
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x28A82C0", Offset = "0x28A68C0", VA = "0x1828A82C0")]
	public bool VerifyChar(char input, int position, out MaskedTextResultHint hint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x28A8340", Offset = "0x28A6940", VA = "0x1828A8340")]
	public bool VerifyEscapeChar(char input, int position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x28A83F0", Offset = "0x28A69F0", VA = "0x1828A83F0")]
	public bool VerifyString(string input)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x28A83B0", Offset = "0x28A69B0", VA = "0x1828A83B0")]
	public bool VerifyString(string input, out int testPosition, out MaskedTextResultHint resultHint)
	{
		return default(bool);
	}
}
