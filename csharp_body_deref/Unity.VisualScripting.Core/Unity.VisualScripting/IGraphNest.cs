// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IGraphNest
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000086")]
public interface IGraphNest : IAotStubbable
{
	[Token(Token = "0x170000ED")]
	IGraphNester nester
	{
		[Token(Token = "0x60003ED")]
		get;
		[Token(Token = "0x60003EE")]
		set;
	}

	[Token(Token = "0x170000EE")]
	GraphSource source
	{
		[Token(Token = "0x60003EF")]
		get;
		[Token(Token = "0x60003F0")]
		set;
	}

	[Token(Token = "0x170000EF")]
	IGraph embed
	{
		[Token(Token = "0x60003F1")]
		get;
		[Token(Token = "0x60003F2")]
		set;
	}

	[Token(Token = "0x170000F0")]
	IMacro macro
	{
		[Token(Token = "0x60003F3")]
		get;
		[Token(Token = "0x60003F4")]
		set;
	}

	[Token(Token = "0x170000F1")]
	IGraph graph
	{
		[Token(Token = "0x60003F5")]
		get;
	}

	[Token(Token = "0x170000F2")]
	Type graphType
	{
		[Token(Token = "0x60003F6")]
		get;
	}

	[Token(Token = "0x170000F3")]
	Type macroType
	{
		[Token(Token = "0x60003F7")]
		get;
	}

	[Token(Token = "0x170000F4")]
	bool hasBackgroundEmbed
	{
		[Token(Token = "0x60003F8")]
		get;
	}
}
