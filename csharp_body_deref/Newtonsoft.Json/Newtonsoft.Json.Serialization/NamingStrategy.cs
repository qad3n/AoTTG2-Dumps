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
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600097C")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000171")]
	public bool ProcessExtensionDataNames
	{
		[Token(Token = "0x600097D")]
		[Address(RVA = "0xE5A330", Offset = "0xE58930", VA = "0x180E5A330")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600097E")]
		[Address(RVA = "0x1AE80B0", Offset = "0x1AE66B0", VA = "0x181AE80B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000172")]
	public bool OverrideSpecifiedNames
	{
		[Token(Token = "0x600097F")]
		[Address(RVA = "0xE5A340", Offset = "0xE58940", VA = "0x180E5A340")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000980")]
		[Address(RVA = "0x1C6C1B0", Offset = "0x1C6A7B0", VA = "0x181C6C1B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x1C6C190", Offset = "0x1C6A790", VA = "0x181C6C190", Slot = "4")]
	public virtual string GetPropertyName(string name, bool hasSpecifiedName)
	{
		return null;
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x1C6C0A0", Offset = "0x1C6A6A0", VA = "0x181C6C0A0", Slot = "5")]
	public virtual string GetExtensionDataName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x1C6C080", Offset = "0x1C6A680", VA = "0x181C6C080", Slot = "6")]
	public virtual string GetDictionaryKey(string key)
	{
		return null;
	}

	[Token(Token = "0x6000984")]
	protected abstract string ResolvePropertyName(string name);

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x1C6C0C0", Offset = "0x1C6A6C0", VA = "0x181C6C0C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x1C6BF90", Offset = "0x1C6A590", VA = "0x181C6BF90", Slot = "0")]
	public override bool Equals(object? obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x1C6BEF0", Offset = "0x1C6A4F0", VA = "0x181C6BEF0")]
	protected bool Equals(NamingStrategy? other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected NamingStrategy()
	{
	}
}
