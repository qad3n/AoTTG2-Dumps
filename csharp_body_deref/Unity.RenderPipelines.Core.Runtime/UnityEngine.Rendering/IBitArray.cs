using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000198")]
public interface IBitArray
{
	[Token(Token = "0x17000151")]
	uint capacity
	{
		[Token(Token = "0x6000BB6")]
		get;
	}

	[Token(Token = "0x17000152")]
	bool allFalse
	{
		[Token(Token = "0x6000BB7")]
		get;
	}

	[Token(Token = "0x17000153")]
	bool allTrue
	{
		[Token(Token = "0x6000BB8")]
		get;
	}

	[Token(Token = "0x17000154")]
	bool this[uint index]
	{
		[Token(Token = "0x6000BB9")]
		get;
		[Token(Token = "0x6000BBA")]
		set;
	}

	[Token(Token = "0x17000155")]
	string humanizedData
	{
		[Token(Token = "0x6000BBB")]
		get;
	}

	[Token(Token = "0x6000BBC")]
	IBitArray BitAnd(IBitArray other);

	[Token(Token = "0x6000BBD")]
	IBitArray BitOr(IBitArray other);

	[Token(Token = "0x6000BBE")]
	IBitArray BitNot();
}
