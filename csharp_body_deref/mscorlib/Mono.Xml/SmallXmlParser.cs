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
		[Token(Token = "0x600008A")]
		void OnStartParsing(Mono.Xml.SmallXmlParser parser);

		[Token(Token = "0x600008B")]
		void OnEndParsing(Mono.Xml.SmallXmlParser parser);

		[Token(Token = "0x600008C")]
		void OnStartElement(string name, IAttrList attrs);

		[Token(Token = "0x600008D")]
		void OnEndElement(string name);

		[Token(Token = "0x600008E")]
		void OnProcessingInstruction(string name, string text);

		[Token(Token = "0x600008F")]
		void OnChars(string text);

		[Token(Token = "0x6000090")]
		void OnIgnorableWhitespace(string text);
	}

	[Token(Token = "0x200002C")]
	public interface IAttrList
	{
		[Token(Token = "0x17000010")]
		int Length
		{
			[Token(Token = "0x6000091")]
			get;
		}

		[Token(Token = "0x17000011")]
		string[] Names
		{
			[Token(Token = "0x6000095")]
			get;
		}

		[Token(Token = "0x17000012")]
		string[] Values
		{
			[Token(Token = "0x6000096")]
			get;
		}

		[Token(Token = "0x6000092")]
		string GetName(int i);

		[Token(Token = "0x6000093")]
		string GetValue(int i);

		[Token(Token = "0x6000094")]
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
			[Token(Token = "0x6000097")]
			[Address(RVA = "0x3AD12F0", Offset = "0x3AD12F0", VA = "0x3AD12F0", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000014")]
		public string[] Names
		{
			[Token(Token = "0x600009B")]
			[Address(RVA = "0x3AD1480", Offset = "0x3AD1480", VA = "0x3AD1480", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000015")]
		public string[] Values
		{
			[Token(Token = "0x600009C")]
			[Address(RVA = "0x3AD14C0", Offset = "0x3AD14C0", VA = "0x3AD14C0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000098")]
		[Address(RVA = "0x3AD1330", Offset = "0x3AD1330", VA = "0x3AD1330", Slot = "5")]
		public string GetName(int i)
		{
			return null;
		}

		[Token(Token = "0x6000099")]
		[Address(RVA = "0x3AD1380", Offset = "0x3AD1380", VA = "0x3AD1380", Slot = "6")]
		public string GetValue(int i)
		{
			return null;
		}

		[Token(Token = "0x600009A")]
		[Address(RVA = "0x3AD13D0", Offset = "0x3AD13D0", VA = "0x3AD13D0", Slot = "7")]
		public string GetValue(string name)
		{
			return null;
		}

		[Token(Token = "0x600009D")]
		[Address(RVA = "0x3AD0860", Offset = "0x3AD0860", VA = "0x3AD0860")]
		internal void Clear()
		{
		}

		[Token(Token = "0x600009E")]
		[Address(RVA = "0x3AD11E0", Offset = "0x3AD11E0", VA = "0x3AD11E0")]
		internal void Add(string name, string value)
		{
		}

		[Token(Token = "0x600009F")]
		[Address(RVA = "0x3ACEBE0", Offset = "0x3ACEBE0", VA = "0x3ACEBE0")]
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

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x3ACE3E0", Offset = "0x3ACE3E0", VA = "0x3ACE3E0")]
	public SmallXmlParser()
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x3ACEC90", Offset = "0x3ACEC90", VA = "0x3ACEC90")]
	private Exception Error(string msg)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x3ACEE20", Offset = "0x3ACEE20", VA = "0x3ACEE20")]
	private Exception UnexpectedEndError()
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x3ACEEF0", Offset = "0x3ACEEF0", VA = "0x3ACEEF0")]
	private bool IsNameChar(char c, bool start)
	{
		return default(bool);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x3ACEF90", Offset = "0x3ACEF90", VA = "0x3ACEF90")]
	private bool IsWhitespace(int c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x3ACEFB0", Offset = "0x3ACEFB0", VA = "0x3ACEFB0")]
	public void SkipWhitespaces()
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x3ACF130", Offset = "0x3ACF130", VA = "0x3ACF130")]
	private void HandleWhitespaces()
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x3ACF050", Offset = "0x3ACF050", VA = "0x3ACF050")]
	public void SkipWhitespaces(bool expected)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x3ACF290", Offset = "0x3ACF290", VA = "0x3ACF290")]
	private int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x3ACF240", Offset = "0x3ACF240", VA = "0x3ACF240")]
	private int Read()
	{
		return default(int);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x3ACF2C0", Offset = "0x3ACF2C0", VA = "0x3ACF2C0")]
	public void Expect(int c)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x3ACF3B0", Offset = "0x3ACF3B0", VA = "0x3ACF3B0")]
	private string ReadUntil(char until, bool handleReferences)
	{
		return null;
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x3ACF790", Offset = "0x3ACF790", VA = "0x3ACF790")]
	public string ReadName()
	{
		return null;
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x3ACE5A0", Offset = "0x3ACE5A0", VA = "0x3ACE5A0")]
	public void Parse(TextReader input, IContentHandler handler)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x3AD07B0", Offset = "0x3AD07B0", VA = "0x3AD07B0")]
	private void Cleanup()
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x3ACFAD0", Offset = "0x3ACFAD0", VA = "0x3ACFAD0")]
	public void ReadContent()
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x3AD0650", Offset = "0x3AD0650", VA = "0x3AD0650")]
	private void HandleBufferedContent()
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x3AD0E80", Offset = "0x3AD0E80", VA = "0x3AD0E80")]
	private void ReadCharacters()
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x3ACF590", Offset = "0x3ACF590", VA = "0x3ACF590")]
	private void ReadReference()
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x3AD0FC0", Offset = "0x3AD0FC0", VA = "0x3AD0FC0")]
	private int ReadCharacterReference()
	{
		return default(int);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x3AD0BC0", Offset = "0x3AD0BC0", VA = "0x3AD0BC0")]
	private void ReadAttribute(AttrListImpl a)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x3AD08E0", Offset = "0x3AD08E0", VA = "0x3AD08E0")]
	private void ReadCDATASection()
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x3AD0A50", Offset = "0x3AD0A50", VA = "0x3AD0A50")]
	private void ReadComment()
	{
	}
}
