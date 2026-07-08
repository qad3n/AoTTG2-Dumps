using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200003F")]
public class Region
{
	[Token(Token = "0x17000044")]
	public string Code
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x3BDB3B0", Offset = "0x3BDB3B0", VA = "0x3BDB3B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x3BDB3C0", Offset = "0x3BDB3C0", VA = "0x3BDB3C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public string Cluster
	{
		[Token(Token = "0x6000179")]
		[Address(RVA = "0x3BDB3D0", Offset = "0x3BDB3D0", VA = "0x3BDB3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x3BDB3E0", Offset = "0x3BDB3E0", VA = "0x3BDB3E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public string HostAndPort
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x3BDB3F0", Offset = "0x3BDB3F0", VA = "0x3BDB3F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x3BDB400", Offset = "0x3BDB400", VA = "0x3BDB400")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public int Ping
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x3BDB410", Offset = "0x3BDB410", VA = "0x3BDB410")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x3BDB420", Offset = "0x3BDB420", VA = "0x3BDB420")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public bool WasPinged
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x3BDB430", Offset = "0x3BDB430", VA = "0x3BDB430")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x3BDB440", Offset = "0x3BDB440", VA = "0x3BDB440")]
	public Region(string code, string address)
	{
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x3BDB560", Offset = "0x3BDB560", VA = "0x3BDB560")]
	public Region(string code, int ping)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x3BDB480", Offset = "0x3BDB480", VA = "0x3BDB480")]
	private void SetCodeAndCluster(string codeAsString)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x3BDB590", Offset = "0x3BDB590", VA = "0x3BDB590", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x3BDB5A0", Offset = "0x3BDB5A0", VA = "0x3BDB5A0")]
	public string ToString(bool compact = false)
	{
		return null;
	}
}
