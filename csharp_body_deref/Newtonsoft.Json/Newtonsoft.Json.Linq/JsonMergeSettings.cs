using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x200017E")]
public class JsonMergeSettings
{
	[Token(Token = "0x40006FF")]
	[FieldOffset(Offset = "0x10")]
	private MergeArrayHandling _mergeArrayHandling;

	[Token(Token = "0x4000700")]
	[FieldOffset(Offset = "0x14")]
	private MergeNullValueHandling _mergeNullValueHandling;

	[Token(Token = "0x4000701")]
	[FieldOffset(Offset = "0x18")]
	private StringComparison _propertyNameComparison;

	[Token(Token = "0x1700020E")]
	public MergeArrayHandling MergeArrayHandling
	{
		[Token(Token = "0x6000C9E")]
		[Address(RVA = "0x3B27500", Offset = "0x3B27500", VA = "0x3B27500")]
		get
		{
			return default(MergeArrayHandling);
		}
		[Token(Token = "0x6000C9F")]
		[Address(RVA = "0x3B27510", Offset = "0x3B27510", VA = "0x3B27510")]
		set
		{
		}
	}

	[Token(Token = "0x1700020F")]
	public MergeNullValueHandling MergeNullValueHandling
	{
		[Token(Token = "0x6000CA0")]
		[Address(RVA = "0x3B27570", Offset = "0x3B27570", VA = "0x3B27570")]
		get
		{
			return default(MergeNullValueHandling);
		}
		[Token(Token = "0x6000CA1")]
		[Address(RVA = "0x3B27580", Offset = "0x3B27580", VA = "0x3B27580")]
		set
		{
		}
	}

	[Token(Token = "0x17000210")]
	public StringComparison PropertyNameComparison
	{
		[Token(Token = "0x6000CA2")]
		[Address(RVA = "0x3B275E0", Offset = "0x3B275E0", VA = "0x3B275E0")]
		get
		{
			return default(StringComparison);
		}
		[Token(Token = "0x6000CA3")]
		[Address(RVA = "0x3B275F0", Offset = "0x3B275F0", VA = "0x3B275F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x3B274E0", Offset = "0x3B274E0", VA = "0x3B274E0")]
	public JsonMergeSettings()
	{
	}
}
