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
		[Address(RVA = "0x3AFF270", Offset = "0x3AFF270", VA = "0x3AFF270")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600097C")]
		[Address(RVA = "0x3AFF280", Offset = "0x3AFF280", VA = "0x3AFF280")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000171")]
	public bool ProcessExtensionDataNames
	{
		[Token(Token = "0x600097D")]
		[Address(RVA = "0x3AFF290", Offset = "0x3AFF290", VA = "0x3AFF290")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600097E")]
		[Address(RVA = "0x3AFF2A0", Offset = "0x3AFF2A0", VA = "0x3AFF2A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000172")]
	public bool OverrideSpecifiedNames
	{
		[Token(Token = "0x600097F")]
		[Address(RVA = "0x3AFF2B0", Offset = "0x3AFF2B0", VA = "0x3AFF2B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000980")]
		[Address(RVA = "0x3AFF2C0", Offset = "0x3AFF2C0", VA = "0x3AFF2C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x3AFF2D0", Offset = "0x3AFF2D0", VA = "0x3AFF2D0", Slot = "4")]
	public virtual string GetPropertyName(string name, bool hasSpecifiedName)
	{
		return null;
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x3AFF300", Offset = "0x3AFF300", VA = "0x3AFF300", Slot = "5")]
	public virtual string GetExtensionDataName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x3AFF320", Offset = "0x3AFF320", VA = "0x3AFF320", Slot = "6")]
	public virtual string GetDictionaryKey(string key)
	{
		return null;
	}

	[Token(Token = "0x6000984")]
	protected abstract string ResolvePropertyName(string name);

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x3AFF340", Offset = "0x3AFF340", VA = "0x3AFF340", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x3AFF400", Offset = "0x3AFF400", VA = "0x3AFF400", Slot = "0")]
	public override bool Equals(object? obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x3AFF4F0", Offset = "0x3AFF4F0", VA = "0x3AFF4F0")]
	protected bool Equals(NamingStrategy? other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x3AFEB60", Offset = "0x3AFEB60", VA = "0x3AFEB60")]
	protected NamingStrategy()
	{
	}
}
