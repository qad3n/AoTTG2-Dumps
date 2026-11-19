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
		[Address(RVA = "0x56BD240", Offset = "0x56BC240", VA = "0x56BD240")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000176")]
		[Address(RVA = "0x56BD250", Offset = "0x56BC250", VA = "0x56BD250")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public string Cluster
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x56BD260", Offset = "0x56BC260", VA = "0x56BD260")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x56BD270", Offset = "0x56BC270", VA = "0x56BD270")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public string HostAndPort
	{
		[Token(Token = "0x6000179")]
		[Address(RVA = "0x56BD280", Offset = "0x56BC280", VA = "0x56BD280")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x56BD290", Offset = "0x56BC290", VA = "0x56BD290")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public int Ping
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x56BD2A0", Offset = "0x56BC2A0", VA = "0x56BD2A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x56BD2B0", Offset = "0x56BC2B0", VA = "0x56BD2B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public bool WasPinged
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x56BD2C0", Offset = "0x56BC2C0", VA = "0x56BD2C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x56BD2D0", Offset = "0x56BC2D0", VA = "0x56BD2D0")]
	public Region(string code, string address)
	{
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x56BD420", Offset = "0x56BC420", VA = "0x56BD420")]
	public Region(string code, int ping)
	{
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x56BD310", Offset = "0x56BC310", VA = "0x56BD310")]
	private void SetCodeAndCluster(string codeAsString)
	{
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x56BD450", Offset = "0x56BC450", VA = "0x56BD450", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x56BD460", Offset = "0x56BC460", VA = "0x56BD460")]
	public string ToString(bool compact = false)
	{
		return null;
	}
}
