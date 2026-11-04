// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.Region
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/Region.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200003D")]
public class Region
{
	[Token(Token = "0x17000044")]
	public string Code
	{
		[Token(Token = "0x6000175")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000176")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public string Cluster
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000178")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public string HostAndPort
	{
		[Token(Token = "0x6000179")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600017A")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public int Ping
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public bool WasPinged
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x1D26300", Offset = "0x1D24900", VA = "0x181D26300")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x1D26260", Offset = "0x1D24860", VA = "0x181D26260")]
	public Region(string code, string address)
	{
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x1D262C0", Offset = "0x1D248C0", VA = "0x181D262C0")]
	public Region(string code, int ping)
	{
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x1D25FC0", Offset = "0x1D245C0", VA = "0x181D25FC0")]
	private void SetCodeAndCluster(string codeAsString)
	{
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x1D261B0", Offset = "0x1D247B0", VA = "0x181D261B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x1D260D0", Offset = "0x1D246D0", VA = "0x181D260D0")]
	public string ToString(bool compact = false)
	{
		return null;
	}
}
