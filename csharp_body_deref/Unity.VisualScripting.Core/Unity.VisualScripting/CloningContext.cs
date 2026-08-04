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
	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x21")]
	private bool disposed;

	[Token(Token = "0x1700000A")]
	public Dictionary<object, object> clonings
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x4CA2E70", Offset = "0x4CA2E70", VA = "0x4CA2E70")]
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
		[Address(RVA = "0x4CA2E80", Offset = "0x4CA2E80", VA = "0x4CA2E80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x4CA2E90", Offset = "0x4CA2E90", VA = "0x4CA2E90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool tryPreserveInstances
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x4CA2EA0", Offset = "0x4CA2EA0", VA = "0x4CA2EA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x4CA2EB0", Offset = "0x4CA2EB0", VA = "0x4CA2EB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4CA2EC0", Offset = "0x4CA2EC0", VA = "0x4CA2EC0", Slot = "4")]
	private void Unity_002EVisualScripting_002EIPoolable_002ENew()
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4CA2ED0", Offset = "0x4CA2ED0", VA = "0x4CA2ED0", Slot = "5")]
	private void Unity_002EVisualScripting_002EIPoolable_002EFree()
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4CA2F20", Offset = "0x4CA2F20", VA = "0x4CA2F20", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4CA2570", Offset = "0x4CA2570", VA = "0x4CA2570")]
	public static CloningContext New(ICloner fallbackCloner, bool tryPreserveInstances)
	{
		return null;
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4CA2FE0", Offset = "0x4CA2FE0", VA = "0x4CA2FE0")]
	public CloningContext()
	{
	}
}
