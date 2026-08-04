// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.ChannelData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000347")]
internal class ChannelData
{
	[Token(Token = "0x4000E97")]
	[FieldOffset(Offset = "0x10")]
	internal string Ref;

	[Token(Token = "0x4000E98")]
	[FieldOffset(Offset = "0x18")]
	internal string Type;

	[Token(Token = "0x4000E99")]
	[FieldOffset(Offset = "0x20")]
	internal string Id;

	[Token(Token = "0x4000E9A")]
	[FieldOffset(Offset = "0x28")]
	internal string DelayLoadAsClientChannel;

	[Token(Token = "0x4000E9B")]
	[FieldOffset(Offset = "0x30")]
	private ArrayList _serverProviders;

	[Token(Token = "0x4000E9C")]
	[FieldOffset(Offset = "0x38")]
	private ArrayList _clientProviders;

	[Token(Token = "0x4000E9D")]
	[FieldOffset(Offset = "0x40")]
	private Hashtable _customProperties;

	[Token(Token = "0x17000342")]
	internal ArrayList ServerProviders
	{
		[Token(Token = "0x6001C71")]
		[Address(RVA = "0x3B64B20", Offset = "0x3B64B20", VA = "0x3B64B20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000343")]
	public ArrayList ClientProviders
	{
		[Token(Token = "0x6001C72")]
		[Address(RVA = "0x3B65490", Offset = "0x3B65490", VA = "0x3B65490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000344")]
	public Hashtable CustomProperties
	{
		[Token(Token = "0x6001C73")]
		[Address(RVA = "0x3B69640", Offset = "0x3B69640", VA = "0x3B69640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C74")]
	[Address(RVA = "0x3B63C80", Offset = "0x3B63C80", VA = "0x3B63C80")]
	public void CopyFrom(System.Runtime.Remoting.ChannelData other)
	{
	}

	[Token(Token = "0x6001C75")]
	[Address(RVA = "0x3B69580", Offset = "0x3B69580", VA = "0x3B69580")]
	public ChannelData()
	{
	}
}
