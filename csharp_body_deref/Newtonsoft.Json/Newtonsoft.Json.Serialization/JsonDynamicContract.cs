// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonDynamicContract
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Dynamic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200011D")]
public class JsonDynamicContract : JsonContainerContract
{
	[Token(Token = "0x4000552")]
	[FieldOffset(Offset = "0xD0")]
	private readonly ThreadSafeStore<string, CallSite<Func<CallSite, object, object>>> _callSiteGetters;

	[Token(Token = "0x4000553")]
	[FieldOffset(Offset = "0xD8")]
	private readonly ThreadSafeStore<string, CallSite<Func<CallSite, object, object?, object>>> _callSiteSetters;

	[Token(Token = "0x1700011D")]
	public JsonPropertyCollection Properties
	{
		[Token(Token = "0x6000826")]
		[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011E")]
	public Func<string, string>? PropertyNameResolver
	{
		[Token(Token = "0x6000827")]
		[Address(RVA = "0x187BC00", Offset = "0x187A200", VA = "0x18187BC00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000828")]
		[Address(RVA = "0x1C42420", Offset = "0x1C40A20", VA = "0x181C42420")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x1C41E20", Offset = "0x1C40420", VA = "0x181C41E20")]
	private static CallSite<Func<CallSite, object, object>> CreateCallSiteGetter(string name)
	{
		return null;
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x1C41F20", Offset = "0x1C40520", VA = "0x181C41F20")]
	private static CallSite<Func<CallSite, object, object, object>> CreateCallSiteSetter(string name)
	{
		return null;
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x1C42280", Offset = "0x1C40880", VA = "0x181C42280")]
	public JsonDynamicContract(Type underlyingType)
	{
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x1C42020", Offset = "0x1C40620", VA = "0x181C42020")]
	internal bool TryGetMember(IDynamicMetaObjectProvider dynamicProvider, string name, out object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x1C42160", Offset = "0x1C40760", VA = "0x181C42160")]
	internal bool TrySetMember(IDynamicMetaObjectProvider dynamicProvider, string name, object? value)
	{
		return default(bool);
	}
}
