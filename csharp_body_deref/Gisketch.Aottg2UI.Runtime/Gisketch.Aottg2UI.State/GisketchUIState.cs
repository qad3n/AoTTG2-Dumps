using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.State;

[Token(Token = "0x2000024")]
public sealed class GisketchUIState
{
	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, string> _values;

	[Token(Token = "0x14000001")]
	public event Action<string> Changed
	{
		[Token(Token = "0x6000118")]
		[Address(RVA = "0x39DA5F0", Offset = "0x39DA5F0", VA = "0x39DA5F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000119")]
		[Address(RVA = "0x39DAC00", Offset = "0x39DAC00", VA = "0x39DAC00")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x39DC1B0", Offset = "0x39DC1B0", VA = "0x39DC1B0")]
	public void Set(string key, string value)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x39DC140", Offset = "0x39DC140", VA = "0x39DC140")]
	public void SetBool(string key, bool value)
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x39DAE90", Offset = "0x39DAE90", VA = "0x39DAE90")]
	public string Get(string key, string fallback = "")
	{
		return null;
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x39DBB20", Offset = "0x39DBB20", VA = "0x39DBB20")]
	public bool GetBool(string key, bool fallback = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x39DC470", Offset = "0x39DC470", VA = "0x39DC470")]
	public GisketchUIState()
	{
	}
}
