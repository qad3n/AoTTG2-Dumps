// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonConverterAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x555AEB0", Offset = "0x5559EB0", VA = "0x555AEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000016")]
	public object[]? ConverterParameters
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x555AEC0", Offset = "0x5559EC0", VA = "0x555AEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x555AED0", Offset = "0x5559ED0", VA = "0x555AED0")]
	public JsonConverterAttribute(Type converterType)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x555AF70", Offset = "0x5559F70", VA = "0x555AF70")]
	public JsonConverterAttribute(Type converterType, params object[] converterParameters)
	{
	}
}
