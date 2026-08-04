// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000B8")]
internal sealed class RegexParser
{
	[Token(Token = "0x4000338")]
	[FieldOffset(Offset = "0x10")]
	private RegexNode _stack;

	[Token(Token = "0x4000339")]
	[FieldOffset(Offset = "0x18")]
	private RegexNode _group;

	[Token(Token = "0x400033A")]
	[FieldOffset(Offset = "0x20")]
	private RegexNode _alternation;

	[Token(Token = "0x400033B")]
	[FieldOffset(Offset = "0x28")]
	private RegexNode _concatenation;

	[Token(Token = "0x400033C")]
	[FieldOffset(Offset = "0x30")]
	private RegexNode _unit;

	[Token(Token = "0x400033D")]
	[FieldOffset(Offset = "0x38")]
	private string _pattern;

	[Token(Token = "0x400033E")]
	[FieldOffset(Offset = "0x40")]
	private int _currentPos;

	[Token(Token = "0x400033F")]
	[FieldOffset(Offset = "0x48")]
	private CultureInfo _culture;

	[Token(Token = "0x4000340")]
	[FieldOffset(Offset = "0x50")]
	private int _autocap;

	[Token(Token = "0x4000341")]
	[FieldOffset(Offset = "0x54")]
	private int _capcount;

	[Token(Token = "0x4000342")]
	[FieldOffset(Offset = "0x58")]
	private int _captop;

