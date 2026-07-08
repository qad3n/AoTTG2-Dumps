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
			[Address(RVA = "0x4DEB7D0", Offset = "0x4DEB7D0", VA = "0x4DEB7D0", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000014")]
		public string[] Names
		{
			[Token(Token = "0x600009B")]
			[Address(RVA = "0x4DEB960", Offset = "0x4DEB960", VA = "0x4DEB960", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000015")]
		public string[] Values
		{
			[Token(Token = "0x600009C")]
			[Address(RVA = "0x4DEB9A0", Offset = "0x4DEB9A0", VA = "0x4DEB9A0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000098")]
		[Address(RVA = "0x4DEB810", Offset = "0x4DEB810", VA = "0x4DEB810", Slot = "5")]
		public string GetName(int i)
		{
			return null;
		}

		[Token(Token = "0x6000099")]
		[Address(RVA = "0x4DEB860", Offset = "0x4DEB860", VA = "0x4DEB860", Slot = "6")]
		public string GetValue(int i)
		{
			return null;
		}

		[Token(Token = "0x600009A")]
		[Address(RVA = "0x4DEB8B0", Offset = "0x4DEB8B0", VA = "0x4DEB8B0", Slot = "7")]
		public string GetValue(string name)
		{
			return null;
		}

		[Token(Token = "0x600009D")]
		[Address(RVA = "0x4DEAD40", Offset = "0x4DEAD40", VA = "0x4DEAD40")]
		internal void Clear()
		{
		}

		[Token(Token = "0x600009E")]
		[Address(RVA = "0x4DEB6C0", Offset = "0x4DEB6C0", VA = "0x4DEB6C0")]
		internal void Add(string name, string value)
		{
		}

		[Token(Token = "0x600009F")]
		[Address(RVA = "0x4DE90C0", Offset = "0x4DE90C0", VA = "0x4DE90C0")]
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
	[Address(RVA = "0x4DE88C0", Offset = "0x4DE88C0", VA = "0x4DE88C0")]
	public SmallXmlParser()
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4DE9170", Offset = "0x4DE9170", VA = "0x4DE9170")]
	private Exception Error(string msg)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4DE9300", Offset = "0x4DE9300", VA = "0x4DE9300")]
	private Exception UnexpectedEndError()
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4DE93D0", Offset = "0x4DE93D0", VA = "0x4DE93D0")]
	private bool IsNameChar(char c, bool start)
	{
		return default(bool);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4DE9470", Offset = "0x4DE9470", VA = "0x4DE9470")]
	private bool IsWhitespace(int c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4DE9490", Offset = "0x4DE9490", VA = "0x4DE9490")]
	public void SkipWhitespaces()
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4DE9610", Offset = "0x4DE9610", VA = "0x4DE9610")]
	private void HandleWhitespaces()
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4DE9530", Offset = "0x4DE9530", VA = "0x4DE9530")]
	public void SkipWhitespaces(bool expected)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4DE9770", Offset = "0x4DE9770", VA = "0x4DE9770")]
	private int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4DE9720", Offset = "0x4DE9720", VA = "0x4DE9720")]
	private int Read()
	{
		return default(int);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4DE97A0", Offset = "0x4DE97A0", VA = "0x4DE97A0")]
	public void Expect(int c)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x4DE9890", Offset = "0x4DE9890", VA = "0x4DE9890")]
	private string ReadUntil(char until, bool handleReferences)
	{
		return null;
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x4DE9C70", Offset = "0x4DE9C70", VA = "0x4DE9C70")]
	public string ReadName()
	{
		return null;
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x4DE8A80", Offset = "0x4DE8A80", VA = "0x4DE8A80")]
	public void Parse(TextReader input, IContentHandler handler)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4DEAC90", Offset = "0x4DEAC90", VA = "0x4DEAC90")]
	private void Cleanup()
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4DE9FB0", Offset = "0x4DE9FB0", VA = "0x4DE9FB0")]
	public void ReadContent()
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4DEAB30", Offset = "0x4DEAB30", VA = "0x4DEAB30")]
	private void HandleBufferedContent()
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4DEB360", Offset = "0x4DEB360", VA = "0x4DEB360")]
	private void ReadCharacters()
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4DE9A70", Offset = "0x4DE9A70", VA = "0x4DE9A70")]
	private void ReadReference()
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4DEB4A0", Offset = "0x4DEB4A0", VA = "0x4DEB4A0")]
	private int ReadCharacterReference()
	{
		return default(int);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4DEB0A0", Offset = "0x4DEB0A0", VA = "0x4DEB0A0")]
	private void ReadAttribute(AttrListImpl a)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4DEADC0", Offset = "0x4DEADC0", VA = "0x4DEADC0")]
	private void ReadCDATASection()
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4DEAF30", Offset = "0x4DEAF30", VA = "0x4DEAF30")]
	private void ReadComment()
	{
	}
}
