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

[Token(Token = "0x20000B9")]
internal sealed class RegexParser
{
	[Token(Token = "0x400033B")]
	[FieldOffset(Offset = "0x10")]
	private RegexNode _stack;

	[Token(Token = "0x400033C")]
	[FieldOffset(Offset = "0x18")]
	private RegexNode _group;

	[Token(Token = "0x400033D")]
	[FieldOffset(Offset = "0x20")]
	private RegexNode _alternation;

	[Token(Token = "0x400033E")]
	[FieldOffset(Offset = "0x28")]
	private RegexNode _concatenation;

	[Token(Token = "0x400033F")]
	[FieldOffset(Offset = "0x30")]
	private RegexNode _unit;

	[Token(Token = "0x4000340")]
	[FieldOffset(Offset = "0x38")]
	private string _pattern;

	[Token(Token = "0x4000341")]
	[FieldOffset(Offset = "0x40")]
	private int _currentPos;

	[Token(Token = "0x4000342")]
	[FieldOffset(Offset = "0x48")]
	private CultureInfo _culture;

	[Token(Token = "0x4000343")]
	[FieldOffset(Offset = "0x50")]
	private int _autocap;

	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x54")]
	private int _capcount;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x58")]
	private int _captop;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x5C")]
	private int _capsize;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x60")]
	private Hashtable _caps;

	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x68")]
	private Hashtable _capnames;

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x70")]
	private int[] _capnumlist;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x78")]
	private List<string> _capnamelist;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x80")]
	private RegexOptions _options;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x88")]
	private List<RegexOptions> _optionsStack;

	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x90")]
	private bool _ignoreNextParen;

	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte[] s_category;

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x61F5AC0", Offset = "0x61F4AC0", VA = "0x61F5AC0")]
	public static RegexTree Parse(string re, RegexOptions op)
	{
		return null;
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x61F7100", Offset = "0x61F6100", VA = "0x61F7100")]
	public static RegexReplacement ParseReplacement(string rep, Hashtable caps, int capsize, Hashtable capnames, RegexOptions op)
	{
		return null;
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x61F7A20", Offset = "0x61F6A20", VA = "0x61F7A20")]
	public static string Escape(string input)
	{
		return null;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x61F5D10", Offset = "0x61F4D10", VA = "0x61F5D10")]
	private RegexParser(CultureInfo culture)
	{
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x61F5DE0", Offset = "0x61F4DE0", VA = "0x61F5DE0")]
	private void SetPattern(string Re)
	{
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x61F6270", Offset = "0x61F5270", VA = "0x61F6270")]
	private void Reset(RegexOptions topopts)
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x61F6310", Offset = "0x61F5310", VA = "0x61F6310")]
	private RegexNode ScanRegex()
	{
		return null;
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x61F72B0", Offset = "0x61F62B0", VA = "0x61F72B0")]
	private RegexNode ScanReplacement()
	{
		return null;
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x61F8810", Offset = "0x61F7810", VA = "0x61F8810")]
	private RegexCharClass ScanCharClass(bool caseInsensitive, bool scanOnly)
	{
		return null;
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x61F9030", Offset = "0x61F8030", VA = "0x61F9030")]
	private RegexNode ScanGroupOpen()
	{
		return null;
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x61F7DF0", Offset = "0x61F6DF0", VA = "0x61F7DF0")]
	private void ScanBlank()
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x61FA010", Offset = "0x61F9010", VA = "0x61FA010")]
	private RegexNode ScanBackslash(bool scanOnly)
	{
		return null;
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x61FB560", Offset = "0x61FA560", VA = "0x61FB560")]
	private RegexNode ScanBasicBackslash(bool scanOnly)
	{
		return null;
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x61FA8C0", Offset = "0x61F98C0", VA = "0x61FA8C0")]
	private RegexNode ScanDollar()
	{
		return null;
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x61FB140", Offset = "0x61FA140", VA = "0x61FB140")]
	private string ScanCapname()
	{
		return null;
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x61FBBE0", Offset = "0x61FABE0", VA = "0x61FBBE0")]
	private char ScanOctal()
	{
		return default(char);
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x61FA7C0", Offset = "0x61F97C0", VA = "0x61FA7C0")]
	private int ScanDecimal()
	{
		return default(int);
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x61FBC70", Offset = "0x61FAC70", VA = "0x61FBC70")]
	private char ScanHex(int c)
	{
		return default(char);
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x61FBDA0", Offset = "0x61FADA0", VA = "0x61FBDA0")]
	private static int HexDigit(char ch)
	{
		return default(int);
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x61FBDD0", Offset = "0x61FADD0", VA = "0x61FBDD0")]
	private char ScanControl()
	{
		return default(char);
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x61FBE60", Offset = "0x61FAE60", VA = "0x61FBE60")]
	private bool IsOnlyTopOption(RegexOptions option)
	{
		return default(bool);
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x61FB310", Offset = "0x61FA310", VA = "0x61FB310")]
	private void ScanOptions()
	{
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x61FAF20", Offset = "0x61F9F20", VA = "0x61FAF20")]
	private char ScanCharEscape()
	{
		return default(char);
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x61FADC0", Offset = "0x61F9DC0", VA = "0x61FADC0")]
	private string ParseProperty()
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x61FB4E0", Offset = "0x61FA4E0", VA = "0x61FB4E0")]
	private int TypeFromCode(char ch)
	{
		return default(int);
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x61FBE80", Offset = "0x61FAE80", VA = "0x61FBE80")]
	private static RegexOptions OptionFromCode(char ch)
	{
		return default(RegexOptions);
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x61F5E20", Offset = "0x61F4E20", VA = "0x61F5E20")]
	private void CountCaptures()
	{
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x61FBEC0", Offset = "0x61FAEC0", VA = "0x61FBEC0")]
	private void NoteCaptureSlot(int i, int pos)
	{
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x61FBFE0", Offset = "0x61FAFE0", VA = "0x61FBFE0")]
	private void NoteCaptureName(string name, int pos)
	{
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x61F7270", Offset = "0x61F6270", VA = "0x61F7270")]
	private void NoteCaptures(Hashtable caps, int capsize, Hashtable capnames)
	{
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x61FC180", Offset = "0x61FB180", VA = "0x61FC180")]
	private void AssignNameSlots()
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x61FB2C0", Offset = "0x61FA2C0", VA = "0x61FB2C0")]
	private int CaptureSlotFromName(string capname)
	{
		return default(int);
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x61FB240", Offset = "0x61FA240", VA = "0x61FB240")]
	private bool IsCaptureSlot(int i)
	{
		return default(bool);
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x61FB2A0", Offset = "0x61FA2A0", VA = "0x61FB2A0")]
	private bool IsCaptureName(string capname)
	{
		return default(bool);
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x61FB230", Offset = "0x61FA230", VA = "0x61FB230")]
	private bool UseOptionN()
	{
		return default(bool);
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x61F8800", Offset = "0x61F7800", VA = "0x61F8800")]
	private bool UseOptionI()
	{
		return default(bool);
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x61FA5D0", Offset = "0x61F95D0", VA = "0x61FA5D0")]
	private bool UseOptionM()
	{
		return default(bool);
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x61FA660", Offset = "0x61F9660", VA = "0x61FA660")]
	private bool UseOptionS()
	{
		return default(bool);
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x61F8160", Offset = "0x61F7160", VA = "0x61F8160")]
	private bool UseOptionX()
	{
		return default(bool);
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x61FADB0", Offset = "0x61F9DB0", VA = "0x61FADB0")]
	private bool UseOptionE()
	{
		return default(bool);
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x61F83A0", Offset = "0x61F73A0", VA = "0x61F83A0")]
	private static bool IsSpecial(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x61F81C0", Offset = "0x61F71C0", VA = "0x61F81C0")]
	private static bool IsStopperX(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x61F8420", Offset = "0x61F7420", VA = "0x61F8420")]
	private static bool IsQuantifier(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x61F8240", Offset = "0x61F7240", VA = "0x61F8240")]
	private bool IsTrueQuantifier()
	{
		return default(bool);
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x61FB460", Offset = "0x61FA460", VA = "0x61FB460")]
	private static bool IsSpace(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x61F7CB0", Offset = "0x61F6CB0", VA = "0x61F7CB0")]
	private static bool IsMetachar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x61F84A0", Offset = "0x61F74A0", VA = "0x61F84A0")]
	private void AddConcatenate(int pos, int cch, bool isReplacement)
	{
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x61F99F0", Offset = "0x61F89F0", VA = "0x61F99F0")]
	private void PushGroup()
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x61F9E60", Offset = "0x61F8E60", VA = "0x61F9E60")]
	private void PopGroup()
	{
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x61F9BE0", Offset = "0x61F8BE0", VA = "0x61F9BE0")]
	private bool EmptyStack()
	{
		return default(bool);
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x61F7D30", Offset = "0x61F6D30", VA = "0x61F7D30")]
	private void StartGroup(RegexNode openGroup)
	{
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x61F9A70", Offset = "0x61F8A70", VA = "0x61F9A70")]
	private void AddAlternate()
	{
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x61FA750", Offset = "0x61F9750", VA = "0x61FA750")]
	private void AddConcatenate()
	{
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x61FA870", Offset = "0x61F9870", VA = "0x61FA870")]
	private void AddConcatenate(bool lazy, int min, int max)
	{
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x61FC980", Offset = "0x61FB980", VA = "0x61FC980")]
	private RegexNode Unit()
	{
		return null;
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x61F8730", Offset = "0x61F7730", VA = "0x61F8730")]
	private void AddUnitOne(char ch)
	{
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x61FA670", Offset = "0x61F9670", VA = "0x61FA670")]
	private void AddUnitNotone(char ch)
	{
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x61F8F20", Offset = "0x61F7F20", VA = "0x61F8F20")]
	private void AddUnitSet(string cc)
	{
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x61FC990", Offset = "0x61FB990", VA = "0x61FC990")]
	private void AddUnitNode(RegexNode node)
	{
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x61FA5E0", Offset = "0x61F95E0", VA = "0x61FA5E0")]
	private void AddUnitType(int type)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x61F9C70", Offset = "0x61F8C70", VA = "0x61F9C70")]
	private void AddGroup()
	{
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x61F8FB0", Offset = "0x61F7FB0", VA = "0x61F8FB0")]
	private void PushOptions()
	{
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x61F9F80", Offset = "0x61F8F80", VA = "0x61F9F80")]
	private void PopOptions()
	{
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x61FBFA0", Offset = "0x61FAFA0", VA = "0x61FBFA0")]
	private bool EmptyOptionsStack()
	{
		return default(bool);
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x61F9990", Offset = "0x61F8990", VA = "0x61F9990")]
	private void PopKeepOptions()
	{
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x61F9BF0", Offset = "0x61F8BF0", VA = "0x61F9BF0")]
	private ArgumentException MakeException(string message)
	{
		return null;
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x61FC9A0", Offset = "0x61FB9A0", VA = "0x61FC9A0")]
	private int Textpos()
	{
		return default(int);
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x61FC9B0", Offset = "0x61FB9B0", VA = "0x61FC9B0")]
	private void Textto(int pos)
	{
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x61FA790", Offset = "0x61F9790", VA = "0x61FA790")]
	private char RightCharMoveRight()
	{
		return default(char);
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x61F8170", Offset = "0x61F7170", VA = "0x61F8170")]
	private void MoveRight()
	{
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x61FB220", Offset = "0x61FA220", VA = "0x61FB220")]
	private void MoveRight(int i)
	{
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x61FA740", Offset = "0x61F9740", VA = "0x61FA740")]
	private void MoveLeft()
	{
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x61F8710", Offset = "0x61F7710", VA = "0x61F8710")]
	private char CharAt(int i)
	{
		return default(char);
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x61F81A0", Offset = "0x61F71A0", VA = "0x61F81A0")]
	internal char RightChar()
	{
		return default(char);
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x61FB200", Offset = "0x61FA200", VA = "0x61FB200")]
	private char RightChar(int i)
	{
		return default(char);
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x61F8180", Offset = "0x61F7180", VA = "0x61F8180")]
	private int CharsRight()
	{
		return default(int);
	}
}
