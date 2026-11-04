// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.CloningContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000010")]
public sealed class CloningContext : IPoolable, IDisposable
{
	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x21")]
	private bool disposed;

	[Token(Token = "0x1700000B")]
	public Dictionary<object, object> clonings
	{
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000C")]
	public ICloner fallbackCloner
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600004D")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public bool tryPreserveInstances
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x2D9C2D0", Offset = "0x2D9A8D0", VA = "0x182D9C2D0", Slot = "4")]
	private void Unity_002EVisualScripting_002EIPoolable_002ENew()
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x2D9C280", Offset = "0x2D9A880", VA = "0x182D9C280", Slot = "5")]
	private void Unity_002EVisualScripting_002EIPoolable_002EFree()
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x2D9C070", Offset = "0x2D9A670", VA = "0x182D9C070", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x2D9C130", Offset = "0x2D9A730", VA = "0x182D9C130")]
	public static CloningContext New(ICloner fallbackCloner, bool tryPreserveInstances)
	{
		return null;
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x2D9C2E0", Offset = "0x2D9A8E0", VA = "0x182D9C2E0")]
	public CloningContext()
	{
	}
}
