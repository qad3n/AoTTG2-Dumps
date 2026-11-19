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

[Token(Token = "0x200034F")]
internal class ChannelData
{
	[Token(Token = "0x4000E04")]
	[FieldOffset(Offset = "0x10")]
	internal string Ref;

	[Token(Token = "0x4000E05")]
	[FieldOffset(Offset = "0x18")]
	internal string Type;

	[Token(Token = "0x4000E06")]
	[FieldOffset(Offset = "0x20")]
	internal string Id;

	[Token(Token = "0x4000E07")]
	[FieldOffset(Offset = "0x28")]
	internal string DelayLoadAsClientChannel;

	[Token(Token = "0x4000E08")]
	[FieldOffset(Offset = "0x30")]
	private ArrayList _serverProviders;

	[Token(Token = "0x4000E09")]
	[FieldOffset(Offset = "0x38")]
	private ArrayList _clientProviders;

	[Token(Token = "0x4000E0A")]
	[FieldOffset(Offset = "0x40")]
	private Hashtable _customProperties;

	[Token(Token = "0x17000343")]
	internal ArrayList ServerProviders
	{
		[Token(Token = "0x6001CB6")]
		[Address(RVA = "0x536DC40", Offset = "0x536CC40", VA = "0x536DC40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000344")]
	public ArrayList ClientProviders
	{
		[Token(Token = "0x6001CB7")]
		[Address(RVA = "0x536E490", Offset = "0x536D490", VA = "0x536E490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000345")]
	public Hashtable CustomProperties
	{
		[Token(Token = "0x6001CB8")]
		[Address(RVA = "0x5372420", Offset = "0x5371420", VA = "0x5372420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CB9")]
	[Address(RVA = "0x536D020", Offset = "0x536C020", VA = "0x536D020")]
	public void CopyFrom(System.Runtime.Remoting.ChannelData other)
	{
	}

	[Token(Token = "0x6001CBA")]
	[Address(RVA = "0x5372360", Offset = "0x5371360", VA = "0x5372360")]
	public ChannelData()
	{
	}
}
