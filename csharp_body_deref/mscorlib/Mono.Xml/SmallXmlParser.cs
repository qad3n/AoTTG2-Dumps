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

[Token(Token = "0x200002A")]
internal class SmallXmlParser
{
	[Token(Token = "0x200002B")]
	public interface IContentHandler
	{
		[Token(Token = "0x600008C")]
		void OnStartParsing(Mono.Xml.SmallXmlParser parser);

		[Token(Token = "0x600008D")]
		void OnEndParsing(Mono.Xml.SmallXmlParser parser);

		[Token(Token = "0x600008E")]
		void OnStartElement(string name, IAttrList attrs);

		[Token(Token = "0x600008F")]
		void OnEndElement(string name);

		[Token(Token = "0x6000090")]
		void OnProcessingInstruction(string name, string text);

		[Token(Token = "0x6000091")]
		void OnChars(string text);

		[Token(Token = "0x6000092")]
		void OnIgnorableWhitespace(string text);
	}

	[Token(Token = "0x200002C")]
	public interface IAttrList
	{
		[Token(Token = "0x17000010")]
		int Length
		{
			[Token(Token = "0x6000093")]
			get;
		}

		[Token(Token = "0x17000011")]
		string[] Names
		{
			[Token(Token = "0x6000097")]
			get;
		}

		[Token(Token = "0x17000012")]
		string[] Values
		{
			[Token(Token = "0x6000098")]
			get;
		}

		[Token(Token = "0x6000094")]
		string GetName(int i);

		[Token(Token = "0x6000095")]
		string GetValue(int i);

		[Token(Token = "0x6000096")]
		string GetValue(string name);
	}

	[Token(Token = "0x200002D")]
	private class AttrListImpl : IAttrList
	{
		[Token(Token = "0x40000CC")]
		[FieldOffset(Offset = "0x10")]
		private List<string> attrNames;

		[Token(Token = "0x40000CD")]
		[FieldOffset(Offset = "0x18")]
		private List<string> attrValues;

		[Token(Token = "0x17000013")]
		public int Length
		{
			[Token(Token = "0x6000099")]
			[Address(RVA = "0x52DC780", Offset = "0x52DB780", VA = "0x52DC780", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000014")]
		public string[] Names
		{
			[Token(Token = "0x600009D")]
			[Address(RVA = "0x52DC910", Offset = "0x52DB910", VA = "0x52DC910", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000015")]
		public string[] Values
		{
			[Token(Token = "0x600009E")]
			[Address(RVA = "0x52DC950", Offset = "0x52DB950", VA = "0x52DC950", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600009A")]
		[Address(RVA = "0x52DC7C0", Offset = "0x52DB7C0", VA = "0x52DC7C0", Slot = "5")]
		public string GetName(int i)
		{
			return null;
		}

		[Token(Token = "0x600009B")]
		[Address(RVA = "0x52DC810", Offset = "0x52DB810", VA = "0x52DC810", Slot = "6")]
		public string GetValue(int i)
		{
			return null;
		}

		[Token(Token = "0x600009C")]
		[Address(RVA = "0x52DC860", Offset = "0x52DB860", VA = "0x52DC860", Slot = "7")]
		public string GetValue(string name)
		{
			return null;
		}

		[Token(Token = "0x600009F")]
		[Address(RVA = "0x52DBDC0", Offset = "0x52DADC0", VA = "0x52DBDC0")]
		internal void Clear()
		{
		}

		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x52DC670", Offset = "0x52DB670", VA = "0x52DC670")]
		internal void Add(string name, string value)
		{
		}

		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x52DA250", Offset = "0x52D9250", VA = "0x52DA250")]
		public AttrListImpl()
		{
		}
	}

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x10")]
	private IContentHandler handler;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x18")]
	private TextReader reader;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x20")]
	private Stack elementNames;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x28")]
	private Stack xmlSpaces;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x30")]
	private string xmlSpace;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x38")]
	private StringBuilder buffer;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x40")]
	private char[] nameBuffer;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x48")]
	private bool isWhitespace;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x50")]
	private AttrListImpl attributes;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x58")]
	private int line;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x5C")]
	private int column;

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x60")]
	private bool resetColumn;

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x52D9A50", Offset = "0x52D8A50", VA = "0x52D9A50")]
	public SmallXmlParser()
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x52DA300", Offset = "0x52D9300", VA = "0x52DA300")]
	private Exception Error(string msg)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x52DA490", Offset = "0x52D9490", VA = "0x52DA490")]
	private Exception UnexpectedEndError()
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x52DA560", Offset = "0x52D9560", VA = "0x52DA560")]
	private bool IsNameChar(char c, bool start)
	{
		return default(bool);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x52DA600", Offset = "0x52D9600", VA = "0x52DA600")]
	private bool IsWhitespace(int c)
	{
		return default(bool);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x52DA620", Offset = "0x52D9620", VA = "0x52DA620")]
	public void SkipWhitespaces()
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x52DA790", Offset = "0x52D9790", VA = "0x52DA790")]
	private void HandleWhitespaces()
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x52DA6C0", Offset = "0x52D96C0", VA = "0x52DA6C0")]
	public void SkipWhitespaces(bool expected)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x52DA8E0", Offset = "0x52D98E0", VA = "0x52DA8E0")]
	private int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x52DA890", Offset = "0x52D9890", VA = "0x52DA890")]
	private int Read()
	{
		return default(int);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x52DA910", Offset = "0x52D9910", VA = "0x52DA910")]
	public void Expect(int c)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x52DAA00", Offset = "0x52D9A00", VA = "0x52DAA00")]
	private string ReadUntil(char until, bool handleReferences)
	{
		return null;
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x52DADB0", Offset = "0x52D9DB0", VA = "0x52DADB0")]
	public string ReadName()
	{
		return null;
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x52D9C10", Offset = "0x52D8C10", VA = "0x52D9C10")]
	public void Parse(TextReader input, IContentHandler handler)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x52DBD10", Offset = "0x52DAD10", VA = "0x52DBD10")]
	private void Cleanup()
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x52DB0B0", Offset = "0x52DA0B0", VA = "0x52DB0B0")]
	public void ReadContent()
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x52DBB90", Offset = "0x52DAB90", VA = "0x52DBB90")]
	private void HandleBufferedContent()
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x52DC360", Offset = "0x52DB360", VA = "0x52DC360")]
	private void ReadCharacters()
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x52DABB0", Offset = "0x52D9BB0", VA = "0x52DABB0")]
	private void ReadReference()
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x52DC480", Offset = "0x52DB480", VA = "0x52DC480")]
	private int ReadCharacterReference()
	{
		return default(int);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x52DC0E0", Offset = "0x52DB0E0", VA = "0x52DC0E0")]
	private void ReadAttribute(AttrListImpl a)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x52DBE40", Offset = "0x52DAE40", VA = "0x52DBE40")]
	private void ReadCDATASection()
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x52DBFA0", Offset = "0x52DAFA0", VA = "0x52DBFA0")]
	private void ReadComment()
	{
	}
}
