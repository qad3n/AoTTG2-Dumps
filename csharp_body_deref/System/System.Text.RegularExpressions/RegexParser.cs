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
	[Address(RVA = "0x45F3AB0", Offset = "0x45F3AB0", VA = "0x45F3AB0")]
	public static RegexTree Parse(string re, RegexOptions op)
	{
		return null;
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x45F5070", Offset = "0x45F5070", VA = "0x45F5070")]
	public static RegexReplacement ParseReplacement(string rep, Hashtable caps, int capsize, Hashtable capnames, RegexOptions op)
	{
		return null;
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x45F3D10", Offset = "0x45F3D10", VA = "0x45F3D10")]
	private RegexParser(CultureInfo culture)
	{
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x45F3DE0", Offset = "0x45F3DE0", VA = "0x45F3DE0")]
	private void SetPattern(string Re)
	{
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x45F4300", Offset = "0x45F4300", VA = "0x45F4300")]
	private void Reset(RegexOptions topopts)
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x45F43A0", Offset = "0x45F43A0", VA = "0x45F43A0")]
	private RegexNode ScanRegex()
	{
		return null;
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x45F5220", Offset = "0x45F5220", VA = "0x45F5220")]
	private RegexNode ScanReplacement()
	{
		return null;
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x45F64C0", Offset = "0x45F64C0", VA = "0x45F64C0")]
	private RegexCharClass ScanCharClass(bool caseInsensitive, bool scanOnly)
	{
		return null;
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x45F6D60", Offset = "0x45F6D60", VA = "0x45F6D60")]
	private RegexNode ScanGroupOpen()
	{
		return null;
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x45F5A40", Offset = "0x45F5A40", VA = "0x45F5A40")]
	private void ScanBlank()
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x45F7F60", Offset = "0x45F7F60", VA = "0x45F7F60")]
	private RegexNode ScanBackslash(bool scanOnly)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x45F9500", Offset = "0x45F9500", VA = "0x45F9500")]
	private RegexNode ScanBasicBackslash(bool scanOnly)
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x45F8810", Offset = "0x45F8810", VA = "0x45F8810")]
	private RegexNode ScanDollar()
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x45F90E0", Offset = "0x45F90E0", VA = "0x45F90E0")]
	private string ScanCapname()
	{
		return null;
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x45F9B90", Offset = "0x45F9B90", VA = "0x45F9B90")]
	private char ScanOctal()
	{
		return default(char);
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x45F8700", Offset = "0x45F8700", VA = "0x45F8700")]
	private int ScanDecimal()
	{
		return default(int);
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x45F9C10", Offset = "0x45F9C10", VA = "0x45F9C10")]
	private char ScanHex(int c)
	{
		return default(char);
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x45F9D60", Offset = "0x45F9D60", VA = "0x45F9D60")]
	private static int HexDigit(char ch)
	{
		return default(int);
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x45F9D90", Offset = "0x45F9D90", VA = "0x45F9D90")]
	private char ScanControl()
	{
		return default(char);
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x45F9E20", Offset = "0x45F9E20", VA = "0x45F9E20")]
	private bool IsOnlyTopOption(RegexOptions option)
	{
		return default(bool);
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x45F92B0", Offset = "0x45F92B0", VA = "0x45F92B0")]
	private void ScanOptions()
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x45F8EE0", Offset = "0x45F8EE0", VA = "0x45F8EE0")]
	private char ScanCharEscape()
	{
		return default(char);
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x45F8D80", Offset = "0x45F8D80", VA = "0x45F8D80")]
	private string ParseProperty()
	{
		return null;
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x45F9480", Offset = "0x45F9480", VA = "0x45F9480")]
	private int TypeFromCode(char ch)
	{
		return default(int);
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x45F9E40", Offset = "0x45F9E40", VA = "0x45F9E40")]
	private static RegexOptions OptionFromCode(char ch)
	{
		return default(RegexOptions);
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x45F3E20", Offset = "0x45F3E20", VA = "0x45F3E20")]
	private void CountCaptures()
	{
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x45F9E80", Offset = "0x45F9E80", VA = "0x45F9E80")]
	private void NoteCaptureSlot(int i, int pos)
	{
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x45F9FB0", Offset = "0x45F9FB0", VA = "0x45F9FB0")]
	private void NoteCaptureName(string name, int pos)
	{
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x45F51E0", Offset = "0x45F51E0", VA = "0x45F51E0")]
	private void NoteCaptures(Hashtable caps, int capsize, Hashtable capnames)
	{
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x45FA150", Offset = "0x45FA150", VA = "0x45FA150")]
	private void AssignNameSlots()
	{
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x45F9260", Offset = "0x45F9260", VA = "0x45F9260")]
	private int CaptureSlotFromName(string capname)
	{
		return default(int);
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x45F91E0", Offset = "0x45F91E0", VA = "0x45F91E0")]
	private bool IsCaptureSlot(int i)
	{
		return default(bool);
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x45F9240", Offset = "0x45F9240", VA = "0x45F9240")]
	private bool IsCaptureName(string capname)
	{
		return default(bool);
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x45F91D0", Offset = "0x45F91D0", VA = "0x45F91D0")]
	private bool UseOptionN()
	{
		return default(bool);
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x45F64B0", Offset = "0x45F64B0", VA = "0x45F64B0")]
	private bool UseOptionI()
	{
		return default(bool);
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x45F8520", Offset = "0x45F8520", VA = "0x45F8520")]
	private bool UseOptionM()
	{
		return default(bool);
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x45F85B0", Offset = "0x45F85B0", VA = "0x45F85B0")]
	private bool UseOptionS()
	{
		return default(bool);
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x45F5DD0", Offset = "0x45F5DD0", VA = "0x45F5DD0")]
	private bool UseOptionX()
	{
		return default(bool);
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x45F8D70", Offset = "0x45F8D70", VA = "0x45F8D70")]
	private bool UseOptionE()
	{
		return default(bool);
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x45F6050", Offset = "0x45F6050", VA = "0x45F6050")]
	private static bool IsSpecial(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x45F5E30", Offset = "0x45F5E30", VA = "0x45F5E30")]
	private static bool IsStopperX(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x45F60D0", Offset = "0x45F60D0", VA = "0x45F60D0")]
	private static bool IsQuantifier(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x45F5EB0", Offset = "0x45F5EB0", VA = "0x45F5EB0")]
	private bool IsTrueQuantifier()
	{
		return default(bool);
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x45F9400", Offset = "0x45F9400", VA = "0x45F9400")]
	private static bool IsSpace(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x45F6150", Offset = "0x45F6150", VA = "0x45F6150")]
	private void AddConcatenate(int pos, int cch, bool isReplacement)
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x45F7950", Offset = "0x45F7950", VA = "0x45F7950")]
	private void PushGroup()
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x45F7DB0", Offset = "0x45F7DB0", VA = "0x45F7DB0")]
	private void PopGroup()
	{
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x45F7B30", Offset = "0x45F7B30", VA = "0x45F7B30")]
	private bool EmptyStack()
	{
		return default(bool);
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x45F5980", Offset = "0x45F5980", VA = "0x45F5980")]
	private void StartGroup(RegexNode openGroup)
	{
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x45F79C0", Offset = "0x45F79C0", VA = "0x45F79C0")]
	private void AddAlternate()
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x45F86A0", Offset = "0x45F86A0", VA = "0x45F86A0")]
	private void AddConcatenate()
	{
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x45F87C0", Offset = "0x45F87C0", VA = "0x45F87C0")]
	private void AddConcatenate(bool lazy, int min, int max)
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x45FA960", Offset = "0x45FA960", VA = "0x45FA960")]
	private RegexNode Unit()
	{
		return null;
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x45F63E0", Offset = "0x45F63E0", VA = "0x45F63E0")]
	private void AddUnitOne(char ch)
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x45F85C0", Offset = "0x45F85C0", VA = "0x45F85C0")]
	private void AddUnitNotone(char ch)
	{
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x45F6C50", Offset = "0x45F6C50", VA = "0x45F6C50")]
	private void AddUnitSet(string cc)
	{
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x45FA970", Offset = "0x45FA970", VA = "0x45FA970")]
	private void AddUnitNode(RegexNode node)
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x45F8530", Offset = "0x45F8530", VA = "0x45F8530")]
	private void AddUnitType(int type)
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x45F7BC0", Offset = "0x45F7BC0", VA = "0x45F7BC0")]
	private void AddGroup()
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x45F6CE0", Offset = "0x45F6CE0", VA = "0x45F6CE0")]
	private void PushOptions()
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x45F7ED0", Offset = "0x45F7ED0", VA = "0x45F7ED0")]
	private void PopOptions()
	{
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x45F9F70", Offset = "0x45F9F70", VA = "0x45F9F70")]
	private bool EmptyOptionsStack()
	{
		return default(bool);
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x45F78F0", Offset = "0x45F78F0", VA = "0x45F78F0")]
	private void PopKeepOptions()
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x45F7B40", Offset = "0x45F7B40", VA = "0x45F7B40")]
	private ArgumentException MakeException(string message)
	{
		return null;
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x45FA980", Offset = "0x45FA980", VA = "0x45FA980")]
	private int Textpos()
	{
		return default(int);
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x45FA990", Offset = "0x45FA990", VA = "0x45FA990")]
	private void Textto(int pos)
	{
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x45F86D0", Offset = "0x45F86D0", VA = "0x45F86D0")]
	private char RightCharMoveRight()
	{
		return default(char);
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x45F5DE0", Offset = "0x45F5DE0", VA = "0x45F5DE0")]
	private void MoveRight()
	{
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x45F91C0", Offset = "0x45F91C0", VA = "0x45F91C0")]
	private void MoveRight(int i)
	{
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x45F8690", Offset = "0x45F8690", VA = "0x45F8690")]
	private void MoveLeft()
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x45F63C0", Offset = "0x45F63C0", VA = "0x45F63C0")]
	private char CharAt(int i)
	{
		return default(char);
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x45F5E10", Offset = "0x45F5E10", VA = "0x45F5E10")]
	internal char RightChar()
	{
		return default(char);
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x45F91A0", Offset = "0x45F91A0", VA = "0x45F91A0")]
	private char RightChar(int i)
	{
		return default(char);
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x45F5DF0", Offset = "0x45F5DF0", VA = "0x45F5DF0")]
	private int CharsRight()
	{
		return default(int);
	}
}
