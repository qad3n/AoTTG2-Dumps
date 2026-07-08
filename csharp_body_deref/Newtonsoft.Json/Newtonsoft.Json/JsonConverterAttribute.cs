using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Token(Token = "0x200001D")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Interface | AttributeTargets.Parameter, AllowMultiple = false)]
public sealed class JsonConverterAttribute : Attribute
{
	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _converterType;

	[Token(Token = "0x17000015")]
	public Type ConverterType
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x3A64260", Offset = "0x3A64260", VA = "0x3A64260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000016")]
	public object[]? ConverterParameters
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x3A64270", Offset = "0x3A64270", VA = "0x3A64270")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x3A64280", Offset = "0x3A64280", VA = "0x3A64280")]
	public JsonConverterAttribute(Type converterType)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x3A64320", Offset = "0x3A64320", VA = "0x3A64320")]
	public JsonConverterAttribute(Type converterType, params object[] converterParameters)
	{
	}
}
