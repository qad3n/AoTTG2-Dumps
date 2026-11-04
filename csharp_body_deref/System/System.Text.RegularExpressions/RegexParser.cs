// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexParser
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000F8")]
internal sealed class RegexParser
{
	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0x10")]
	private RegexNode _stack;

	[Token(Token = "0x400040B")]
	[FieldOffset(Offset = "0x18")]
	private RegexNode _group;

	[Token(Token = "0x400040C")]
	[FieldOffset(Offset = "0x20")]
	private RegexNode _alternation;

	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x28")]
	private RegexNode _concatenation;

	[Token(Token = "0x400040E")]
	[FieldOffset(Offset = "0x30")]
	private RegexNode _unit;

	[Token(Token = "0x400040F")]
	[FieldOffset(Offset = "0x38")]
	private string _pattern;

	[Token(Token = "0x4000410")]
	[FieldOffset(Offset = "0x40")]
	private int _currentPos;

	[Token(Token = "0x4000411")]
	[FieldOffset(Offset = "0x48")]
	private CultureInfo _culture;

	[Token(Token = "0x4000412")]
	[FieldOffset(Offset = "0x50")]
	private int _autocap;

	[Token(Token = "0x4000413")]
	[FieldOffset(Offset = "0x54")]
	private int _capcount;

	[Token(Token = "0x4000414")]
	[FieldOffset(Offset = "0x58")]
	private int _captop;

	[Token(Token = "0x4000415")]
	[FieldOffset(Offset = "0x5C")]
	private int _capsize;

	[Token(Token = "0x4000416")]
	[FieldOffset(Offset = "0x60")]
	private Hashtable _caps;

	[Token(Token = "0x4000417")]
	[FieldOffset(Offset = "0x68")]
	private Hashtable _capnames;

	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x70")]
	private int[] _capnumlist;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0x78")]
	private List<string> _capnamelist;

	[Token(Token = "0x400041A")]
	[FieldOffset(Offset = "0x80")]
	private RegexOptions _options;

	[Token(Token = "0x400041B")]
	[FieldOffset(Offset = "0x88")]
	private List<RegexOptions> _optionsStack;

	[Token(Token = "0x400041C")]
	[FieldOffset(Offset = "0x90")]
	private bool _ignoreNextParen;

