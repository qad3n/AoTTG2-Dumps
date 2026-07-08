using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000010")]
public sealed class CloningContext : IPoolable, IDisposable
{
	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x21")]
	private bool disposed;

	[Token(Token = "0x1700000A")]
	public Dictionary<object, object> clonings
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x497E2A0", Offset = "0x497E2A0", VA = "0x497E2A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000B")]
	public ICloner fallbackCloner
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x497E2B0", Offset = "0x497E2B0", VA = "0x497E2B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x497E2C0", Offset = "0x497E2C0", VA = "0x497E2C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool tryPreserveInstances
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x497E2D0", Offset = "0x497E2D0", VA = "0x497E2D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x497E2E0", Offset = "0x497E2E0", VA = "0x497E2E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x497E2F0", Offset = "0x497E2F0", VA = "0x497E2F0", Slot = "4")]
	private void Unity_002EVisualScripting_002EIPoolable_002ENew()
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x497E300", Offset = "0x497E300", VA = "0x497E300", Slot = "5")]
	private void Unity_002EVisualScripting_002EIPoolable_002EFree()
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x497E350", Offset = "0x497E350", VA = "0x497E350", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x497D9A0", Offset = "0x497D9A0", VA = "0x497D9A0")]
	public static CloningContext New(ICloner fallbackCloner, bool tryPreserveInstances)
	{
		return null;
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x497E410", Offset = "0x497E410", VA = "0x497E410")]
	public CloningContext()
	{
	}
}
