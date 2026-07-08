using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000086")]
public interface IGraphNest : IAotStubbable
{
	[Token(Token = "0x170000EA")]
	IGraphNester nester
	{
		[Token(Token = "0x60003E3")]
		get;
		[Token(Token = "0x60003E4")]
		set;
	}

	[Token(Token = "0x170000EB")]
	GraphSource source
	{
		[Token(Token = "0x60003E5")]
		get;
		[Token(Token = "0x60003E6")]
		set;
	}

	[Token(Token = "0x170000EC")]
	IGraph embed
	{
		[Token(Token = "0x60003E7")]
		get;
		[Token(Token = "0x60003E8")]
		set;
	}

	[Token(Token = "0x170000ED")]
	IMacro macro
	{
		[Token(Token = "0x60003E9")]
		get;
		[Token(Token = "0x60003EA")]
		set;
	}

	[Token(Token = "0x170000EE")]
	IGraph graph
	{
		[Token(Token = "0x60003EB")]
		get;
	}

	[Token(Token = "0x170000EF")]
	Type graphType
	{
		[Token(Token = "0x60003EC")]
		get;
	}

	[Token(Token = "0x170000F0")]
	Type macroType
	{
		[Token(Token = "0x60003ED")]
		get;
	}

	[Token(Token = "0x170000F1")]
	bool hasBackgroundEmbed
	{
		[Token(Token = "0x60003EE")]
		get;
	}
}