	[Token(Token = "0x400041D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte[] s_category;

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x286B640", Offset = "0x2869C40", VA = "0x18286B640")]
	public static RegexTree Parse(string re, RegexOptions op)
	{
		return null;
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x286B4E0", Offset = "0x2869AE0", VA = "0x18286B4E0")]
	public static RegexReplacement ParseReplacement(string rep, Hashtable caps, int capsize, Hashtable capnames, RegexOptions op)
	{
		return null;
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x286A870", Offset = "0x2868E70", VA = "0x18286A870")]
	public static string Escape(string input)
	{
		return null;
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x286FCC0", Offset = "0x286E2C0", VA = "0x18286FCC0")]
	private RegexParser(CultureInfo culture)
	{
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x286FA40", Offset = "0x286E040", VA = "0x18286FA40")]
	private void SetPattern(string Re)
	{
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x286BBE0", Offset = "0x286A1E0", VA = "0x18286BBE0")]
	private void Reset(RegexOptions topopts)
	{
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x286F030", Offset = "0x286D630", VA = "0x18286F030")]
	private RegexNode ScanRegex()
	{
		return null;
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x286F8C0", Offset = "0x286DEC0", VA = "0x18286F8C0")]
	private RegexNode ScanReplacement()
	{
		return null;
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x286CE20", Offset = "0x286B420", VA = "0x18286CE20")]
	private RegexCharClass ScanCharClass(bool caseInsensitive, bool scanOnly)
	{
		return null;
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x286E0B0", Offset = "0x286C6B0", VA = "0x18286E0B0")]
	private RegexNode ScanGroupOpen()
	{
		return null;
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x286C9C0", Offset = "0x286AFC0", VA = "0x18286C9C0")]
	private void ScanBlank()
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x286BD10", Offset = "0x286A310", VA = "0x18286BD10")]
	private RegexNode ScanBackslash(bool scanOnly)
	{
		return null;
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x286C2D0", Offset = "0x286A8D0", VA = "0x18286C2D0")]
	private RegexNode ScanBasicBackslash(bool scanOnly)
	{
		return null;
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x286DC60", Offset = "0x286C260", VA = "0x18286DC60")]
	private RegexNode ScanDollar()
	{
		return null;
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x286CD60", Offset = "0x286B360", VA = "0x18286CD60")]
	private string ScanCapname()
	{
		return null;
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x286EE90", Offset = "0x286D490", VA = "0x18286EE90")]
	private char ScanOctal()
	{
		return default(char);
	}

	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x286DBA0", Offset = "0x286C1A0", VA = "0x18286DBA0")]
	private int ScanDecimal()
	{
		return default(int);
	}

	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x286ED70", Offset = "0x286D370", VA = "0x18286ED70")]
	private char ScanHex(int c)
	{
		return default(char);
	}

	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x286AA60", Offset = "0x2869060", VA = "0x18286AA60")]
	private static int HexDigit(char ch)
	{
		return default(int);
	}

	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x286DAD0", Offset = "0x286C0D0", VA = "0x18286DAD0")]
	private char ScanControl()
	{
		return default(char);
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x286AB90", Offset = "0x2869190", VA = "0x18286AB90")]
	private bool IsOnlyTopOption(RegexOptions option)
	{
		return default(bool);
	}

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x286EF30", Offset = "0x286D530", VA = "0x18286EF30")]
	private void ScanOptions()
	{
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x286D710", Offset = "0x286BD10", VA = "0x18286D710")]
	private char ScanCharEscape()
	{
		return default(char);
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x286B310", Offset = "0x2869910", VA = "0x18286B310")]
	private string ParseProperty()
	{
		return null;
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x286FB50", Offset = "0x286E150", VA = "0x18286FB50")]
	private int TypeFromCode(char ch)
	{
		return default(int);
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x286B270", Offset = "0x2869870", VA = "0x18286B270")]
	private static RegexOptions OptionFromCode(char ch)
	{
		return default(RegexOptions);
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x286A490", Offset = "0x2868A90", VA = "0x18286A490")]
	private void CountCaptures()
	{
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x286B130", Offset = "0x2869730", VA = "0x18286B130")]
	private void NoteCaptureSlot(int i, int pos)
	{
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x286AFE0", Offset = "0x28695E0", VA = "0x18286AFE0")]
	private void NoteCaptureName(string name, int pos)
	{
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x286B220", Offset = "0x2869820", VA = "0x18286B220")]
	private void NoteCaptures(Hashtable caps, int capsize, Hashtable capnames)
	{
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x2869D30", Offset = "0x2868330", VA = "0x182869D30")]
	private void AssignNameSlots()
	{
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x286A3F0", Offset = "0x28689F0", VA = "0x18286A3F0")]
	private int CaptureSlotFromName(string capname)
	{
		return default(int);
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x286AAB0", Offset = "0x28690B0", VA = "0x18286AAB0")]
	private bool IsCaptureSlot(int i)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x286AA90", Offset = "0x2869090", VA = "0x18286AA90")]
	private bool IsCaptureName(string capname)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x286FC00", Offset = "0x286E200", VA = "0x18286FC00")]
	private bool UseOptionN()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x286FBE0", Offset = "0x286E1E0", VA = "0x18286FBE0")]
	private bool UseOptionI()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x286FBF0", Offset = "0x286E1F0", VA = "0x18286FBF0")]
	private bool UseOptionM()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x286FC10", Offset = "0x286E210", VA = "0x18286FC10")]
	private bool UseOptionS()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x286FC20", Offset = "0x286E220", VA = "0x18286FC20")]
	private bool UseOptionX()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x286FBD0", Offset = "0x286E1D0", VA = "0x18286FBD0")]
	private bool UseOptionE()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x286ACB0", Offset = "0x28692B0", VA = "0x18286ACB0")]
	private static bool IsSpecial(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x286AD30", Offset = "0x2869330", VA = "0x18286AD30")]
	private static bool IsStopperX(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x286ABB0", Offset = "0x28691B0", VA = "0x18286ABB0")]
	private static bool IsQuantifier(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x286ADB0", Offset = "0x28693B0", VA = "0x18286ADB0")]
	private bool IsTrueQuantifier()
	{
		return default(bool);
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x286AC30", Offset = "0x2869230", VA = "0x18286AC30")]
	private static bool IsSpace(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x286AB10", Offset = "0x2869110", VA = "0x18286AB10")]
	private static bool IsMetachar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x28696B0", Offset = "0x2867CB0", VA = "0x1828696B0")]
	private void AddConcatenate(int pos, int cch, bool isReplacement)
	{
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x286BAC0", Offset = "0x286A0C0", VA = "0x18286BAC0")]
	private void PushGroup()
	{
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x286B890", Offset = "0x2869E90", VA = "0x18286B890")]
	private void PopGroup()
	{
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x2498690", Offset = "0x2496C90", VA = "0x182498690")]
	private bool EmptyStack()
	{
		return default(bool);
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x286FA80", Offset = "0x286E080", VA = "0x18286FA80")]
	private void StartGroup(RegexNode openGroup)
	{
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x28693F0", Offset = "0x28679F0", VA = "0x1828693F0")]
	private void AddAlternate()
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x2869670", Offset = "0x2867C70", VA = "0x182869670")]
	private void AddConcatenate()
	{
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x2869520", Offset = "0x2867B20", VA = "0x182869520")]
	private void AddConcatenate(bool lazy, int min, int max)
	{
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
	private RegexNode Unit()
	{
		return null;
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x2869B60", Offset = "0x2868160", VA = "0x182869B60")]
	private void AddUnitOne(char ch)
	{
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x2869A80", Offset = "0x2868080", VA = "0x182869A80")]
	private void AddUnitNotone(char ch)
	{
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x2869C40", Offset = "0x2868240", VA = "0x182869C40")]
	private void AddUnitSet(string cc)
	{
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
	private void AddUnitNode(RegexNode node)
	{
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x2869CC0", Offset = "0x28682C0", VA = "0x182869CC0")]
	private void AddUnitType(int type)
	{
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x28698B0", Offset = "0x2867EB0", VA = "0x1828698B0")]
	private void AddGroup()
	{
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x286BB40", Offset = "0x286A140", VA = "0x18286BB40")]
	private void PushOptions()
	{
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x286BA20", Offset = "0x286A020", VA = "0x18286BA20")]
	private void PopOptions()
	{
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x286A820", Offset = "0x2868E20", VA = "0x18286A820")]
	private bool EmptyOptionsStack()
	{
		return default(bool);
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x286B9C0", Offset = "0x2869FC0", VA = "0x18286B9C0")]
	private void PopKeepOptions()
	{
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x286AF30", Offset = "0x2869530", VA = "0x18286AF30")]
	private ArgumentException MakeException(string message)
	{
		return null;
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
	private int Textpos()
	{
		return default(int);
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x58AA60", Offset = "0x589060", VA = "0x18058AA60")]
	private void Textto(int pos)
	{
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x286BC80", Offset = "0x286A280", VA = "0x18286BC80")]
	private char RightCharMoveRight()
	{
		return default(char);
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x286AFC0", Offset = "0x28695C0", VA = "0x18286AFC0")]
	private void MoveRight()
	{
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x286AFD0", Offset = "0x28695D0", VA = "0x18286AFD0")]
	private void MoveRight(int i)
	{
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x286AFB0", Offset = "0x28695B0", VA = "0x18286AFB0")]
	private void MoveLeft()
	{
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x286A450", Offset = "0x2868A50", VA = "0x18286A450")]
	private char CharAt(int i)
	{
		return default(char);
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x286BCB0", Offset = "0x286A2B0", VA = "0x18286BCB0")]
	internal char RightChar()
	{
		return default(char);
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x286BCE0", Offset = "0x286A2E0", VA = "0x18286BCE0")]
	private char RightChar(int i)
	{
		return default(char);
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x286A470", Offset = "0x2868A70", VA = "0x18286A470")]
	private int CharsRight()
	{
		return default(int);
	}
}
