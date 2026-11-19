// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.IDtdParserAdapter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200002C")]
internal interface IDtdParserAdapter
{
	[Token(Token = "0x17000032")]
	XmlNameTable NameTable
	{
		[Token(Token = "0x6000158")]
		get;
	}

	[Token(Token = "0x17000033")]
	IXmlNamespaceResolver NamespaceResolver
	{
		[Token(Token = "0x6000159")]
		get;
	}

	[Token(Token = "0x17000034")]
	Uri BaseUri
	{
		[Token(Token = "0x600015A")]
		get;
	}

	[Token(Token = "0x17000035")]
	char[] ParsingBuffer
	{
		[Token(Token = "0x600015B")]
		get;
	}

	[Token(Token = "0x17000036")]
	int ParsingBufferLength
	{
		[Token(Token = "0x600015C")]
		get;
	}

	[Token(Token = "0x17000037")]
	int CurrentPosition
	{
		[Token(Token = "0x600015D")]
		get;
		[Token(Token = "0x600015E")]
		set;
	}

	[Token(Token = "0x17000038")]
	int LineNo
	{
		[Token(Token = "0x600015F")]
		get;
	}

	[Token(Token = "0x17000039")]
	int LineStartPosition
	{
		[Token(Token = "0x6000160")]
		get;
	}

	[Token(Token = "0x1700003A")]
	bool IsEof
	{
		[Token(Token = "0x6000161")]
		get;
	}

	[Token(Token = "0x1700003B")]
	int EntityStackLength
	{
		[Token(Token = "0x6000162")]
		get;
	}

	[Token(Token = "0x1700003C")]
	bool IsEntityEolNormalized
	{
		[Token(Token = "0x6000163")]
		get;
	}

	[Token(Token = "0x6000164")]
	int ReadData();

	[Token(Token = "0x6000165")]
	void OnNewLine(int pos);

	[Token(Token = "0x6000166")]
	int ParseNumericCharRef(StringBuilder internalSubsetBuilder);

	[Token(Token = "0x6000167")]
	int ParseNamedCharRef(bool expand, StringBuilder internalSubsetBuilder);

	[Token(Token = "0x6000168")]
	void ParsePI(StringBuilder sb);

	[Token(Token = "0x6000169")]
	void ParseComment(StringBuilder sb);

	[Token(Token = "0x600016A")]
	bool PushEntity(IDtdEntityInfo entity, out int entityId);

	[Token(Token = "0x600016B")]
	bool PopEntity(out IDtdEntityInfo oldEntity, out int newEntityId);

	[Token(Token = "0x600016C")]
	bool PushExternalSubset(string systemId, string publicId);

	[Token(Token = "0x600016D")]
	void PushInternalDtd(string baseUri, string internalDtd);

	[Token(Token = "0x600016E")]
	void OnSystemId(string systemId, LineInfo keywordLineInfo, LineInfo systemLiteralLineInfo);

	[Token(Token = "0x600016F")]
	void OnPublicId(string publicId, LineInfo keywordLineInfo, LineInfo publicLiteralLineInfo);

	[Token(Token = "0x6000170")]
	void Throw(Exception e);
}
