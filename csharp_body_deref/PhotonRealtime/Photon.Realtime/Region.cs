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

[Token(Token = "0x200003F")]
public class Region
{
	[Token(Token = "0x17000044")]
	public string Code
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x3ED0D00", Offset = "0x3ED0D00", VA = "0x3ED0D00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x3ED0D10", Offset = "0x3ED0D10", VA = "0x3ED0D10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public string Cluster
	{
		[Token(Token = "0x6000179")]
		[Address(RVA = "0x3ED0D20", Offset = "0x3ED0D20", VA = "0x3ED0D20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x3ED0D30", Offset = "0x3ED0D30", VA = "0x3ED0D30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public string HostAndPort
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x3ED0D40", Offset = "0x3ED0D40", VA = "0x3ED0D40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x3ED0D50", Offset = "0x3ED0D50", VA = "0x3ED0D50")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public int Ping
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x3ED0D60", Offset = "0x3ED0D60", VA = "0x3ED0D60")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x3ED0D70", Offset = "0x3ED0D70", VA = "0x3ED0D70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public bool WasPinged
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x3ED0D80", Offset = "0x3ED0D80", VA = "0x3ED0D80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x3ED0D90", Offset = "0x3ED0D90", VA = "0x3ED0D90")]
	public Region(string code, string address)
	{
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x3ED0EB0", Offset = "0x3ED0EB0", VA = "0x3ED0EB0")]
	public Region(string code, int ping)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x3ED0DD0", Offset = "0x3ED0DD0", VA = "0x3ED0DD0")]
	private void SetCodeAndCluster(string codeAsString)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x3ED0EE0", Offset = "0x3ED0EE0", VA = "0x3ED0EE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x3ED0EF0", Offset = "0x3ED0EF0", VA = "0x3ED0EF0")]
	public string ToString(bool compact = false)
	{
		return null;
	}
}
