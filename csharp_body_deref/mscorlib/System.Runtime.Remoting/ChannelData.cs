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

[Token(Token = "0x2000376")]
internal class ChannelData
{
	[Token(Token = "0x4000EA4")]
	[FieldOffset(Offset = "0x10")]
	internal string Ref;

	[Token(Token = "0x4000EA5")]
	[FieldOffset(Offset = "0x18")]
	internal string Type;

	[Token(Token = "0x4000EA6")]
	[FieldOffset(Offset = "0x20")]
	internal string Id;

	[Token(Token = "0x4000EA7")]
	[FieldOffset(Offset = "0x28")]
	internal string DelayLoadAsClientChannel;

	[Token(Token = "0x4000EA8")]
	[FieldOffset(Offset = "0x30")]
	private ArrayList _serverProviders;

	[Token(Token = "0x4000EA9")]
	[FieldOffset(Offset = "0x38")]
	private ArrayList _clientProviders;

	[Token(Token = "0x4000EAA")]
	[FieldOffset(Offset = "0x40")]
	private Hashtable _customProperties;

	[Token(Token = "0x17000344")]
	internal ArrayList ServerProviders
	{
		[Token(Token = "0x6001CE0")]
		[Address(RVA = "0x19D3230", Offset = "0x19D1830", VA = "0x1819D3230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000345")]
	public ArrayList ClientProviders
	{
		[Token(Token = "0x6001CE1")]
		[Address(RVA = "0x19D3150", Offset = "0x19D1750", VA = "0x1819D3150")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000346")]
	public Hashtable CustomProperties
	{
		[Token(Token = "0x6001CE2")]
		[Address(RVA = "0x19D31C0", Offset = "0x19D17C0", VA = "0x1819D31C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CE3")]
	[Address(RVA = "0x19D2790", Offset = "0x19D0D90", VA = "0x1819D2790")]
	public void CopyFrom(System.Runtime.Remoting.ChannelData other)
	{
	}

	[Token(Token = "0x6001CE4")]
	[Address(RVA = "0x19D3080", Offset = "0x19D1680", VA = "0x1819D3080")]
	public ChannelData()
	{
	}
}
