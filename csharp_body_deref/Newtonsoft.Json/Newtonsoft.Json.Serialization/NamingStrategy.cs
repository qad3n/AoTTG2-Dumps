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
		[Address(RVA = "0x3DF4BC0", Offset = "0x3DF4BC0", VA = "0x3DF4BC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600097C")]
		[Address(RVA = "0x3DF4BD0", Offset = "0x3DF4BD0", VA = "0x3DF4BD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000171")]
	public bool ProcessExtensionDataNames
	{
		[Token(Token = "0x600097D")]
		[Address(RVA = "0x3DF4BE0", Offset = "0x3DF4BE0", VA = "0x3DF4BE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600097E")]
		[Address(RVA = "0x3DF4BF0", Offset = "0x3DF4BF0", VA = "0x3DF4BF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000172")]
	public bool OverrideSpecifiedNames
	{
		[Token(Token = "0x600097F")]
		[Address(RVA = "0x3DF4C00", Offset = "0x3DF4C00", VA = "0x3DF4C00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000980")]
		[Address(RVA = "0x3DF4C10", Offset = "0x3DF4C10", VA = "0x3DF4C10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x3DF4C20", Offset = "0x3DF4C20", VA = "0x3DF4C20", Slot = "4")]
	public virtual string GetPropertyName(string name, bool hasSpecifiedName)
	{
		return null;
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x3DF4C50", Offset = "0x3DF4C50", VA = "0x3DF4C50", Slot = "5")]
	public virtual string GetExtensionDataName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x3DF4C70", Offset = "0x3DF4C70", VA = "0x3DF4C70", Slot = "6")]
	public virtual string GetDictionaryKey(string key)
	{
		return null;
	}

	[Token(Token = "0x6000984")]
	protected abstract string ResolvePropertyName(string name);

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x3DF4C90", Offset = "0x3DF4C90", VA = "0x3DF4C90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x3DF4D50", Offset = "0x3DF4D50", VA = "0x3DF4D50", Slot = "0")]
	public override bool Equals(object? obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x3DF4E40", Offset = "0x3DF4E40", VA = "0x3DF4E40")]
	protected bool Equals(NamingStrategy? other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x3DF44B0", Offset = "0x3DF44B0", VA = "0x3DF44B0")]
	protected NamingStrategy()
	{
	}
}
