// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Xml.SmallXmlParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Il2CppDummyDll;

namespace Mono.Xml;

[Token(Token = "0x2000048")]
internal class SmallXmlParser
{
	[Token(Token = "0x2000049")]
	public interface IContentHandler
	{
		[Token(Token = "0x60000A2")]
		void OnStartParsing(Mono.Xml.SmallXmlParser parser);

		[Token(Token = "0x60000A3")]
		void OnEndParsing(Mono.Xml.SmallXmlParser parser);

		[Token(Token = "0x60000A4")]
		void OnStartElement(string name, IAttrList attrs);

		[Token(Token = "0x60000A5")]
		void OnEndElement(string name);

		[Token(Token = "0x60000A6")]
		void OnProcessingInstruction(string name, string text);

		[Token(Token = "0x60000A7")]
		void OnChars(string text);

		[Token(Token = "0x60000A8")]
		void OnIgnorableWhitespace(string text);
	}

	[Token(Token = "0x200004A")]
	public interface IAttrList
	{
		[Token(Token = "0x17000010")]
		int Length
		{
			[Token(Token = "0x60000A9")]
			get;
		}

		[Token(Token = "0x17000011")]
		string[] Names
		{
			[Token(Token = "0x60000AD")]
			get;
		}

		[Token(Token = "0x17000012")]
		string[] Values
		{
			[Token(Token = "0x60000AE")]
			get;
		}

		[Token(Token = "0x60000AA")]
		string GetName(int i);

		[Token(Token = "0x60000AB")]
		string GetValue(int i);

		[Token(Token = "0x60000AC")]
		string GetValue(string name);
	}

	[Token(Token = "0x200004B")]
	private class AttrListImpl : IAttrList
	{
		[Token(Token = "0x400014E")]
		[FieldOffset(Offset = "0x10")]
		private List<string> attrNames;

		[Token(Token = "0x400014F")]
		[FieldOffset(Offset = "0x18")]
		private List<string> attrValues;

		[Token(Token = "0x17000013")]
		public int Length
		{
			[Token(Token = "0x60000AF")]
			[Address(RVA = "0x1941180", Offset = "0x193F780", VA = "0x181941180", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000014")]
		public string[] Names
		{
			[Token(Token = "0x60000B3")]
			[Address(RVA = "0x19411C0", Offset = "0x193F7C0", VA = "0x1819411C0", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000015")]
		public string[] Values
		{
			[Token(Token = "0x60000B4")]
			[Address(RVA = "0x1941210", Offset = "0x193F810", VA = "0x181941210", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x1940F40", Offset = "0x193F540", VA = "0x181940F40", Slot = "5")]
		public string GetName(int i)
		{
			return null;
		}

		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x1940FA0", Offset = "0x193F5A0", VA = "0x181940FA0", Slot = "6")]
		public string GetValue(int i)
		{
			return null;
		}

		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x1941000", Offset = "0x193F600", VA = "0x181941000", Slot = "7")]
		public string GetValue(string name)
		{
			return null;
		}

		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x1940EB0", Offset = "0x193F4B0", VA = "0x181940EB0")]
		internal void Clear()
		{
		}

		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x1940D80", Offset = "0x193F380", VA = "0x181940D80")]
		internal void Add(string name, string value)
		{
		}

		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x19410D0", Offset = "0x193F6D0", VA = "0x1819410D0")]
		public AttrListImpl()
		{
		}
	}

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x10")]
	private IContentHandler handler;

	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x18")]
	private TextReader reader;

	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x20")]
	private Stack elementNames;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x28")]
	private Stack xmlSpaces;

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x30")]
	private string xmlSpace;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0x38")]
	private StringBuilder buffer;

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x40")]
	private char[] nameBuffer;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x48")]
	private bool isWhitespace;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x50")]
	private AttrListImpl attributes;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x58")]
	private int line;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x5C")]
	private int column;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x60")]
	private bool resetColumn;

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x1955AB0", Offset = "0x19540B0", VA = "0x181955AB0")]
	public SmallXmlParser()
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x1953610", Offset = "0x1951C10", VA = "0x181953610")]
	private Exception Error(string msg)
	{
		return null;
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x19559E0", Offset = "0x1953FE0", VA = "0x1819559E0")]
	private Exception UnexpectedEndError()
	{
		return null;
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x19539D0", Offset = "0x1951FD0", VA = "0x1819539D0")]
	private bool IsNameChar(char c, bool start)
	{
		return default(bool);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x1953AC0", Offset = "0x19520C0", VA = "0x181953AC0")]
	private bool IsWhitespace(int c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x19558F0", Offset = "0x1953EF0", VA = "0x1819558F0")]
	public void SkipWhitespaces()
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x19538D0", Offset = "0x1951ED0", VA = "0x1819538D0")]
	private void HandleWhitespaces()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x1955900", Offset = "0x1953F00", VA = "0x181955900")]
	public void SkipWhitespaces(bool expected)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x1953CF0", Offset = "0x19522F0", VA = "0x181953CF0")]
	private int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x1955890", Offset = "0x1953E90", VA = "0x181955890")]
	private int Read()
	{
		return default(int);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x19536F0", Offset = "0x1951CF0", VA = "0x1819536F0")]
	public void Expect(int c)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x1955750", Offset = "0x1953D50", VA = "0x181955750")]
	private string ReadUntil(char until, bool handleReferences)
	{
		return null;
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x19552D0", Offset = "0x19538D0", VA = "0x1819552D0")]
	public string ReadName()
	{
		return null;
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x1953AE0", Offset = "0x19520E0", VA = "0x181953AE0")]
	public void Parse(TextReader input, IContentHandler handler)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x1953560", Offset = "0x1951B60", VA = "0x181953560")]
	private void Cleanup()
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x1954540", Offset = "0x1952B40", VA = "0x181954540")]
	public void ReadContent()
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x1953810", Offset = "0x1951E10", VA = "0x181953810")]
	private void HandleBufferedContent()
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x19542F0", Offset = "0x19528F0", VA = "0x1819542F0")]
	private void ReadCharacters()
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x19554F0", Offset = "0x1953AF0", VA = "0x1819554F0")]
	private void ReadReference()
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x1954100", Offset = "0x1952700", VA = "0x181954100")]
	private int ReadCharacterReference()
	{
		return default(int);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x1953D20", Offset = "0x1952320", VA = "0x181953D20")]
	private void ReadAttribute(AttrListImpl a)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x1953FC0", Offset = "0x19525C0", VA = "0x181953FC0")]
	private void ReadCDATASection()
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x1954400", Offset = "0x1952A00", VA = "0x181954400")]
	private void ReadComment()
	{
	}
}
