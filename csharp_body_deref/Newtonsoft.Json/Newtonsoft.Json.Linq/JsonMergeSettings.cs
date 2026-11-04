// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonMergeSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(MergeArrayHandling);
		}
		[Token(Token = "0x6000C9F")]
		[Address(RVA = "0x1C88500", Offset = "0x1C86B00", VA = "0x181C88500")]
		set
		{
		}
	}

	[Token(Token = "0x1700020F")]
	public MergeNullValueHandling MergeNullValueHandling
	{
		[Token(Token = "0x6000CA0")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		get
		{
			return default(MergeNullValueHandling);
		}
		[Token(Token = "0x6000CA1")]
		[Address(RVA = "0x1C88570", Offset = "0x1C86B70", VA = "0x181C88570")]
		set
		{
		}
	}

	[Token(Token = "0x17000210")]
	public StringComparison PropertyNameComparison
	{
		[Token(Token = "0x6000CA2")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(StringComparison);
		}
		[Token(Token = "0x6000CA3")]
		[Address(RVA = "0x1C885E0", Offset = "0x1C86BE0", VA = "0x181C885E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x1C884E0", Offset = "0x1C86AE0", VA = "0x181C884E0")]
	public JsonMergeSettings()
	{
	}
}
