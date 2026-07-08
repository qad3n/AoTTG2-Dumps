using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x2000770")]
public sealed class AottgQueryPolicy
{
	[Token(Token = "0x40023E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly AottgQueryPolicy Default;

	[Token(Token = "0x17000DC0")]
	public TimeSpan SuccessTtl
	{
		[Token(Token = "0x60047C8")]
		[Address(RVA = "0x40B1590", Offset = "0x40B1590", VA = "0x40B1590")]
		[CompilerGenerated]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x60047C9")]
		[Address(RVA = "0x40B15A0", Offset = "0x40B15A0", VA = "0x40B15A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DC1")]
	public TimeSpan? FailureTtl
	{
		[Token(Token = "0x60047CA")]
		[Address(RVA = "0x40B15B0", Offset = "0x40B15B0", VA = "0x40B15B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60047CB")]
		[Address(RVA = "0x40B15C0", Offset = "0x40B15C0", VA = "0x40B15C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DC2")]
	public bool PreserveStaleOnFailure
	{
		[Token(Token = "0x60047CC")]
		[Address(RVA = "0x40B15D0", Offset = "0x40B15D0", VA = "0x40B15D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60047CD")]
		[Address(RVA = "0x40B15E0", Offset = "0x40B15E0", VA = "0x40B15E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60047C7")]
	[Address(RVA = "0x40AB0F0", Offset = "0x40AB0F0", VA = "0x40AB0F0")]
	public AottgQueryPolicy(TimeSpan successTtl, [Optional] TimeSpan? failureTtl, bool preserveStaleOnFailure = true)
	{
	}
}
