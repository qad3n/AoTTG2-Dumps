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
		[Address(RVA = "0x3AE3700", Offset = "0x3AE3700", VA = "0x3AE3700")]
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
		[Address(RVA = "0x3AE3710", Offset = "0x3AE3710", VA = "0x3AE3710")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000828")]
		[Address(RVA = "0x3AE3720", Offset = "0x3AE3720", VA = "0x3AE3720")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x3AE3740", Offset = "0x3AE3740", VA = "0x3AE3740")]
	private static CallSite<Func<CallSite, object, object>> CreateCallSiteGetter(string name)
	{
		return null;
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x3AE3840", Offset = "0x3AE3840", VA = "0x3AE3840")]
	private static CallSite<Func<CallSite, object, object, object>> CreateCallSiteSetter(string name)
	{
		return null;
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x3ADD0F0", Offset = "0x3ADD0F0", VA = "0x3ADD0F0")]
	public JsonDynamicContract(Type underlyingType)
	{
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x3AE3940", Offset = "0x3AE3940", VA = "0x3AE3940")]
	internal bool TryGetMember(IDynamicMetaObjectProvider dynamicProvider, string name, out object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x3AE3A90", Offset = "0x3AE3A90", VA = "0x3AE3A90")]
	internal bool TrySetMember(IDynamicMetaObjectProvider dynamicProvider, string name, object? value)
	{
		return default(bool);
	}
}
