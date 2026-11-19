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
		[Address(RVA = "0x55D1750", Offset = "0x55D0750", VA = "0x55D1750")]
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
		[Address(RVA = "0x55D1760", Offset = "0x55D0760", VA = "0x55D1760")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000828")]
		[Address(RVA = "0x55D1770", Offset = "0x55D0770", VA = "0x55D1770")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x55D1790", Offset = "0x55D0790", VA = "0x55D1790")]
	private static CallSite<Func<CallSite, object, object>> CreateCallSiteGetter(string name)
	{
		return null;
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x55D1890", Offset = "0x55D0890", VA = "0x55D1890")]
	private static CallSite<Func<CallSite, object, object, object>> CreateCallSiteSetter(string name)
	{
		return null;
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x55CB310", Offset = "0x55CA310", VA = "0x55CB310")]
	public JsonDynamicContract(Type underlyingType)
	{
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x55D1990", Offset = "0x55D0990", VA = "0x55D1990")]
	internal bool TryGetMember(IDynamicMetaObjectProvider dynamicProvider, string name, out object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x55D1AC0", Offset = "0x55D0AC0", VA = "0x55D1AC0")]
	internal bool TrySetMember(IDynamicMetaObjectProvider dynamicProvider, string name, object? value)
	{
		return default(bool);
	}
}