	[Token(Token = "0x4000343")]
	[FieldOffset(Offset = "0x5C")]
	private int _capsize;

	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x60")]
	private Hashtable _caps;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x68")]
	private Hashtable _capnames;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x70")]
	private int[] _capnumlist;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x78")]
	private List<string> _capnamelist;

	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x80")]
	private RegexOptions _options;

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x88")]
	private List<RegexOptions> _optionsStack;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x90")]
	private bool _ignoreNextParen;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte[] s_category;

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x4918BB0", Offset = "0x4918BB0", VA = "0x4918BB0")]
	public static RegexTree Parse(string re, RegexOptions op)
	{
		return null;
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x491A170", Offset = "0x491A170", VA = "0x491A170")]
	public static RegexReplacement ParseReplacement(string rep, Hashtable caps, int capsize, Hashtable capnames, RegexOptions op)
	{
		return null;
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x4918E10", Offset = "0x4918E10", VA = "0x4918E10")]
	private RegexParser(CultureInfo culture)
	{
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x4918EE0", Offset = "0x4918EE0", VA = "0x4918EE0")]
	private void SetPattern(string Re)
	{
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x4919400", Offset = "0x4919400", VA = "0x4919400")]
	private void Reset(RegexOptions topopts)
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x49194A0", Offset = "0x49194A0", VA = "0x49194A0")]
	private RegexNode ScanRegex()
	{
		return null;
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x491A320", Offset = "0x491A320", VA = "0x491A320")]
	private RegexNode ScanReplacement()
	{
		return null;
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x491B5C0", Offset = "0x491B5C0", VA = "0x491B5C0")]
	private RegexCharClass ScanCharClass(bool caseInsensitive, bool scanOnly)
	{
		return null;
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x491BE60", Offset = "0x491BE60", VA = "0x491BE60")]
	private RegexNode ScanGroupOpen()
	{
		return null;
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x491AB40", Offset = "0x491AB40", VA = "0x491AB40")]
	private void ScanBlank()
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x491D060", Offset = "0x491D060", VA = "0x491D060")]
	private RegexNode ScanBackslash(bool scanOnly)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x491E600", Offset = "0x491E600", VA = "0x491E600")]
	private RegexNode ScanBasicBackslash(bool scanOnly)
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x491D910", Offset = "0x491D910", VA = "0x491D910")]
	private RegexNode ScanDollar()
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x491E1E0", Offset = "0x491E1E0", VA = "0x491E1E0")]
	private string ScanCapname()
	{
		return null;
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x491EC90", Offset = "0x491EC90", VA = "0x491EC90")]
	private char ScanOctal()
	{
		return default(char);
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x491D800", Offset = "0x491D800", VA = "0x491D800")]
	private int ScanDecimal()
	{
		return default(int);
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x491ED10", Offset = "0x491ED10", VA = "0x491ED10")]
	private char ScanHex(int c)
	{
		return default(char);
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x491EE60", Offset = "0x491EE60", VA = "0x491EE60")]
	private static int HexDigit(char ch)
	{
		return default(int);
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x491EE90", Offset = "0x491EE90", VA = "0x491EE90")]
	private char ScanControl()
	{
		return default(char);
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x491EF20", Offset = "0x491EF20", VA = "0x491EF20")]
	private bool IsOnlyTopOption(RegexOptions option)
	{
		return default(bool);
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x491E3B0", Offset = "0x491E3B0", VA = "0x491E3B0")]
	private void ScanOptions()
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x491DFE0", Offset = "0x491DFE0", VA = "0x491DFE0")]
	private char ScanCharEscape()
	{
		return default(char);
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x491DE80", Offset = "0x491DE80", VA = "0x491DE80")]
	private string ParseProperty()
	{
		return null;
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x491E580", Offset = "0x491E580", VA = "0x491E580")]
	private int TypeFromCode(char ch)
	{
		return default(int);
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x491EF40", Offset = "0x491EF40", VA = "0x491EF40")]
	private static RegexOptions OptionFromCode(char ch)
	{
		return default(RegexOptions);
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x4918F20", Offset = "0x4918F20", VA = "0x4918F20")]
	private void CountCaptures()
	{
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x491EF80", Offset = "0x491EF80", VA = "0x491EF80")]
	private void NoteCaptureSlot(int i, int pos)
	{
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x491F0B0", Offset = "0x491F0B0", VA = "0x491F0B0")]
	private void NoteCaptureName(string name, int pos)
	{
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x491A2E0", Offset = "0x491A2E0", VA = "0x491A2E0")]
	private void NoteCaptures(Hashtable caps, int capsize, Hashtable capnames)
	{
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x491F250", Offset = "0x491F250", VA = "0x491F250")]
	private void AssignNameSlots()
	{
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x491E360", Offset = "0x491E360", VA = "0x491E360")]
	private int CaptureSlotFromName(string capname)
	{
		return default(int);
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x491E2E0", Offset = "0x491E2E0", VA = "0x491E2E0")]
	private bool IsCaptureSlot(int i)
	{
		return default(bool);
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x491E340", Offset = "0x491E340", VA = "0x491E340")]
	private bool IsCaptureName(string capname)
	{
		return default(bool);
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x491E2D0", Offset = "0x491E2D0", VA = "0x491E2D0")]
	private bool UseOptionN()
	{
		return default(bool);
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x491B5B0", Offset = "0x491B5B0", VA = "0x491B5B0")]
	private bool UseOptionI()
	{
		return default(bool);
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x491D620", Offset = "0x491D620", VA = "0x491D620")]
	private bool UseOptionM()
	{
		return default(bool);
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x491D6B0", Offset = "0x491D6B0", VA = "0x491D6B0")]
	private bool UseOptionS()
	{
		return default(bool);
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x491AED0", Offset = "0x491AED0", VA = "0x491AED0")]
	private bool UseOptionX()
	{
		return default(bool);
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x491DE70", Offset = "0x491DE70", VA = "0x491DE70")]
	private bool UseOptionE()
	{
		return default(bool);
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x491B150", Offset = "0x491B150", VA = "0x491B150")]
	private static bool IsSpecial(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x491AF30", Offset = "0x491AF30", VA = "0x491AF30")]
	private static bool IsStopperX(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x491B1D0", Offset = "0x491B1D0", VA = "0x491B1D0")]
	private static bool IsQuantifier(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x491AFB0", Offset = "0x491AFB0", VA = "0x491AFB0")]
	private bool IsTrueQuantifier()
	{
		return default(bool);
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x491E500", Offset = "0x491E500", VA = "0x491E500")]
	private static bool IsSpace(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x491B250", Offset = "0x491B250", VA = "0x491B250")]
	private void AddConcatenate(int pos, int cch, bool isReplacement)
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x491CA50", Offset = "0x491CA50", VA = "0x491CA50")]
	private void PushGroup()
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x491CEB0", Offset = "0x491CEB0", VA = "0x491CEB0")]
	private void PopGroup()
	{
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x491CC30", Offset = "0x491CC30", VA = "0x491CC30")]
	private bool EmptyStack()
	{
		return default(bool);
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x491AA80", Offset = "0x491AA80", VA = "0x491AA80")]
	private void StartGroup(RegexNode openGroup)
	{
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x491CAC0", Offset = "0x491CAC0", VA = "0x491CAC0")]
	private void AddAlternate()
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x491D7A0", Offset = "0x491D7A0", VA = "0x491D7A0")]
	private void AddConcatenate()
	{
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x491D8C0", Offset = "0x491D8C0", VA = "0x491D8C0")]
	private void AddConcatenate(bool lazy, int min, int max)
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x491FA60", Offset = "0x491FA60", VA = "0x491FA60")]
	private RegexNode Unit()
	{
		return null;
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x491B4E0", Offset = "0x491B4E0", VA = "0x491B4E0")]
	private void AddUnitOne(char ch)
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x491D6C0", Offset = "0x491D6C0", VA = "0x491D6C0")]
	private void AddUnitNotone(char ch)
	{
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x491BD50", Offset = "0x491BD50", VA = "0x491BD50")]
	private void AddUnitSet(string cc)
	{
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x491FA70", Offset = "0x491FA70", VA = "0x491FA70")]
	private void AddUnitNode(RegexNode node)
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x491D630", Offset = "0x491D630", VA = "0x491D630")]
	private void AddUnitType(int type)
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x491CCC0", Offset = "0x491CCC0", VA = "0x491CCC0")]
	private void AddGroup()
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x491BDE0", Offset = "0x491BDE0", VA = "0x491BDE0")]
	private void PushOptions()
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x491CFD0", Offset = "0x491CFD0", VA = "0x491CFD0")]
	private void PopOptions()
	{
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x491F070", Offset = "0x491F070", VA = "0x491F070")]
	private bool EmptyOptionsStack()
	{
		return default(bool);
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x491C9F0", Offset = "0x491C9F0", VA = "0x491C9F0")]
	private void PopKeepOptions()
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x491CC40", Offset = "0x491CC40", VA = "0x491CC40")]
	private ArgumentException MakeException(string message)
	{
		return null;
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x491FA80", Offset = "0x491FA80", VA = "0x491FA80")]
	private int Textpos()
	{
		return default(int);
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x491FA90", Offset = "0x491FA90", VA = "0x491FA90")]
	private void Textto(int pos)
	{
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x491D7D0", Offset = "0x491D7D0", VA = "0x491D7D0")]
	private char RightCharMoveRight()
	{
		return default(char);
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x491AEE0", Offset = "0x491AEE0", VA = "0x491AEE0")]
	private void MoveRight()
	{
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x491E2C0", Offset = "0x491E2C0", VA = "0x491E2C0")]
	private void MoveRight(int i)
	{
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x491D790", Offset = "0x491D790", VA = "0x491D790")]
	private void MoveLeft()
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x491B4C0", Offset = "0x491B4C0", VA = "0x491B4C0")]
	private char CharAt(int i)
	{
		return default(char);
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x491AF10", Offset = "0x491AF10", VA = "0x491AF10")]
	internal char RightChar()
	{
		return default(char);
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x491E2A0", Offset = "0x491E2A0", VA = "0x491E2A0")]
	private char RightChar(int i)
	{
		return default(char);
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x491AEF0", Offset = "0x491AEF0", VA = "0x491AEF0")]
	private int CharsRight()
	{
		return default(int);
	}
}
