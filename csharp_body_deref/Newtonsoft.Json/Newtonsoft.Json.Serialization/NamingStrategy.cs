// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.NamingStrategy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000134")]
public abstract class NamingStrategy
{
	[Token(Token = "0x17000170")]
	public bool ProcessDictionaryKeys
	{
		[Token(Token = "0x600097B")]
		[Address(RVA = "0x55EBA90", Offset = "0x55EAA90", VA = "0x55EBA90")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600097C")]
		[Address(RVA = "0x55EBAA0", Offset = "0x55EAAA0", VA = "0x55EBAA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000171")]
	public bool ProcessExtensionDataNames
	{
		[Token(Token = "0x600097D")]
		[Address(RVA = "0x55EBAB0", Offset = "0x55EAAB0", VA = "0x55EBAB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600097E")]
		[Address(RVA = "0x55EBAC0", Offset = "0x55EAAC0", VA = "0x55EBAC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000172")]
	public bool OverrideSpecifiedNames
	{
		[Token(Token = "0x600097F")]
		[Address(RVA = "0x55EBAD0", Offset = "0x55EAAD0", VA = "0x55EBAD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000980")]
		[Address(RVA = "0x55EBAE0", Offset = "0x55EAAE0", VA = "0x55EBAE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x55EBAF0", Offset = "0x55EAAF0", VA = "0x55EBAF0", Slot = "4")]
	public virtual string GetPropertyName(string name, bool hasSpecifiedName)
	{
		return null;
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x55EBB20", Offset = "0x55EAB20", VA = "0x55EBB20", Slot = "5")]
	public virtual string GetExtensionDataName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x55EBB40", Offset = "0x55EAB40", VA = "0x55EBB40", Slot = "6")]
	public virtual string GetDictionaryKey(string key)
	{
		return null;
	}

	[Token(Token = "0x6000984")]
	protected abstract string ResolvePropertyName(string name);

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x55EBB60", Offset = "0x55EAB60", VA = "0x55EBB60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x55EBC20", Offset = "0x55EAC20", VA = "0x55EBC20", Slot = "0")]
	public override bool Equals(object? obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x55EBD10", Offset = "0x55EAD10", VA = "0x55EBD10")]
	protected bool Equals(NamingStrategy? other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x55EB3B0", Offset = "0x55EA3B0", VA = "0x55EB3B0")]
	protected NamingStrategy()
	{
	}
}
