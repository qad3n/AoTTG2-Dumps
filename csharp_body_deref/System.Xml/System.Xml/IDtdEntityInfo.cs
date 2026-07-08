using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200002A")]
internal interface IDtdEntityInfo
{
	[Token(Token = "0x17000026")]
	string Name
	{
		[Token(Token = "0x600014A")]
		get;
	}

	[Token(Token = "0x17000027")]
	bool IsExternal
	{
		[Token(Token = "0x600014B")]
		get;
	}

	[Token(Token = "0x17000028")]
	bool IsDeclaredInExternal
	{
		[Token(Token = "0x600014C")]
		get;
	}

	[Token(Token = "0x17000029")]
	bool IsUnparsedEntity
	{
		[Token(Token = "0x600014D")]
		get;
	}

	[Token(Token = "0x1700002A")]
	bool IsParameterEntity
	{
		[Token(Token = "0x600014E")]
		get;
	}

	[Token(Token = "0x1700002B")]
	string BaseUriString
	{
		[Token(Token = "0x600014F")]
		get;
	}

	[Token(Token = "0x1700002C")]
	string DeclaredUriString
	{
		[Token(Token = "0x6000150")]
		get;
	}

	[Token(Token = "0x1700002D")]
	string SystemId
	{
		[Token(Token = "0x6000151")]
		get;
	}

	[Token(Token = "0x1700002E")]
	string PublicId
	{
		[Token(Token = "0x6000152")]
		get;
	}

	[Token(Token = "0x1700002F")]
	string Text
	{
		[Token(Token = "0x6000153")]
		get;
	}

	[Token(Token = "0x17000030")]
	int LineNumber
	{
		[Token(Token = "0x6000154")]
		get;
	}

	[Token(Token = "0x17000031")]
	int LinePosition
	{
		[Token(Token = "0x6000155")]
		get;
	}
}
