using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Token(Token = "0x2000021")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false)]
public class JsonExtensionDataAttribute : Attribute
{
	[Token(Token = "0x17000017")]
	public bool WriteData
	{
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x3A64940", Offset = "0x3A64940", VA = "0x3A64940")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x3A64950", Offset = "0x3A64950", VA = "0x3A64950")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public bool ReadData
	{
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x3A64960", Offset = "0x3A64960", VA = "0x3A64960")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x3A64970", Offset = "0x3A64970", VA = "0x3A64970")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x3A64980", Offset = "0x3A64980", VA = "0x3A64980")]
	public JsonExtensionDataAttribute()
	{
	}
}
